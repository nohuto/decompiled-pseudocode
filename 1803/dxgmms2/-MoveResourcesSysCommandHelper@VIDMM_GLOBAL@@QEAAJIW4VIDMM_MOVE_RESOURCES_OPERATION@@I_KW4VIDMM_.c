/*
 * XREFs of ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00A1FDC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C0023AD8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FD94 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1D44 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B4B50 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C00B4C60 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        VIDMM_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  __int64 v11; // rdi
  VIDMM_SEGMENT *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  int v21; // ebp
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  VIDMM_SEGMENT *v25; // rdi
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v27; // rcx
  void (__fastcall *v28)(VIDMM_SEGMENT *, unsigned __int64, _QWORD); // rax
  unsigned __int64 v29; // rdx
  __int64 v31; // [rsp+20h] [rbp-78h]
  struct _VIDMM_GLOBAL_ALLOC *v32; // [rsp+60h] [rbp-38h] BYREF
  bool v33; // [rsp+B0h] [rbp+18h] BYREF

  v32 = 0LL;
  v11 = a2;
  v33 = 0;
  if ( a3 - 3 <= 1 )
  {
    VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(a1);
    v20 = *((_QWORD *)a1 + 5090);
    v21 = 0;
    v22 = 1560 * v11;
    if ( !*(_DWORD *)(1560 * v11 + v20 + 24) )
    {
LABEL_15:
      LODWORD(v18) = 0;
      return (unsigned int)v18;
    }
    while ( 1 )
    {
      v23 = *((_QWORD *)a1 + 464);
      v24 = (unsigned int)(v21 + *(_DWORD *)(*((_QWORD *)a1 + 5090) + v22 + 20));
      v25 = *(VIDMM_SEGMENT **)(v23 + 8 * v24);
      if ( a3 == 3 )
      {
        VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(*(VIDMM_SEGMENT **)(v23 + 8 * v24));
        if ( (*((_BYTE *)v25 + 82) & 1) == 0 )
        {
          v28 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 128LL);
LABEL_13:
          v29 = 0LL;
          goto LABEL_14;
        }
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v25);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 128LL))(v27, 0LL);
        v28 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 128LL);
      }
      else
      {
        if ( (*((_BYTE *)v25 + 82) & 1) == 0 )
        {
          v28 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 136LL);
          goto LABEL_13;
        }
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(*(VIDMM_SEGMENT **)(v23 + 8 * v24));
        (*(void (__fastcall **)(VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)v25 + 136LL))(v25, 0LL);
        v28 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 136LL);
      }
      v29 = ActiveVprEnd;
LABEL_14:
      v28(v25, v29, *((_QWORD *)v25 + 6));
      if ( (unsigned int)++v21 >= *(_DWORD *)(v22 + v20 + 24) )
        goto LABEL_15;
    }
  }
  v13 = *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 464) + 8LL * a4);
  a5 = *((_QWORD *)v13 + 6);
  VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(v13, &a5);
  v15 = VIDMM_GLOBAL::MoveResources(a1, v14, a3, a4, v31, a6, a7, a8, a9, &v33, &v32);
  v18 = v15;
  if ( v15 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdWarning(v19);
  }
  return (unsigned int)v18;
}
