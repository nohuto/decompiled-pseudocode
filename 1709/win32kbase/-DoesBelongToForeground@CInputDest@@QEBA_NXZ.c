/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C001724C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0015008 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

char __fastcall CInputDest::DoesBelongToForeground(CInputDest *this)
{
  char v1; // r10
  __int64 Queue; // rax
  __int64 v3; // r11

  v1 = 0;
  if ( gpqForeground )
  {
    Queue = CInputDest::GetQueue(this, 2LL);
    if ( Queue == v3 )
      return 1;
  }
  return v1;
}
