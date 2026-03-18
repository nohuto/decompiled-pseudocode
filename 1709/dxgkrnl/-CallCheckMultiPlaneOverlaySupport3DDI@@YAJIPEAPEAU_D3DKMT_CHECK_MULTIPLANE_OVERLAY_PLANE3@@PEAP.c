/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B258
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C0178FD0 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C019AB8C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C019ACF8 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C019AD70 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        unsigned __int64 a2,
        void **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v8; // r12
  unsigned __int64 v9; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v10; // r13
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v11; // rcx
  __int64 v12; // rsi
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **PoolWithTag; // rbx
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v14; // rbx
  _QWORD *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 Elements; // r15
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // r9
  unsigned __int64 v36; // r10
  char *v37; // rdi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v38; // r11
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v39; // r9
  __int64 v40; // r8
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // eax
  int v46; // [rsp+20h] [rbp-E0h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v48; // [rsp+48h] [rbp-B8h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v49; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v50[24]; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+90h] [rbp-70h]
  PVOID v52[2]; // [rsp+98h] [rbp-68h] BYREF
  int v53; // [rsp+A8h] [rbp-58h]
  PVOID v54[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v55; // [rsp+E4h] [rbp-1Ch]
  PVOID v56[34]; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+200h] [rbp+100h]

  v8 = 0LL;
  v9 = a1;
  v10 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v11 = a8;
  v12 = a4;
  v46 = v9;
  *a7 = 0;
  a8->Value = 0;
  v49 = 0LL;
  v51 = 0;
  if ( (unsigned int)v9 <= 3 )
  {
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v50;
    v49 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v50;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
    {
LABEL_7:
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, a2, a3);
      v15[3] = v9;
      v16 = -1073741801;
      v15[4] = -1073741801LL;
      v15[5] = PsGetCurrentProcess(v18, v17);
      WdLogEvent5_WdWarning(v15);
      goto LABEL_30;
    }
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)ExAllocatePoolWithTag(
                                                                   PagedPool,
                                                                   8LL * (unsigned int)v9,
                                                                   0x4B677844u);
    v49 = PoolWithTag;
  }
  v51 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8 * v9);
  v14 = v49;
  if ( !v49 )
    goto LABEL_7;
  v56[0] = 0LL;
  v57 = 0;
  Elements = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v56, v9);
  if ( Elements )
  {
    v54[0] = 0LL;
    v26 = 0LL;
    v55 = 0;
    v52[0] = 0LL;
    v53 = 0;
    if ( !(_DWORD)v12
      || (v26 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                  v54,
                  v12),
          v27 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                  v52,
                  v12),
          v8 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v27,
          v26)
      && v27 )
    {
      if ( (_DWORD)v9 )
      {
        v34 = Elements + 12;
        v35 = (char *)((char *)v49 - (char *)v10);
        v36 = v9;
        v37 = (char *)((char *)a3 - (char *)v10);
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v10 + (_QWORD)v35) = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)Elements;
          v38 = *v10;
          *(_QWORD *)(v34 - 12) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v10 + (_QWORD)v37);
          *(_DWORD *)(v34 - 4) = v38->VidPnSourceId;
          *(_DWORD *)v34 = v38->LayerIndex;
          *(RECT *)(v34 + 8) = v38->pPlaneAttributes->SrcRect;
          *(RECT *)(v34 + 24) = v38->pPlaneAttributes->DstRect;
          *(RECT *)(v34 + 40) = v38->pPlaneAttributes->ClipRect;
          *(_DWORD *)(v34 + 56) = v38->pPlaneAttributes->Rotation;
          *(_DWORD *)(v34 + 64) = v38->pPlaneAttributes->ColorSpace;
          *(_DWORD *)(v34 + 4) ^= (*(_DWORD *)(v34 + 4) ^ v38->pPlaneAttributes->Flags) & 1;
          *(_DWORD *)(v34 + 4) ^= ((unsigned __int8)*(_DWORD *)(v34 + 4) ^ (unsigned __int8)v38->pPlaneAttributes->Flags) & 2;
          *(_DWORD *)(v34 + 60) ^= (*(_DWORD *)(v34 + 60) ^ v38->pPlaneAttributes->Blend) & 1;
          if ( v38->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            *(_DWORD *)(v34 + 68) = 1;
          }
          else if ( v38->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            *(_DWORD *)(v34 + 68) = 2;
          }
          Elements += 88LL;
          ++v10;
          *(_DWORD *)(v34 + 72) = v38->pPlaneAttributes->SDRWhiteLevel;
          v34 += 88LL;
          --v36;
        }
        while ( v36 );
        LODWORD(v9) = v46;
      }
      if ( (_DWORD)v12 )
      {
        v39 = a5;
        v40 = v26 + 4;
        v41 = v12;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v39 + (char *)v8 - (char *)a5) = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v26;
          v26 += 44LL;
          v42 = (__int64)*v39++;
          *(_DWORD *)(v40 - 4) = *(_DWORD *)v42;
          *(_OWORD *)(v40 + 4) = *(_OWORD *)(v42 + 8);
          *(_OWORD *)(v40 + 20) = *(_OWORD *)(v42 + 24);
          *(_DWORD *)(v40 + 36) = *(_DWORD *)(v42 + 40);
          *(_DWORD *)v40 ^= (*(_DWORD *)v40 ^ *(_DWORD *)(v42 + 4)) & 1;
          *(_DWORD *)v40 ^= ((unsigned __int8)*(_DWORD *)v40 ^ (unsigned __int8)*(_DWORD *)(v42 + 4)) & 2;
          v40 += 44LL;
          --v41;
        }
        while ( v41 );
      }
      memset(&v48.ppPlanes, 0, 0x20uLL);
      v48.PlaneCount = v9;
      v48.ppPlanes = v14;
      v48.PostCompositionCount = v12;
      v48.ppPostComposition = v8;
      v44 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(a6, &v48, v43);
      if ( v44 >= 0 )
      {
        *a7 = v48.Supported;
        a8->0 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$43CBAF6548F05A2D98998924C7DC2020::$7E5D53739D5A0755634D9029F4E2827E)v48.ReturnInfo.0;
      }
      v16 = v44;
    }
    else
    {
      v16 = -1073741801;
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v31[3] = v12;
      v31[4] = -1073741801LL;
      v31[5] = PsGetCurrentProcess(v33, v32);
      WdLogEvent5_WdWarning(v31);
    }
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v52);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v54);
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = v9;
    v16 = -1073741801;
    v23[4] = -1073741801LL;
    v23[5] = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdWarning(v23);
  }
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v56);
LABEL_30:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v49);
  return v16;
}
