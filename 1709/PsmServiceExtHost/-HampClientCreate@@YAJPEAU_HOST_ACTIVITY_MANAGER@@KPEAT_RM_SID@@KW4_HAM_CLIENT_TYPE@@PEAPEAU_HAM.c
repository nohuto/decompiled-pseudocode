/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C138
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001CAA4 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CL.c)
 * Callees:
 *     ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C0E8 (-HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@@Z @ 0x18001C1E8 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@@Z.c)
 *     ?HampClientInitialize@@YAXKKW4_HAM_CLIENT_TYPE@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C9C4 (-HampClientInitialize@@YAXKKW4_HAM_CLIENT_TYPE@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F4E4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampClientCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_CLIENT_CONTEXT **a6)
{
  struct _HAM_CLIENT_CONTEXT *Heap; // rax
  struct _HAM_CLIENT_CONTEXT *v11; // rbx
  int State; // edi

  Heap = (struct _HAM_CLIENT_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v11 = Heap;
  if ( Heap )
  {
    HampClientInitialize(a2, a4, a5, Heap);
    State = HampClientAllocateState(v11, a3);
    if ( State >= 0 )
    {
      HampClientInsert(v11, a1);
      *a6 = v11;
      v11 = 0LL;
      State = 0;
    }
    if ( v11 )
      HampClientDestroy(v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
