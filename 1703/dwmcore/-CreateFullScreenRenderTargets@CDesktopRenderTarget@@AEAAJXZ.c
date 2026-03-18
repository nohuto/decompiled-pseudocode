/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A9DC (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006A648 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18006EBF8 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800CA368 (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800CD450 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x180185ED0 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  unsigned int v1; // esi
  int v3; // r12d
  int v4; // r13d
  int CurrentDisplaySet; // eax
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  struct CDisplay *v11; // rsi
  __int128 v12; // xmm0
  CHwndRenderTarget *v13; // rcx
  int inited; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // r15d
  int v19; // r8d
  bool v20; // al
  int v21; // ecx
  BOOL v22; // edx
  bool v23; // al
  unsigned int v24; // r15d
  __int64 v25; // rsi
  __int64 v26; // rbx
  CHwndRenderTarget *v27; // rax
  CHwndRenderTarget *v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // r9d
  unsigned int v38; // [rsp+28h] [rbp-89h]
  unsigned int v39; // [rsp+28h] [rbp-89h]
  unsigned int v40; // [rsp+28h] [rbp-89h]
  char v41; // [rsp+30h] [rbp-81h]
  char v42; // [rsp+30h] [rbp-81h]
  char v43; // [rsp+38h] [rbp-79h]
  char v44; // [rsp+38h] [rbp-79h]
  char v45; // [rsp+40h] [rbp-71h]
  char v46; // [rsp+40h] [rbp-71h]
  int v47; // [rsp+48h] [rbp-69h]
  int v48; // [rsp+4Ch] [rbp-65h]
  CHwndRenderTarget *v49; // [rsp+50h] [rbp-61h] BYREF
  int v50; // [rsp+58h] [rbp-59h]
  CDisplaySet *v51; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-49h]
  unsigned int v53; // [rsp+6Ch] [rbp-45h]
  unsigned __int64 v54[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v55; // [rsp+80h] [rbp-31h]
  unsigned int v56; // [rsp+88h] [rbp-29h]
  void *v57[2]; // [rsp+90h] [rbp-21h] BYREF
  int v58; // [rsp+A0h] [rbp-11h]
  __int64 v59; // [rsp+A4h] [rbp-Dh]
  _BYTE v60[16]; // [rsp+B0h] [rbp-1h] BYREF
  struct CDisplay *v61; // [rsp+C0h] [rbp+Fh] BYREF
  __int128 v62; // [rsp+C8h] [rbp+17h] BYREF

  v1 = 0;
  v57[0] = v60;
  v61 = 0LL;
  v57[1] = v60;
  v51 = 0LL;
  v58 = 2;
  v3 = 0;
  v59 = 2LL;
  v4 = 0;
  v49 = 0LL;
  v47 = 0;
  v48 = 0;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v51);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, CurrentDisplaySet, 0x24Au);
  }
  else
  {
    v7 = *((_QWORD *)this + 49);
    if ( v7 && *(_DWORD *)(v7 + 56) )
    {
      v8 = 0LL;
      v50 = 0;
      do
      {
        v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 49) + 64LL) + 8 * v8);
        if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v51, *(HMONITOR *)(*(_QWORD *)(v9 + 56) + 464LL), &v61) >= 0 )
        {
          v10 = *(_QWORD *)(v9 + 56);
          v55 = 0LL;
          v56 = 0;
          v11 = v61;
          *(_OWORD *)v54 = 0LL;
          if ( *(_BYTE *)(v10 + 803) )
          {
            v12 = *((_OWORD *)v61 + 6);
            *((_DWORD *)v61 + 26) -= *((_DWORD *)v61 + 24);
            *((_DWORD *)v11 + 27) -= *((_DWORD *)v11 + 25);
            *((_OWORD *)v11 + 7) = v12;
            *((_BYTE *)v11 + 297) = 1;
            *((_QWORD *)v11 + 12) = 0LL;
          }
          v13 = *(CHwndRenderTarget **)(v9 + 56);
          v45 = *((_BYTE *)this + 378);
          v43 = *((_BYTE *)this + 364);
          v41 = *((_BYTE *)this + 376);
          v38 = *((_DWORD *)this + 86);
          v62 = *(_OWORD *)((char *)this + 348);
          inited = CHwndRenderTarget::InitFullScreen(v13, (__int64)this, (__int64)v11, &v62, v38, v41, v43, v45);
          v6 = inited;
          if ( inited < 0 )
          {
            v40 = 623;
LABEL_70:
            v36 = inited;
            goto LABEL_71;
          }
          v15 = v52;
          *(_QWORD *)&v62 = *(_QWORD *)(v9 + 56);
          v16 = HIDWORD(v59) + 1;
          if ( (unsigned int)(HIDWORD(v59) + 1) >= HIDWORD(v59) )
            v15 = HIDWORD(v59) + 1;
          v6 = v16 < HIDWORD(v59) ? 0x80070216 : 0;
          v52 = v15;
          if ( v16 < HIDWORD(v59) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
          }
          else if ( v15 > (unsigned int)v59 )
          {
            v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v57, 8u, 1, &v62);
            v6 = v17;
            if ( v17 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
          }
          else
          {
            *((_QWORD *)v57[0] + HIDWORD(v59)) = v62;
            HIDWORD(v59) = v15;
          }
          if ( v6 < 0 )
          {
            v40 = 625;
            goto LABEL_68;
          }
          v18 = v48;
          v19 = v47;
          v20 = v4 <= v48 || v3 <= v47;
          v21 = *((_DWORD *)v11 + 24);
          v22 = v20;
          v23 = *((_DWORD *)v11 + 26) <= v21 || *((_DWORD *)v11 + 27) <= *((_DWORD *)v11 + 25);
          if ( v22 )
          {
            if ( v23 )
            {
              v3 = 0;
              v4 = 0;
              v47 = 0;
              v48 = 0;
            }
            else
            {
              v62 = *((_OWORD *)v11 + 6);
              v3 = HIDWORD(v62);
              v4 = DWORD2(v62);
              v47 = DWORD1(v62);
              v48 = v62;
            }
          }
          else if ( !v23 )
          {
            if ( v21 < v48 )
              v18 = *((_DWORD *)v11 + 24);
            v48 = v18;
            if ( *((_DWORD *)v11 + 25) < v47 )
              v19 = *((_DWORD *)v11 + 25);
            v47 = v19;
            if ( *((_DWORD *)v11 + 26) > v4 )
              v4 = *((_DWORD *)v11 + 26);
            if ( *((_DWORD *)v11 + 27) > v3 )
              v3 = *((_DWORD *)v11 + 27);
          }
          inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(v51, v11, v54);
          v6 = inited;
          if ( inited < 0 )
          {
            v40 = 631;
            goto LABEL_70;
          }
          v24 = v56;
          v25 = 0LL;
          if ( v56 )
          {
            while ( 1 )
            {
              v26 = *(_QWORD *)(v54[0] + 8 * v25);
              v27 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
              if ( v27 )
              {
                v28 = CHwndRenderTarget::CHwndRenderTarget(v27, *((struct CComposition **)this + 2));
                v49 = v28;
              }
              else
              {
                v28 = 0LL;
                v49 = 0LL;
              }
              if ( !v28 )
                break;
              v46 = *((_BYTE *)this + 378);
              v44 = *((_BYTE *)this + 364);
              v42 = *((_BYTE *)this + 376);
              v39 = *((_DWORD *)this + 86);
              v62 = *(_OWORD *)((char *)this + 348);
              inited = CHwndRenderTarget::InitFullScreen(v28, (__int64)this, v26, &v62, v39, v42, v44, v46);
              v6 = inited;
              if ( inited < 0 )
              {
                v40 = 649;
                goto LABEL_70;
              }
              v29 = v53;
              v30 = HIDWORD(v59) + 1;
              if ( (unsigned int)(HIDWORD(v59) + 1) >= HIDWORD(v59) )
                v29 = HIDWORD(v59) + 1;
              v6 = v30 < HIDWORD(v59) ? 0x80070216 : 0;
              v53 = v29;
              if ( v30 < HIDWORD(v59) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
              }
              else if ( v29 > (unsigned int)v59 )
              {
                v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v57, 8u, 1, &v49);
                v6 = v31;
                if ( v31 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC0u);
              }
              else
              {
                *((_QWORD *)v57[0] + HIDWORD(v59)) = v49;
                HIDWORD(v59) = v29;
              }
              if ( v6 < 0 )
              {
                v40 = 651;
                goto LABEL_68;
              }
              v49 = 0LL;
              v25 = (unsigned int)(v25 + 1);
              if ( (unsigned int)v25 >= v24 )
                goto LABEL_56;
            }
            v6 = -2147024882;
            v40 = 639;
LABEL_68:
            v36 = v6;
LABEL_71:
            MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, v36, v40);
            DynArrayImpl<1>::~DynArrayImpl<1>((void **)v54);
            goto LABEL_74;
          }
