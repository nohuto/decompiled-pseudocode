/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0072930
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0054830 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0023B2C (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx @ 0x1C00246D8 (McTemplateK0pqx.c)
 *     McTemplateK0qpxxtqqq @ 0x1C00265BC (McTemplateK0qpxxtqqq.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00541C0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C007261C (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00B4300 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00B4E04 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, int a6)
{
  char v7; // r15
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r14d
  int v14; // r13d
  int v15; // eax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  int v25; // r11d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r10
  int v29; // r12d
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  _QWORD *v36; // rax
  unsigned __int64 v37; // [rsp+20h] [rbp-98h]
  int v38; // [rsp+28h] [rbp-90h]
  int v39; // [rsp+30h] [rbp-88h]
  int v40; // [rsp+40h] [rbp-78h]
  unsigned __int64 v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+68h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+C8h] [rbp+10h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    v32 = WdLogNewEntry5_WdTrace(v31);
    *(_QWORD *)(v32 + 24) = a1;
    *(_QWORD *)(v32 + 32) = a2;
  }
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v38, v39, a4, v40, a6);
  if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
    v10 = *(_QWORD *)(a2 + 24);
  else
    v10 = *(_QWORD *)(a2 + 16);
  v43 = *(unsigned int *)(a2 + 32);
  v44 = v10;
  if ( *(_DWORD *)(a1 + 412) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v13 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, a4, a5);
LABEL_14:
    if ( v13 >= 0 )
    {
LABEL_15:
      v12 = *(unsigned int *)(a1 + 380);
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *(int *)(a1 + 476);
      v18 = **(_QWORD **)(a2 + 488);
      v19 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 216) += v19;
      v20 = *(_QWORD *)(v16 + 40720);
      if ( (*(_BYTE *)(v20 + 24 * (v17 + 65 * v12) + 512) & 1) != 0 )
        v11 = *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v16 + 24) + 200LL) + *(_QWORD *)(v18 + 32) + 24)
            + 328 * v12;
      else
        v11 = v20 + 1560 * v12 + 328 * v17 + 544;
      *(_QWORD *)(v11 + 112) += v19;
      *(_QWORD *)(a1 + 224) += *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 368) != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v35 = *(_QWORD *)(a1 + 232);
        v11 = v35 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 232) = v11;
        if ( v35 <= qword_1C0047410 && v11 > qword_1C0047410 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 8) + 40584LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40648LL));
        if ( !v35 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v37) = *(_DWORD *)(a1 + 16) + 1;
        McTemplateK0pqx(
          (unsigned int)v37,
          &TotalBytesResidentInSegment,
          v12,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v37,
          *(_QWORD *)(a1 + 224));
      }
      ++*(_DWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 324);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
        goto LABEL_26;
      v21 = *(_QWORD *)(a2 + 496);
      if ( v21 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v21 + 44)) == 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 48LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 496) + 40LL)) != 1 )
          goto LABEL_25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 48LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 56LL), *(_QWORD *)(a2 + 16));
LABEL_25:
      v11 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v11 + 40704) += *(_QWORD *)(a2 + 16);
LABEL_26:
      *(_QWORD *)(a2 + 224) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
        v36[3] = *(_QWORD *)(a2 + 208);
        v36[4] = *(int *)(a2 + 220);
        v11 = *(unsigned int *)(a2 + 216);
        v36[5] = v11;
      }
      goto LABEL_28;
    }
