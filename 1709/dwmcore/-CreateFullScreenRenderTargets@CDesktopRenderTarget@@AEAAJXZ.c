/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180133320
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016D30 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x180132440 (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801358F4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x18018EB40 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x18018EC54 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  unsigned int v1; // edi
  int v3; // r13d
  int v4; // r12d
  signed int CurrentDisplaySet; // eax
  signed int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  struct CDisplay *v11; // rdi
  __int128 v12; // xmm0
  CHwndRenderTarget *v13; // rcx
  int inited; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  signed int v17; // eax
  int v18; // r15d
  int v19; // r8d
  BOOL v20; // ecx
  int v21; // edx
  BOOL v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbx
  CHwndRenderTarget *v27; // rax
  CHwndRenderTarget *v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // eax
  signed int v31; // eax
  __int64 v32; // rax
  signed int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  DWORD v36; // r9d
  unsigned int v38; // [rsp+28h] [rbp-99h]
  unsigned int v39; // [rsp+28h] [rbp-99h]
  unsigned int v40; // [rsp+28h] [rbp-99h]
  char v41; // [rsp+30h] [rbp-91h]
  char v42; // [rsp+30h] [rbp-91h]
  char v43; // [rsp+38h] [rbp-89h]
  char v44; // [rsp+38h] [rbp-89h]
  int v45; // [rsp+48h] [rbp-79h]
  int v46; // [rsp+4Ch] [rbp-75h]
  int v47; // [rsp+50h] [rbp-71h]
  CHwndRenderTarget *v48; // [rsp+58h] [rbp-69h] BYREF
  int v49; // [rsp+60h] [rbp-61h]
  CDisplaySet *v50; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-51h]
  unsigned int v52; // [rsp+74h] [rbp-4Dh]
  __int128 v53; // [rsp+78h] [rbp-49h] BYREF
  __int64 v54; // [rsp+88h] [rbp-39h]
  unsigned int v55; // [rsp+90h] [rbp-31h]
  void *v56[2]; // [rsp+98h] [rbp-29h] BYREF
  int v57; // [rsp+A8h] [rbp-19h]
  __int64 v58; // [rsp+ACh] [rbp-15h]
  _BYTE v59[16]; // [rsp+B8h] [rbp-9h] BYREF
  struct CDisplay *v60; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v61; // [rsp+D8h] [rbp+17h] BYREF

  v1 = 0;
  v56[0] = v59;
  v60 = 0LL;
  v56[1] = v59;
  v50 = 0LL;
  v57 = 2;
  v3 = 0;
  v58 = 2LL;
  v4 = 0;
  v48 = 0LL;
  v47 = 0;
  v45 = 0;
  v46 = 0;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v50);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219898, 2u, CurrentDisplaySet, 0x249u);
  }
  else
  {
    v7 = *((_QWORD *)this + 49);
    if ( v7 && *(_DWORD *)(v7 + 56) )
    {
      v8 = 0LL;
      v49 = 0;
      do
      {
        v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 49) + 64LL) + 8 * v8);
        if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v50, *(HMONITOR *)(*(_QWORD *)(v9 + 56) + 472LL), &v60) >= 0 )
        {
          v10 = *(_QWORD *)(v9 + 56);
          v54 = 0LL;
          v55 = 0;
          v11 = v60;
          v53 = 0LL;
          if ( *(_BYTE *)(v10 + 815) )
          {
            v12 = *((_OWORD *)v60 + 6);
            *((_DWORD *)v60 + 26) -= *((_DWORD *)v60 + 24);
            *((_DWORD *)v11 + 27) -= *((_DWORD *)v11 + 25);
            *((_OWORD *)v11 + 7) = v12;
            *((_BYTE *)v11 + 307) = 1;
            *((_QWORD *)v11 + 12) = 0LL;
          }
          v13 = *(CHwndRenderTarget **)(v9 + 56);
          v43 = *((_BYTE *)this + 377);
          v41 = *((_BYTE *)this + 364);
          v38 = *((_DWORD *)this + 86);
          v61 = *(_OWORD *)((char *)this + 348);
          inited = CHwndRenderTarget::InitFullScreen(v13, (__int64)this, (__int64)v11, &v61, v38, v41, v43);
          v6 = inited;
          if ( inited < 0 )
          {
            v40 = 621;
LABEL_71:
            v36 = inited;
            goto LABEL_72;
          }
          v15 = v51;
          *(_QWORD *)&v61 = *(_QWORD *)(v9 + 56);
          v16 = HIDWORD(v58) + 1;
          if ( (unsigned int)(HIDWORD(v58) + 1) >= HIDWORD(v58) )
            v15 = HIDWORD(v58) + 1;
          v6 = v16 < HIDWORD(v58) ? 0x80070216 : 0;
          v51 = v15;
          if ( v16 < HIDWORD(v58) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
          }
          else if ( v15 > (unsigned int)v58 )
          {
            v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v56, 8u, 1, &v61);
            v6 = v17;
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xC0u);
          }
          else
          {
            *((_QWORD *)v56[0] + HIDWORD(v58)) = v61;
            HIDWORD(v58) = v15;
          }
          if ( v6 < 0 )
          {
            v40 = 623;
            goto LABEL_69;
          }
          v18 = v46;
          v19 = v45;
          v20 = v4 <= v46 || v3 <= v45;
          v21 = *((_DWORD *)v11 + 26);
          v22 = v21 <= *((_DWORD *)v11 + 24) || *((_DWORD *)v11 + 27) <= *((_DWORD *)v11 + 25);
          if ( v20 )
          {
            if ( v22 )
            {
              v3 = 0;
              v45 = 0;
              v46 = 0;
              v47 = 0;
            }
            else
            {
              v61 = *((_OWORD *)v11 + 6);
              v3 = HIDWORD(v61);
              v47 = DWORD2(v61);
              v45 = DWORD1(v61);
              v46 = v61;
            }
          }
          else if ( !v22 )
          {
            if ( *((_DWORD *)v11 + 24) < v46 )
              v18 = *((_DWORD *)v11 + 24);
            v46 = v18;
            if ( *((_DWORD *)v11 + 25) < v45 )
              v19 = *((_DWORD *)v11 + 25);
            v45 = v19;
            if ( v21 > v4 )
              v4 = *((_DWORD *)v11 + 26);
            v47 = v4;
            if ( *((_DWORD *)v11 + 27) > v3 )
              v3 = *((_DWORD *)v11 + 27);
          }
          inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(v50, v11, &v53);
          v6 = inited;
          if ( inited < 0 )
          {
            v40 = 629;
            goto LABEL_71;
          }
          v23 = v55;
          v24 = 0LL;
          if ( v55 )
          {
            v25 = v53;
            while ( 1 )
            {
              v26 = *(_QWORD *)(v25 + 8 * v24);
              v27 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
              if ( v27 )
              {
                v28 = CHwndRenderTarget::CHwndRenderTarget(v27, *((struct CComposition **)this + 2));
                v48 = v28;
              }
              else
              {
                v28 = 0LL;
                v48 = 0LL;
              }
              if ( !v28 )
                break;
              v44 = *((_BYTE *)this + 377);
              v42 = *((_BYTE *)this + 364);
              v39 = *((_DWORD *)this + 86);
              v61 = *(_OWORD *)((char *)this + 348);
              inited = CHwndRenderTarget::InitFullScreen(v28, (__int64)this, v26, &v61, v39, v42, v44);
              v6 = inited;
              if ( inited < 0 )
              {
                v40 = 646;
                goto LABEL_71;
              }
              v29 = v52;
              v30 = HIDWORD(v58) + 1;
              if ( (unsigned int)(HIDWORD(v58) + 1) >= HIDWORD(v58) )
                v29 = HIDWORD(v58) + 1;
              v6 = v30 < HIDWORD(v58) ? 0x80070216 : 0;
              v52 = v29;
              if ( v30 < HIDWORD(v58) )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
              }
              else if ( v29 > (unsigned int)v58 )
              {
                v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v56, 8u, 1, &v48);
                v6 = v31;
                if ( v31 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0xC0u);
              }
              else
              {
                *((_QWORD *)v56[0] + HIDWORD(v58)) = v48;
                HIDWORD(v58) = v29;
              }
              if ( v6 < 0 )
              {
                v40 = 648;
                goto LABEL_69;
              }
              v48 = 0LL;
              v24 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v24 >= v23 )
                goto LABEL_57;
            }
            v6 = -2147024882;
            v40 = 637;
