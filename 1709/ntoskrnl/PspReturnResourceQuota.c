/*
 * XREFs of PspReturnResourceQuota @ 0x1400F14B8
 * Callers:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspDereferenceQuotaBlock @ 0x1404860AC (PspDereferenceQuotaBlock.c)
 *     ObpFreeObject @ 0x1404A3CE0 (ObpFreeObject.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1400F1258 (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1400F1470 (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  char *v8; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  KIRQL v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)a1;
  PspLockQuotaExpansion((__int64)v8, &v12);
  if ( a3 )
    (*((void (__fastcall **)(_QWORD, __int64))v8 + 4))(a1, a3);
  if ( a4 )
  {
    v10 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v10 + 8) != a2 + 80 || (v11 = *(_QWORD **)(a2 + 88), *v11 != a2 + 80) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  return PspUnlockQuotaExpansion((__int64)v8, v12);
}
