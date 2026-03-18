/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000C900
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx @ 0x1C0021D8C (McTemplateK0pqx.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00255EC (-VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // r12
  unsigned int v8; // r13d
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
  unsigned int v20; // eax
  LARGE_INTEGER PhysicalAddress; // rax
  signed __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  ULONGLONG Region; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 EngineOrdinal; // rcx
  ULONGLONG Alignment; // rax
  unsigned int v31; // r9d
  char v32; // r10
  char v33; // r11
  UINT64 v34; // r8
  char *v35; // rdx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  UINT64 v47; // r8
  int v48; // ecx
  int v49; // ecx
  unsigned int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  UINT64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  unsigned int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  _QWORD *v67; // rax
  UINT v68; // [rsp+30h] [rbp-78h]
  int v69; // [rsp+34h] [rbp-74h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-70h] BYREF
  LARGE_INTEGER v71; // [rsp+40h] [rbp-68h]
  LARGE_INTEGER v72; // [rsp+48h] [rbp-60h]
  __int64 v73; // [rsp+50h] [rbp-58h] BYREF
  __int64 v74; // [rsp+58h] [rbp-50h]
  __int64 v75; // [rsp+60h] [rbp-48h]

  v71.QuadPart = 0LL;
  v4 = 0;
  v69 = a3;
  if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    v4 = (a2->Flags.Value & 2) != 0;
  v8 = 0;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v10 = 0;
  v68 = SubmissionFenceId;
  v11 = *(_QWORD *)(a1[1].Alignment + 2304);
  v12 = *(_DWORD *)(v11 + 80);
  if ( v12 )
  {
    a3 = *(_QWORD *)(v11 + 112);
    while ( *(_DWORD *)(3760LL * v10 + a3 + 1068) != SubmissionFenceId )
    {
      if ( ++v10 >= v12 )
        goto LABEL_33;
    }
    if ( v10 != -1 && v10 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
    {
      _mm_lfence();
      v13 = *(&a1[188].Alignment + v10);
      if ( !v4 )
      {
        LODWORD(v14) = 1;
        if ( _InterlockedExchange((volatile __int32 *)(v13 + 23592), 0) )
        {
          v72 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( !*(_QWORD *)(v13 + 23584) )
            *(union _LARGE_INTEGER *)(v13 + 23584) = PerformanceFrequency;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 23608), 0LL, 0LL);
          v15 = v72;
          v24 = v23;
          v25 = v72.QuadPart - *(_QWORD *)(v13 + 23528);
          if ( v24 )
          {
            if ( v25 > v24 )
            {
              v14 = v25 / v24;
              if ( !(unsigned int)(v25 / v24) )
                goto LABEL_13;
            }
          }
        }
        else
        {
          v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( !*(_QWORD *)(v13 + 23584) )
            *(union _LARGE_INTEGER *)(v13 + 23584) = PerformanceFrequency;
        }
        *(_QWORD *)(v13 + 23536) += (unsigned int)v14;
        *(LARGE_INTEGER *)(v13 + 23528) = v15;
        if ( *(_BYTE *)(v13 + 8) && !*((_BYTE *)&a1[8].HeaderX64 + 4) )
        {
          Region = a1->Region;
          v73 = 0LL;
          v74 = 0LL;
          v75 = 0LL;
          v27 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int64 *))DxgCoreInterface[48])(
                  Region,
                  0LL,
                  0LL,
                  &v73);
          v28 = 0LL;
          if ( v27 >= 0 )
            v28 = v74;
          *(_QWORD *)(v13 + 23544) = v28;
        }
      }
