/*
 * XREFs of ?GetMonitorDpiFlags@CInputDest@@QEBAKXZ @ 0x1C0047E80
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputDest::GetMonitorDpiFlags(CInputDest *this)
{
  __int64 v1; // rax
  int v2; // ecx
  __int64 result; // rax

  if ( *((_DWORD *)this + 23) == 2 )
    v1 = *((_QWORD *)this + 10);
  else
    v1 = 0LL;
  if ( !v1 )
    return 32LL;
  v2 = *(_DWORD *)(v1 + 368) & 0xF;
  if ( v2 == 2 )
    return 32LL;
  result = 64LL;
  if ( v2 == 1 )
    return 128LL;
  return result;
}