LABEL_65:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v13;
    goto LABEL_28;
  }
  v13 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(a2 + 488), v10);
  if ( v13 < 0 )
  {
    v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v10, *(unsigned int *)(a2 + 32));
    if ( v13 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_28:
        if ( bTracingEnabled )
        {
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v11, (__int64)&EventEndReserveResource, v12, v13);
        }
        return (unsigned int)v13;
      }
      WdLogNewEntry5_WdTrace(v11);
      goto LABEL_65;
    }
  }
  v14 = 5;
  v15 = *(_DWORD *)(a1 + 80);
  if ( (*(_DWORD *)(a2 + 76) & 0x800) == 0 )
    v14 = a6;
  if ( (v15 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 208) = 1LL;
    goto LABEL_14;
  }
  v23 = *(_QWORD *)(a1 + 48);
  v24 = 0LL;
  switch ( v14 )
  {
    case 3:
      v7 = 1;
      goto LABEL_37;
    case 4:
      v30 = dword_1C0047188;
      if ( (v15 & 0x1001) != 0 )
        v30 = dword_1C004718C;
      if ( (*(_DWORD *)(a2 + 80) & 0x400) == 0 )
      {
        v25 = v43;
        v11 = v23 / 0x64;
        if ( *(_BYTE *)(a1 + 449) )
        {
          v7 = 1;
          v23 = (v11 * v30 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_38;
        }
        v24 = (v11 * (100 - v30) + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_57;
      }
LABEL_49:
      v7 = 0;
      goto LABEL_37;
    case 7:
      goto LABEL_49;
    case 5:
      v24 = *(_QWORD *)(a1 + 384);
      v23 = v24 + *(_QWORD *)(a1 + 392);
      goto LABEL_49;
  }
  if ( v14 != 6 )
  {
LABEL_37:
    v25 = v43;
LABEL_38:
    v26 = v23;
    v42 = v24;
    v41 = v23;
    v27 = v24;
    v12 = v24;
    v28 = v24;
    v13 = -1073741823;
    v29 = 0;
    while ( 1 )
    {
      if ( v13 >= 0 )
        goto LABEL_15;
      if ( v14 == 7 && *(_DWORD *)(a1 + 412) == 1 )
      {
        v11 = *(_QWORD *)(a1 + 384);
        if ( v29 )
        {
          v23 = *(_QWORD *)(a1 + 384);
          v24 = v12;
          if ( v26 < v11 )
            v23 = v26;
        }
        else
        {
          v11 += *(_QWORD *)(a1 + 392);
          v24 = v27;
          if ( v28 <= v11 )
            v24 = v11;
        }
        goto LABEL_96;
      }
      if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 || *(_DWORD *)(a1 + 412) != 1 || !*(_QWORD *)(a1 + 432) )
      {
        if ( v29 )
          goto LABEL_14;
LABEL_44:
        v13 = VIDMM_LINEAR_POOL::Allocate(
                *(VIDMM_LINEAR_POOL **)(a1 + 152),
                v44,
                v25,
                v7,
                v24,
                v23,
                a4,
                a5,
                (void *)a2,
                (union _LARGE_INTEGER *)(a2 + 216),
                (void **)(a2 + 208));
        if ( v13 < 0 )
        {
          v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v44, *(unsigned int *)(a2 + 32));
          if ( v13 >= 0 )
            v13 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 152),
                    v44,
                    v43,
                    v7,
                    v24,
                    v23,
                    a4,
                    a5,
                    (void *)a2,
                    (union _LARGE_INTEGER *)(a2 + 216),
                    (void **)(a2 + 208));
        }
        v12 = v42;
        v26 = v41;
        v27 = v42;
        v28 = v42;
        goto LABEL_46;
      }
      if ( v7 )
        break;
      if ( v29 )
      {
        v24 = v12;
LABEL_91:
        v34 = *(_QWORD *)(a1 + 416);
        if ( v34 >= v23 )
          v34 = v23;
        v23 = v34;
        goto LABEL_96;
      }
      if ( v24 <= *(_QWORD *)(a1 + 424) )
        v24 = *(_QWORD *)(a1 + 424);
LABEL_96:
      if ( v24 < v23 )
        goto LABEL_44;
LABEL_46:
      v25 = v43;
      if ( (unsigned int)++v29 >= 2 )
        goto LABEL_14;
    }
    if ( v29 )
    {
      v23 = v26;
      if ( v24 <= *(_QWORD *)(a1 + 424) )
        v24 = *(_QWORD *)(a1 + 424);
      goto LABEL_96;
    }
    goto LABEL_91;
  }
  v33 = *(_QWORD *)(a1 + 384);
  v25 = v43;
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v24 = *(_QWORD *)(a1 + 384);
    v23 = v33 + *(_QWORD *)(a1 + 392);
    goto LABEL_38;
  }
  v24 = (*(_QWORD *)(a1 + 416) - v10) & ~((v43 - 1) | *(_QWORD *)(a1 + 400));
  v11 = *(_QWORD *)(a1 + 416) - v33;
  if ( v11 >= v10 )
  {
    v23 = *(_QWORD *)(a1 + 424);
LABEL_57:
    v7 = 0;
    goto LABEL_38;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v11);
  return 3221225473LL;
}