LABEL_13:
      v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 24016));
      if ( !v16 )
      {
LABEL_20:
        LOBYTE(SubmissionFenceId) = v68;
        goto LABEL_21;
      }
      v18 = v16 - 1;
      InterruptType = a2->InterruptType;
      *((_BYTE *)&v18[6].Next + 8) &= ~1u;
      LODWORD(v18[1].Next) = InterruptType;
      LODWORD(v18[6].Next) = v69;
      *((_DWORD *)&v18[5].Next + 3) = v68;
      v20 = HIDWORD(v18[6].Next) & 0xFFFFFC00;
      v18[3].Next = (struct _SLIST_ENTRY *)a1;
      HIDWORD(v18[6].Next) = v20;
      *((_DWORD *)&v18[5].Next + 2) = v10;
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
        HIDWORD(v18[6].Next) = v20 | 1;
        PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
        v18[7].Next = (struct _SLIST_ENTRY *)PhysicalAddress.QuadPart;
        v71 = PhysicalAddress;
        goto LABEL_17;
      }
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      if ( (unsigned int)EngineOrdinal >= 0xA )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(EngineOrdinal, v17);
        v67[3] = a1;
        v67[4] = a2->DmaCompleted.SubmissionFenceId;
        v67[5] = a2->DmaCompleted.EngineOrdinal;
        WdLogEvent5_WdAssertion(v67);
        goto LABEL_17;
      }
      Alignment = a1[1].Alignment;
      v31 = 0;
      v32 = *(_BYTE *)(Alignment + 2230);
      v33 = *(_BYTE *)(Alignment + 2231);
      if ( !(_DWORD)EngineOrdinal )
      {
LABEL_17:
        if ( !v4 )
        {
          v18[5].Next = *(struct _SLIST_ENTRY **)(v13 + 23536);
          *((_QWORD *)&v18[3].Next + 1) = *(_QWORD *)(v13 + 23528);
          v18[4].Next = *(struct _SLIST_ENTRY **)(v13 + 23544);
        }
        *((_QWORD *)&v18[4].Next + 1) = a4;
        ExpInterlockedPushEntrySList(a1 + 121, v18 + 2);
        goto LABEL_20;
      }
      while ( 1 )
      {
        if ( v32 )
        {
          v34 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 96LL * v8;
          if ( *(_DWORD *)(v34 + 4) )
          {
            HIDWORD(v18[6].Next) ^= ((unsigned __int16)HIDWORD(v18[6].Next) ^ (unsigned __int16)(HIDWORD(v18[6].Next) | (1 << *(_DWORD *)v34))) & 0x3FF;
            v35 = (char *)v18 + 40 * v31;
            *((_QWORD *)v35 + 14) = *(_QWORD *)(v34 + 8);
            *((_WORD *)v35 + 60) = *(_WORD *)(v34 + 20);
            v36 = *((_DWORD *)v35 + 36);
            *((_WORD *)v35 + 62) = *(_WORD *)(v34 + 24);
            *((_WORD *)v35 + 61) = *(_WORD *)(v34 + 28);
            *((_WORD *)v35 + 63) = *(_WORD *)(v34 + 32);
            *((_WORD *)v35 + 64) = *(_WORD *)(v34 + 36);
            *((_WORD *)v35 + 66) = *(_WORD *)(v34 + 40);
            *((_WORD *)v35 + 65) = *(_WORD *)(v34 + 44);
            *((_WORD *)v35 + 67) = *(_WORD *)(v34 + 48);
            *((_WORD *)v35 + 68) = *(_WORD *)(v34 + 36);
            *((_WORD *)v35 + 70) = *(_WORD *)(v34 + 40);
            *((_WORD *)v35 + 69) = *(_WORD *)(v34 + 44);
            *((_WORD *)v35 + 71) = *(_WORD *)(v34 + 48);
            *((_DWORD *)v35 + 36) ^= (*(_DWORD *)(v34 + 16) ^ v36) & 1;
            v37 = *((_DWORD *)v35 + 36) ^ (*(_DWORD *)(v34 + 16) ^ *((_DWORD *)v35 + 36)) & 2;
            *((_DWORD *)v35 + 36) = v37;
            v38 = *(_DWORD *)(v34 + 52);
            if ( v38 > 1 )
              *((_DWORD *)v35 + 36) = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)(8 * v38 - 8)) & 0x18;
            else
              *((_DWORD *)v35 + 36) = v37 & 0xFFFFFFE7;
            *((_DWORD *)v35 + 36) ^= (*((_DWORD *)v35 + 36) ^ (4 * *(_DWORD *)(v34 + 56))) & 4;
            v39 = *((_DWORD *)v35 + 36) ^ ((unsigned __int8)*((_DWORD *)v35 + 36) ^ (unsigned __int8)(32 * *(_DWORD *)(v34 + 72))) & 0x60;
            *((_DWORD *)v35 + 36) = v39;
            v40 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v34 + 76) << 7)) & 0x80;
            *((_DWORD *)v35 + 36) = v40;
            v41 = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 76) << 7)) & 0x100;
            *((_DWORD *)v35 + 36) = v41;
            v42 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 76) << 7)) & 0x200;
            *((_DWORD *)v35 + 36) = v42;
            v43 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 80) << 10)) & 0x1C00;
            *((_DWORD *)v35 + 36) = v43;
            v44 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 84) << 13)) & 0x2000;
            *((_DWORD *)v35 + 36) = v44;
            v45 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v34 + 88) << 14)) & 0x4000;
            *((_DWORD *)v35 + 36) = v45;
            v46 = *(_DWORD *)(v34 + 92);
