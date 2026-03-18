/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185978
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C0175700 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C01851A4 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0185408 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0185480 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall DXGDEVICE::CallCheckMultiPlaneOverlaySupport3DDI(
        DXGDEVICE *this,
        unsigned __int64 a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        void **a4,
        UINT a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v8; // r12
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v9; // r13
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v10; // rcx
  unsigned __int64 v11; // rdi
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **PoolWithTag; // rbx
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v13; // rbx
  _QWORD *v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 Elements; // r15
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r9
  char *v33; // r11
  unsigned __int64 v34; // r10
  char *v35; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v36; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v37; // r9
  __int64 v38; // r8
  __int64 v39; // r11
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // eax
  int v46; // [rsp+20h] [rbp-E0h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v49; // [rsp+48h] [rbp-B8h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v50; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v51[24]; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+90h] [rbp-70h]
  PVOID v53[2]; // [rsp+98h] [rbp-68h] BYREF
  int v54; // [rsp+A8h] [rbp-58h]
  PVOID v55[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v56; // [rsp+E4h] [rbp-1Ch]
  PVOID v57[34]; // [rsp+F0h] [rbp-10h] BYREF
  int v58; // [rsp+200h] [rbp+100h]

  v8 = 0LL;
  v9 = a3;
  v10 = a8;
  v11 = (unsigned int)a2;
  *a7 = 0;
  a8->Value = 0;
  v46 = a2;
  v50 = 0LL;
  v52 = 0;
  if ( (unsigned int)a2 <= 3 )
  {
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v51;
    v50 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v51;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 8 )
    {
LABEL_7:
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3, a4);
      v14[3] = v11;
      v15 = -1073741801;
      v14[4] = -1073741801LL;
      v14[5] = PsGetCurrentProcess(v16);
      WdLogEvent5_WdWarning(v14);
      goto LABEL_30;
    }
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)ExAllocatePoolWithTag(
                                                                   PagedPool,
                                                                   8LL * (unsigned int)v11,
                                                                   0x4B677844u);
    v50 = PoolWithTag;
  }
  v52 = v11;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8 * v11);
  v13 = v50;
  if ( !v50 )
    goto LABEL_7;
  v57[0] = 0LL;
  v58 = 0;
  Elements = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v57, v11);
  if ( Elements )
  {
    v55[0] = 0LL;
    v24 = 0LL;
    v56 = 0;
    v53[0] = 0LL;
    v54 = 0;
    if ( !a5
      || (v24 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(v55, a5),
          v25 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                  v53,
                  a5),
          v8 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v25,
          v24)
      && v25 )
    {
      if ( (_DWORD)v11 )
      {
        v32 = Elements + 12;
        v33 = (char *)((char *)v50 - (char *)v9);
        v34 = v11;
        v35 = (char *)((char *)a4 - (char *)v9);
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v9 + (_QWORD)v33) = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)Elements;
          v36 = *v9;
          *(_QWORD *)(v32 - 12) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v9 + (_QWORD)v35);
          *(_DWORD *)(v32 - 4) = v36->VidPnSourceId;
          *(_DWORD *)v32 = v36->LayerIndex;
          *(RECT *)(v32 + 8) = v36->pPlaneAttributes->SrcRect;
          *(RECT *)(v32 + 24) = v36->pPlaneAttributes->DstRect;
          *(RECT *)(v32 + 40) = v36->pPlaneAttributes->ClipRect;
          *(_DWORD *)(v32 + 56) = v36->pPlaneAttributes->Rotation;
          *(_DWORD *)(v32 + 64) = v36->pPlaneAttributes->ColorSpace;
          *(_DWORD *)(v32 + 4) ^= (*(_DWORD *)(v32 + 4) ^ v36->pPlaneAttributes->Flags) & 1;
          *(_DWORD *)(v32 + 4) ^= (*(_DWORD *)(v32 + 4) ^ v36->pPlaneAttributes->Flags) & 2;
          *(_DWORD *)(v32 + 60) ^= (*(_DWORD *)(v32 + 60) ^ v36->pPlaneAttributes->Blend) & 1;
          if ( v36->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            *(_DWORD *)(v32 + 68) = 1;
          }
          else if ( v36->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            *(_DWORD *)(v32 + 68) = 2;
          }
          Elements += 88LL;
          ++v9;
          v32 += 88LL;
          --v34;
        }
        while ( v34 );
        LODWORD(v11) = v46;
      }
      if ( a5 )
      {
        v37 = a6;
        v38 = v24 + 4;
        v39 = a5;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v37 + (char *)v8 - (char *)a6) = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v24;
          v24 += 44LL;
          v40 = (__int64)*v37++;
          v41 = *(_DWORD *)v38;
          *(_DWORD *)(v38 - 4) = *(_DWORD *)v40;
          *(_OWORD *)(v38 + 4) = *(_OWORD *)(v40 + 8);
          *(_OWORD *)(v38 + 20) = *(_OWORD *)(v40 + 24);
          *(_DWORD *)(v38 + 36) = *(_DWORD *)(v40 + 40);
          *(_DWORD *)v38 ^= (*(_DWORD *)(v40 + 4) ^ v41) & 1;
          *(_DWORD *)v38 ^= (*(_DWORD *)v38 ^ *(_DWORD *)(v40 + 4)) & 2;
          v38 += 44LL;
          --v39;
        }
        while ( v39 );
      }
      memset(&v49.ppPlanes, 0, 0x20uLL);
      v49.PlaneCount = v11;
      v49.ppPlanes = v13;
      v49.PostCompositionCount = a5;
      v42 = *((_QWORD *)this + 225);
      v49.ppPostComposition = v8;
      v44 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(*(ADAPTER_DISPLAY **)(v42 + 2280), &v49, v43);
      if ( v44 >= 0 )
      {
        *a7 = v49.Supported;
        a8->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v49.ReturnInfo.0;
      }
      v15 = v44;
    }
    else
    {
      v15 = -1073741801;
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      v30[3] = a5;
      v30[4] = -1073741801LL;
      v30[5] = PsGetCurrentProcess(v31);
      WdLogEvent5_WdWarning(v30);
    }
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v53);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v55);
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    v22[3] = v11;
    v15 = -1073741801;
    v22[4] = -1073741801LL;
    v22[5] = PsGetCurrentProcess(v23);
    WdLogEvent5_WdWarning(v22);
  }
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v57);
LABEL_30:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v50);
  return v15;
}
