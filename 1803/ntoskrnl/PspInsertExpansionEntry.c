/*
 * XREFs of PspInsertExpansionEntry @ 0x1401848E4
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1406500F4 (PspInitializeQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1400800BC (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1400802D4 (PspLockQuotaExpansion.c)
 */

__int64 __fastcall PspInsertExpansionEntry(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  PspLockQuotaExpansion(a1, &v9);
  v6 = (_QWORD *)(a2 + 80);
  v7 = *(_QWORD **)(a1 + 48);
  if ( *v7 != a1 + 40 )
    __fastfail(3u);
  v6[1] = v7;
  *v6 = a1 + 40;
  *v7 = v6;
  LOBYTE(v7) = v9;
  *(_QWORD *)(a1 + 48) = v6;
  return PspUnlockQuotaExpansion(a1, (__int64)v7, v4, v5);
}
