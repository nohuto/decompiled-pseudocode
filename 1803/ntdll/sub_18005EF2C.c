/*
 * XREFs of sub_18005EF2C @ 0x18005EF2C
 * Callers:
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     sub_180062D68 @ 0x180062D68 (sub_180062D68.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18005EF2C(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v6; // rcx
  int v7; // edi
  signed __int64 result; // rax

  v6 = (volatile signed __int64 *)(a1 + 32);
  v7 = (int)a2;
  if ( (_DWORD)a2 == 1 )
    result = RtlAcquireSRWLockExclusive((unsigned __int64)v6, (unsigned __int64)a2, (unsigned __int64 *)a3, a4);
  else
    result = RtlAcquireSRWLockShared(v6, a2, a3, a4);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v7;
  return result;
}
