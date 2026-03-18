/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000D410
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C520 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx @ 0x1C00246D8 (McTemplateK0pqx.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0028134 (-VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        struct _SLIST_ENTRY *a3,
        __int64 a4)
{
  bool v4; // r12
  UINT SubmissionFenceId; // edx
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  PSLIST_ENTRY v11; // rcx
  unsigned int Next; // r9d
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  LARGE_INTEGER v15; // rcx
  PSLIST_ENTRY v16; // rax
  __int64 v17; // rdx
  PSLIST_ENTRY v18; // rdi
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
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rcx
  char *v35; // r8
  char *v36; // rdx
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode; // eax
  char *v50; // r8
  int v51; // ecx
  int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v62; // r8
  int v63; // ecx
  int v64; // ecx
  unsigned int v65; // ecx
  unsigned int Rotation; // eax
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  int v72; // ecx
  int v73; // eax
  _QWORD *v74; // rax
  UINT v75; // [rsp+30h] [rbp-88h]
  int v76; // [rsp+34h] [rbp-84h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-80h] BYREF
  LARGE_INTEGER v78; // [rsp+40h] [rbp-78h]
  LARGE_INTEGER v79; // [rsp+48h] [rbp-70h]
  __int64 v80; // [rsp+50h] [rbp-68h] BYREF
  __int64 v81; // [rsp+58h] [rbp-60h]
  __int64 v82; // [rsp+60h] [rbp-58h]
  int v83; // [rsp+68h] [rbp-50h]

  v4 = 0;
  v76 = (int)a3;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v78.QuadPart = 0LL;
  v75 = SubmissionFenceId;
  if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    v4 = (a2->Flags.Value & 2) != 0;
  v9 = 0;
  v10 = 0;
  v11 = *(PSLIST_ENTRY *)(a1[1].Alignment + 2456);
  Next = (unsigned int)v11[5].Next;
  if ( Next )
  {
    a3 = v11[7].Next;
    while ( *((_DWORD *)&a3[235 * v10 + 66].Next + 3) != SubmissionFenceId )
    {
      if ( ++v10 >= Next )
        goto LABEL_33;
    }
    if ( v10 != -1 && v10 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
    {
      _mm_lfence();
      v13 = *(&a1[189].Region + v10);
      if ( !v4 )
      {
        LODWORD(v14) = 1;
        if ( _InterlockedExchange((volatile __int32 *)(v13 + 28072), 0) )
        {
          v79 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( !*(_QWORD *)(v13 + 28064) )
            *(union _LARGE_INTEGER *)(v13 + 28064) = PerformanceFrequency;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 28088), 0LL, 0LL);
          v15 = v79;
          v24 = v23;
          v25 = v79.QuadPart - *(_QWORD *)(v13 + 28008);
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
          if ( !*(_QWORD *)(v13 + 28064) )
            *(union _LARGE_INTEGER *)(v13 + 28064) = PerformanceFrequency;
        }
        *(_QWORD *)(v13 + 28016) += (unsigned int)v14;
        *(LARGE_INTEGER *)(v13 + 28008) = v15;
        if ( *(_BYTE *)(v13 + 8) && !*((_BYTE *)&a1[8].HeaderX64 + 8) )
        {
          Region = a1->Region;
          v80 = 0LL;
          v81 = 0LL;
          v82 = 0LL;
          v83 = 0;
          v27 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int64 *))DxgCoreInterface[59])(
                  Region,
                  0LL,
                  0LL,
                  &v80);
          v28 = 0LL;
          if ( v27 >= 0 )
            v28 = v81;
          *(_QWORD *)(v13 + 28024) = v28;
        }
      }