LABEL_58:
            *((_DWORD *)v35 + 36) = v45 ^ (v45 ^ (v46 << 15)) & 0x18000;
            ++v31;
          }
        }
        else if ( v33 )
        {
          v47 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 112LL * v8;
          if ( *(_DWORD *)(v47 + 4) )
          {
            HIDWORD(v18[6].Next) ^= ((unsigned __int16)HIDWORD(v18[6].Next) ^ (unsigned __int16)(HIDWORD(v18[6].Next) | (1 << *(_DWORD *)v47))) & 0x3FF;
            v35 = (char *)v18 + 40 * v31;
            *((_QWORD *)v35 + 14) = *(_QWORD *)(v47 + 8);
            *((_WORD *)v35 + 60) = *(_WORD *)(v47 + 20);
            v48 = *((_DWORD *)v35 + 36);
            *((_WORD *)v35 + 62) = *(_WORD *)(v47 + 24);
            *((_WORD *)v35 + 61) = *(_WORD *)(v47 + 28);
            *((_WORD *)v35 + 63) = *(_WORD *)(v47 + 32);
            *((_WORD *)v35 + 64) = *(_WORD *)(v47 + 36);
            *((_WORD *)v35 + 66) = *(_WORD *)(v47 + 40);
            *((_WORD *)v35 + 65) = *(_WORD *)(v47 + 44);
            *((_WORD *)v35 + 67) = *(_WORD *)(v47 + 48);
            *((_WORD *)v35 + 68) = *(_WORD *)(v47 + 52);
            *((_WORD *)v35 + 70) = *(_WORD *)(v47 + 56);
            *((_WORD *)v35 + 69) = *(_WORD *)(v47 + 60);
            *((_WORD *)v35 + 71) = *(_WORD *)(v47 + 64);
            *((_DWORD *)v35 + 36) ^= (*(_DWORD *)(v47 + 16) ^ v48) & 1;
            v49 = *((_DWORD *)v35 + 36) ^ (*(_DWORD *)(v47 + 16) ^ *((_DWORD *)v35 + 36)) & 2;
            *((_DWORD *)v35 + 36) = v49;
            v50 = *(_DWORD *)(v47 + 68);
            if ( v50 > 1 )
              *((_DWORD *)v35 + 36) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(8 * v50 - 8)) & 0x18;
            else
              *((_DWORD *)v35 + 36) = v49 & 0xFFFFFFE7;
            *((_DWORD *)v35 + 36) ^= (*((_DWORD *)v35 + 36) ^ (4 * *(_DWORD *)(v47 + 72))) & 4;
            v51 = *((_DWORD *)v35 + 36) ^ ((unsigned __int8)*((_DWORD *)v35 + 36) ^ (unsigned __int8)(32 * *(_DWORD *)(v47 + 88))) & 0x60;
            *((_DWORD *)v35 + 36) = v51;
            v52 = v51 ^ ((unsigned __int8)v51 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v47 + 92) << 7)) & 0x80;
            *((_DWORD *)v35 + 36) = v52;
            v53 = v52 ^ ((unsigned __int16)v52 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v47 + 92) << 7)) & 0x100;
            *((_DWORD *)v35 + 36) = v53;
            v54 = v53 ^ ((unsigned __int16)v53 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v47 + 92) << 7)) & 0x200;
            *((_DWORD *)v35 + 36) = v54;
            v55 = v54 ^ ((unsigned __int16)v54 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v47 + 96) << 10)) & 0x1C00;
            *((_DWORD *)v35 + 36) = v55;
            v56 = v55 ^ ((unsigned __int16)v55 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v47 + 100) << 13)) & 0x2000;
            *((_DWORD *)v35 + 36) = v56;
            v45 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v47 + 104) << 14)) & 0x4000;
            *((_DWORD *)v35 + 36) = v45;
            v46 = *(_DWORD *)(v47 + 108);
            goto LABEL_58;
          }
        }
        else
        {
          v57 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 104LL * v8;
          if ( *(_DWORD *)(v57 + 4) )
          {
            HIDWORD(v18[6].Next) ^= ((unsigned __int16)HIDWORD(v18[6].Next) ^ (unsigned __int16)(HIDWORD(v18[6].Next) | (1 << *(_DWORD *)v57))) & 0x3FF;
            v35 = (char *)v18 + 40 * v31;
            *((_QWORD *)v35 + 14) = *(_QWORD *)(v57 + 8);
            *((_WORD *)v35 + 60) = *(_WORD *)(v57 + 20);
            v58 = *((_DWORD *)v35 + 36);
            *((_WORD *)v35 + 62) = *(_WORD *)(v57 + 24);
            *((_WORD *)v35 + 61) = *(_WORD *)(v57 + 28);
            *((_WORD *)v35 + 63) = *(_WORD *)(v57 + 32);
            *((_WORD *)v35 + 64) = *(_WORD *)(v57 + 36);
            *((_WORD *)v35 + 66) = *(_WORD *)(v57 + 40);
            *((_WORD *)v35 + 65) = *(_WORD *)(v57 + 44);
            *((_WORD *)v35 + 67) = *(_WORD *)(v57 + 48);
            *((_WORD *)v35 + 68) = *(_WORD *)(v57 + 52);
            *((_WORD *)v35 + 70) = *(_WORD *)(v57 + 56);
            *((_WORD *)v35 + 69) = *(_WORD *)(v57 + 60);
            *((_WORD *)v35 + 71) = *(_WORD *)(v57 + 64);
            *((_DWORD *)v35 + 36) ^= (*(_DWORD *)(v57 + 16) ^ v58) & 1;
            v59 = *((_DWORD *)v35 + 36) ^ (*(_DWORD *)(v57 + 16) ^ *((_DWORD *)v35 + 36)) & 2;
            *((_DWORD *)v35 + 36) = v59;
            v60 = *(_DWORD *)(v57 + 68);
            if ( v60 > 1 )
              *((_DWORD *)v35 + 36) = v59 ^ ((unsigned __int8)v59 ^ (unsigned __int8)(8 * v60 - 8)) & 0x18;
            else
              *((_DWORD *)v35 + 36) = v59 & 0xFFFFFFE7;
            *((_DWORD *)v35 + 36) ^= (*((_DWORD *)v35 + 36) ^ (4 * *(_DWORD *)(v57 + 72))) & 4;
            v61 = *((_DWORD *)v35 + 36) ^ ((unsigned __int8)*((_DWORD *)v35 + 36) ^ (unsigned __int8)(32 * *(_DWORD *)(v57 + 76))) & 0x60;
            *((_DWORD *)v35 + 36) = v61;
            v62 = v61 ^ ((unsigned __int8)v61 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v57 + 80) << 7)) & 0x80;
            *((_DWORD *)v35 + 36) = v62;
            v63 = v62 ^ ((unsigned __int16)v62 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 80) << 7)) & 0x100;
            *((_DWORD *)v35 + 36) = v63;
            v64 = v63 ^ ((unsigned __int16)v63 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 80) << 7)) & 0x200;
            *((_DWORD *)v35 + 36) = v64;
            v65 = v64 ^ ((unsigned __int16)v64 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 84) << 10)) & 0x1C00;
            *((_DWORD *)v35 + 36) = v65;
            v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 88) << 13)) & 0x2000;
            *((_DWORD *)v35 + 36) = v66;
            v45 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 92) << 14)) & 0x4000;
            *((_DWORD *)v35 + 36) = v45;
            v46 = *(_DWORD *)(v57 + 96);
            goto LABEL_58;
          }
        }
        if ( ++v8 >= a2->DmaCompleted.EngineOrdinal )
          goto LABEL_17;
      }
    }
  }
  else
  {
LABEL_33:
    v10 = -1;
  }
LABEL_21:
  if ( bTracingEnabled )
  {
    if ( v4 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqx(
          v71.LowPart,
          (unsigned int)&EventHSyncInterrupt,
          a3,
          a1[1].Alignment,
          SubmissionFenceId,
          v71.QuadPart);
    }
    else if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqx(v11, (unsigned int)&EventVSyncInterrupt, a3, a1[1].Alignment, SubmissionFenceId, v71.QuadPart);
    }
  }
  return v10;
}
