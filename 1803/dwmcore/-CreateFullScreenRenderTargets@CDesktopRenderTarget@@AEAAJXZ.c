/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180157474
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800450B8 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180044B30 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180062CAC (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800C90C8 (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800D74B8 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x1801C6824 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  int v1; // r12d
  int v3; // r13d
  int CurrentDisplaySet; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  CHwndRenderTarget *v9; // rcx
  struct CDisplay *v10; // rdi
  __int128 v11; // xmm0
  int inited; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // r15d
  int v17; // r8d
  BOOL v18; // ecx
  int v19; // edx
  BOOL v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbx
  CHwndRenderTarget *v25; // rax
  CHwndRenderTarget *v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r9d
  unsigned int v36; // [rsp+28h] [rbp-99h]
  unsigned int v37; // [rsp+28h] [rbp-99h]
  unsigned int v38; // [rsp+28h] [rbp-99h]
  char v39; // [rsp+30h] [rbp-91h]
  char v40; // [rsp+30h] [rbp-91h]
  char v41; // [rsp+38h] [rbp-89h]
  char v42; // [rsp+38h] [rbp-89h]
  int v43; // [rsp+48h] [rbp-79h]
  int v44; // [rsp+4Ch] [rbp-75h]
  int v45; // [rsp+50h] [rbp-71h]
  CHwndRenderTarget *v46; // [rsp+58h] [rbp-69h] BYREF
  int v47; // [rsp+60h] [rbp-61h]
  CDisplaySet *v48; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-51h]
  unsigned int v50; // [rsp+74h] [rbp-4Dh]
  __int128 v51; // [rsp+78h] [rbp-49h] BYREF
  int v52; // [rsp+88h] [rbp-39h]
  int v53; // [rsp+8Ch] [rbp-35h]
  unsigned int v54; // [rsp+90h] [rbp-31h]
  _QWORD v55[2]; // [rsp+98h] [rbp-29h] BYREF
  int v56; // [rsp+A8h] [rbp-19h]
  unsigned int v57; // [rsp+ACh] [rbp-15h]
  unsigned int v58; // [rsp+B0h] [rbp-11h]
  _BYTE v59[16]; // [rsp+B8h] [rbp-9h] BYREF
  struct CDisplay *v60; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v61; // [rsp+D8h] [rbp+17h] BYREF

  v60 = 0LL;
  v58 = 0;
  v48 = 0LL;
  v46 = 0LL;
  v1 = 0;
  v44 = 0;
  v55[0] = v59;
  v56 = 2;
  v55[1] = v59;
  v3 = 0;
  v57 = 2;
  v45 = 0;
  v43 = 0;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v48);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, CurrentDisplaySet, 0x1EBu);
  }
  else
  {
    v6 = *((_QWORD *)this + 43);
    if ( v6 && *(_DWORD *)(v6 + 56) )
    {
      v7 = 0LL;
      v47 = 0;
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v6 + 64) + 8 * v7);
        if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(
                    v48,
                    *(HMONITOR *)(*(_QWORD *)(v8 + 56) + 520LL),
                    (HMONITOR **)&v60) >= 0 )
        {
          v9 = *(CHwndRenderTarget **)(v8 + 56);
          v52 = 0;
          v53 = 0;
          v54 = 0;
          v10 = v60;
          v51 = 0LL;
          if ( *((_BYTE *)v9 + 859) )
          {
            v11 = *(_OWORD *)((char *)v60 + 120);
            *((_DWORD *)v60 + 32) -= *((_DWORD *)v60 + 30);
            *((_DWORD *)v10 + 33) -= *((_DWORD *)v10 + 31);
            *(_OWORD *)((char *)v10 + 136) = v11;
            *((_BYTE *)v10 + 327) = 1;
            *((_QWORD *)v10 + 15) = 0LL;
            v9 = *(CHwndRenderTarget **)(v8 + 56);
          }
          v41 = *((_BYTE *)this + 329);
          v39 = *((_BYTE *)this + 312);
          v36 = *((_DWORD *)this + 73);
          v61 = *(_OWORD *)((char *)this + 296);
          inited = CHwndRenderTarget::InitFullScreen(v9, (__int64)this, (__int64)v10, &v61, v36, v39, v41);
          v5 = inited;
          if ( inited < 0 )
          {
            v38 = 527;
LABEL_71:
            v34 = inited;
            goto LABEL_72;
          }
          v13 = v49;
          *(_QWORD *)&v61 = *(_QWORD *)(v8 + 56);
          v14 = v58 + 1;
          if ( v58 + 1 >= v58 )
            v13 = v58 + 1;
          v5 = v14 < v58 ? 0x80070216 : 0;
          v49 = v13;
          if ( v14 < v58 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
          }
          else if ( v13 > v57 )
          {
            v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v55, 8u, 1, &v61);
            v5 = v15;
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
          }
          else
          {
            *(_QWORD *)(v55[0] + 8LL * v58) = v61;
            v58 = v13;
          }
          if ( v5 < 0 )
          {
            v38 = 529;
            goto LABEL_69;
          }
          v16 = v44;
          v17 = v43;
          v18 = v1 <= v44 || v3 <= v43;
          v19 = *((_DWORD *)v10 + 32);
          v20 = v19 <= *((_DWORD *)v10 + 30) || *((_DWORD *)v10 + 33) <= *((_DWORD *)v10 + 31);
          if ( v18 )
          {
            if ( v20 )
            {
              v3 = 0;
              v43 = 0;
              v44 = 0;
              v45 = 0;
            }
            else
            {
              v61 = *(_OWORD *)((char *)v10 + 120);
              v3 = HIDWORD(v61);
              v45 = DWORD2(v61);
              v43 = DWORD1(v61);
              v44 = v61;
            }
          }
          else if ( !v20 )
          {
            if ( *((_DWORD *)v10 + 30) < v44 )
              v16 = *((_DWORD *)v10 + 30);
            v44 = v16;
            if ( *((_DWORD *)v10 + 31) < v43 )
              v17 = *((_DWORD *)v10 + 31);
            v43 = v17;
            if ( v19 > v1 )
              v1 = *((_DWORD *)v10 + 32);
            v45 = v1;
            if ( *((_DWORD *)v10 + 33) > v3 )
              v3 = *((_DWORD *)v10 + 33);
          }
          inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(v48, v10, &v51);
          v5 = inited;
          if ( inited < 0 )
          {
            v38 = 535;
            goto LABEL_71;
          }
          v21 = v54;
          v22 = 0LL;
          if ( v54 )
          {
            v23 = v51;
            while ( 1 )
            {
              v24 = *(_QWORD *)(v23 + 8 * v22);
              v25 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
              v26 = v25 ? CHwndRenderTarget::CHwndRenderTarget(v25, *((struct CComposition **)this + 2)) : 0LL;
              v46 = v26;
              if ( !v26 )
                break;
              v42 = *((_BYTE *)this + 329);
              v40 = *((_BYTE *)this + 312);
              v37 = *((_DWORD *)this + 73);
              v61 = *(_OWORD *)((char *)this + 296);
              inited = CHwndRenderTarget::InitFullScreen(v26, (__int64)this, v24, &v61, v37, v40, v42);
              v5 = inited;
              if ( inited < 0 )
              {
                v38 = 552;
                goto LABEL_71;
              }
              v27 = v50;
              v28 = v58 + 1;
              if ( v58 + 1 >= v58 )
                v27 = v58 + 1;
              v5 = v28 < v58 ? 0x80070216 : 0;
              v50 = v27;
              if ( v28 < v58 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
              }
              else if ( v27 > v57 )
              {
                v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v55, 8u, 1, &v46);
                v5 = v29;
                if ( v29 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
              }
              else
              {
                *(_QWORD *)(v55[0] + 8LL * v58) = v46;
                v58 = v27;
              }
              if ( v5 < 0 )
              {
                v38 = 554;
                goto LABEL_69;
              }
              v46 = 0LL;
              v22 = (unsigned int)(v22 + 1);
              if ( (unsigned int)v22 >= v21 )
                goto LABEL_57;
            }
            v5 = -2147024882;
            v38 = 543;
LABEL_69:
            v34 = v5;
LABEL_72:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, v34, v38);
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v51);
            goto LABEL_75;
          }