LABEL_13:
      v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 28496));
      v11 = v16;
      if ( !v16 )
      {
LABEL_20:
        LOBYTE(SubmissionFenceId) = v75;
        goto LABEL_21;
      }
      v18 = v16 - 1;
      InterruptType = a2->InterruptType;
      *((_BYTE *)&v18[6].Next + 8) &= ~1u;
      LODWORD(v11->Next) = InterruptType;
      LODWORD(v18[6].Next) = v76;
      *((_DWORD *)&v18[5].Next + 3) = v75;
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
        v78 = PhysicalAddress;
        goto LABEL_17;
      }
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      if ( (unsigned int)EngineOrdinal >= 0xA )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdAssertion(EngineOrdinal, v17);
        v74[3] = a1;
        v74[4] = a2->DmaCompleted.SubmissionFenceId;
        v74[5] = a2->DmaCompleted.EngineOrdinal;
        WdLogEvent5_WdAssertion(v74);
        goto LABEL_17;
      }
      Alignment = a1[1].Alignment;
      v31 = 0;
      v32 = *(_BYTE *)(Alignment + 2374);
      v33 = *(_BYTE *)(Alignment + 2375);
      if ( !(_DWORD)EngineOrdinal )
      {
LABEL_17:
        if ( !v4 )
        {
          v18[5].Next = *(struct _SLIST_ENTRY **)(v13 + 28016);
          *((_QWORD *)&v18[3].Next + 1) = *(_QWORD *)(v13 + 28008);
          v18[4].Next = *(struct _SLIST_ENTRY **)(v13 + 28024);
        }
        *((_QWORD *)&v18[4].Next + 1) = a4;
        ExpInterlockedPushEntrySList(a1 + 122, v18 + 2);
        goto LABEL_20;
      }
      while ( 1 )
      {
        pMultiPlaneOverlayVsyncInfo = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
        if ( v32 )
        {
          v35 = (char *)pMultiPlaneOverlayVsyncInfo + 96 * v9;
          if ( *((_DWORD *)v35 + 1) )
          {
            HIDWORD(v18[6].Next) ^= ((unsigned __int16)HIDWORD(v18[6].Next) ^ (unsigned __int16)(HIDWORD(v18[6].Next) | (1 << *(_DWORD *)v35))) & 0x3FF;
            v36 = (char *)v18 + 40 * v31;
            *((_QWORD *)v36 + 14) = *((_QWORD *)v35 + 1);
            *((_WORD *)v36 + 60) = *((_WORD *)v35 + 10);
            v37 = *((_DWORD *)v36 + 36);
            *((_WORD *)v36 + 62) = *((_WORD *)v35 + 12);
            *((_WORD *)v36 + 61) = *((_WORD *)v35 + 14);
            *((_WORD *)v36 + 63) = *((_WORD *)v35 + 16);
            *((_WORD *)v36 + 64) = *((_WORD *)v35 + 18);
            *((_WORD *)v36 + 66) = *((_WORD *)v35 + 20);
            *((_WORD *)v36 + 65) = *((_WORD *)v35 + 22);
            *((_WORD *)v36 + 67) = *((_WORD *)v35 + 24);
            *((_WORD *)v36 + 68) = *((_WORD *)v35 + 18);
            *((_WORD *)v36 + 70) = *((_WORD *)v35 + 20);
            *((_WORD *)v36 + 69) = *((_WORD *)v35 + 22);
            *((_WORD *)v36 + 71) = *((_WORD *)v35 + 24);
            *((_DWORD *)v36 + 36) ^= (*((_DWORD *)v35 + 4) ^ v37) & 1;
            v38 = *((_DWORD *)v36 + 36) ^ ((unsigned __int8)*((_DWORD *)v36 + 36) ^ (unsigned __int8)*((_DWORD *)v35 + 4)) & 2;
            *((_DWORD *)v36 + 36) = v38;
            v39 = v38 & 0xFFFFFFE7;
            v40 = *((_DWORD *)v35 + 13);
            if ( v40 > 1 )
              v39 |= 8 * (((_BYTE)v40 - 1) & 3);
            *((_DWORD *)v36 + 36) = v39;
            v41 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)(4 * *((_DWORD *)v35 + 14))) & 4;
            *((_DWORD *)v36 + 36) = v41;
            v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(32 * *((_DWORD *)v35 + 18))) & 0x60;
            *((_DWORD *)v36 + 36) = v42;
            v43 = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v35 + 19) << 7)) & 0x80;
            *((_DWORD *)v36 + 36) = v43;
            v44 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v35 + 19) << 7)) & 0x100;
            *((_DWORD *)v36 + 36) = v44;
            v45 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v35 + 19) << 7)) & 0x200;
            *((_DWORD *)v36 + 36) = v45;
            v46 = v45 ^ ((unsigned __int16)v45 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v35 + 20) << 10)) & 0x1C00;
            *((_DWORD *)v36 + 36) = v46;
            v47 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v35 + 21) << 13)) & 0x2000;
            *((_DWORD *)v36 + 36) = v47;
            v48 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v35 + 22) << 14)) & 0x4000;
            *((_DWORD *)v36 + 36) = v48;
            StereoFlipMode = *((_DWORD *)v35 + 23);
