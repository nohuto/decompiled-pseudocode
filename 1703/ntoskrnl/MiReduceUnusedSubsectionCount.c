/*
 * XREFs of MiReduceUnusedSubsectionCount @ 0x140097E14
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140029CD4 (MiDeleteEmptySubsections.c)
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReduceUnusedSubsectionCount(__int64 a1)
{
  int v1; // edx
  int v2; // r8d
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 52);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = 8LL * (v2 + (v1 & 0x3FFFFFFFu));
  if ( v3 > 0xFE0 )
  {
    if ( v3 >= 0x10000 || ((8 * ((_WORD)v2 + (_WORD)v1)) & 0xFFFu) > 0xFC0 )
    {
      result = (v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v4 = v3 + 15;
  }
  else
  {
    v4 = v3 + 31;
  }
  result = v4 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  qword_14036BE18 -= result;
  return result;
}
