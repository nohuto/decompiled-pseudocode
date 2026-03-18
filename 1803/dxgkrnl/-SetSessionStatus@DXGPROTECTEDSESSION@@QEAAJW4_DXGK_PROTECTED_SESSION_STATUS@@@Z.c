/*
 * XREFs of ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C003484C
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157194 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BAC88 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     DxgkSetProtectedSessionStatusCB @ 0x1C01BC1C0 (DxgkSetProtectedSessionStatusCB.c)
 * Callees:
 *     ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C01BAAE4 (-QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::SetSessionStatus(
        DXGPROTECTEDSESSION *this,
        enum _DXGK_PROTECTED_SESSION_STATUS a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = 0LL;
  if ( *((_DWORD *)this + 35) != a2 )
  {
    v3 = *((_DWORD *)this + 6) == 1;
    *((_DWORD *)this + 35) = a2;
    if ( v3 )
      return DXGPROTECTEDSESSION::QueueSignal(this);
  }
  return result;
}
