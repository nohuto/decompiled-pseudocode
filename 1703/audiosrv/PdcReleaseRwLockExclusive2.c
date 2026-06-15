/*
 * XREFs of PdcReleaseRwLockExclusive2 @ 0x180028014
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800276B4 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180027E28 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x180034EBC (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800D1608 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x1800D17C0 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x1800D1910 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall PdcReleaseRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  BOOL result; // eax

  if ( a2 )
    *a2 = 1;
  if ( !*(_QWORD *)a1 || *(_DWORD *)(a1 + 8) != GetCurrentThreadId() || *(int *)(a1 + 12) <= 0 )
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(a1 + 8) = 0;
  result = ReleaseMutex(*(HANDLE *)a1);
  if ( !result )
  {
    GetLastError();
    __fastfail(0x24u);
  }
  if ( a2 )
    *a2 = 0;
  return result;
}
