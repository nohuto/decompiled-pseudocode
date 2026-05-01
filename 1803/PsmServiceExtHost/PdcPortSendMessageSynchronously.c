/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x180035FAC
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800357F8 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180035B44 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18006B1C0 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  if ( *(_QWORD *)(a1 + 8) )
  {
    memset_0(a2, 0, 0x28uLL);
    v6 = 792LL;
    *a2 = 51905264;
    v4 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(a1 + 8), 0x20000LL, a2, 0LL, a2, &v6, 0LL, 0LL);
    if ( v4 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 124));
  }
  else
  {
    v4 = -1073741816;
  }
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 16));
  return (unsigned int)v4;
}
