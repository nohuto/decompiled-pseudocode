/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01AD6FC
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016F1AC (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C0014A30 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C001DD80 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C007E7E8 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C007EA24 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rax
  ADAPTER_DISPLAY **v9; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v25; // xmm2
  __int128 v26; // xmm1
  D3DDDIFORMAT Format; // eax
  int v28; // eax
  __int64 v29; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v30; // edx
  LONG v31; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rax
  struct _VIDMM_REGION *v35; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_DESCRIBEALLOCATION v36; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v37; // [rsp+70h] [rbp-90h] BYREF
  __m128i v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  _DWORD v40[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v41; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v42; // [rsp+148h] [rbp+48h]

  v6 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v6, a3, a4);
    v7[3] = -1071775482LL;
    v7[4] = this;
    v7[5] = a2;
    WdLogEvent5_WdEvent(v7);
    return 3223191814LL;
  }
  v9 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 209);
  if ( v9 )
    IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v9, ((unsigned int)v6 >> 6) & 0xF);
  else
    IsVSyncAvailable = 1;
  if ( !IsVSyncAvailable )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v6, a3, a4);
    v11[3] = 0LL;
    v11[4] = this;
    v11[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v11);
    return 0LL;
  }
  memset(v40, 0, sizeof(v40));
  DxgkpGetDodPrimaryInfo(this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v40);
  if ( !v40[8] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14 = -1073741811LL;
LABEL_10:
    v13[3] = v14;
    v13[4] = this;
    v13[5] = a2;
    v15 = *((unsigned int *)a2 + 4);
LABEL_11:
    v13[6] = v15;
LABEL_12:
    WdLogEvent5_WdError(v13);
    return (unsigned int)v14;
  }
  memset(&v36, 0, sizeof(v36));
  v16 = *((_QWORD *)a2 + 6);
  v36.Flags.Value |= 1u;
  v36.Rotation = -1;
  v36.hAllocation = *(HANDLE *)(v16 + 16);
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v36, v17);
  v14 = v18;
  if ( v18 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v13[3] = v14;
    v13[4] = this;
    v13[5] = a2;
    v13[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v13[7] = *((unsigned int *)a2 + 4);
    goto LABEL_12;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*((_QWORD *)this + 209) + 2304LL),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v25 = *(__m128i *)DisplayModeInfo;
  v26 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v38 = v25;
  v39 = v26;
  if ( *(_QWORD *)&v36.Width == __PAIR64__(v25.m128i_u32[1], (unsigned int)DisplayModeInfo) )
  {
    v22 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v36.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v36.Format;
    if ( v38.m128i_i32[2] != 21 )
      v22 = v38.m128i_u32[2];
    if ( Format == (_DWORD)v22 )
    {
      v37.VidPnSourceId = 0;
      memset(&v37.pSource, 0, 0x38uLL);
      v28 = VIDMM_EXPORT::VidMmBeginCPUAccess(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2u,
              0,
              v35,
              &v37.pSource);
      v14 = v28;
      if ( v28 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        goto LABEL_10;
      }
      v41 = 0LL;
      v42 = 0LL;
      v30 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v37.VidPnSourceId = v30;
      if ( (unsigned int)(v36.Format - 21) > 1 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        LODWORD(v14) = -1073741811;
        v13[3] = -1073741811LL;
        v13[4] = this;
        v13[5] = a2;
        v15 = v36.Format;
        goto LABEL_11;
      }
      v37.BytesPerPixel = 4;
      if ( HIDWORD(v39) != 1 )
      {
        if ( HIDWORD(v39) == 2 )
        {
LABEL_29:
          v42 = __PAIR64__(v36.Width, v36.Height);
          v31 = v40[9];
LABEL_31:
          v37.Pitch = v31;
          goto LABEL_32;
        }
        if ( HIDWORD(v39) != 3 )
        {
          if ( HIDWORD(v39) != 4 )
          {
LABEL_32:
            if ( HIDWORD(v39) != 1 )
              v37.Flags.Value |= 1u;
            v37.NumDirtyRects = 1;
            v37.pDirtyRect = (RECT *)&v41;
            v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 209) + 2304LL) + 264LL);
            if ( v32 && v30 < *(_DWORD *)v32 && (v33 = *(_QWORD *)(v32 + 8)) != 0 )
              LODWORD(v14) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v33 + 2704LL * v30), &v37);
            else
              LODWORD(v14) = -1073741811;
            VIDMM_EXPORT::VidMmEndCPUAccess(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F);
            return (unsigned int)v14;
          }
          goto LABEL_29;
        }
      }
      v42 = *(_QWORD *)&v36.Width;
      v31 = v40[8];
      goto LABEL_31;
    }
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
  v34[3] = -1071775482LL;
  v34[4] = this;
  v34[5] = a2;
  WdLogEvent5_WdEvent(v34);
  return 3223191557LL;
}
