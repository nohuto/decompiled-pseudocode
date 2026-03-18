/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011D5B0 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000AEF4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000B508 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000D7C4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C0014650 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C0020EF8 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C008ACA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0093880 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E8674 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00E873C (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01722B0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z @ 0x1C01835F0 (-LoadAndExtractBitmapFile@@YAJPEAU_UNICODE_STRING@@PEAPEAXPEAUtagSIZE@@PEAK@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01B5A70 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // ebx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  int CddShadowPitch; // eax
  DXGADAPTER **v24; // rcx
  struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v26; // rcx
  unsigned int Width; // esi
  unsigned int Height; // r14d
  __int64 v29; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // edi
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 top; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGGLOBAL *Global; // rax
  int *v42; // rbx
  int v43; // eax
  int v44; // r9d
  int v45; // r8d
  int v46; // edx
  int v47; // eax
  unsigned int left; // edi
  unsigned int right; // edx
  signed int v50; // r8d
  int v51; // ecx
  unsigned int bottom; // ecx
  unsigned int v53; // eax
  unsigned int v54; // r10d
  unsigned int v55; // r11d
  unsigned __int8 *v56; // r15
  int v57; // r13d
  unsigned int v58; // esi
  unsigned int v59; // r11d
  int v60; // eax
  __int64 v61; // rdi
  __int64 v62; // rcx
  unsigned int cy; // ebx
  int v64; // r11d
  int v65; // r12d
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // r10
  _DWORD *v68; // r8
  int v69; // edi
  PVOID v70; // r8
  unsigned int v71; // ecx
  unsigned int v72; // ebx
  unsigned int v73; // esi
  int v74; // r14d
  unsigned int v75; // r13d
  size_t v76; // r12
  char *v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // ebx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rsi
  _QWORD *v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // esi
  struct DXGCONTEXT *v88; // rdi
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  _QWORD *v93; // rax
  char v94; // [rsp+50h] [rbp-B0h]
  unsigned int v95; // [rsp+54h] [rbp-ACh] BYREF
  int v96; // [rsp+58h] [rbp-A8h]
  unsigned int v97; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v98; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v99; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v101; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+74h] [rbp-8Ch]
  tagSIZE v103; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v104; // [rsp+80h] [rbp-80h] BYREF
  struct DXGCONTEXT *v105; // [rsp+88h] [rbp-78h] BYREF
  int v106; // [rsp+90h] [rbp-70h]
  __int64 v107; // [rsp+98h] [rbp-68h]
  char v108[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-58h]
  char v110; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_LOCK v111; // [rsp+B8h] [rbp-48h] BYREF
  _DXGKARG_PRESENT_DISPLAYONLY v112; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v113[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v114[96]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v115[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v116[2112]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct tagRECT v117; // [rsp+A20h] [rbp+920h] BYREF
  PVOID v118[2]; // [rsp+A30h] [rbp+930h] BYREF
  struct tagRECT v119; // [rsp+A40h] [rbp+940h] BYREF
  __int64 v120; // [rsp+A50h] [rbp+950h] BYREF
  int v121; // [rsp+A58h] [rbp+958h]
  const wchar_t *v122; // [rsp+A60h] [rbp+960h]
  PVOID *v123; // [rsp+A68h] [rbp+968h]
  int v124; // [rsp+A70h] [rbp+970h]
  __int64 v125; // [rsp+A78h] [rbp+978h]
  int v126; // [rsp+A80h] [rbp+980h]
  __int64 v127; // [rsp+A88h] [rbp+988h]
  int v128; // [rsp+A90h] [rbp+990h]
  const wchar_t *v129; // [rsp+A98h] [rbp+998h]
  unsigned int *v130; // [rsp+AA0h] [rbp+9A0h]
  int v131; // [rsp+AA8h] [rbp+9A8h]
  __int64 v132; // [rsp+AB0h] [rbp+9B0h]
  int v133; // [rsp+AB8h] [rbp+9B8h]
  __int64 v134; // [rsp+AC0h] [rbp+9C0h]
  int v135; // [rsp+AC8h] [rbp+9C8h]
  const wchar_t *v136; // [rsp+AD0h] [rbp+9D0h]
  unsigned int *v137; // [rsp+AD8h] [rbp+9D8h]
  int v138; // [rsp+AE0h] [rbp+9E0h]
  __int64 v139; // [rsp+AE8h] [rbp+9E8h]
  int v140; // [rsp+AF0h] [rbp+9F0h]
  __int64 v141; // [rsp+AF8h] [rbp+9F8h]
  int v142; // [rsp+B00h] [rbp+A00h]
  const wchar_t *v143; // [rsp+B08h] [rbp+A08h]
  unsigned int *v144; // [rsp+B10h] [rbp+A10h]
  int v145; // [rsp+B18h] [rbp+A18h]
  __int64 v146; // [rsp+B20h] [rbp+A20h]
  int v147; // [rsp+B28h] [rbp+A28h]
  __int64 v148; // [rsp+B30h] [rbp+A30h]
  int v149; // [rsp+B38h] [rbp+A38h]
  _BYTE v150[40]; // [rsp+B40h] [rbp+A40h] BYREF

  v4 = (unsigned int)a2;
  v102 = a2;
  v98 = 0;
  v95 = 0;
  v106 = 0;
  v94 = 0;
  v105 = a1;
  v6 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4) + 236);
  if ( !v6 )
    return 0LL;
  v8 = *((_QWORD *)a1 + 2);
  v107 = v8;
  v9 = *(_QWORD *)(v8 + 1800);
  *(_QWORD *)&v119.left = v9;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v113,
    (struct DXGDEVICE *)v8);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v115,
    &v105,
    1u);
  if ( v115[0] )
  {
    v14 = *(_QWORD *)(v8 + 16);
    v110 = 0;
    v109 = *(_QWORD *)(v14 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v114, v8, 1LL, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v114);
    v13 = v16;
    if ( v16 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
      v18[3] = v13;
      v18[4] = v8;
LABEL_14:
      WdLogEvent5_WdEvent(v18);
LABEL_116:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
      goto LABEL_117;
    }
    ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v9 + 2280), (unsigned int)v4, &v98, &v95);
    if ( !v98 || !v95 )
    {
      v21 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v9 + 2280),
              (struct DXGDEVICE *)v8,
              (unsigned int)v4,
              &v98,
              &v95,
              (struct COREDEVICEACCESS *)v114);
      v13 = v21;
      if ( v21 == -1073741637 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v22);
        v13 = -1071775482LL;
