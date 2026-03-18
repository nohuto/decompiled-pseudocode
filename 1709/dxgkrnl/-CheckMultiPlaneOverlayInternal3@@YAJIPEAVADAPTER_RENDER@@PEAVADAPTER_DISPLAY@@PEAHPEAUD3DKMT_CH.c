/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BC54 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01CFC68 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0173738 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0174ED8 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C019AB14 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C019AC04 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C019AC80 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C019ACF8 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019ADE4 (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B020 (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B258 (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C019D830 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        unsigned int a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void **v28; // r14
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGALLOCATION **v36; // r12
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r13
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v48; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v49; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v50; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **p_pPlaneAttributes; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v52; // r8
  __int64 v53; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v57; // edx
  struct ADAPTER_DISPLAY *v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  unsigned int v62; // edi
  __int64 v63; // rax
  void **v64; // rdx
  signed __int64 v65; // r12
  __int64 v66; // r8
  __int64 v67; // rax
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v68; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v69; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v71; // [rsp+38h] [rbp-C8h]
  unsigned int v72; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *Elements; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v74; // [rsp+50h] [rbp-B0h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v75; // [rsp+58h] [rbp-A8h]
  unsigned int v76; // [rsp+60h] [rbp-A0h]
  struct ADAPTER_RENDER *v77; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY *v78; // [rsp+70h] [rbp-90h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v79; // [rsp+78h] [rbp-88h]
  PVOID v80[4]; // [rsp+80h] [rbp-80h] BYREF
  int v81; // [rsp+A0h] [rbp-60h]
  PVOID v82[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v83; // [rsp+C8h] [rbp-38h]
  PVOID v84[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v85; // [rsp+F0h] [rbp-10h]
  PVOID v86[4]; // [rsp+F8h] [rbp-8h] BYREF
  int v87; // [rsp+118h] [rbp+18h]
  PVOID v88[13]; // [rsp+120h] [rbp+20h] BYREF
  int v89; // [rsp+188h] [rbp+88h]
  PVOID v90[17]; // [rsp+190h] [rbp+90h] BYREF
  int v91; // [rsp+21Ch] [rbp+11Ch]
  PVOID v92[34]; // [rsp+220h] [rbp+120h] BYREF
  int v93; // [rsp+330h] [rbp+230h]

  *a4 = 0;
  v6 = *((unsigned int *)a3 + 20);
  v75 = a5;
  v7 = *((_QWORD *)a2 + 2);
  v77 = a2;
  v76 = a1;
  v78 = a3;
  v8 = v6 * *(_DWORD *)(v7 + 2176);
  v88[0] = 0LL;
  v89 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                                                                 v88,
                                                                 v8);
  if ( Elements )
  {
    v86[0] = 0LL;
    v87 = 0;
    v74 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                               v86,
                                                               v8);
    v92[0] = 0LL;
    v93 = 0;
    v19 = PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(v92, v8);
    if ( v19 )
    {
      v84[0] = 0LL;
      v85 = 0;
      v28 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v84, v8);
      if ( v28 )
      {
        v82[0] = 0LL;
        v83 = 0;
        v36 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         v82,
                                         v8);
        if ( v36 )
        {
          v90[0] = 0LL;
          v91 = 0;
          v44 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                  v90,
                  v6);
          if ( v44 )
          {
            v80[0] = 0LL;
            v81 = 0;
            v48 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                                       v80,
                                                                                       v6);
            v49 = Elements;
            v79 = v48;
            if ( v8 )
            {
              v50 = v74;
              p_pPlaneAttributes = &Elements->pPlaneAttributes;
              v52 = Elements;
              v53 = v8;
              do
              {
                *v50 = v52++;
                *p_pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)v19;
                ++v50;
                v19 += 88LL;
                p_pPlaneAttributes += 4;
                --v53;
              }
              while ( v53 );
            }
            if ( (_DWORD)v6 )
            {
              v54 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v44;
              v55 = v6;
              do
              {
                *v48++ = v54++;
                --v55;
              }
              while ( v55 );
            }
            v72 = 0;
            LODWORD(Elements) = 0;
            v56 = *((_QWORD *)v77 + 2);
            if ( *(_QWORD *)(v56 + 896) && *(_BYTE *)(v56 + 2266) )
              v57 = -1;
            else
              v57 = v76;
            v71 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v44;
            v58 = v78;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
              (struct _KTHREAD **)v78,
              v57,
              v8,
              v36,
              &v72,
              v49,
              (unsigned int *)&Elements,
              v71);
            v60 = v72;
            if ( v72 > v8 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v59);
              *(_QWORD *)(v61 + 24) = 8947LL;
              WdLogEvent5_WdAssertion(v61);
            }
            v62 = (unsigned int)Elements;
            if ( (unsigned int)Elements > (unsigned int)v6 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v59);
              *(_QWORD *)(v63 + 24) = 8948LL;
              WdLogEvent5_WdAssertion(v63);
            }
            if ( (_DWORD)v60 )
            {
              v64 = v28;
              v65 = (char *)v36 - (char *)v28;
              v66 = v60;
              do
              {
                *v64 = *(void **)((*(_QWORD **)((char *)v64 + v65))[6] + 16LL);
                ++v64;
                --v66;
              }
              while ( v66 );
            }
            v67 = *((_QWORD *)v77 + 2);
            if ( *(_QWORD *)(v67 + 896) && *(_BYTE *)(v67 + 2266) )
            {
              v68 = v75;
              v69 = v74;
              CallCheckMultiPlaneOverlaySupport3DDI(v60, (unsigned __int64)v74, v28, v62, v79, v58, a4, v75);
            }
            else
            {
              v68 = v75;
              v69 = v74;
              if ( (unsigned int)v60 <= *(_DWORD *)(v67 + 2176) )
              {
                if ( *(_QWORD *)(v67 + 864) )
                  CallCheckMultiPlaneOverlaySupport2DDI((unsigned int)v60, (unsigned __int64)v74, v28, v58, a4, v75);
                else
                  CallCheckMultiPlaneOverlaySupport1DDI((unsigned int)v60, (unsigned __int64)v74, v28, v58, a4, v75);
              }
            }
            if ( *a4 == 1 && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs((struct _KTHREAD **)v58) )
            {
              *a4 = 0;
              v68->Value = v68->Value & 0xFFFFFFE0 | 0x10;
            }
            LogCheckMutiplaneOverlaySupport(0, *a4, v60, v69, v28, v62, v79, v77);
            v14 = 0;
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v80);
          }
          else
          {
            v14 = -1073741801;
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
            v45[3] = v6;
            v45[4] = -1073741801LL;
            v45[5] = PsGetCurrentProcess(v47, v46);
            WdLogEvent5_WdWarning(v45);
          }
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v90);
        }
        else
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
          v38 = v8;
          v14 = -1073741801;
          v39 = v37;
          v37[3] = v38;
          v37[4] = -1073741801LL;
          v37[5] = PsGetCurrentProcess(v38, v40);
          WdLogEvent5_WdWarning(v39);
        }
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v82);
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
        v30 = v8;
        v14 = -1073741801;
        v31 = v29;
        v29[3] = v30;
        v29[4] = -1073741801LL;
        v29[5] = PsGetCurrentProcess(v30, v32);
        WdLogEvent5_WdWarning(v31);
      }
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v84);
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v20);
      v22 = v8;
      v14 = -1073741801;
      v23 = v21;
      v21[3] = v22;
      v21[4] = -1073741801LL;
      v21[5] = PsGetCurrentProcess(v22, v24);
      WdLogEvent5_WdWarning(v23);
    }
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v92);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v86);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13 = v8;
    v14 = -1073741801;
    v15 = v12;
    v12[3] = v13;
    v12[4] = -1073741801LL;
    v12[5] = PsGetCurrentProcess(v13, v16);
    WdLogEvent5_WdWarning(v15);
  }
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v88);
  return v14;
}
