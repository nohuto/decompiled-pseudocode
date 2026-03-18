/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004AE30
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0049BE0 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F194 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     Template_qpxxtqqq @ 0x1C002199C (Template_qpxxtqqq.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z @ 0x1C004AB50 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJ_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A3448 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00A3F68 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6)
{
  unsigned __int8 v7; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // rcx
  int v13; // ebp
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  _QWORD *v29; // rax
  unsigned __int64 v30; // [rsp+20h] [rbp-98h]
  int v31; // [rsp+28h] [rbp-90h]
  int v32; // [rsp+30h] [rbp-88h]
  int v33; // [rsp+40h] [rbp-78h]
  unsigned __int64 v34; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+68h] [rbp-50h]
  __int64 v36; // [rsp+70h] [rbp-48h]
  unsigned __int64 v37; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v38; // [rsp+C8h] [rbp+10h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    v26 = WdLogNewEntry5_WdTrace(v25);
    *(_QWORD *)(v26 + 24) = a1;
    *(_QWORD *)(v26 + 32) = a2;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v31, v32, a4, v33, a6);
  if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
    v10 = *(_QWORD *)(a2 + 24);
  else
    v10 = *(_QWORD *)(a2 + 16);
  v11 = *(unsigned int *)(a2 + 32);
  v35 = *(_DWORD *)(a2 + 32);
  v37 = v10;
  if ( *(_DWORD *)(a1 + 436) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v13 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, a4, a5);
LABEL_27:
    if ( v13 >= 0 )
    {
LABEL_28:
      v22 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 240) += v22;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 41200LL) + 280LL * *(unsigned int *)(a1 + 404);
      *(_QWORD *)(v12 + 8LL * *(int *)(a1 + 500) + 248) += v22;
      *(_QWORD *)(a1 + 248) += *(_QWORD *)(a2 + 16);
      v23 = *(unsigned int *)(a1 + 392);
      if ( (_DWORD)v23 != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v28 = *(_QWORD *)(a1 + 256);
        v12 = v28 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 256) = v12;
        if ( v28 <= qword_1C003C3D8 && v12 > qword_1C003C3D8 )
          (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64))(*(_QWORD *)(a1 + 8) + 40008LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40072LL),
            v23,
            v15,
            v14);
        if ( !v28 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v30) = *(_DWORD *)(a1 + 16) + 1;
        Template_pqx(
          (unsigned int)v30,
          &TotalBytesResidentInSegment,
          v15,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v30,
          *(_QWORD *)(a1 + 248));
      }
      ++*(_DWORD *)(a1 + 344);
      ++*(_DWORD *)(a1 + 348);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) != 0 )
      {
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
          *(_QWORD *)(a2 + 16));
        v12 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
                *(_QWORD *)(a2 + 16));
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40152LL) += *(_QWORD *)(a2 + 16);
      }
      *(_QWORD *)(a2 + 224) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
        v29[3] = *(_QWORD *)(a2 + 208);
        v29[4] = *(int *)(a2 + 220);
        v12 = *(unsigned int *)(a2 + 216);
        v29[5] = v12;
      }
      goto LABEL_34;
    }
    goto LABEL_53;
  }
  v13 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, v10);
  if ( v13 < 0 )
  {
    v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v10, *(unsigned int *)(a2 + 32));
    if ( v13 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_34:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v12, &EventEndReserveResource, v15, v13);
        }
        return (unsigned int)v13;
      }
      WdLogNewEntry5_WdTrace(v12);