LABEL_13:
        v18[4] = v4;
        v18[3] = v9;
        v18[5] = v13;
        goto LABEL_14;
      }
      if ( v21 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v22);
        goto LABEL_13;
      }
      v94 = 1;
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v9 + 2280), (unsigned int)v4, v19, v20);
    v24 = *(DXGADAPTER ***)(v9 + 2280);
    v96 = CddShadowPitch;
    CddDisplayMode = (struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetCddDisplayMode(v24, v4);
    v26 = *(_QWORD *)(v9 + 2280);
    P = CddDisplayMode;
    Width = CddDisplayMode->Width;
    Height = CddDisplayMode->Height;
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v26, (unsigned int)v4, 1LL, v29);
    *(_QWORD *)&v117.left = 0LL;
    *(_QWORD *)&v117.right = 0LL;
    memset(&v111, 0, sizeof(v111));
    v111.hAllocation = v95;
    v111.hDevice = *(_DWORD *)(v8 + 332);
    v99 = DXGDEVICE::Lock((PERESOURCE *)v8, &v111, (struct COREDEVICEACCESS *)v114, v31);
    if ( (v99 & 0x80000000) != 0 )
    {
      v35 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v35 + 24) = 4513LL;
      WdLogEvent5_WdError(v35);
      LODWORD(v13) = v99;
      goto LABEL_116;
    }
    if ( !v111.pData )
    {
      v36 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v36 + 24) = 4519LL;
      WdLogEvent5_WdError(v36);
      LODWORD(v13) = -1073741823;
      goto LABEL_116;
    }
    if ( v6 == 1 )
    {
      if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
      {
        Width = *((_DWORD *)P + 1);
        Height = *(_DWORD *)P;
        v37 = 2;
        if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
          v37 = 4;
        CurrentOrientation = v37;
      }
      P = (PVOID)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL, v32, 0LL, top) + 119);
      if ( P )
      {
        Global = DXGGLOBAL::GetGlobal(v39, v38, v40, top);
        v42 = (int *)((char *)Global + 960);
        if ( GetShadowBufferDirtyRect(&v119, *((_DWORD *)Global + 240), *((_DWORD *)Global + 241)) )
        {
          v43 = v42[3];
          if ( v43 == 20 )
          {
            if ( *v42 > Width || v42[1] > Height )
              goto LABEL_112;
            left = v119.left;
            v117 = v119;
            right = v119.right;
            if ( *v42 == Width )
            {
              v50 = v117.left;
            }
            else
            {
              v50 = v119.left + ((Width - *v42) >> 1);
              v117.left = v50;
              right = ((Width - *v42) >> 1) + v119.right;
              v117.right = right;
            }
            v51 = v42[1];
            top = (unsigned int)v117.top;
            if ( v51 == Height )
            {
              bottom = v117.bottom;
            }
            else
            {
              top = ((Height - v51) >> 1) + v117.top;
              v117.top += (Height - v51) >> 1;
              bottom = ((Height - v42[1]) >> 1) + v117.bottom;
              v117.bottom = bottom;
            }
            if ( v50 >= 0
              && v50 <= (int)right
              && (int)top >= 0
              && (int)top <= (int)bottom
              && right <= Width
              && bottom <= Height
              && v119.left >= 0 )
            {
              v53 = v119.right;
              if ( v119.left <= v119.right )
              {
                v54 = v119.top;
                if ( v119.top >= 0 )
                {
                  v55 = v119.bottom;
                  if ( v119.top <= v119.bottom
                    && v119.right <= (unsigned int)*v42
                    && v119.bottom <= (unsigned int)v42[1] )
                  {
                    if ( v119.top < (unsigned int)v119.bottom )
                    {
                      v56 = (unsigned __int8 *)P;
                      v57 = v96;
                      do
                      {
                        v58 = left;
                        if ( left < v53 )
                        {
                          v59 = v119.right;
                          do
                          {
                            v60 = 3 * v58++;
                            v61 = v60 + v54 * v42[2];
                            v62 = (unsigned int)(4 * v50++);
                            *(_DWORD *)((char *)v111.pData + (unsigned int)(v57 * top) + v62) = v56[v61] | ((v56[(unsigned int)(v61 + 1)] | (v56[(unsigned int)(v61 + 2)] << 8)) << 8);
                          }
                          while ( v58 < v59 );
                          v50 = v117.left;
                          v55 = v119.bottom;
                          left = v119.left;
                          v53 = v119.right;
                        }
                        LODWORD(top) = top + 1;
                        ++v54;
                      }
                      while ( v54 < v55 );
                      LODWORD(v4) = v102;
                      v8 = v107;
                    }
                    goto LABEL_100;
                  }
                }
              }
            }
            if ( byte_1C006F044 )
            {
              DxgCreateLiveDumpWithWdLogs(
                0x193u,
                0x809uLL,
                (unsigned __int16)v42[1] | (unsigned __int64)(unsigned int)(*v42 << 16),
                (Width << 16) | (unsigned __int64)(unsigned __int16)Height,
                0LL);
              byte_1C006F044 = 0;
            }
            v47 = -1073741823;
          }
          else
          {
            if ( v43 != 22 )
              goto LABEL_112;
            v44 = v42[2];
            v45 = v42[1];
            v46 = *v42;
            v118[0] = 0LL;
            v118[1] = (PVOID)__PAIR64__(Height, Width);
            v47 = DxgkpBlitA8R8R8G8(
                    (unsigned __int8 *)P,
                    v46,
                    v45,
                    v44,
                    CurrentOrientation,
                    (unsigned __int8 *)v111.pData,
                    v96,
                    (const struct tagRECT *)v118,
                    &v119,
                    &v117);
          }
          if ( v47 >= 0 )
            goto LABEL_100;
        }
      }
