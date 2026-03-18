/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x140215A40
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 136);
  if ( *(_DWORD *)(v1 + 36) )
  {
    result = MiFreeWsleList(*(_QWORD *)(a1 + 8), v1 + 24, 0);
    *(_DWORD *)(v1 + 36) = 0;
  }
  return result;
}
