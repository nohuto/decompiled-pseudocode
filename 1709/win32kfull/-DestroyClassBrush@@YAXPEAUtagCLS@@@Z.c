/*
 * XREFs of ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C00F23D8
 * Callers:
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyClassBrush(struct tagCLS *a1)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // r10
  int v5; // r9d
  _QWORD *i; // r8
  struct tagCLS *j; // rax
  struct tagCLS *k; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = *((_QWORD *)a1 + 18);
  v4 = CurrentProcessWin32Process;
  if ( v3 > 0x1F )
  {
    v5 = 0;
    for ( i = (_QWORD *)(gpsi + 4680LL); v3 != *i; ++i )
    {
      if ( (unsigned int)++v5 >= 0x1F )
      {
        for ( j = *(struct tagCLS **)(CurrentProcessWin32Process + 328); j; j = *(struct tagCLS **)j )
        {
          if ( j != a1 && *((_QWORD *)j + 18) == v3 )
            return;
        }
        for ( k = *(struct tagCLS **)(v4 + 320); k; k = *(struct tagCLS **)k )
        {
          if ( k != a1 && *((_QWORD *)k + 18) == v3 )
            return;
        }
        GreDeleteObject(v3);
        return;
      }
    }
  }
}