LABEL_112:
      *(PVOID *)((char *)v118 + 4) = 0LL;
      LODWORD(v118[0]) = *(_DWORD *)(v8 + 332);
      v118[1] = &v95;
      HIDWORD(v118[0]) = 1;
      v87 = DXGDEVICE::Unlock((DXGDEVICE *)v8, (const struct _D3DKMT_UNLOCK *)v118, 0LL, top);
      if ( v94 )
      {
        v88 = v105;
        v89 = ADAPTER_DISPLAY::PresentCddPrimary(
                *(ADAPTER_DISPLAY **)(v9 + 2280),
                v105,
                v4,
                (struct COREDEVICEACCESS *)v114);
        v92 = v89;
        if ( v89 < 0 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90);
          v93[3] = v88;
          v93[4] = v92;
          v93[5] = 4891LL;
          WdLogEvent5_WdError(v93);
        }
      }
      LODWORD(v13) = v87;
      goto LABEL_116;
    }
    if ( v6 != 2 )
      goto LABEL_112;
    v97 = 0;
    v121 = 292;
    cy = 0;
    v128 = 292;
    v135 = 292;
    v122 = L"CddBootImageFile";
    v142 = 292;
    v123 = v118;
    v101 = 0;
    v129 = L"CddBootImageBackgroundColor";
    v130 = &v97;
    v136 = L"CddBootImageOffsetX";
    v137 = &v101;
    v143 = L"CddBootImageOffsetY";
    v104 = 0;
    LODWORD(v118[0]) = 0;
    v118[1] = 0LL;
    P = 0LL;
    v103.cx = 0;
    v99 = 0;
    v120 = 0LL;
    v125 = 0LL;
    v126 = 0;
    v127 = 0LL;
    v131 = 67108868;
    v132 = 0LL;
    v133 = 0;
    v134 = 0LL;
    v138 = 67108868;
    v139 = 0LL;
    v140 = 0;
    v141 = 0LL;
    v145 = 67108868;
    v146 = 0LL;
    v147 = 0;
    v148 = 0LL;
    v149 = 0;
    v144 = &v104;
    v103.cy = 0;
    v124 = 16777217;
    memset(v150, 0, sizeof(v150));
    if ( (int)RtlQueryRegistryValuesEx(
                0LL,
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\CddBootImageData",
                &v120,
                0LL,
                0LL) >= 0
      && v118[1] )
    {
      LoadAndExtractBitmapFile((struct _UNICODE_STRING *)v118, &P, &v103, &v99);
      cy = v103.cy;
    }
    top = v97;
    v117.right = Width;
    v117.bottom = Height;
    if ( !v97 )
    {
      v69 = v106;
      goto LABEL_81;
    }
    v64 = 0;
    if ( !Height )
      goto LABEL_79;
    v65 = v96;
    v66 = (unsigned __int64)(4 * Width) >> 2;
    while ( 1 )
    {
      v67 = (unsigned __int64)(4 * Width) >> 2;
      v68 = (char *)v111.pData + (unsigned int)(v65 * v64);
      if ( v66 )
        break;
LABEL_77:
      if ( ++v64 >= Height )
      {
        LODWORD(v4) = v102;
        v8 = v107;
        v9 = *(_QWORD *)&v119.left;
        cy = v103.cy;
LABEL_79:
        v69 = 1;
LABEL_81:
        v70 = P;
        if ( P )
        {
          if ( v103.cx )
          {
            if ( v103.cx <= Width )
            {
              v71 = v101;
              if ( v101 < Width && v103.cx + v101 <= Width )
              {
                if ( cy )
                {
                  if ( cy <= Height )
                  {
                    v72 = v104;
                    if ( v104 < Height )
                    {
                      v73 = v103.cy;
                      if ( v103.cy + v104 <= Height )
                      {
                        v74 = 0;
                        if ( v103.cy )
                        {
                          v75 = v99;
                          v76 = (unsigned int)(4 * v103.cx);
                          v77 = (char *)P;
                          while ( 1 )
                          {
                            memmove((char *)v111.pData + 4 * v71 + v96 * v72++, &v77[v75 * v74], v76);
                            if ( ++v74 >= v73 )
                              break;
                            v71 = v101;
                          }
                          LODWORD(v4) = v102;
                          v8 = v107;
                          v9 = *(_QWORD *)&v119.left;
                          v70 = P;
                        }
                        v69 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(v70, 0x4B677844u);
        }
        if ( v118[1] )
          ExFreePoolWithTag(v118[1], 0);
        if ( v69 )
        {
LABEL_100:
          if ( *(_QWORD *)(v8 + 1800) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) )
          {
            memset(&v112, 0, sizeof(v112));
            ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v9 + 2280), (unsigned int)v4, 1LL, v84);
            *(_QWORD *)&v112.Flags.0 = 0LL;
            v112.pSource = v111.pData;
            v112.Pitch = v96;
            v112.pDirtyRect = &v117;
            v85 = *(_QWORD *)(v9 + 2280);
            v112.VidPnSourceId = v4;
            v112.BytesPerPixel = 4;
            v112.pMoves = 0LL;
            v112.NumDirtyRects = 1;
            v79 = *(_QWORD *)(v85 + 264);
            if ( v79 && (unsigned int)v4 < *(_DWORD *)v79 && (v78 = *(_QWORD *)(v79 + 8)) != 0 )
              v80 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v78 + 2704LL * (unsigned int)v4), &v112);
            else
              v80 = -1073741811;
            goto LABEL_110;
          }
          memset(&v116[8], 0, 0x5D0uLL);
          *(_DWORD *)&v116[88] |= 1u;
          *(struct tagRECT *)&v116[32] = v117;
          *(_DWORD *)&v116[64] = 1;
          *(_DWORD *)v116 = *((_DWORD *)v105 + 6);
          *(_QWORD *)&v116[72] = v118;
          *(_DWORD *)&v116[20] = v95;
          *(_DWORD *)&v116[24] = v98;
          *(struct tagRECT *)&v116[48] = v117;
          *(struct tagRECT *)v118 = v117;
          v80 = DXGCONTEXT::PresentFromCdd(
                  v105,
                  (struct _D3DKMT_PRESENT *)v116,
                  (unsigned int)v4,
                  (struct COREDEVICEACCESS *)v114,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)v108,
                  &v105);
          if ( v80 < 0 )
            goto LABEL_111;
          v79 = *(unsigned int *)(v9 + 3868);
          if ( (v79 & 0x10) != 0 )
          {
            DXGDEVICE::FlushScheduler(*((_QWORD **)v105 + 2), 1);
            DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                           *(DXGADAPTER ***)(v9 + 2280),
                                           v4);
            if ( DisplayedPrimaryAllocation )
            {
              memset(v116, 0, sizeof(v116));
              v82 = *(_QWORD **)(v9 + 2288);
              v83 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
              *(_DWORD *)v116 = v4;
              *(_QWORD *)&v116[16] = v83;
              (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(v82[54] + 8LL) + 216LL))(
                v82[55],
                *((_QWORD *)DisplayedPrimaryAllocation + 1),
                &v116[4],
                &v116[8]);
              (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v82[51] + 8LL) + 712LL))(
                *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL),
                v116);
            }
          }
LABEL_110:
          if ( v80 < 0 )
          {
LABEL_111:
            v86 = WdLogNewEntry5_WdError(v79, v78);
            *(_QWORD *)(v86 + 24) = v80;
            WdLogEvent5_WdError(v86);
          }
        }
        goto LABEL_112;
      }
    }
    if ( ((unsigned __int8)v68 & 4) != 0 )
    {
      *v68 = top;
      v67 = v66 - 1;
      if ( v66 == 1 )
      {
LABEL_76:
        top = v97;
        goto LABEL_77;
      }
      ++v68;
    }
    memset64(v68, (unsigned int)top | ((unsigned __int64)(unsigned int)top << 32), v67 >> 1);
    if ( (v67 & 1) != 0 )
      v68[v67 - 1] = top;
    goto LABEL_76;
  }
  v12 = WdLogNewEntry5_WdError(v11, v10);
  *(_QWORD *)(v12 + 24) = 4429LL;
  WdLogEvent5_WdError(v12);
  LODWORD(v13) = -1073741801;
LABEL_117:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v115);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v113);
  return (unsigned int)v13;
}
