/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004F1A0
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004DCF0 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00211F0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx @ 0x1C0021D8C (McTemplateK0pqx.c)
 *     McTemplateK0qpxxtqqq @ 0x1C0023C0C (McTemplateK0qpxxtqqq.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C004EDA0 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ABA38 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00AC538 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  char v6; // r10
  unsigned __int8 v7; // r12
  int v10; // ebp
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  int v13; // esi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // r15d
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r11
  __int64 v23; // r14
  __int64 v24; // r10
  __int64 v26; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  _QWORD *v33; // rax
  unsigned __int64 v34; // [rsp+20h] [rbp-88h]
  int v35; // [rsp+28h] [rbp-80h]
  int v36; // [rsp+30h] [rbp-78h]
  int v37; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]
  unsigned __int64 v40; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+B8h] [rbp+10h]

  v6 = a4;
  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    v29 = WdLogNewEntry5_WdTrace(v28);
    *(_QWORD *)(v29 + 24) = a1;
    *(_QWORD *)(v29 + 32) = a2;
    v6 = a4;
  }
  v10 = a6;
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v35, v36, v6, v37, a6);
    v6 = a4;
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
    v11 = *(_QWORD *)(a2 + 24);
  else
    v11 = *(_QWORD *)(a2 + 16);
  v12 = *(unsigned int *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 412) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v13 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, v6, a5);
LABEL_29:
    if ( v13 >= 0 )
    {
LABEL_30:
      v20 = *(unsigned int *)(a1 + 380);
      v21 = *(int *)(a1 + 476);
      v22 = *(_QWORD *)(a1 + 8);
      v23 = **(_QWORD **)(a2 + 488);
      v14 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 216) += v14;
      v24 = *(_QWORD *)(v22 + 40168);
      if ( (*(_BYTE *)(1552 * v20 + 24 * (v21 + 21) + v24) & 1) != 0 )
        v15 = *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v22 + 24) + 200LL) + *(_QWORD *)(v23 + 32) + 24)
            + 328 * v20;
      else
        v15 = 1552 * v20 + 328 * v21 + v24 + 536;
      *(_QWORD *)(v15 + 112) += v14;
      *(_QWORD *)(a1 + 224) += *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 368) != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v32 = *(_QWORD *)(a1 + 232);
        v15 = v32 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 232) = v15;
        if ( v32 <= qword_1C0040410 && v15 > qword_1C0040410 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 8) + 40008LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40072LL));
        if ( !v32 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v34) = *(_DWORD *)(a1 + 16) + 1;
        McTemplateK0pqx(
          (unsigned int)v34,
          &TotalBytesResidentInSegment,
          v14,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v34,
          *(_QWORD *)(a1 + 224));
      }
      ++*(_DWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 324);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
        goto LABEL_37;
      v26 = *(_QWORD *)(a2 + 496);
      if ( v26 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v26 + 20)) == 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 48LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 496) + 16LL)) != 1 )
          goto LABEL_47;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 48LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 56LL), *(_QWORD *)(a2 + 16));
LABEL_47:
      v15 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v15 + 40152) += *(_QWORD *)(a2 + 16);
LABEL_37:
      *(_QWORD *)(a2 + 224) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
        v33[3] = *(_QWORD *)(a2 + 208);
        v33[4] = *(int *)(a2 + 220);
        v15 = *(unsigned int *)(a2 + 216);
        v33[5] = v15;
      }
      goto LABEL_39;
    }
