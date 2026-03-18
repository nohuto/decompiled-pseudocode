/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000B5C0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000AD40 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0023114 (-VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // r13
  unsigned int v8; // r12d
  UINT SubmissionFenceId; // edx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  LARGE_INTEGER v15; // rcx
  PSLIST_ENTRY v16; // rax
  __int64 v17; // rdx
  PSLIST_ENTRY v18; // rbx
  DXGK_INTERRUPT_TYPE InterruptType; // eax
  LARGE_INTEGER PhysicalAddress; // rax
  signed __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 EngineOrdinal; // rcx
  _QWORD *v26; // rax
  ULONGLONG Alignment; // rax
  unsigned int v28; // r9d
  char v29; // r10
  char v30; // r11
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  UINT64 v39; // rdx
  char *v40; // r8
  int v41; // ecx
  unsigned int v42; // eax
  UINT64 v43; // rdx
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  UINT64 v52; // rdx
  int v53; // ecx
  unsigned int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  ULONGLONG Region; // rcx
  int v62; // eax
  __int64 v63; // rcx
  UINT v64; // [rsp+30h] [rbp-78h]
  int v65; // [rsp+34h] [rbp-74h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-70h] BYREF
  LARGE_INTEGER v67; // [rsp+40h] [rbp-68h]
  LARGE_INTEGER v68; // [rsp+48h] [rbp-60h]
  __int64 v69; // [rsp+50h] [rbp-58h] BYREF
  __int64 v70; // [rsp+58h] [rbp-50h]
  __int64 v71; // [rsp+60h] [rbp-48h]

  v67.QuadPart = 0LL;
  v4 = 0;
  v65 = a3;
  if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    v4 = (a2->Flags.Value & 2) != 0;
  v8 = 0;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v10 = 0;
  v64 = SubmissionFenceId;
  v11 = *(_QWORD *)(a1[1].Alignment + 2280);
  v12 = *(_DWORD *)(v11 + 80);
  if ( !v12 )
  {
LABEL_29:
    v10 = -1;
    goto LABEL_20;
  }
  a3 = *(_QWORD *)(v11 + 112);
  while ( 1 )
  {
    v11 = 3208LL * v10;
    if ( *(_DWORD *)(v11 + a3 + 1028) == SubmissionFenceId )
      break;
    if ( ++v10 >= v12 )
      goto LABEL_29;
  }
  if ( v10 != -1 && v10 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
  {
    _mm_lfence();
    v13 = *(&a1[187].Alignment + v10);
    if ( !v4 )
    {
      LODWORD(v14) = 1;
      if ( _InterlockedExchange((volatile __int32 *)(v13 + 18840), 0) )
      {
        v68 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( !*(_QWORD *)(v13 + 18832) )
          *(union _LARGE_INTEGER *)(v13 + 18832) = PerformanceFrequency;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 18856), 0LL, 0LL);
        v15 = v68;
        v23 = v22;
        v24 = v68.QuadPart - *(_QWORD *)(v13 + 18776);
        if ( v23 )
        {
          if ( v24 > v23 )
          {
            v14 = v24 / v23;
            if ( !(unsigned int)(v24 / v23) )
              goto LABEL_13;
          }
        }
      }
      else
      {
        v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( !*(_QWORD *)(v13 + 18832) )
          *(union _LARGE_INTEGER *)(v13 + 18832) = PerformanceFrequency;
      }
      *(_QWORD *)(v13 + 18784) += (unsigned int)v14;
      *(LARGE_INTEGER *)(v13 + 18776) = v15;
      if ( *(_BYTE *)(v13 + 8) && !*((_BYTE *)&a1[8].HeaderX64 + 4) )
      {
        Region = a1->Region;
        v69 = 0LL;
        v70 = 0LL;
        v71 = 0LL;
        v62 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int64 *))DxgCoreInterface[48])(
                Region,
                0LL,
                0LL,
                &v69);
        v63 = 0LL;
        if ( v62 >= 0 )
          v63 = v70;
        *(_QWORD *)(v13 + 18792) = v63;
      }
    }
