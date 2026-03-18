/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016F800 (-DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0014410 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019C0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0027DE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C002C5E8 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C010D80C (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0152708 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C01545C0 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01560D4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0171718 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01D6024 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int CddShadowPitch; // eax
  DXGADAPTER **v22; // rcx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rbx
  unsigned int Width; // r14d
  unsigned int Height; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  struct DXGGLOBAL *Global; // rax
  int *v33; // rbx
  int v34; // eax
  int v35; // r9d
  int v36; // r8d
  int v37; // edx
  int v38; // eax
  unsigned int left; // r8d
  unsigned int right; // edx
  signed int v41; // r9d
  int v42; // ecx
  signed int top; // r10d
  unsigned int bottom; // ecx
  unsigned int v45; // eax
  unsigned int v46; // r11d
  unsigned int v47; // r13d
  unsigned __int8 *v48; // rsi
  int v49; // edi
  unsigned int v50; // r14d
  unsigned int v51; // r13d
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // r14d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // r13
  _QWORD *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // r14d
  struct DXGCONTEXT *v64; // rbx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rdi
  _QWORD *v68; // rax
  unsigned int v69; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v70; // [rsp+54h] [rbp-ACh] BYREF
  int v71; // [rsp+58h] [rbp-A8h]
  struct DXGCONTEXT *v72; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+70h] [rbp-90h]
  unsigned int v75; // [rsp+74h] [rbp-8Ch]
  struct tagRECT v76; // [rsp+78h] [rbp-88h] BYREF
  struct DXGHWQUEUE *v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  char v79[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  char v81; // [rsp+A8h] [rbp-58h]
  _DXGKARG_PRESENT_DISPLAYONLY v82; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_LOCK v83; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v84[16]; // [rsp+120h] [rbp+20h] BYREF
  char v85[8]; // [rsp+130h] [rbp+30h] BYREF
  char v86[32]; // [rsp+138h] [rbp+38h] BYREF
  char v87[56]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v88[8]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v89[2112]; // [rsp+1D0h] [rbp+D0h] BYREF
  tagRECT v90; // [rsp+A10h] [rbp+910h] BYREF
  struct tagRECT v91; // [rsp+A20h] [rbp+920h] BYREF

  v4 = a4;
  v75 = a4;
  v70 = 0;
  v69 = 0;
  v78 = a3;
  v77 = a2;
  v72 = a1;
  result = *((unsigned int *)DXGGLOBAL::GetGlobal((__int64)a1) + 256);
  LODWORD(v73) = result;
  if ( (_DWORD)result )
  {
    v7 = *((_QWORD *)a1 + 2);
    v8 = *(_QWORD *)(v7 + 1688);
    *(_QWORD *)&v76.left = v8;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84,
      (struct DXGDEVICE *)v7);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v88,
      &v72,
      1u);
    if ( !v88[0] )
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = 4685LL;
      WdLogEvent5_WdError(v10);
      LODWORD(v11) = -1073741801;
LABEL_83:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v88);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v84);
      return (unsigned int)v11;
    }
    v12 = *(_QWORD *)(v7 + 16);
    v81 = 0;
    v80 = *(_QWORD *)(v12 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, v7, 1, v13, 0);
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85);
    v11 = v14;
    if ( v14 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
      v17[3] = v11;
      v17[4] = v7;
LABEL_13:
      WdLogEvent5_WdEvent(v17);
      goto LABEL_81;
    }
    ADAPTER_DISPLAY::GetCddAllocationHandles(*(DXGADAPTER ***)(v8 + 2456), v4, &v70, &v69);
    if ( !v70 || !v69 )
    {
      v18 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              *(DXGADAPTER ***)(v8 + 2456),
              (struct DXGDEVICE *)v7,
              v4,
              &v70,
              &v69,
              (struct COREDEVICEACCESS *)v85);
      v11 = v18;
      if ( v18 == -1073741637 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
        v11 = -1071775482LL;
LABEL_12:
        v17[4] = v4;
        v17[3] = v8;
        v17[5] = v11;
        goto LABEL_13;
      }
      if ( v18 < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
        goto LABEL_12;
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v8 + 2456), v4);
    v22 = *(DXGADAPTER ***)(v8 + 2456);
    v71 = CddShadowPitch;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(v22, v4);
    Width = CddDisplayMode->Width;
    Height = CddDisplayMode->Height;
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v8 + 2456), v4, 1);
    *(_QWORD *)&v91.left = 0LL;
    *(_QWORD *)&v91.right = 0LL;
    memset(&v83, 0, sizeof(v83));
    v83.hAllocation = v69;
    v83.hDevice = *(_DWORD *)(v7 + 332);
    v74 = DXGDEVICE::Lock((PERESOURCE *)v7, &v83, (struct COREDEVICEACCESS *)v85);
    if ( v74 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v28 + 24) = 4768LL;
      WdLogEvent5_WdError(v28);
      LODWORD(v11) = v74;
      goto LABEL_81;
    }
    if ( !v83.pData )
    {
      v29 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v29 + 24) = 4774LL;
      WdLogEvent5_WdError(v29);
      LODWORD(v11) = -1073741823;
