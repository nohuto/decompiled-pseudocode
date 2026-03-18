/*
 * XREFs of ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C001A018
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 * Callees:
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 */

__int64 __fastcall RemoveEventMessage(struct tagQ *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v8; // r9d
  __int64 v9; // rdi

  result = 0LL;
  v5 = *((_QWORD *)a1 + 1);
  if ( v5 )
  {
    do
    {
      v8 = *(_DWORD *)(v5 + 96);
      if ( v8 == a3 )
        break;
      v9 = *(_QWORD *)(v5 + 8);
      if ( v8 == a2 && v5 != *((_QWORD *)a1 + 6) )
      {
        DelQEntry(a1, v5, 1LL);
        result = 1LL;
      }
      v5 = v9;
    }
    while ( v9 );
  }
  return result;
}
