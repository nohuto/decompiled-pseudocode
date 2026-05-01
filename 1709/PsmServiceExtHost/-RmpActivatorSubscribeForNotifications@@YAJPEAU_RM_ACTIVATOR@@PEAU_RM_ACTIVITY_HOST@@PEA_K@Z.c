/*
 * XREFs of ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001BCD4
 * Callers:
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x180017514 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18001BDE8 (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivatorSubscribeForNotifications(
        struct _RM_ACTIVATOR *a1,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // edi
  unsigned __int64 *Heap; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  struct _RTL_BALANCED_NODE *v13; // rbx
  int v14; // ebp
  struct _RTL_BALANCED_NODE *v15; // rax

  v6 = 0;
  Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    v8 = HamObjectIdGenerate(4LL);
    memset_0(Heap, 0, 0x40uLL);
    *Heap = v8;
    Heap[7] = (unsigned __int64)a1;
    RmpObjectAddRef(a2);
    Heap[5] = -1LL;
    v10 = (_QWORD *)((char *)a2 + 1264);
    Heap[6] = (unsigned __int64)a2;
    v11 = Heap + 1;
    v12 = *((_QWORD *)a2 + 158);
    if ( *(struct _RM_ACTIVITY_HOST **)(v12 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1264) )
      __fastfail(3u);
    *v11 = v12;
    LOBYTE(v9) = 0;
    Heap[2] = (unsigned __int64)v10;
    *(_QWORD *)(v12 + 8) = v11;
    *v10 = v11;
    v13 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 5);
    v14 = *((_BYTE *)a1 + 48) & 1;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( (int)RmpHostSubscriptionCompareForRtlTree(Heap, v13) < 0 )
        {
          v15 = v13->Children[0];
          if ( v14 )
          {
            if ( !v15 )
              goto LABEL_19;
            v15 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v13 ^ (unsigned __int64)v15);
          }
          if ( !v15 )
          {
LABEL_19:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v15 = v13->Children[1];
          if ( v14 )
          {
            if ( !v15 )
            {
LABEL_8:
              LOBYTE(v9) = 1;
              break;
            }
            v15 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v13 ^ (unsigned __int64)v15);
          }
          if ( !v15 )
            goto LABEL_8;
        }
        v13 = v15;
      }
    }
    RtlRbInsertNodeEx((char *)a1 + 40, v13, v9, Heap + 3);
    *a3 = *Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
