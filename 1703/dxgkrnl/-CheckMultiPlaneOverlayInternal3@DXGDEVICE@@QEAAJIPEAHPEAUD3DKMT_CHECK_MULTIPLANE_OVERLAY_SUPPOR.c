/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0034C14 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0170090 (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAVDXGALLOCATION@@0PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0171324 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIPEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C018521C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0185294 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C0185310 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0185390 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01854F4 (-CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185738 (-CallCheckMultiPlaneOverlaySupport2DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185978 (-CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 *     ?LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0188148 (-LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLAN.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlayInternal3(
        DXGDEVICE *this,
        unsigned int a2,
        int *a3,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGALLOCATION **v35; // r12
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  unsigned int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v44; // r13
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rbx
  unsigned int v48; // edx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v49; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v50; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v51; // rcx
  __int64 *v52; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v53; // r8
  __int64 v54; // r9
  unsigned int i; // edx
  __int64 v56; // rcx
  __int64 v57; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbx
  __int64 v65; // rax
  UINT v66; // edi
  __int64 v67; // rax
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *v68; // rdx
  signed __int64 v69; // r12
  __int64 v70; // r8
  bool v71; // al
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v76; // r12
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v77; // r13
  unsigned int v79; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v80[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // [rsp+50h] [rbp-B0h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v82; // [rsp+58h] [rbp-A8h]
  unsigned int v83; // [rsp+60h] [rbp-A0h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v84; // [rsp+68h] [rbp-98h]
  PVOID v85[4]; // [rsp+70h] [rbp-90h] BYREF
  int v86; // [rsp+90h] [rbp-70h]
  PVOID v87[4]; // [rsp+98h] [rbp-68h] BYREF
  int v88; // [rsp+B8h] [rbp-48h]
  PVOID v89[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v90; // [rsp+E0h] [rbp-20h]
  PVOID v91[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v92; // [rsp+108h] [rbp+8h]
  PVOID v93[13]; // [rsp+110h] [rbp+10h] BYREF
  int v94; // [rsp+178h] [rbp+78h]
  PVOID v95[17]; // [rsp+180h] [rbp+80h] BYREF
  int v96; // [rsp+20Ch] [rbp+10Ch]
  PVOID v97[31]; // [rsp+210h] [rbp+110h] BYREF
  int v98; // [rsp+308h] [rbp+208h]

  v83 = a2;
  v82 = a4;
  *a3 = 0;
  v6 = *((_DWORD *)this + 452) * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2152LL);
  v93[0] = 0LL;
  v94 = 0;
  *(_QWORD *)v80 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(v93, v6);
  if ( *(_QWORD *)v80 )
  {
    v91[0] = 0LL;
    v92 = 0;
    Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                    v91,
                                                                    v6);
    v97[0] = 0LL;
    v98 = 0;
    v17 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(v97, v6);
    if ( v17 )
    {
      v89[0] = 0LL;
      v90 = 0;
      v27 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                           v89,
                                                           v6);
      if ( v27 )
      {
        v87[0] = 0LL;
        v88 = 0;
        v35 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         v87,
                                         v6);
        if ( v35 )
        {
          v39 = *((_DWORD *)this + 452);
          v95[0] = 0LL;
          v96 = 0;
          v44 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                                                                                    v95,
                                                                                    v39);
          if ( v44 )
          {
            v48 = *((_DWORD *)this + 452);
            v85[0] = 0LL;
            v86 = 0;
            v49 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                                       v85,
                                                                                       v48);
            v84 = v49;
            v50 = v49;
            if ( v6 )
            {
              v51 = Elements;
              v52 = (__int64 *)(*(_QWORD *)v80 + 24LL);
              v53 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v80;
              v54 = v6;
              do
              {
                *v51 = v53++;
                *v52 = v17;
                ++v51;
                v17 += 80LL;
                v52 += 4;
                --v54;
              }
              while ( v54 );
              v50 = v49;
            }
            for ( i = 0; i < *((_DWORD *)this + 452); v50[v56] = &v44[v56] )
              v56 = i++;
            v57 = *((_QWORD *)this + 2);
            v79 = 0;
            v80[0] = 0;
            if ( DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v57 + 16)) )
              v59 = 0xFFFFFFFFLL;
            else
              v59 = v83;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
              *(struct _KTHREAD ***)(*((_QWORD *)this + 225) + 2280LL),
              v59,
              &v79,
              v58,
              v35,
              v80,
              v44);
            v64 = v79;
            if ( v79 > v6 )
            {
              v65 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
              *(_QWORD *)(v65 + 24) = 8904LL;
              WdLogEvent5_WdAssertion(v65);
            }
            v66 = v80[0];
            if ( v80[0] > *((_DWORD *)this + 452) )
            {
              v67 = WdLogNewEntry5_WdAssertion(v61, v60, v62, v63);
              *(_QWORD *)(v67 + 24) = 8905LL;
              WdLogEvent5_WdAssertion(v67);
            }
            if ( (_DWORD)v64 )
            {
              v68 = v27;
              v69 = (char *)v35 - (char *)v27;
              v70 = v64;
              do
              {
                v68->hAllocation = *(HANDLE *)((*(_QWORD **)((char *)&v68->hAllocation + v69))[6] + 16LL);
                v68 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE *)((char *)v68 + 8);
                --v70;
              }
              while ( v70 );
            }
            v71 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
            v76 = v82;
            v77 = Elements;
            if ( v71 )
            {
              DXGDEVICE::CallCheckMultiPlaneOverlaySupport3DDI(
                this,
                (unsigned int)v64,
                Elements,
                &v27->hAllocation,
                v66,
                v84,
                a3,
                v82);
            }
            else if ( (unsigned int)v64 <= *(_DWORD *)(v73 + 2152) )
            {
              if ( *(_QWORD *)(v73 + 864) )
                DXGDEVICE::CallCheckMultiPlaneOverlaySupport2DDI(
                  (unsigned __int64)this,
                  (unsigned int)v64,
                  Elements,
                  v27,
                  a3,
                  v82);
              else
                DXGDEVICE::CallCheckMultiPlaneOverlaySupport1DDI(
                  (unsigned __int64)this,
                  (unsigned int)v64,
                  Elements,
                  (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v27,
                  a3,
                  v82);
            }
            if ( *a3 == 1
              && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(
                   *(struct _KTHREAD ***)(*((_QWORD *)this + 225) + 2280LL),
                   v72,
                   v74,
                   v75) )
            {
              *a3 = 0;
              v76->Value = v76->Value & 0xFFFFFFE0 | 0x10;
            }
            DXGDEVICE::LogCheckMutiplaneOverlaySupport(this, 0, *a3, v64, v77, &v27->hAllocation, v66, v84);
            v13 = 0;
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v85);
          }
          else
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
            v46 = *((unsigned int *)this + 452);
            v13 = -1073741801;
            v47 = v45;
            v45[3] = v46;
            v45[4] = -1073741801LL;
            v45[5] = PsGetCurrentProcess(v46);
            WdLogEvent5_WdWarning(v47);
          }
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v95);
        }
        else
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          v37 = v6;
          v13 = -1073741801;
          v38 = v36;
          v36[3] = v37;
          v36[4] = -1073741801LL;
          v36[5] = PsGetCurrentProcess(v37);
          WdLogEvent5_WdWarning(v38);
        }
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v87);
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
        v29 = v6;
        v13 = -1073741801;
        v30 = v28;
        v28[3] = v29;
        v28[4] = -1073741801LL;
        v28[5] = PsGetCurrentProcess(v29);
        WdLogEvent5_WdWarning(v30);
      }
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v89);
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v18, v19);
      v21 = v6;
      v13 = -1073741801;
      v22 = v20;
      v20[3] = v21;
      v20[4] = -1073741801LL;
      v20[5] = PsGetCurrentProcess(v21);
      WdLogEvent5_WdWarning(v22);
    }
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v97);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v91);
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    v12 = v6;
    v13 = -1073741801;
    v14 = v11;
    v11[3] = v12;
    v11[4] = -1073741801LL;
    v11[5] = PsGetCurrentProcess(v12);
    WdLogEvent5_WdWarning(v14);
  }
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v93);
  return v13;
}
