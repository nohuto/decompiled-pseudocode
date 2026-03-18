/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C018850C
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C015D234 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0187D80 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0187F08 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0188008 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
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
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v10; // rcx
  __int64 v11; // rdi
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
  char *Elements; // r13
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v26; // r15
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v34; // r9
  char *v35; // r8
  char *v36; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v37; // r11
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v38; // r9
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *p_PostComposition; // r8
  __int64 v40; // r11
  __int64 v41; // rdx
  UINT Value; // ecx
  __int64 v43; // r8
  int v44; // eax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v46; // [rsp+28h] [rbp-D8h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v48; // [rsp+50h] [rbp-B0h] BYREF
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v49; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v50[24]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v51; // [rsp+98h] [rbp-68h]
  PVOID v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+B0h] [rbp-50h]
  PVOID v54[6]; // [rsp+B8h] [rbp-48h] BYREF
  int v55; // [rsp+ECh] [rbp-14h]
  PVOID v56[34]; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+200h] [rbp+100h]

  v8 = 0LL;
  v10 = a8;
  v11 = a1;
  v12 = a4;
  v46 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  *a7 = 0;
  a8->Value = 0;
  v49 = 0LL;
  v51 = 0;
  if ( a1 <= 3 )
  {
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v50;
    v49 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v50;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
      v15[3] = a1;
      v16 = -1073741801;
      v15[4] = -1073741801LL;
      v15[5] = PsGetCurrentProcess(v18, v17);
      WdLogEvent5_WdWarning(v15);
      goto LABEL_29;
    }
    PoolWithTag = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    v49 = PoolWithTag;
  }
  v51 = a1;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8LL * a1);
  v14 = v49;
  if ( !v49 )
    goto LABEL_7;
  v56[0] = 0LL;
  v57 = 0;
  Elements = (char *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v56, a1);
  if ( Elements )
  {
    v54[0] = 0LL;
    v26 = 0LL;
    v55 = 0;
    v52[0] = 0LL;
    v53 = 0;
    if ( !(_DWORD)v12
      || (v26 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                                                                                    v54,
                                                                                    v12),
          v27 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                                                                           v52,
                                                                           v12),
          v8 = v27,
          v26)
      && v27 )
    {
      if ( a1 )
      {
        v34 = v46;
        v35 = Elements + 12;
        v36 = (char *)((char *)v49 - (char *)v46);
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v34 + (_QWORD)v36) = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)Elements;
          v37 = *v34;
          *(_QWORD *)(v35 - 12) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v34
                                                                                     + (char *)a3
                                                                                     - (char *)v46);
          *((_DWORD *)v35 - 1) = v37->VidPnSourceId;
          *(_DWORD *)v35 = v37->LayerIndex;
          *(RECT *)(v35 + 8) = v37->pPlaneAttributes->SrcRect;
          *(RECT *)(v35 + 24) = v37->pPlaneAttributes->DstRect;
          *(RECT *)(v35 + 40) = v37->pPlaneAttributes->ClipRect;
          *((_DWORD *)v35 + 14) = v37->pPlaneAttributes->Rotation;
          *((_DWORD *)v35 + 16) = v37->pPlaneAttributes->ColorSpace;
          *((_DWORD *)v35 + 1) ^= (*((_DWORD *)v35 + 1) ^ v37->pPlaneAttributes->Flags) & 1;
          *((_DWORD *)v35 + 1) ^= ((unsigned __int8)*((_DWORD *)v35 + 1) ^ (unsigned __int8)v37->pPlaneAttributes->Flags) & 2;
          *((_DWORD *)v35 + 15) ^= (*((_DWORD *)v35 + 15) ^ v37->pPlaneAttributes->Blend) & 1;
          if ( v37->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            *((_DWORD *)v35 + 17) = 1;
          }
          else if ( v37->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            *((_DWORD *)v35 + 17) = 2;
          }
          Elements += 88;
          ++v34;
          *((_DWORD *)v35 + 18) = v37->pPlaneAttributes->SDRWhiteLevel;
          v35 += 88;
          --v11;
        }
        while ( v11 );
      }
      if ( (_DWORD)v12 )
      {
        v38 = a5;
        p_PostComposition = &v26->PostComposition;
        v40 = v12;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v38 + (char *)v8 - (char *)a5) = v26++;
          v41 = (__int64)*v38++;
          Value = p_PostComposition->Flags.Value;
          p_PostComposition[-1].Rotation = *(_DWORD *)v41;
          p_PostComposition->SrcRect = *(RECT *)(v41 + 8);
          p_PostComposition->DstRect = *(RECT *)(v41 + 24);
          p_PostComposition->Rotation = *(_DWORD *)(v41 + 40);
          p_PostComposition->Flags.Value ^= (*(_DWORD *)(v41 + 4) ^ Value) & 1;
          p_PostComposition->Flags.Value ^= (*(_DWORD *)(v41 + 4) ^ p_PostComposition->Flags.Value) & 2;
          p_PostComposition = (D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)((char *)p_PostComposition + 44);
          --v40;
        }
        while ( v40 );
      }
      memset(&v48, 0, sizeof(v48));
      v48.PlaneCount = a1;
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
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v52);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v54);
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = a1;
    v16 = -1073741801;
    v23[4] = -1073741801LL;
    v23[5] = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdWarning(v23);
  }
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v56);
LABEL_29:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v49);
  return v16;
}
