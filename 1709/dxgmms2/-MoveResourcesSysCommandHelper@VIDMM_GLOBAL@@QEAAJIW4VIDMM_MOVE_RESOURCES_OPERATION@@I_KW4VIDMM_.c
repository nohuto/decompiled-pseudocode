/*
 * XREFs of ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C009C08C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C00211C8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009A650 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009BDF4 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AC27C (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C00AC38C (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
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
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r12
  int v20; // ebp
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  VIDMM_SEGMENT *v24; // rdi
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v26; // rcx
  void (__fastcall *v27)(VIDMM_SEGMENT *, unsigned __int64, _QWORD); // rax
  unsigned __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-78h]
  struct _VIDMM_GLOBAL_ALLOC *v31; // [rsp+60h] [rbp-38h] BYREF
  bool v32; // [rsp+B0h] [rbp+18h] BYREF

  v31 = 0LL;
  v11 = a2;
  v32 = 0;
  if ( a3 - 3 <= 1 )
  {
    VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(a1);
    v19 = *((_QWORD *)a1 + 5021);
    v20 = 0;
    v21 = 1552 * v11;
    if ( !*(_DWORD *)(1552 * v11 + v19 + 24) )
    {
LABEL_15:
      LODWORD(v17) = 0;
      return (unsigned int)v17;
    }
    while ( 1 )
    {
      v22 = *((_QWORD *)a1 + 464);
      v23 = (unsigned int)(v20 + *(_DWORD *)(*((_QWORD *)a1 + 5021) + v21 + 20));
      v24 = *(VIDMM_SEGMENT **)(v22 + 8 * v23);
      if ( a3 == 3 )
      {
        VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(*(VIDMM_SEGMENT **)(v22 + 8 * v23));
        if ( (*((_BYTE *)v24 + 82) & 1) == 0 )
        {
          v27 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 128LL);
LABEL_13:
          v28 = 0LL;
          goto LABEL_14;
        }
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v24);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 128LL))(v26, 0LL);
        v27 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 128LL);
      }
      else
      {
        if ( (*((_BYTE *)v24 + 82) & 1) == 0 )
        {
          v27 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 136LL);
          goto LABEL_13;
        }
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(*(VIDMM_SEGMENT **)(v22 + 8 * v23));
        (*(void (__fastcall **)(VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)v24 + 136LL))(v24, 0LL);
        v27 = *(void (__fastcall **)(VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 136LL);
      }
      v28 = ActiveVprEnd;
LABEL_14:
      v27(v24, v28, *((_QWORD *)v24 + 6));
      if ( (unsigned int)++v20 >= *(_DWORD *)(v21 + v19 + 24) )
        goto LABEL_15;
    }
  }
  v13 = *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 464) + 8LL * a4);
  a5 = *((_QWORD *)v13 + 6);
  VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(v13, &a5);
  v15 = VIDMM_GLOBAL::MoveResources(a1, v14, a3, a4, v30, a6, a7, a8, a9, &v32, &v31);
  v17 = v15;
  if ( v15 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16);
    *(_QWORD *)(v18 + 24) = v17;
    WdLogEvent5_WdWarning(v18);
  }
  return (unsigned int)v17;
}