LABEL_57:
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v51);
          v1 = v45;
        }
        v6 = *((_QWORD *)this + 43);
        v7 = (unsigned int)(v47 + 1);
        v47 = v7;
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v6 + 56) );
      CDesktopRenderTarget::ReleaseRenderTargets(this);
      v30 = 0LL;
      if ( v58 )
      {
        while ( 1 )
        {
          v31 = CDesktopRenderTarget::AddHwndRenderTarget(this, *(CDisplay ***)(v55[0] + 8 * v30));
          v5 = v31;
          if ( v31 < 0 )
            break;
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= v58 )
            goto LABEL_62;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, v31, 0x23Cu);
      }
      else
      {
LABEL_62:
        v32 = *((_QWORD *)this + 2);
        *((float *)this + 69) = (float)v44;
        *((float *)this + 70) = (float)v43;
        *((float *)this + 71) = (float)v1;
        *((float *)this + 72) = (float)v3;
        v33 = *(_QWORD *)(v32 + 376);
        if ( v33 )
          *(_BYTE *)(v33 + 20) = 1;
      }
    }
  }
LABEL_75:
  if ( v46 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v46 + 16LL))(v46);
    v46 = 0LL;
  }
  ReleaseInterface<CDisplaySet const>(&v48);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v55);
  return (unsigned int)v5;
}
