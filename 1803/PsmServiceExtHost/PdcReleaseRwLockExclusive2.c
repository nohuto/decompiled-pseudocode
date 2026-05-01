/*
 * XREFs of PdcReleaseRwLockExclusive2 @ 0x180035CE8
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800357F8 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180035B44 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x180038768 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18006B1C0 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18006B394 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18006B4F0 (Pdcv2pActivationClientCallback.c)
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
