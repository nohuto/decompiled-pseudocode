/*
 * XREFs of MiReduceUnusedSubsectionCount @ 0x14001F3E4
 * Callers:
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     MiDeleteEmptySubsections @ 0x1401256C8 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiReduceUnusedSubsectionCount(_DWORD *a1)
{
  int v1; // r9d
  __int64 v2; // r8
  int v3; // edx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  signed __int64 result; // rax

  v1 = a1[11];
  v2 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v3 = a1[13];
  v4 = 8LL * (v1 + (v3 & 0x3FFFFFFFu));
  if ( v4 > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * ((_WORD)v1 + (_WORD)v3)) & 0xFFFu) > 0xFC0 )
    {
      v6 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v5 = v4 + 15;
  }
  else
  {
    v5 = v4 + 31;
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  result = _InterlockedExchangeAdd64(&qword_140388118, -(__int64)v6);
  *(_QWORD *)(v2 + 1616) -= v6;
  return result;
}