LABEL_53:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v13;
      goto LABEL_34;
    }
  }
  v15 = 5LL;
  v16 = *(_DWORD *)(a1 + 80);
  if ( (*(_DWORD *)(a2 + 76) & 0x800) == 0 )
    v15 = a6;
  if ( (v16 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 208) = 1LL;
    goto LABEL_27;
  }
  v17 = *(_QWORD *)(a1 + 48);
  v18 = 0LL;
  switch ( (_DWORD)v15 )
  {
    case 3:
      v7 = 1;
      goto LABEL_16;
    case 4:
      v12 = (unsigned int)dword_1C003C150;
      if ( (v16 & 0x1001) != 0 )
        v12 = (unsigned int)dword_1C003C154;
      if ( (*(_DWORD *)(a2 + 80) & 0x800) == 0 )
        v18 = (v17 / 0x64 * (unsigned int)(100 - v12) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_40;
    case 7:
LABEL_40:
      v7 = 0;
      goto LABEL_16;
    case 5:
      v18 = *(_QWORD *)(a1 + 408);
      v17 = v18 + *(_QWORD *)(a1 + 416);
      goto LABEL_40;
  }
  if ( (_DWORD)v15 != 6 )
  {
LABEL_16:
    v19 = v18;
    v20 = (int)v15;
    v38 = v18;
    v14 = v17;
    v36 = (int)v15;
    v13 = -1073741823;
    v34 = v17;
    v21 = 0;
    while ( 1 )
    {
      if ( v13 >= 0 )
        goto LABEL_28;
      if ( v20 == 7 && *(_DWORD *)(a1 + 436) == 1 )
      {
        if ( v21 )
        {
          v17 = *(_QWORD *)(a1 + 408);
          v18 = v19;
          if ( v14 < v17 )
            v17 = v14;
        }
        else
        {
          v18 = *(_QWORD *)(a1 + 408) + *(_QWORD *)(a1 + 416);
          if ( v19 > v18 )
            v18 = v19;
        }
      }
      else
      {
        if ( (**(_DWORD **)(a2 + 520) & 0x20000) != 0 || *(_DWORD *)(a1 + 436) != 1 || !*(_QWORD *)(a1 + 456) )
        {
          if ( v21 )
            goto LABEL_27;
LABEL_22:
          v13 = VIDMM_LINEAR_POOL::Allocate(
                  *(VIDMM_LINEAR_POOL **)(a1 + 176),
                  v37,
                  v35,
                  v7,
                  v18,
                  v17,
                  a4,
                  a5,
                  (void *)a2,
                  (union _LARGE_INTEGER *)(a2 + 216),
                  (void **)(a2 + 208));
          if ( v13 < 0 )
          {
            v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v37, *(unsigned int *)(a2 + 32));
            if ( v13 >= 0 )
              v13 = VIDMM_LINEAR_POOL::Allocate(
                      *(VIDMM_LINEAR_POOL **)(a1 + 176),
                      v37,
                      v35,
                      v7,
                      v18,
                      v17,
                      a4,
                      a5,
                      (void *)a2,
                      (union _LARGE_INTEGER *)(a2 + 216),
                      (void **)(a2 + 208));
          }
          v19 = v38;
          v14 = v34;
          goto LABEL_24;
        }
        if ( v7 )
        {
          if ( v21 )
          {
            v17 = v14;
            if ( v18 <= *(_QWORD *)(a1 + 448) )
              v18 = *(_QWORD *)(a1 + 448);
          }
          else if ( *(_QWORD *)(a1 + 440) < v17 )
          {
            v17 = *(_QWORD *)(a1 + 440);
          }
        }
        else if ( v21 )
        {
          v18 = v19;
          if ( *(_QWORD *)(a1 + 440) < v17 )
            v17 = *(_QWORD *)(a1 + 440);
        }
        else if ( v18 <= *(_QWORD *)(a1 + 448) )
        {
          v18 = *(_QWORD *)(a1 + 448);
        }
      }
      if ( v18 < v17 )
        goto LABEL_22;
LABEL_24:
      v20 = v36;
      if ( (unsigned int)++v21 >= 2 )
        goto LABEL_27;
    }
  }
  if ( *(_DWORD *)(a1 + 436) != 1 )
  {
    v18 = *(_QWORD *)(a1 + 408);
    v17 = v18 + *(_QWORD *)(a1 + 416);
    goto LABEL_16;
  }
  v27 = *(_QWORD *)(a1 + 440);
  v12 = v27 - *(_QWORD *)(a1 + 408);
  v18 = (v27 - v10) & ~((v11 - 1) | *(_QWORD *)(a1 + 424));
  if ( v12 >= v10 )
  {
    v17 = *(_QWORD *)(a1 + 448);
    goto LABEL_40;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v12);
  return 3221225473LL;
}
