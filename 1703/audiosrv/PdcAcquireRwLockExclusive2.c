/*
 * XREFs of PdcAcquireRwLockExclusive2 @ 0x180028268
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800276B4 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 *     Pdcv2ActivationClientActivate @ 0x1800279B0 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180027E28 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x180034EBC (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800D1608 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x1800D17C0 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x1800D1910 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall PdcAcquireRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  DWORD v4; // eax
  DWORD result; // eax

  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v4 = WaitForSingleObjectEx(*(HANDLE *)a1, 0xEA60u, 0);
    if ( !v4 )
      break;
    if ( v4 == 128 )
      __fastfail(0x24u);
    if ( v4 != 258 )
      __fastfail(5u);
  }
  if ( a2 )
    *a2 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) == 1 )
    *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  result = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 8) != result )
    __fastfail(5u);
  return result;
}
