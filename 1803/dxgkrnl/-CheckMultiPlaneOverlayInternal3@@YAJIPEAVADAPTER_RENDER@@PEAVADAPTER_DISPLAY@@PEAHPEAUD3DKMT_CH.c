/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188F30 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01D8060 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C015104C (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0154720 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0187E00 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0187E84 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0187F08 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0187F88 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188084 (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01882D0 (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C018850C (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C018B0DC (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rax
  __int64 v7; // rsi
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
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v19; // rbx
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
  _QWORD *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v47; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v48; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v49; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **p_pPlaneAttributes; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v51; // r8
  __int64 v52; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v53; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  unsigned int v61; // edi
  __int64 v62; // rax
  void **v63; // rdx
  signed __int64 v64; // r12
  __int64 v65; // r8
  __int64 v66; // rax
  struct _KTHREAD **v67; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v68; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v70; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *Elements; // [rsp+48h] [rbp-B8h] BYREF
  ADAPTER_DISPLAY *v72; // [rsp+50h] [rbp-B0h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v73; // [rsp+58h] [rbp-A8h]
  struct ADAPTER_RENDER *v74; // [rsp+60h] [rbp-A0h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v75; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v76; // [rsp+70h] [rbp-90h]
  PVOID v77[4]; // [rsp+78h] [rbp-88h] BYREF
  int v78; // [rsp+98h] [rbp-68h]
  PVOID v79[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v80; // [rsp+C0h] [rbp-40h]
  PVOID v81[4]; // [rsp+C8h] [rbp-38h] BYREF
  int v82; // [rsp+E8h] [rbp-18h]
  PVOID v83[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v84; // [rsp+110h] [rbp+10h]
  PVOID v85[13]; // [rsp+120h] [rbp+20h] BYREF
  int v86; // [rsp+188h] [rbp+88h]
  PVOID v87[17]; // [rsp+190h] [rbp+90h] BYREF
  int v88; // [rsp+21Ch] [rbp+11Ch]
  PVOID v89[34]; // [rsp+220h] [rbp+120h] BYREF
  int v90; // [rsp+330h] [rbp+230h]

  *a4 = 0;
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned int *)a3 + 20);
  v74 = a2;
  v75 = a1;
  v8 = v7 * *(_DWORD *)(v6 + 2312);
  v72 = a3;
  v85[0] = 0LL;
  v86 = 0;
  Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                                                                 v85,
                                                                 v8);
  if ( Elements )
  {
    v83[0] = 0LL;
    v84 = 0;
    v73 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                               v83,
                                                               v8);
    v89[0] = 0LL;
    v90 = 0;
    v19 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(
                                                     v89,
                                                     v8);
    if ( v19 )
    {
      v81[0] = 0LL;
      v82 = 0;
      v28 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v81, v8);
      if ( v28 )
      {
        v79[0] = 0LL;
        v80 = 0;
        v36 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         v79,
                                         v8);
        if ( v36 )
        {
          v87[0] = 0LL;
          v88 = 0;
          v70 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                                                                                    v87,
                                                                                    v7);
          if ( v70 )
          {
            v77[0] = 0LL;
            v78 = 0;
            v47 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                                       v77,
                                                                                       v7);
            v48 = Elements;
            v76 = v47;
            if ( v8 )
            {
              v49 = v73;
              p_pPlaneAttributes = &Elements->pPlaneAttributes;
              v51 = Elements;
              v52 = v8;
              do
              {
                *v49 = v51++;
                *p_pPlaneAttributes = v19;
                ++v49;
                ++v19;
                p_pPlaneAttributes += 4;
                --v52;
              }
              while ( v52 );
            }
            v53 = v70;
            if ( (_DWORD)v7 )
            {
              v54 = v70;
              v55 = v7;
              do
              {
                *v47++ = v54++;
                --v55;
              }
              while ( v55 );
            }
            LODWORD(v70) = 0;
            LODWORD(Elements) = 0;
            v56 = *((_QWORD *)v74 + 2);
            if ( *(_QWORD *)(v56 + 896) && *(_BYTE *)(v56 + 2410) )
              v57 = -1;
            else
              v57 = v75;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
              (struct _KTHREAD **)v72,
              v57,
              v8,
              v36,
              (unsigned int *)&v70,
              v48,
              (unsigned int *)&Elements,
              v53);
            v59 = (unsigned int)v70;
            if ( (unsigned int)v70 > v8 )
            {
              v60 = WdLogNewEntry5_WdAssertion(v58);
              *(_QWORD *)(v60 + 24) = 9401LL;
              WdLogEvent5_WdAssertion(v60);
            }
            v61 = (unsigned int)Elements;
            if ( (unsigned int)Elements > (unsigned int)v7 )
            {
              v62 = WdLogNewEntry5_WdAssertion(v58);
              *(_QWORD *)(v62 + 24) = 9402LL;
              WdLogEvent5_WdAssertion(v62);
            }
            if ( (_DWORD)v59 )
            {
              v63 = v28;
              v64 = (char *)v36 - (char *)v28;
              v65 = v59;
              do
              {
                *v63 = *(void **)((*(_QWORD **)((char *)v63 + v64))[6] + 16LL);
                ++v63;
                --v65;
              }
              while ( v65 );
            }
            v66 = *((_QWORD *)v74 + 2);
            if ( *(_QWORD *)(v66 + 896) && *(_BYTE *)(v66 + 2410) )
            {
              v67 = (struct _KTHREAD **)v72;
              v68 = v73;
              CallCheckMultiPlaneOverlaySupport3DDI(v59, (unsigned __int64)v73, v28, v61, v76, v72, a4, a5);
            }
            else
            {
              v67 = (struct _KTHREAD **)v72;
              v68 = v73;
              if ( (unsigned int)v59 <= *(_DWORD *)(v66 + 2312) )
              {
                if ( *(_QWORD *)(v66 + 864) )
                  CallCheckMultiPlaneOverlaySupport2DDI((unsigned int)v59, (unsigned __int64)v73, v28, v72, a4, a5);
                else
                  CallCheckMultiPlaneOverlaySupport1DDI((unsigned int)v59, (unsigned __int64)v73, v28, v72, a4, a5);
              }
            }
            if ( *a4 == 1
              && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v67)
              && !*(_BYTE *)(*((_QWORD *)v74 + 2) + 2412LL) )
            {
              *a4 = 0;
              a5->Value = a5->Value & 0xFFFFFFE0 | 0x10;
            }
            LogCheckMutiplaneOverlaySupport(0, *a4, v59, v68, v28, v61, v76, v74);
            v14 = 0;
            PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v77);
          }
          else
          {
            v14 = -1073741801;
            v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
            v44[3] = v7;
            v44[4] = -1073741801LL;
            v44[5] = PsGetCurrentProcess(v46, v45);
            WdLogEvent5_WdWarning(v44);
          }
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v87);
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
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v79);
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
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v81);
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
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v89);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v83);
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
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v85);
  return v14;
}