LABEL_13:
    v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 19264));
    if ( !v16 )
      goto LABEL_20;
    v18 = v16 - 1;
    InterruptType = a2->InterruptType;
    *((_BYTE *)&v18[6].Next + 8) &= ~1u;
    LODWORD(v18[1].Next) = InterruptType;
    LODWORD(v18[6].Next) = v65;
    *((_DWORD *)&v18[5].Next + 3) = v64;
    v18[3].Next = (struct _SLIST_ENTRY *)a1;
    *((_DWORD *)&v18[5].Next + 2) = v10;
    BYTE4(v18[6].Next) = 0;
    if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    {
      VidSchiProcessIsrVSyncMultiPlaneOverlay2(
        (struct _VIDSCH_GLOBAL *)a1,
        (struct _VIDSCH_PRESENT_INFO *)v13,
        a2,
        (struct _VIDSCH_VSYNC_COOKIE *)v18);
      goto LABEL_17;
    }
    if ( a2->InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
    {
      BYTE4(v18[6].Next) = 1;
      PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
      v18[7].Next = (struct _SLIST_ENTRY *)PhysicalAddress.QuadPart;
      v67 = PhysicalAddress;
LABEL_17:
      if ( !v4 )
      {
        v18[5].Next = *(struct _SLIST_ENTRY **)(v13 + 18784);
        *((_QWORD *)&v18[3].Next + 1) = *(_QWORD *)(v13 + 18776);
        v18[4].Next = *(struct _SLIST_ENTRY **)(v13 + 18792);
      }
      *((_QWORD *)&v18[4].Next + 1) = a4;
      ExpInterlockedPushEntrySList(a1 + 120, v18 + 2);
      goto LABEL_20;
    }
    EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
    if ( (unsigned int)EngineOrdinal >= 8 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdAssertion(EngineOrdinal, v17);
      v26[3] = a1;
      v26[4] = a2->DmaCompleted.SubmissionFenceId;
      v26[5] = a2->DmaCompleted.EngineOrdinal;
      WdLogEvent5_WdAssertion(v26);
      goto LABEL_17;
    }
    Alignment = a1[1].Alignment;
    v28 = 0;
    v29 = *(_BYTE *)(Alignment + 2206);
    v30 = *(_BYTE *)(Alignment + 2207);
    if ( !(_DWORD)EngineOrdinal )
      goto LABEL_17;
    while ( 1 )
    {
      if ( v29 )
      {
        v52 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 96LL * v8;
        if ( !*(_DWORD *)(v52 + 4) )
          goto LABEL_43;
        BYTE4(v18[6].Next) |= 1 << *(_DWORD *)v52;
        v40 = (char *)v18 + 40 * v28;
        *((_QWORD *)v40 + 14) = *(_QWORD *)(v52 + 8);
        *((_WORD *)v40 + 60) = *(_WORD *)(v52 + 20);
        *((_WORD *)v40 + 62) = *(_WORD *)(v52 + 24);
        *((_WORD *)v40 + 61) = *(_WORD *)(v52 + 28);
        *((_WORD *)v40 + 63) = *(_WORD *)(v52 + 32);
        *((_WORD *)v40 + 64) = *(_WORD *)(v52 + 36);
        *((_WORD *)v40 + 66) = *(_WORD *)(v52 + 40);
        *((_WORD *)v40 + 65) = *(_WORD *)(v52 + 44);
        *((_WORD *)v40 + 67) = *(_WORD *)(v52 + 48);
        *((_WORD *)v40 + 68) = *(_WORD *)(v52 + 36);
        *((_WORD *)v40 + 70) = *(_WORD *)(v52 + 40);
        *((_WORD *)v40 + 69) = *(_WORD *)(v52 + 44);
        *((_WORD *)v40 + 71) = *(_WORD *)(v52 + 48);
        *((_DWORD *)v40 + 36) ^= (*((_DWORD *)v40 + 36) ^ *(_DWORD *)(v52 + 16)) & 1;
        v53 = *((_DWORD *)v40 + 36) ^ ((unsigned __int8)*((_DWORD *)v40 + 36) ^ (unsigned __int8)*(_DWORD *)(v52 + 16)) & 2;
        *((_DWORD *)v40 + 36) = v53;
        v54 = *(_DWORD *)(v52 + 52);
        if ( v54 <= 1 )
          *((_DWORD *)v40 + 36) = v53 & 0xFFFFFFE7;
        else
          *((_DWORD *)v40 + 36) = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)(8 * v54 - 8)) & 0x18;
        *((_DWORD *)v40 + 36) ^= (*((_DWORD *)v40 + 36) ^ (4 * *(_DWORD *)(v52 + 56))) & 4;
        v31 = *((_DWORD *)v40 + 36) ^ ((unsigned __int8)*((_DWORD *)v40 + 36) ^ (unsigned __int8)(32
                                                                                                * *(_DWORD *)(v52 + 72))) & 0x60;
        *((_DWORD *)v40 + 36) = v31;
        v32 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v52 + 76) << 7)) & 0x80;
        *((_DWORD *)v40 + 36) = v32;
        v33 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 76) << 7)) & 0x100;
        *((_DWORD *)v40 + 36) = v33;
        v34 = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 76) << 7)) & 0x200;
        *((_DWORD *)v40 + 36) = v34;
        v35 = v34 ^ ((unsigned __int16)v34 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 80) << 10)) & 0x1C00;
        *((_DWORD *)v40 + 36) = v35;
        v36 = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 84) << 13)) & 0x2000;
        *((_DWORD *)v40 + 36) = v36;
        v37 = v36 ^ ((unsigned __int16)v36 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v52 + 88) << 14)) & 0x4000;
        *((_DWORD *)v40 + 36) = v37;
        v38 = *(_DWORD *)(v52 + 92);
      }
      else if ( v30 )
      {
        v39 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 112LL * v8;
        if ( !*(_DWORD *)(v39 + 4) )
          goto LABEL_43;
        BYTE4(v18[6].Next) |= 1 << *(_DWORD *)v39;
        v40 = (char *)v18 + 40 * v28;
        *((_QWORD *)v40 + 14) = *(_QWORD *)(v39 + 8);
        *((_WORD *)v40 + 60) = *(_WORD *)(v39 + 20);
        *((_WORD *)v40 + 62) = *(_WORD *)(v39 + 24);
        *((_WORD *)v40 + 61) = *(_WORD *)(v39 + 28);
        *((_WORD *)v40 + 63) = *(_WORD *)(v39 + 32);
        *((_WORD *)v40 + 64) = *(_WORD *)(v39 + 36);
        *((_WORD *)v40 + 66) = *(_WORD *)(v39 + 40);
        *((_WORD *)v40 + 65) = *(_WORD *)(v39 + 44);
        *((_WORD *)v40 + 67) = *(_WORD *)(v39 + 48);
        *((_WORD *)v40 + 68) = *(_WORD *)(v39 + 52);
        *((_WORD *)v40 + 70) = *(_WORD *)(v39 + 56);
        *((_WORD *)v40 + 69) = *(_WORD *)(v39 + 60);
        *((_WORD *)v40 + 71) = *(_WORD *)(v39 + 64);
        *((_DWORD *)v40 + 36) ^= (*((_DWORD *)v40 + 36) ^ *(_DWORD *)(v39 + 16)) & 1;
        v41 = *((_DWORD *)v40 + 36) ^ ((unsigned __int8)*((_DWORD *)v40 + 36) ^ (unsigned __int8)*(_DWORD *)(v39 + 16)) & 2;
        *((_DWORD *)v40 + 36) = v41;
        v42 = *(_DWORD *)(v39 + 68);
        if ( v42 <= 1 )
          *((_DWORD *)v40 + 36) = v41 & 0xFFFFFFE7;
        else
          *((_DWORD *)v40 + 36) = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(8 * v42 - 8)) & 0x18;
        *((_DWORD *)v40 + 36) ^= (*((_DWORD *)v40 + 36) ^ (4 * *(_DWORD *)(v39 + 72))) & 4;
        v55 = *((_DWORD *)v40 + 36) ^ ((unsigned __int8)*((_DWORD *)v40 + 36) ^ (unsigned __int8)(32
                                                                                                * *(_DWORD *)(v39 + 88))) & 0x60;
        *((_DWORD *)v40 + 36) = v55;
        v56 = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v39 + 92) << 7)) & 0x80;
        *((_DWORD *)v40 + 36) = v56;
        v57 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v39 + 92) << 7)) & 0x100;
        *((_DWORD *)v40 + 36) = v57;
        v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v39 + 92) << 7)) & 0x200;
        *((_DWORD *)v40 + 36) = v58;
        v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v39 + 96) << 10)) & 0x1C00;
        *((_DWORD *)v40 + 36) = v59;
        v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v39 + 100) << 13)) & 0x2000;
        *((_DWORD *)v40 + 36) = v60;
        v37 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v39 + 104) << 14)) & 0x4000;
        *((_DWORD *)v40 + 36) = v37;
        v38 = *(_DWORD *)(v39 + 108);
      }
      else
      {
        v43 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 104LL * v8;
        if ( !*(_DWORD *)(v43 + 4) )
          goto LABEL_43;
        BYTE4(v18[6].Next) |= 1 << *(_DWORD *)v43;
        v40 = (char *)v18 + 40 * v28;
        *((_QWORD *)v40 + 14) = *(_QWORD *)(v43 + 8);
        *((_WORD *)v40 + 60) = *(_WORD *)(v43 + 20);
        *((_WORD *)v40 + 62) = *(_WORD *)(v43 + 24);
        *((_WORD *)v40 + 61) = *(_WORD *)(v43 + 28);
        *((_WORD *)v40 + 63) = *(_WORD *)(v43 + 32);
        *((_WORD *)v40 + 64) = *(_WORD *)(v43 + 36);
        *((_WORD *)v40 + 66) = *(_WORD *)(v43 + 40);
        *((_WORD *)v40 + 65) = *(_WORD *)(v43 + 44);
        *((_WORD *)v40 + 67) = *(_WORD *)(v43 + 48);
        *((_WORD *)v40 + 68) = *(_WORD *)(v43 + 52);
        *((_WORD *)v40 + 70) = *(_WORD *)(v43 + 56);
        *((_WORD *)v40 + 69) = *(_WORD *)(v43 + 60);
        *((_WORD *)v40 + 71) = *(_WORD *)(v43 + 64);
        *((_DWORD *)v40 + 36) ^= (*((_DWORD *)v40 + 36) ^ *(_DWORD *)(v43 + 16)) & 1;
        v44 = *((_DWORD *)v40 + 36) ^ ((unsigned __int8)*((_DWORD *)v40 + 36) ^ (unsigned __int8)*(_DWORD *)(v43 + 16)) & 2;
        *((_DWORD *)v40 + 36) = v44;
        v45 = *(_DWORD *)(v43 + 68);
        if ( v45 > 1 )
          *((_DWORD *)v40 + 36) = v44 ^ ((unsigned __int8)v44 ^ (unsigned __int8)(8 * v45 - 8)) & 0x18;
        else
          *((_DWORD *)v40 + 36) = v44 & 0xFFFFFFE7;
        *((_DWORD *)v40 + 36) ^= (*((_DWORD *)v40 + 36) ^ (4 * *(_DWORD *)(v43 + 72))) & 4;
        v46 = *((_DWORD *)v40 + 36) ^ ((unsigned __int8)*((_DWORD *)v40 + 36) ^ (unsigned __int8)(32
                                                                                                * *(_DWORD *)(v43 + 76))) & 0x60;
        *((_DWORD *)v40 + 36) = v46;
        v47 = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v43 + 80) << 7)) & 0x80;
        *((_DWORD *)v40 + 36) = v47;
        v48 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v43 + 80) << 7)) & 0x100;
        *((_DWORD *)v40 + 36) = v48;
        v49 = v48 ^ ((unsigned __int16)v48 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v43 + 80) << 7)) & 0x200;
        *((_DWORD *)v40 + 36) = v49;
        v50 = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v43 + 84) << 10)) & 0x1C00;
        *((_DWORD *)v40 + 36) = v50;
        v51 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v43 + 88) << 13)) & 0x2000;
        *((_DWORD *)v40 + 36) = v51;
        v37 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v43 + 92) << 14)) & 0x4000;
        *((_DWORD *)v40 + 36) = v37;
        v38 = *(_DWORD *)(v43 + 96);
      }
      *((_DWORD *)v40 + 36) = v37 ^ (v37 ^ (v38 << 15)) & 0x18000;
      ++v28;
LABEL_43:
      if ( ++v8 >= a2->DmaCompleted.EngineOrdinal )
        goto LABEL_17;
    }
  }
LABEL_20:
  if ( bTracingEnabled )
  {
    if ( v4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqx(v67.LowPart, (unsigned int)&EventHSyncInterrupt, a3, a1[1].Alignment, v64, v67.QuadPart);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_pqx(v11, (unsigned int)&EventVSyncInterrupt, a3, a1[1].Alignment, v64, v67.QuadPart);
    }
  }
  return v10;
}