LABEL_56:
          DynArrayImpl<1>::~DynArrayImpl<1>((void **)v54);
          v1 = 0;
        }
        v32 = *((_QWORD *)this + 49);
        v8 = (unsigned int)(v50 + 1);
        v50 = v8;
      }
      while ( (unsigned int)v8 < *(_DWORD *)(v32 + 56) );
      CDesktopRenderTarget::ReleaseRenderTargets(this);
      if ( HIDWORD(v59) )
      {
        while ( 1 )
        {
          v33 = CDesktopRenderTarget::AddRenderTarget(this, *((CDisplay ***)v57[0] + v1));
          v6 = v33;
          if ( v33 < 0 )
            break;
          if ( ++v1 >= HIDWORD(v59) )
            goto LABEL_61;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, v33, 0x29Du);
      }
      else
      {
LABEL_61:
        v34 = *((_QWORD *)this + 2);
        *((float *)this + 79) = (float)v48;
        *((float *)this + 80) = (float)v47;
        *((float *)this + 81) = (float)v4;
        *((float *)this + 82) = (float)v3;
        v35 = *(_QWORD *)(v34 + 392);
        if ( v35 )
          *(_BYTE *)(v35 + 28) = 1;
      }
    }
  }
LABEL_74:
  ReleaseInterface<IBitmapLock>((__int64 *)&v49);
  ReleaseInterface<CDisplaySet const>(&v51);
  DynArrayImpl<1>::~DynArrayImpl<1>(v57);
  return (unsigned int)v6;
}
