/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011DA40 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0006DF8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C00076C8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C0012AF4 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DCE0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C007EA24 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00ADCA0 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00ADD68 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00EC610 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z @ 0x1C01877F0 (-LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  int CddShadowPitch; // eax
  DXGADAPTER **v17; // rcx
  struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v19; // rcx
  unsigned int Width; // r15d
  unsigned int Height; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // edi
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct DXGGLOBAL *Global; // rax
  int *v26; // rbx
  int v27; // eax
  int v28; // r9d
  int v29; // r8d
  int v30; // edx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // r15d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  unsigned int left; // edi
  unsigned int right; // edx
  signed int v50; // r8d
  int v51; // ecx
  signed int top; // r9d
  unsigned int bottom; // ecx
  unsigned int v54; // eax
  unsigned int v55; // r10d
  unsigned int v56; // r11d
  unsigned __int8 *v57; // rsi
  int v58; // r13d
  unsigned int v59; // r15d
  unsigned int v60; // r11d
  int v61; // eax
  __int64 v62; // rdi
  __int64 v63; // rcx
  unsigned int cy; // ebx
  unsigned int v65; // r9d
  int v66; // r11d
  int v67; // r14d
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // r10
  unsigned int *v70; // r8
  int v71; // edi
  PVOID v72; // r8
  unsigned int v73; // ecx
  unsigned int v74; // ebx
  unsigned int v75; // r15d
  int v76; // r12d
  unsigned int v77; // r13d
  size_t v78; // r14
  char *v79; // rsi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // r15
  _QWORD *v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rax
  struct DXGCONTEXT *v84; // rdi
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rbx
  _QWORD *v88; // rax
  unsigned int v89; // [rsp+50h] [rbp-B0h] BYREF
  int v90; // [rsp+54h] [rbp-ACh]
  unsigned int v91; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v92; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v93; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v95; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v96; // [rsp+74h] [rbp-8Ch]
  tagSIZE v97; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v98; // [rsp+80h] [rbp-80h] BYREF
  struct DXGCONTEXT *v99; // [rsp+88h] [rbp-78h] BYREF
  int v100; // [rsp+90h] [rbp-70h]
  __int64 v101; // [rsp+98h] [rbp-68h]
  char v102[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-58h]
  char v104; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_LOCK v105; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v106; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v107[16]; // [rsp+130h] [rbp+30h] BYREF
  char v108[8]; // [rsp+140h] [rbp+40h] BYREF
  char v109[32]; // [rsp+148h] [rbp+48h] BYREF
  char v110[56]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v111[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v112[2112]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct tagRECT v113; // [rsp+A20h] [rbp+920h] BYREF
  PVOID v114[2]; // [rsp+A30h] [rbp+930h] BYREF
  tagRECT v115; // [rsp+A40h] [rbp+940h] BYREF
  __int64 v116; // [rsp+A50h] [rbp+950h] BYREF
  int v117; // [rsp+A58h] [rbp+958h]
  const wchar_t *v118; // [rsp+A60h] [rbp+960h]
  PVOID *v119; // [rsp+A68h] [rbp+968h]
  int v120; // [rsp+A70h] [rbp+970h]
  __int64 v121; // [rsp+A78h] [rbp+978h]
  int v122; // [rsp+A80h] [rbp+980h]
  __int64 v123; // [rsp+A88h] [rbp+988h]
  int v124; // [rsp+A90h] [rbp+990h]
  const wchar_t *v125; // [rsp+A98h] [rbp+998h]
  unsigned int *v126; // [rsp+AA0h] [rbp+9A0h]
  int v127; // [rsp+AA8h] [rbp+9A8h]
  __int64 v128; // [rsp+AB0h] [rbp+9B0h]
  int v129; // [rsp+AB8h] [rbp+9B8h]
  __int64 v130; // [rsp+AC0h] [rbp+9C0h]
  int v131; // [rsp+AC8h] [rbp+9C8h]
  const wchar_t *v132; // [rsp+AD0h] [rbp+9D0h]
  unsigned int *v133; // [rsp+AD8h] [rbp+9D8h]
  int v134; // [rsp+AE0h] [rbp+9E0h]
  __int64 v135; // [rsp+AE8h] [rbp+9E8h]
  int v136; // [rsp+AF0h] [rbp+9F0h]
  __int64 v137; // [rsp+AF8h] [rbp+9F8h]
  int v138; // [rsp+B00h] [rbp+A00h]
  const wchar_t *v139; // [rsp+B08h] [rbp+A08h]
  unsigned int *v140; // [rsp+B10h] [rbp+A10h]
  int v141; // [rsp+B18h] [rbp+A18h]
  __int64 v142; // [rsp+B20h] [rbp+A20h]
  int v143; // [rsp+B28h] [rbp+A28h]
  __int64 v144; // [rsp+B30h] [rbp+A30h]
  int v145; // [rsp+B38h] [rbp+A38h]
  _BYTE v146[40]; // [rsp+B40h] [rbp+A40h] BYREF

  v2 = a2;
  v96 = a2;
  v92 = 0;
  v89 = 0;
  v100 = 0;
  v99 = a1;
  v4 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 236);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 2);
    v101 = v5;
    v6 = *(_QWORD *)(v5 + 1672);
    *(_QWORD *)&v115.left = v6;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v107,
      (struct DXGDEVICE *)v5);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v111,
      &v99,
      1u);
    if ( !v111[0] )
    {
      v38 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v38 + 24) = 4601LL;
      WdLogEvent5_WdError(v38);
      LODWORD(v15) = -1073741801;