LABEL_55:
            *((_DWORD *)v36 + 36) = v48 ^ (v48 ^ (StereoFlipMode << 15)) & 0x18000;
            ++v31;
          }
        }
        else if ( v33 )
        {
          v50 = (char *)pMultiPlaneOverlayVsyncInfo + 112 * v9;
          if ( *((_DWORD *)v50 + 1) )
          {
            HIDWORD(v18[6].Next) ^= ((unsigned __int16)HIDWORD(v18[6].Next) ^ (unsigned __int16)(HIDWORD(v18[6].Next) | (1 << *(_DWORD *)v50))) & 0x3FF;
            v36 = (char *)v18 + 40 * v31;
            *((_QWORD *)v36 + 14) = *((_QWORD *)v50 + 1);
            *((_WORD *)v36 + 60) = *((_WORD *)v50 + 10);
            v51 = *((_DWORD *)v36 + 36);
            *((_WORD *)v36 + 62) = *((_WORD *)v50 + 12);
            *((_WORD *)v36 + 61) = *((_WORD *)v50 + 14);
            *((_WORD *)v36 + 63) = *((_WORD *)v50 + 16);
            *((_WORD *)v36 + 64) = *((_WORD *)v50 + 18);
            *((_WORD *)v36 + 66) = *((_WORD *)v50 + 20);
            *((_WORD *)v36 + 65) = *((_WORD *)v50 + 22);
            *((_WORD *)v36 + 67) = *((_WORD *)v50 + 24);
            *((_WORD *)v36 + 68) = *((_WORD *)v50 + 26);
            *((_WORD *)v36 + 70) = *((_WORD *)v50 + 28);
            *((_WORD *)v36 + 69) = *((_WORD *)v50 + 30);
            *((_WORD *)v36 + 71) = *((_WORD *)v50 + 32);
            *((_DWORD *)v36 + 36) ^= (*((_DWORD *)v50 + 4) ^ v51) & 1;
            v52 = *((_DWORD *)v36 + 36) ^ (*((_DWORD *)v50 + 4) ^ *((_DWORD *)v36 + 36)) & 2;
            *((_DWORD *)v36 + 36) = v52;
            v53 = v52 & 0xFFFFFFE7;
            v54 = *((_DWORD *)v50 + 17);
            if ( v54 > 1 )
              v53 |= 8 * (((_BYTE)v54 - 1) & 3);
            *((_DWORD *)v36 + 36) = v53;
            v55 = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)(4 * *((_DWORD *)v50 + 18))) & 4;
            *((_DWORD *)v36 + 36) = v55;
            v56 = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)(32 * *((_DWORD *)v50 + 22))) & 0x60;
            *((_DWORD *)v36 + 36) = v56;
            v57 = v56 ^ ((unsigned __int8)v56 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v50 + 23) << 7)) & 0x80;
            *((_DWORD *)v36 + 36) = v57;
            v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 23) << 7)) & 0x100;
            *((_DWORD *)v36 + 36) = v58;
            v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 23) << 7)) & 0x200;
            *((_DWORD *)v36 + 36) = v59;
            v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 24) << 10)) & 0x1C00;
            *((_DWORD *)v36 + 36) = v60;
            v61 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 25) << 13)) & 0x2000;
            *((_DWORD *)v36 + 36) = v61;
            v48 = v61 ^ ((unsigned __int16)v61 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 26) << 14)) & 0x4000;
            *((_DWORD *)v36 + 36) = v48;
            StereoFlipMode = *((_DWORD *)v50 + 27);
            goto LABEL_55;
          }
        }
        else
        {
          v62 = &pMultiPlaneOverlayVsyncInfo[v9];
          if ( v62->Enabled )
          {
            HIDWORD(v18[6].Next) ^= ((unsigned __int16)HIDWORD(v18[6].Next) ^ (unsigned __int16)(HIDWORD(v18[6].Next) | (1 << v62->LayerIndex))) & 0x3FF;
            v36 = (char *)v18 + 40 * v31;
            *((_QWORD *)v36 + 14) = v62->PhysicalAddress.QuadPart;
            *((_WORD *)v36 + 60) = v62->PlaneAttributes.SrcRect.left;
            v63 = *((_DWORD *)v36 + 36);
            *((_WORD *)v36 + 62) = v62->PlaneAttributes.SrcRect.top;
            *((_WORD *)v36 + 61) = v62->PlaneAttributes.SrcRect.right;
            *((_WORD *)v36 + 63) = v62->PlaneAttributes.SrcRect.bottom;
            *((_WORD *)v36 + 64) = v62->PlaneAttributes.DstRect.left;
            *((_WORD *)v36 + 66) = v62->PlaneAttributes.DstRect.top;
            *((_WORD *)v36 + 65) = v62->PlaneAttributes.DstRect.right;
            *((_WORD *)v36 + 67) = v62->PlaneAttributes.DstRect.bottom;
            *((_WORD *)v36 + 68) = v62->PlaneAttributes.ClipRect.left;
            *((_WORD *)v36 + 70) = v62->PlaneAttributes.ClipRect.top;
            *((_WORD *)v36 + 69) = v62->PlaneAttributes.ClipRect.right;
            *((_WORD *)v36 + 71) = v62->PlaneAttributes.ClipRect.bottom;
            *((_DWORD *)v36 + 36) ^= (v62->PlaneAttributes.Flags.Value ^ v63) & 1;
            v64 = *((_DWORD *)v36 + 36) ^ (v62->PlaneAttributes.Flags.Value ^ *((_DWORD *)v36 + 36)) & 2;
            *((_DWORD *)v36 + 36) = v64;
            v65 = v64 & 0xFFFFFFE7;
            Rotation = v62->PlaneAttributes.Rotation;
            if ( Rotation > 1 )
              v65 |= 8 * (((_BYTE)Rotation - 1) & 3);
            *((_DWORD *)v36 + 36) = v65;
            v67 = v65 ^ ((unsigned __int8)v65 ^ (unsigned __int8)(4 * v62->PlaneAttributes.Blend.Value)) & 4;
            *((_DWORD *)v36 + 36) = v67;
            v68 = v67 ^ ((unsigned __int8)v67 ^ (unsigned __int8)(32 * v62->PlaneAttributes.VideoFrameFormat)) & 0x60;
            *((_DWORD *)v36 + 36) = v68;
            v69 = v68 ^ ((unsigned __int8)v68 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)&v62->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x80;
            *((_DWORD *)v36 + 36) = v69;
            v70 = v69 ^ ((unsigned __int16)v69 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v62->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x100;
            *((_DWORD *)v36 + 36) = v70;
            v71 = v70 ^ ((unsigned __int16)v70 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v62->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x200;
            *((_DWORD *)v36 + 36) = v71;
            v72 = v71 ^ ((unsigned __int16)v71 ^ (unsigned __int16)((unsigned __int16)v62->PlaneAttributes.StereoFormat << 10)) & 0x1C00;
            *((_DWORD *)v36 + 36) = v72;
            v73 = v72 ^ ((unsigned __int16)v72 ^ (v62->PlaneAttributes.StereoLeftViewFrame0 << 13)) & 0x2000;
            *((_DWORD *)v36 + 36) = v73;
            v48 = v73 ^ ((unsigned __int16)v73 ^ (v62->PlaneAttributes.StereoBaseViewFrame0 << 14)) & 0x4000;
            *((_DWORD *)v36 + 36) = v48;
            StereoFlipMode = v62->PlaneAttributes.StereoFlipMode;
            goto LABEL_55;
          }
        }
        if ( ++v9 >= a2->DmaCompleted.EngineOrdinal )
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
          v78.LowPart,
          (unsigned int)&EventHSyncInterrupt,
          (_DWORD)a3,
          a1[1].Alignment,
          SubmissionFenceId,
          v78.QuadPart);
    }
    else if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqx(
        (_DWORD)v11,
        (unsigned int)&EventVSyncInterrupt,
        (_DWORD)a3,
        a1[1].Alignment,
        SubmissionFenceId,
        v78.QuadPart);
    }
  }
  return v10;
}
