/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01A75CC
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C0145A60 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C001AA1C (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C002465C (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C010DC8C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C01D4BC4 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01D6024 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  DXGADAPTER *v7; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm2
  __int128 v22; // xmm1
  D3DDDIFORMAT Format; // eax
  int v24; // eax
  __int64 v25; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v26; // edx
  LONG v27; // eax
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rax
  struct _VIDMM_REGION *v31; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_DESCRIBEALLOCATION v32; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v33; // [rsp+70h] [rbp-90h] BYREF
  __m128i v34; // [rsp+B0h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-40h]
  _DWORD v36[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v38; // [rsp+148h] [rbp+48h]

  v4 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v4);
    v5[3] = -1071775482LL;
    v5[4] = this;
    v5[5] = a2;
    WdLogEvent5_WdEvent(v5);
    return 3223191814LL;
  }
  v7 = this[211];
  if ( v7 )
    IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v7, ((unsigned int)v4 >> 6) & 0xF);
  else
    IsVSyncAvailable = 1;
  if ( !IsVSyncAvailable )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v4);
    v9[3] = 0LL;
    v9[4] = this;
    v9[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v9);
    return 0LL;
  }
  memset(v36, 0, sizeof(v36));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v36);
  if ( !v36[8] )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12 = -1073741811LL;
LABEL_10:
    v11[3] = v12;
    v11[4] = this;
    v11[5] = a2;
    v13 = *((unsigned int *)a2 + 4);
LABEL_11:
    v11[6] = v13;
LABEL_12:
    WdLogEvent5_WdError(v11);
    return (unsigned int)v12;
  }
  memset(&v32, 0, sizeof(v32));
  v14 = *((_QWORD *)a2 + 6);
  v32.Rotation = -1;
  v32.Flags.Value = 1;
  v32.hAllocation = *(HANDLE *)(v14 + 16);
  v16 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v32, v15);
  v12 = v16;
  if ( v16 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v11[3] = v12;
    v11[4] = this;
    v11[5] = a2;
    v11[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v11[7] = *((unsigned int *)a2 + 4);
    goto LABEL_12;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((DXGADAPTER ***)this[211] + 307),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v21 = *(__m128i *)DisplayModeInfo;
  v22 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v34 = v21;
  v35 = v22;
  if ( *(_QWORD *)&v32.Width == __PAIR64__(v21.m128i_u32[1], (unsigned int)DisplayModeInfo) )
  {
    v20 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v32.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v32.Format;
    if ( v34.m128i_i32[2] != 21 )
      v20 = v34.m128i_u32[2];
    if ( Format == (_DWORD)v20 )
    {
      memset(&v33, 0, sizeof(v33));
      v24 = VIDMM_EXPORT::VidMmBeginCPUAccess(
              *((VIDMM_EXPORT **)this[2] + 68),
              *((struct VIDMM_GLOBAL **)this[2] + 69),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2u,
              0,
              v31,
              &v33.pSource);
      v12 = v24;
      if ( v24 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        goto LABEL_10;
      }
      v37 = 0LL;
      v38 = 0LL;
      v26 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v33.VidPnSourceId = v26;
      if ( (unsigned int)(v32.Format - 21) > 1 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        LODWORD(v12) = -1073741811;
        v11[3] = -1073741811LL;
        v11[4] = this;
        v11[5] = a2;
        v13 = v32.Format;
        goto LABEL_11;
      }
      v33.BytesPerPixel = 4;
      if ( HIDWORD(v35) != 1 )
      {
        if ( HIDWORD(v35) == 2 )
        {
LABEL_29:
          v38 = __PAIR64__(v32.Width, v32.Height);
          v27 = v36[9];
LABEL_31:
          v33.Pitch = v27;
          goto LABEL_32;
        }
        if ( HIDWORD(v35) != 3 )
        {
          if ( HIDWORD(v35) != 4 )
          {
LABEL_32:
            if ( HIDWORD(v35) != 1 )
              v33.Flags.Value |= 1u;
            v33.NumDirtyRects = 1;
            v33.pDirtyRect = (RECT *)&v37;
            v28 = *(_QWORD *)(*((_QWORD *)this[211] + 307) + 264LL);
            if ( v28 && v26 < *(_DWORD *)v28 && (v29 = *(_QWORD *)(v28 + 8)) != 0 )
              LODWORD(v12) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v29 + 2704LL * v26), &v33);
            else
              LODWORD(v12) = -1073741811;
            VIDMM_EXPORT::VidMmEndCPUAccess(
              *((VIDMM_EXPORT **)this[2] + 68),
              *((struct VIDMM_GLOBAL **)this[2] + 69),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F);
            return (unsigned int)v12;
          }
          goto LABEL_29;
        }
      }
      v38 = *(_QWORD *)&v32.Width;
      v27 = v36[8];
      goto LABEL_31;
    }
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
  v30[3] = -1071775482LL;
  v30[4] = this;
  v30[5] = a2;
  WdLogEvent5_WdEvent(v30);
  return 3223191557LL;
}
