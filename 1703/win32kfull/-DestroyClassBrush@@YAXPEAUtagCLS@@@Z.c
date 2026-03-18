/*
 * XREFs of ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C00394E8
 * Callers:
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyClassBrush(struct tagCLS *a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  int v6; // r9d
  _QWORD *i; // r8
  struct tagCLS *j; // rax
  struct tagCLS *k; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v4 = *((_QWORD *)a1 + 17);
  v5 = CurrentProcessWin32Process;
  if ( v4 > 0x1F )
  {
    v6 = 0;
    for ( i = (_QWORD *)(gpsi + 5088LL); v4 != *i; ++i )
    {
      if ( (unsigned int)++v6 >= 0x1F )
      {
        for ( j = *(struct tagCLS **)(CurrentProcessWin32Process + 320); j; j = *(struct tagCLS **)j )
        {
          if ( j != a1 && *((_QWORD *)j + 17) == v4 )
            return;
        }
        for ( k = *(struct tagCLS **)(v5 + 312); k; k = *(struct tagCLS **)k )
        {
          if ( k != a1 && *((_QWORD *)k + 17) == v4 )
            return;
        }
        GreDeleteObject(v4);
        return;
      }
    }
  }
}