LABEL_81:
      COREACCESS::~COREACCESS((COREACCESS *)v87);
      COREACCESS::~COREACCESS((COREACCESS *)v86);
      if ( v81 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
      goto LABEL_83;
    }
    if ( (_DWORD)v73 != 1 )
      goto LABEL_74;
    if ( ((CurrentOrientation - 2) & 0xFFFFFFFD) == 0 )
    {
      Width = CddDisplayMode->Height;
      v30 = 2;
      Height = CddDisplayMode->Width;
      if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
        v30 = 4;
      CurrentOrientation = v30;
    }
    v73 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal(4LL) + 129);
    if ( !v73
      || (Global = DXGGLOBAL::GetGlobal(v31),
          v33 = (int *)((char *)Global + 1040),
          !GetShadowBufferDirtyRect(&v90, *((_DWORD *)Global + 260), *((_DWORD *)Global + 261))) )
    {
LABEL_74:
      *(_QWORD *)&v90.left = 0LL;
      v90.left = *(_DWORD *)(v7 + 332);
      *(_QWORD *)&v90.right = &v69;
      v90.top = 1;
      v63 = DXGDEVICE::Unlock((DXGDEVICE *)v7, (const struct _D3DKMT_UNLOCK *)&v90, 0LL);
      if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v8) )
      {
        if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v8 + 2456), v4) )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v8 + 2456), v4) )
          {
            if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v8 + 2456), v4) )
            {
              v64 = v72;
              v65 = ADAPTER_DISPLAY::PresentCddPrimary(
                      *(ADAPTER_DISPLAY **)(v8 + 2456),
                      v72,
                      v4,
                      (struct COREDEVICEACCESS *)v85);
              v67 = v65;
              if ( v65 < 0 )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdError(v66);
                v68[3] = v64;
                v68[4] = v67;
                v68[5] = 5046LL;
                WdLogEvent5_WdError(v68);
              }
            }
          }
        }
      }
      LODWORD(v11) = v63;
      goto LABEL_81;
    }
    v34 = v33[3];
    if ( v34 == 20 )
    {
      if ( *v33 > Width || v33[1] > Height )
        goto LABEL_74;
      left = v90.left;
      v91 = v90;
      right = v90.right;
      if ( *v33 == Width )
      {
        v41 = v91.left;
      }
      else
      {
        v41 = v90.left + ((Width - *v33) >> 1);
        v91.left = v41;
        right = ((Width - *v33) >> 1) + v90.right;
        v91.right = right;
      }
      v42 = v33[1];
      top = v91.top;
      if ( v42 == Height )
      {
        bottom = v91.bottom;
      }
      else
      {
        top = ((Height - v42) >> 1) + v91.top;
        v91.top = top;
        bottom = ((Height - v33[1]) >> 1) + v91.bottom;
        v91.bottom = bottom;
      }
      if ( v41 >= 0
        && v41 <= (int)right
        && top >= 0
        && top <= (int)bottom
        && right <= Width
        && bottom <= Height
        && v90.left >= 0 )
      {
        v45 = v90.right;
        if ( v90.left <= v90.right )
        {
          v46 = v90.top;
          if ( v90.top >= 0 )
          {
            v47 = v90.bottom;
            if ( v90.top <= v90.bottom && v90.right <= (unsigned int)*v33 && v90.bottom <= (unsigned int)v33[1] )
            {
              if ( v90.top < (unsigned int)v90.bottom )
              {
                v48 = v73;
                v49 = v71;
                do
                {
                  v50 = left;
                  if ( left < v45 )
                  {
                    v51 = v90.right;
                    do
                    {
                      v52 = 3 * v50++;
                      v53 = v52 + v33[2] * v46;
                      v54 = (unsigned int)(4 * v41++);
                      *(_DWORD *)((char *)v83.pData + (unsigned int)(v49 * top) + v54) = v48[v53] | ((v48[(unsigned int)(v53 + 1)] | (v48[(unsigned int)(v53 + 2)] << 8)) << 8);
                    }
                    while ( v50 < v51 );
                    v41 = v91.left;
                    v47 = v90.bottom;
                    v45 = v90.right;
                    left = v90.left;
                  }
                  ++top;
                  ++v46;
                }
                while ( v46 < v47 );
                LODWORD(v4) = v75;
                v8 = *(_QWORD *)&v76.left;
              }
              goto LABEL_60;
            }
          }
        }
      }
      if ( byte_1C0079E30 )
      {
        DxgCreateLiveDumpWithWdLogs(
          0x193u,
          2057LL,
          (unsigned int)(*v33 << 16) | (unsigned __int64)(unsigned __int16)v33[1],
          (unsigned __int16)Height | (unsigned __int64)(Width << 16),
          0LL);
        byte_1C0079E30 = 0;
      }
      v38 = -1073741823;
    }
    else
    {
      if ( v34 != 22 )
        goto LABEL_74;
      v76.left = 0;
      v76.top = 0;
      v35 = v33[2];
      v36 = v33[1];
      v37 = *v33;
      v76.right = Width;
      v76.bottom = Height;
      v38 = DxgkpBlitA8R8R8G8(
              v73,
              v37,
              v36,
              v35,
              CurrentOrientation,
              (unsigned __int8 *)v83.pData,
              v71,
              &v76,
              &v90,
              &v91);
    }
    if ( v38 < 0 )
      goto LABEL_74;
