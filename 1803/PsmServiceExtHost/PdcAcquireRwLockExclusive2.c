/*
 * XREFs of PdcAcquireRwLockExclusive2 @ 0x18003604C
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