LABEL_69:
            v36 = v6;
LABEL_72:
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219898, 2u, v36, v40);
            DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v53);
            goto LABEL_75;
          }
LABEL_57:
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v53);
          v4 = v47;
          v1 = 0;
        }
        v32 = *((_QWORD *)this + 49);
        v8 = (unsigned int)(v49 + 1);
        v49 = v8;
      }
      while ( (unsigned int)v8 < *(_DWORD *)(v32 + 56) );
      CDesktopRenderTarget::ReleaseRenderTargets(this);
      if ( HIDWORD(v58) )
      {
        while ( 1 )
        {
          v33 = CDesktopRenderTarget::AddRenderTarget(this, *((CDisplay ***)v56[0] + v1));
          v6 = v33;
          if ( v33 < 0 )
            break;
          if ( ++v1 >= HIDWORD(v58) )
            goto LABEL_62;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219898, 2u, v33, 0x29Au);
      }
      else
      {
LABEL_62:
        v34 = *((_QWORD *)this + 2);
        *((float *)this + 79) = (float)v46;
        *((float *)this + 80) = (float)v45;
        *((float *)this + 81) = (float)v4;
        *((float *)this + 82) = (float)v3;
        v35 = *(_QWORD *)(v34 + 352);
        if ( v35 )
          *(_BYTE *)(v35 + 28) = 1;
      }
    }
  }
LABEL_75:
  ReleaseInterface<IBitmapLock>((__int64 *)&v48);
  ReleaseInterface<CDisplaySet const>(&v50);
  DynArrayImpl<1>::~DynArrayImpl<1>(v56);
  return (unsigned int)v6;
}