LABEL_60:
    if ( *(_QWORD *)(v7 + 1688) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) )
    {
      memset(v89, 0, 0x5E8uLL);
      if ( v77 )
        *(_DWORD *)v89 = *((_DWORD *)v77 + 6);
      *(_DWORD *)&v89[104] |= 1u;
      *(_QWORD *)&v89[8] = v78;
      *(struct tagRECT *)&v89[48] = v91;
      *(_DWORD *)&v89[16] = *((_DWORD *)v72 + 6);
      *(_QWORD *)&v89[88] = &v90;
      *(_DWORD *)&v89[36] = v69;
      *(_DWORD *)&v89[40] = v70;
      *(struct tagRECT *)&v89[64] = v91;
      *(_DWORD *)&v89[80] = 1;
      v90 = v91;
      v56 = DXGCONTEXT::PresentFromCdd(
              v72,
              (struct _D3DKMT_SUBMITPRESENTBLTTOHWQUEUE *)v89,
              v4,
              (struct COREDEVICEACCESS *)v85,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v79,
              &v72);
      if ( v56 < 0 )
      {
LABEL_73:
        v62 = WdLogNewEntry5_WdError(v55);
        *(_QWORD *)(v62 + 24) = v56;
        WdLogEvent5_WdError(v62);
        goto LABEL_74;
      }
      v55 = *(unsigned int *)(v8 + 4044);
      if ( (v55 & 0x10) != 0 )
      {
        DXGDEVICE::FlushScheduler(*((_QWORD **)v72 + 2), 1u);
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v8 + 2456), v4);
        if ( DisplayedPrimaryAllocation )
        {
          memset(v89, 0, sizeof(v89));
          v58 = *(_QWORD **)(v8 + 2464);
          v59 = *((_QWORD *)DisplayedPrimaryAllocation + 2);
          *(_DWORD *)v89 = v4;
          *(_QWORD *)&v89[16] = v59;
          (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(v58[68] + 8LL) + 216LL))(
            v58[69],
            *((_QWORD *)DisplayedPrimaryAllocation + 1),
            &v89[4],
            &v89[8]);
          (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v58[65] + 8LL) + 824LL))(
            *(_QWORD *)(*(_QWORD *)(v7 + 16) + 528LL),
            v89);
        }
      }
    }
    else
    {
      memset(&v82, 0, sizeof(v82));
      ADAPTER_DISPLAY::GetCurrentOrientation(*(_QWORD *)(v8 + 2456), v4, 1);
      v82.Flags.Value = 0;
      v82.NumMoves = 0;
      v82.pMoves = 0LL;
      v82.pSource = v83.pData;
      v82.Pitch = v71;
      v82.pDirtyRect = &v91;
      v60 = *(_QWORD *)(v8 + 2456);
      v82.VidPnSourceId = v4;
      v82.BytesPerPixel = 4;
      v82.NumDirtyRects = 1;
      v55 = *(_QWORD *)(v60 + 264);
      if ( v55 && (unsigned int)v4 < *(_DWORD *)v55 && (v61 = *(_QWORD *)(v55 + 8)) != 0 )
        v56 = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v61 + 2704LL * (unsigned int)v4), &v82);
      else
        v56 = -1073741811;
    }
    if ( v56 >= 0 )
      goto LABEL_74;
    goto LABEL_73;
  }
  return result;
}
