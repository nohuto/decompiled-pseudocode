/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180029B68
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800297C4 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_L.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18003B3E8 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180029C38 (-HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18002A0B0 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002A190 (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLB.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034704 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampClientCreate(
        __int64 a1,
        unsigned int a2,
        union _RM_SID *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        struct _HAM_CLIENT_CONTEXT **a9)
{
  struct _HAM_CLIENT_CONTEXT *Heap; // rax
  struct _HAM_CLIENT_CONTEXT *v14; // rbx
  int State; // edi

  Heap = (struct _HAM_CLIENT_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
  v14 = Heap;
  if ( Heap )
  {
    HampClientInitialize(a1, a2, a5, a6, a7, a8, Heap);
    State = HampClientAllocateState(v14, a3, a4);
    if ( State >= 0 )
    {
      HampClientInsert(v14);
      *a9 = v14;
      v14 = 0LL;
      State = 0;
    }
    if ( v14 )
      HampClientDestroy(v14);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
