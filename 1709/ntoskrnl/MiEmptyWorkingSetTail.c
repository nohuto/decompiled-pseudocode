/*
 * XREFs of MiEmptyWorkingSetTail @ 0x14000D830
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 144);
  if ( *(_DWORD *)(v1 + 20) )
  {
    MiFreeWsleList(*(_QWORD *)(a1 + 8), v1 + 8, 0LL);
    *(_DWORD *)(v1 + 20) = 0;
  }
  return 0LL;
}
