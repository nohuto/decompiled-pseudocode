/*
 * XREFs of ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180066F34
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B120 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002B6F0 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180033278 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180066D44 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampDepGroupProcessActivityActionForGroup(struct _HAM_DEPENDENCY_GROUP *a1, char a2)
{
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rdi
  struct _HAM_HOST_DEPENDENCY *v4; // rbx
  __int64 result; // rax

  FirstDependency = HampDepGroupGetFirstDependency(a1);
  while ( FirstDependency )
  {
    v4 = FirstDependency;
    FirstDependency = HampDepGroupGetNextDependency(FirstDependency);
    if ( (*((_DWORD *)v4 + 8) & 7) == a2 )
    {
      if ( *((_BYTE *)v4 + 40) == 3 )
      {
        HampHostDepDestroy(v4);
      }
      else
      {
        result = HampDepGroupProcessActionForActivity(*(struct _HAM_ACTIVITY **)v4, a2);
        if ( (int)result < 0 )
          return result;
        if ( a2 == 1 )
        {
          *((_DWORD *)v4 + 8) &= 0xFFFFFFFC;
          *((_DWORD *)v4 + 8) |= 4u;
        }
      }
    }
  }
  return 0LL;
}
