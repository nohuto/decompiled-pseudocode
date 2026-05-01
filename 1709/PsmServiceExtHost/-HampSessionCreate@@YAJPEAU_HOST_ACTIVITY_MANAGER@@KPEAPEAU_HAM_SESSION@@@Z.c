/*
 * XREFs of ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180048F00
 * Callers:
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049030 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x180048D70 (-HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall HampSessionCreate(struct _HOST_ACTIVITY_MANAGER *a1, int a2, struct _HAM_SESSION **a3)
{
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  int State; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
  v7 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x48uLL);
    v7[2] = -1LL;
    v7[4] = (char *)a1 + 80;
    v7[3] = 1LL;
    *((_DWORD *)v7 + 10) = a2;
    State = HampSessionAllocateState(a1, (struct _HAM_SESSION *)v7);
    if ( State >= 0 )
    {
      State = 0;
      *a3 = (struct _HAM_SESSION *)v7;
      v7 = 0LL;
    }
    if ( v7 )
      CemRcObjectDereference(v7, v9, v10, v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