LABEL_24:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v107);
      return (unsigned int)v15;
    }
    v8 = *(_QWORD *)(v5 + 16);
    v104 = 0;
    v103 = *(_QWORD *)(v8 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v108, v5, 1, v9, 0);
    v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v108);
    v15 = v10;
    if ( v10 < 0 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
      v39[3] = v15;
      v39[4] = v5;
    }
    else
    {
      ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v6 + 2304), v2, &v92, &v89);
      if ( v92 && v89 )
      {
LABEL_6:
        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v6 + 2304), v2);
        v17 = *(DXGADAPTER ***)(v6 + 2304);
        v90 = CddShadowPitch;
        CddDisplayMode = (struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetCddDisplayMode(v17, v2);
        v19 = *(_QWORD *)(v6 + 2304);
        P = CddDisplayMode;
        Width = CddDisplayMode->Width;
        Height = CddDisplayMode->Height;
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v19, v2, 1);
        *(_QWORD *)&v113.left = 0LL;
        *(_QWORD *)&v113.right = 0LL;
        memset(&v105, 0, sizeof(v105));
        v105.hAllocation = v89;
        v105.hDevice = *(_DWORD *)(v5 + 332);
        v93 = DXGDEVICE::Lock((PERESOURCE *)v5, &v105, (struct COREDEVICEACCESS *)v108);
        if ( (v93 & 0x80000000) != 0 )
        {
          v45 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v45 + 24) = 4684LL;
          WdLogEvent5_WdError(v45);
          LODWORD(v15) = v93;
        }
        else
        {
          if ( v105.pData )
          {
            if ( v4 == 1 )
            {
              if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
              {
                Width = *((_DWORD *)P + 1);
                Height = *(_DWORD *)P;
                v47 = 2;
                if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
                  v47 = 4;
                CurrentOrientation = v47;
              }
              P = (PVOID)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL) + 119);
              if ( P )
              {
                Global = DXGGLOBAL::GetGlobal(v24);
                v26 = (int *)((char *)Global + 960);
                if ( GetShadowBufferDirtyRect(&v115, *((_DWORD *)Global + 240), *((_DWORD *)Global + 241)) )
                {
                  v27 = v26[3];
                  if ( v27 == 20 )
                  {
                    if ( *v26 > Width || v26[1] > Height )
                      goto LABEL_20;
                    left = v115.left;
                    v113 = v115;
                    right = v115.right;
                    if ( *v26 == Width )
                    {
                      v50 = v113.left;
                    }
                    else
                    {
                      v50 = v115.left + ((Width - *v26) >> 1);
                      v113.left = v50;
                      right = ((Width - *v26) >> 1) + v115.right;
                      v113.right = right;
                    }
                    v51 = v26[1];
                    top = v113.top;
                    if ( v51 == Height )
                    {
                      bottom = v113.bottom;
                    }
                    else
                    {
                      top = ((Height - v51) >> 1) + v113.top;
                      v113.top = top;
                      bottom = ((Height - v26[1]) >> 1) + v113.bottom;
                      v113.bottom = bottom;
                    }
                    if ( v50 >= 0
                      && v50 <= (int)right
                      && top >= 0
                      && top <= (int)bottom
                      && right <= Width
                      && bottom <= Height
                      && v115.left >= 0 )
                    {
                      v54 = v115.right;
                      if ( v115.left <= v115.right )
                      {
                        v55 = v115.top;
                        if ( v115.top >= 0 )
                        {
                          v56 = v115.bottom;
                          if ( v115.top <= v115.bottom
                            && v115.right <= (unsigned int)*v26
                            && v115.bottom <= (unsigned int)v26[1] )
                          {
                            if ( v115.top < (unsigned int)v115.bottom )
                            {
                              v57 = (unsigned __int8 *)P;
                              v58 = v90;
                              do
                              {
                                v59 = left;
                                if ( left < v54 )
                                {
                                  v60 = v115.right;
                                  do
                                  {
                                    v61 = 3 * v59++;
                                    v62 = v61 + v26[2] * v55;
                                    v63 = (unsigned int)(4 * v50++);
                                    *(_DWORD *)((char *)v105.pData + (unsigned int)(v58 * top) + v63) = v57[v62] | ((v57[(unsigned int)(v62 + 1)] | (v57[(unsigned int)(v62 + 2)] << 8)) << 8);
                                  }
                                  while ( v59 < v60 );
                                  v50 = v113.left;
                                  v56 = v115.bottom;
                                  left = v115.left;
                                  v54 = v115.right;
                                }
                                ++top;
                                ++v55;
                              }
                              while ( v55 < v56 );
                              LODWORD(v2) = v96;
                              v5 = v101;
                            }
                            goto LABEL_16;
                          }
                        }
                      }
                    }
                    if ( byte_1C005FF40 )
                    {
                      DxgCreateLiveDumpWithWdLogs(
                        0x193u,
                        0x809uLL,
                        (unsigned int)(*v26 << 16) | (unsigned __int64)(unsigned __int16)v26[1],
                        (unsigned __int16)Height | (unsigned __int64)(Width << 16),
                        0LL);
                      byte_1C005FF40 = 0;
                    }
                    v31 = -1073741823;
                  }
                  else
                  {
                    if ( v27 != 22 )
                      goto LABEL_20;
                    v28 = v26[2];
                    v29 = v26[1];
                    v30 = *v26;
                    v114[0] = 0LL;
                    v114[1] = (PVOID)__PAIR64__(Height, Width);
                    v31 = DxgkpBlitA8R8R8G8(
                            (unsigned __int8 *)P,
                            v30,
                            v29,
                            v28,
                            CurrentOrientation,
                            (unsigned __int8 *)v105.pData,
                            v90,
                            (const struct tagRECT *)v114,
                            &v115,
                            &v113);
                  }
                  if ( v31 >= 0 )
                    goto LABEL_16;
                }
              }
LABEL_20:
              *(PVOID *)((char *)v114 + 4) = 0LL;
              LODWORD(v114[0]) = *(_DWORD *)(v5 + 332);
              v114[1] = &v89;
              HIDWORD(v114[0]) = 1;
              v34 = DXGDEVICE::Unlock((DXGDEVICE *)v5, (const struct _D3DKMT_UNLOCK *)v114, 0LL);
              if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v6) )
              {
                if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v6 + 2304), v2) )
                {
                  if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v6 + 2304), v2) )
                  {
                    if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v6 + 2304), v2) )
                    {
                      v84 = v99;
                      v85 = ADAPTER_DISPLAY::PresentCddPrimary(
                              *(ADAPTER_DISPLAY **)(v6 + 2304),
                              v99,
                              v2,
                              (struct COREDEVICEACCESS *)v108);
                      v87 = v85;
                      if ( v85 < 0 )
                      {
                        v88 = (_QWORD *)WdLogNewEntry5_WdError(v86);
                        v88[3] = v84;
                        v88[4] = v87;
                        v88[5] = 5065LL;
                        WdLogEvent5_WdError(v88);
                      }
                    }
                  }
                }
              }
              LODWORD(v15) = v34;
              goto LABEL_22;
            }
            if ( v4 != 2 )
              goto LABEL_20;
            v91 = 0;
            v117 = 292;
            cy = 0;
            v124 = 292;
            v131 = 292;
            v118 = L"CddBootImageFile";
            v138 = 292;
            v119 = v114;
            v95 = 0;
            v125 = L"CddBootImageBackgroundColor";
            v126 = &v91;
            v132 = L"CddBootImageOffsetX";
            v133 = &v95;
            v139 = L"CddBootImageOffsetY";
            v98 = 0;
            LODWORD(v114[0]) = 0;
            v114[1] = 0LL;
            P = 0LL;
            v97.cx = 0;
            v93 = 0;
            v116 = 0LL;
            v121 = 0LL;
            v122 = 0;
            v123 = 0LL;
            v127 = 67108868;
            v128 = 0LL;
            v129 = 0;
            v130 = 0LL;
            v134 = 67108868;
            v135 = 0LL;
            v136 = 0;
            v137 = 0LL;
            v141 = 67108868;
            v142 = 0LL;
            v143 = 0;
            v144 = 0LL;
            v145 = 0;
            v140 = &v98;
            v97.cy = 0;
            v120 = 16777217;
            memset(v146, 0, sizeof(v146));
            if ( (int)RtlQueryRegistryValuesEx(
                        0LL,
                        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\CddBootImageData",
                        &v116,
                        0LL,
                        0LL) >= 0
              && v114[1] )
            {
              LoadAndExtractBitmapFile((struct _UNICODE_STRING *)v114, &P, &v97, &v93);
              cy = v97.cy;
            }
            v65 = v91;
            v113.right = Width;
            v113.bottom = Height;
            if ( !v91 )
            {
              v71 = v100;
              goto LABEL_93;
            }
            v66 = 0;
            if ( !Height )
              goto LABEL_91;
            v67 = v90;
            v68 = (unsigned __int64)(4 * Width) >> 2;
            while ( 1 )
            {
              v69 = (unsigned __int64)(4 * Width) >> 2;
              v70 = (unsigned int *)((char *)v105.pData + (unsigned int)(v67 * v66));
              if ( v68 )
                break;
LABEL_89:
              if ( ++v66 >= Height )
              {
                LODWORD(v2) = v96;
                v6 = *(_QWORD *)&v115.left;
                v5 = v101;
                cy = v97.cy;
LABEL_91:
                v71 = 1;
LABEL_93:
                v72 = P;
                if ( P )
                {
                  if ( v97.cx )
                  {
                    if ( v97.cx <= Width )
                    {
                      v73 = v95;
                      if ( v95 < Width && v97.cx + v95 <= Width )
                      {
                        if ( cy )
                        {
                          if ( cy <= Height )
                          {
                            v74 = v98;
                            if ( v98 < Height )
                            {
                              v75 = v97.cy;
                              if ( v97.cy + v98 <= Height )
                              {
                                v76 = 0;
                                if ( v97.cy )
                                {
                                  v77 = v93;
                                  v78 = (unsigned int)(4 * v97.cx);
                                  v79 = (char *)P;
                                  while ( 1 )
                                  {
                                    memmove((char *)v105.pData + 4 * v73 + v90 * v74++, &v79[v77 * v76], v78);
                                    if ( ++v76 >= v75 )
                                      break;
                                    v73 = v95;
                                  }
                                  LODWORD(v2) = v96;
                                  v6 = *(_QWORD *)&v115.left;
                                  v5 = v101;
                                  v72 = P;
                                }
                                v71 = 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v72, 0x4B677844u);
                }
                if ( v114[1] )
                  ExFreePoolWithTag(v114[1], 0);
                if ( v71 )
                {
LABEL_16:
                  if ( *(_QWORD *)(v5 + 1672) != *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) )
                  {
                    memset(&v106, 0, sizeof(v106));
                    ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v6 + 2304), v2, 1);
                    *(_QWORD *)&v106.Flags.0 = 0LL;
                    v106.pSource = v105.pData;
                    v106.Pitch = v90;
                    v106.pDirtyRect = &v113;
                    v36 = *(_QWORD *)(v6 + 2304);
                    v106.VidPnSourceId = v2;
                    v106.BytesPerPixel = 4;
                    v106.pMoves = 0LL;
                    v106.NumDirtyRects = 1;
                    v32 = *(_QWORD *)(v36 + 264);
                    if ( v32 && (unsigned int)v2 < *(_DWORD *)v32 && (v37 = *(_QWORD *)(v32 + 8)) != 0 )
                      v33 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v37 + 2704LL * (unsigned int)v2), &v106);
                    else
                      v33 = -1073741811;
                    goto LABEL_19;
                  }
                  memset(&v112[8], 0, 0x5D0uLL);
                  *(_DWORD *)&v112[88] |= 1u;
                  *(struct tagRECT *)&v112[32] = v113;
                  *(_DWORD *)&v112[64] = 1;
                  *(_DWORD *)v112 = *((_DWORD *)v99 + 6);
                  *(_QWORD *)&v112[72] = v114;
                  *(_DWORD *)&v112[20] = v89;
                  *(_DWORD *)&v112[24] = v92;
                  *(struct tagRECT *)&v112[48] = v113;
                  *(struct tagRECT *)v114 = v113;
                  v33 = DXGCONTEXT::PresentFromCdd(
                          v99,
                          (struct _D3DKMT_PRESENT *)v112,
                          v2,
                          (struct COREDEVICEACCESS *)v108,
                          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v102,
                          &v99);
                  if ( v33 < 0 )
                    goto LABEL_115;
                  v32 = *(unsigned int *)(v6 + 3884);
                  if ( (v32 & 0x10) != 0 )
                  {
                    DXGDEVICE::FlushScheduler(*((_QWORD **)v99 + 2), 1u);
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(DXGADAPTER ***)(v6 + 2304),
                                                   v2);
                    if ( DisplayedPrimaryAllocation )
                    {
                      memset(v112, 0, sizeof(v112));
                      v81 = *(_QWORD **)(v6 + 2312);
                      v82 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
                      *(_DWORD *)v112 = v2;
                      *(_QWORD *)&v112[16] = v82;
                      (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(v81[66] + 8LL) + 216LL))(
                        v81[67],
                        *((_QWORD *)DisplayedPrimaryAllocation + 1),
                        &v112[4],
                        &v112[8]);
                      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v81[63] + 8LL) + 712LL))(
                        *(_QWORD *)(*(_QWORD *)(v5 + 16) + 512LL),
                        v112);
                    }
                  }
