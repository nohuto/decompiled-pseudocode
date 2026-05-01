/*
 * XREFs of ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180027B30
 * Callers:
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x1800256B0 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180011D10 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180027C64 (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpHostSubscriptionInitialize@@YAX_KPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_HOST_SUBSCRIPTION@@@Z @ 0x180027C7C (-RmpHostSubscriptionInitialize@@YAX_KPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_HOST_SUBS.c)
 */

__int64 __fastcall RmpActivatorSubscribeForNotifications(
        struct _RM_ACTIVATOR *a1,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // ebx
  char *Heap; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int v16; // esi
  unsigned __int64 v17; // rax

  v6 = 0;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    v8 = HamObjectIdGenerate(4);
    RmpHostSubscriptionInitialize(v8, a1, a2, (struct _RM_HOST_SUBSCRIPTION *)Heap);
    v10 = (_QWORD *)((char *)a2 + 1408);
    v11 = *((_QWORD *)a2 + 176);
    v12 = Heap + 8;
    if ( *(struct _RM_ACTIVITY_HOST **)(v11 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1408) )
      __fastfail(3u);
    *v12 = v11;
    v13 = (unsigned __int64)a1 + 40;
    *((_QWORD *)Heap + 2) = v10;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v12;
    v14 = *(_QWORD *)(v13 + 8);
    v15 = *(_QWORD *)v13;
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
        v15 ^= v13;
      else
        v15 = 0LL;
    }
    LOBYTE(v9) = 0;
    v16 = v14 & 1;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( (int)RmpHostSubscriptionCompareForRtlTree(Heap, (struct _RTL_BALANCED_NODE *)v15) < 0 )
        {
          v17 = *(_QWORD *)v15;
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_21;
            v17 ^= v15;
          }
          if ( !v17 )
          {
LABEL_21:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_15;
            v17 ^= v15;
          }
          if ( !v17 )
          {
LABEL_15:
            LOBYTE(v9) = 1;
            break;
          }
        }
        v15 = v17;
      }
    }
    RtlRbInsertNodeEx(v13, v15, v9, Heap + 24);
    *a3 = *(_QWORD *)Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