LABEL_65:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v13;
    goto LABEL_39;
  }
  v13 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(a2 + 488), v11);
  if ( v13 < 0 )
  {
    v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v11, *(unsigned int *)(a2 + 32));
    if ( v13 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_39:
        if ( bTracingEnabled )
        {
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v15, (__int64)&EventEndReserveResource, v14, v13);
        }
        return (unsigned int)v13;
      }
      WdLogNewEntry5_WdTrace(v15);
      goto LABEL_65;
    }
  }
  if ( (*(_DWORD *)(a2 + 76) & 0x800) != 0 )
    v10 = 5;
  v15 = *(unsigned int *)(a1 + 80);
  v16 = 0;
  if ( (v15 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 208) = 1LL;
    goto LABEL_29;
  }
  v17 = *(_QWORD *)(a1 + 48);
  v14 = 0LL;
  v41 = v17;
  v40 = 0LL;
  switch ( v10 )
  {
    case 3:
      v7 = 1;
      goto LABEL_18;
    case 4:
      v27 = dword_1C0040188;
      if ( (v15 & 0x1001) != 0 )
        v27 = dword_1C004018C;
      if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
      {
        v40 = 0LL;
        v7 = 0;
        v14 = 0LL;
      }
      else if ( *(_BYTE *)(a1 + 449) )
      {
        v30 = v27;
        v7 = 1;
        v40 = 0LL;
        v14 = 0LL;
        v17 = (v30 * (v17 / 0x64) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      }
      else
      {
        v40 = (v17 / 0x64 * (100 - v27) + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v7 = 0;
        v14 = v40;
      }
      goto LABEL_57;
    case 7:
      v7 = 0;
      goto LABEL_18;
    case 5:
      v40 = *(_QWORD *)(a1 + 384);
      v17 = v40 + *(_QWORD *)(a1 + 392);
      v14 = v40;
      v7 = 0;
LABEL_57:
      v41 = v17;
      goto LABEL_18;
  }
  if ( v10 != 6 )
  {
LABEL_18:
    v18 = v17;
    v39 = v14;
    v38 = v17;
    v19 = v14;
    v13 = -1073741823;
    while ( 1 )
    {
      if ( v13 >= 0 )
        goto LABEL_30;
      if ( v10 == 7 && *(_DWORD *)(a1 + 412) == 1 )
      {
        v14 = v19;
        if ( v16 )
        {
          v17 = *(_QWORD *)(a1 + 384);
          if ( v18 < v17 )
            v17 = v18;
          v41 = v17;
        }
        else
        {
          if ( v19 <= *(_QWORD *)(a1 + 384) + *(_QWORD *)(a1 + 392) )
            v14 = *(_QWORD *)(a1 + 384) + *(_QWORD *)(a1 + 392);
          v18 = v38;
        }
        v40 = v14;
        if ( v14 >= v17 )
          goto LABEL_26;
      }
      else if ( (**(_DWORD **)(a2 + 504) & 0x20000) == 0 && *(_DWORD *)(a1 + 412) == 1 && *(_QWORD *)(a1 + 432) )
      {
        if ( v7 )
        {
          if ( v16 )
          {
            v17 = v18;
            v41 = v18;
            if ( v14 <= *(_QWORD *)(a1 + 424) )
            {
              v14 = *(_QWORD *)(a1 + 424);
              v40 = v14;
            }
          }
          else if ( *(_QWORD *)(a1 + 416) < v17 )
          {
            v17 = *(_QWORD *)(a1 + 416);
            v41 = v17;
          }
        }
        else if ( v16 )
        {
          v14 = v19;
          v40 = v19;
          if ( *(_QWORD *)(a1 + 416) < v17 )
            v17 = *(_QWORD *)(a1 + 416);
          v41 = v17;
        }
        else
        {
          if ( v14 <= *(_QWORD *)(a1 + 424) )
            v14 = *(_QWORD *)(a1 + 424);
          v40 = v14;
        }
        if ( v14 >= v17 )
          goto LABEL_26;
      }
      else if ( v16 )
      {
        goto LABEL_29;
      }
      v13 = VIDMM_LINEAR_POOL::Allocate(
              *(VIDMM_LINEAR_POOL **)(a1 + 152),
              v11,
              v12,
              v7,
              v40,
              v17,
              a4,
              a5,
              (void *)a2,
              (union _LARGE_INTEGER *)(a2 + 216),
              (void **)(a2 + 208));
      if ( v13 < 0 )
      {
        v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v11, *(unsigned int *)(a2 + 32));
        if ( v13 >= 0 )
          v13 = VIDMM_LINEAR_POOL::Allocate(
                  *(VIDMM_LINEAR_POOL **)(a1 + 152),
                  v11,
                  v12,
                  v7,
                  v40,
                  v41,
                  a4,
                  a5,
                  (void *)a2,
                  (union _LARGE_INTEGER *)(a2 + 216),
                  (void **)(a2 + 208));
      }
      v14 = v40;
      v17 = v41;
      v19 = v39;
      v18 = v38;
LABEL_26:
      if ( (unsigned int)++v16 >= 2 )
        goto LABEL_29;
    }
  }
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v14 = *(_QWORD *)(a1 + 384);
    v40 = v14;
    v17 = v14 + *(_QWORD *)(a1 + 392);
    goto LABEL_57;
  }
  v31 = *(_QWORD *)(a1 + 416);
  v15 = v31 - *(_QWORD *)(a1 + 384);
  v40 = (v31 - v11) & ~((v12 - 1) | *(_QWORD *)(a1 + 400));
  if ( v15 >= v11 )
  {
    v17 = *(_QWORD *)(a1 + 424);
    v7 = 0;
    v14 = (v31 - v11) & ~((v12 - 1) | *(_QWORD *)(a1 + 400));
    goto LABEL_57;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v15);
  return 3221225473LL;
}