LABEL_19:
                  if ( v33 < 0 )
                  {
LABEL_115:
                    v83 = WdLogNewEntry5_WdError(v32);
                    *(_QWORD *)(v83 + 24) = v33;
                    WdLogEvent5_WdError(v83);
                  }
                }
                goto LABEL_20;
              }
            }
            if ( ((unsigned __int8)v70 & 4) != 0 )
            {
              *v70 = v65;
              v69 = v68 - 1;
              if ( v68 == 1 )
              {
LABEL_88:
                v65 = v91;
                goto LABEL_89;
              }
              ++v70;
            }
            memset64(v70, v65 | ((unsigned __int64)v65 << 32), v69 >> 1);
            if ( (v69 & 1) != 0 )
              v70[v69 - 1] = v65;
            goto LABEL_88;
          }
          v46 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v46 + 24) = 4690LL;
          WdLogEvent5_WdError(v46);
          LODWORD(v15) = -1073741823;
        }
LABEL_22:
        COREACCESS::~COREACCESS((COREACCESS *)v110);
        COREACCESS::~COREACCESS((COREACCESS *)v109);
        if ( v104 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
        goto LABEL_24;
      }
      v40 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v6 + 2304),
              (struct DXGDEVICE *)v5,
              v2,
              &v92,
              &v89,
              (struct COREDEVICEACCESS *)v108);
      v15 = v40;
      if ( v40 == -1073741637 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
        v15 = -1071775482LL;
      }
      else
      {
        if ( v40 >= 0 )
          goto LABEL_6;
        v39 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
      }
      v39[4] = v2;
      v39[3] = v6;
      v39[5] = v15;
    }
    WdLogEvent5_WdEvent(v39);
    goto LABEL_22;
  }
  return 0LL;
}
