/*
 * XREFs of ?HampDepGroupProcessActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044DE4
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180044A7C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180044CF4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 */

__int64 __fastcall HampDepGroupProcessActionForGroup(__int64 a1, unsigned __int8 a2)
{
  struct _HAM_HOST_DEPENDENCY *NextDependency; // rdi
  int v4; // ebp
  struct _HAM_HOST_DEPENDENCY *v5; // rbx
  __int64 result; // rax

  NextDependency = (struct _HAM_HOST_DEPENDENCY *)(((*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFFEuLL) - 56) & -(__int64)((*(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFFEuLL) != 0));
  if ( NextDependency )
  {
    v4 = a2;
    do
    {
      v5 = NextDependency;
      NextDependency = (struct _HAM_HOST_DEPENDENCY *)HampDepGroupGetNextDependency(NextDependency);
      if ( (*((_DWORD *)v5 + 20) & 7) == v4 )
      {
        result = HampDepGroupProcessActionForActivity(*((struct _HAM_ACTIVITY **)v5 + 6), a2);
        if ( (int)result < 0 )
          return result;
        if ( a2 == 1 )
        {
          *((_DWORD *)v5 + 20) &= 0xFFFFFFFC;
          *((_DWORD *)v5 + 20) |= 4u;
        }
      }
    }
    while ( NextDependency );
  }
  return 0LL;
}
