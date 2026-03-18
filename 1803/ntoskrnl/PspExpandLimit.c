/*
 * XREFs of PspExpandLimit @ 0x140284154
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1406500F4 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1400800BC (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1400802D4 (PspLockQuotaExpansion.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall PspExpandLimit(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v6; // rbp
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion((__int64)v6, &v13);
  v8 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v6 + 3))(a1, 0LL, a3, a4);
  LOBYTE(v9) = v13;
  LOBYTE(a4) = v8;
  PspUnlockQuotaExpansion((__int64)v6, v9, v10, v11);
  return a4;
}
