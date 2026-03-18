/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C019789C
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016B4B8 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C000DA38 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C000DAF4 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00D3238 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C01B473C (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01B5A70 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  _QWORD *v7; // rax
  ADAPTER_DISPLAY **v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v24; // rcx
  __m128i v25; // xmm2
  __int128 v26; // xmm1
  D3DDDIFORMAT Format; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  LONG v32; // eax
  __int64 v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  struct _VIDMM_REGION *v36; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_DESCRIBEALLOCATION v37; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v38; // [rsp+70h] [rbp-90h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  _DWORD v41[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v43; // [rsp+148h] [rbp+48h]

  v6 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
    v7[3] = -1071775482LL;
    v7[4] = this;
    v7[5] = a2;
    WdLogEvent5_WdEvent(v7);
    return 3223191814LL;
  }
  v9 = (ADAPTER_DISPLAY **)*((_QWORD *)this + 225);
  v10 = (v6 >> 6) & 0xF;
  if ( v9 )
    IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v9, v10, a3, a4);
  else
    IsVSyncAvailable = 1;
  if ( !IsVSyncAvailable )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v9);
    v12[3] = 0LL;
    v12[4] = this;
    v12[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v12);
    return 0LL;
  }
  memset(v41, 0, sizeof(v41));
  DxgkpGetDodPrimaryInfo(this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v41);
  if ( !v41[8] )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16 = -1073741811LL;
LABEL_10:
    v15[3] = v16;
    v15[4] = this;
    v15[5] = a2;
    v17 = *((unsigned int *)a2 + 4);
LABEL_11:
    v15[6] = v17;
LABEL_12:
    WdLogEvent5_WdError(v15);
    return (unsigned int)v16;
  }
  memset(&v37, 0, sizeof(v37));
  v18 = *((_QWORD *)a2 + 6);
  v37.Flags.Value |= 1u;
  v37.Rotation = -1;
  v37.hAllocation = *(HANDLE *)(v18 + 16);
  v20 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v37, v19);
  v16 = v20;
  if ( v20 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v15[3] = v16;
    v15[4] = this;
    v15[5] = a2;
    v15[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v15[7] = *((unsigned int *)a2 + 4);
    goto LABEL_12;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(DXGADAPTER ***)(*((_QWORD *)this + 225) + 2280LL),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v25 = *(__m128i *)DisplayModeInfo;
  v26 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v39 = v25;
  v40 = v26;
  if ( *(_QWORD *)&v37.Width == __PAIR64__(v25.m128i_u32[1], (unsigned int)DisplayModeInfo) )
  {
    v24 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v37.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v37.Format;
    if ( v39.m128i_i32[2] != 21 )
      v24 = v39.m128i_u32[2];
    if ( Format == (_DWORD)v24 )
    {
      v38.VidPnSourceId = 0;
      memset(&v38.pSource, 0, 0x38uLL);
      v28 = VIDMM_EXPORT::VidMmBeginCPUAccess(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2u,
              0,
              v36,
              &v38.pSource);
      v16 = v28;
      if ( v28 < 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
        goto LABEL_10;
      }
      v42 = 0LL;
      v43 = 0LL;
      v31 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v38.VidPnSourceId = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      if ( (unsigned int)(v37.Format - 21) > 1 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v30, v31);
        LODWORD(v16) = -1073741811;
        v15[3] = -1073741811LL;
        v15[4] = this;
        v15[5] = a2;
        v17 = v37.Format;
        goto LABEL_11;
      }
      v38.BytesPerPixel = 4;
      if ( HIDWORD(v40) != 1 )
      {
        if ( HIDWORD(v40) == 2 )
        {
LABEL_29:
          v43 = __PAIR64__(v37.Width, v37.Height);
          v32 = v41[9];
LABEL_31:
          v38.Pitch = v32;
          goto LABEL_32;
        }
        if ( HIDWORD(v40) != 3 )
        {
          if ( HIDWORD(v40) != 4 )
          {
LABEL_32:
            if ( HIDWORD(v40) != 1 )
              v38.Flags.Value |= 1u;
            v38.NumDirtyRects = 1;
            v38.pDirtyRect = (RECT *)&v42;
            v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 225) + 2280LL) + 264LL);
            if ( v33 && (unsigned int)v31 < *(_DWORD *)v33 && (v34 = *(_QWORD *)(v33 + 8)) != 0 )
              LODWORD(v16) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v34 + 2704LL * (unsigned int)v31), &v38);
            else
              LODWORD(v16) = -1073741811;
            VIDMM_EXPORT::VidMmEndCPUAccess(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
              *((struct _VIDMM_MULTI_ALLOC **)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F);
            return (unsigned int)v16;
          }
          goto LABEL_29;
        }
      }
      v43 = *(_QWORD *)&v37.Width;
      v32 = v41[8];
      goto LABEL_31;
    }
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v24);
  v35[3] = -1071775482LL;
  v35[4] = this;
  v35[5] = a2;
  WdLogEvent5_WdEvent(v35);
  return 3223191557LL;
}
