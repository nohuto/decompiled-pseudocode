/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x180005B8C (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800692A4 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006A648 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A9DC (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006AAAC (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18006B630 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C9698 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800CD450 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800CD73C (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this)
{
  int v1; // r12d
  int v2; // r13d
  int v3; // r14d
  int v4; // r15d
  signed int v6; // esi
  __int64 v7; // rsi
  CDisplaySet *v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct CDisplay *v14; // rdx
  __int64 (*v15)(void); // rax
  int v16; // eax
  unsigned int v17; // edi
  __int64 i; // rsi
  int *v19; // rdi
  int *v20; // rdi
  bool v21; // al
  BOOL v22; // ecx
  bool v23; // al
  int inited; // eax
  void *v25; // rcx
  int RenderTargets; // eax
  CDisplayManager *v28; // rcx
  int CurrentDisplaySet; // eax
  CDisplaySet *v30; // rsi
  HMONITOR v31; // rdx
  CDesktopRenderTarget *v32; // rdi
  __int64 v33; // r13
  CHwndRenderTarget *v34; // r12
  unsigned int v35; // r8d
  unsigned int v36; // ecx
  struct CRenderTarget **v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // edx
  struct CRenderTarget *v40; // rdx
  int v41; // eax
  unsigned int v42; // [rsp+20h] [rbp-39h]
  unsigned int v43; // [rsp+20h] [rbp-39h]
  char v44; // [rsp+28h] [rbp-31h]
  char v45; // [rsp+30h] [rbp-29h]
  char v46; // [rsp+38h] [rbp-21h]
  bool v47; // [rsp+40h] [rbp-19h]
  struct CDisplay *v48; // [rsp+48h] [rbp-11h] BYREF
  CDisplaySet *v49; // [rsp+50h] [rbp-9h] BYREF
  __int128 v50; // [rsp+60h] [rbp+7h]
  struct CRenderTarget *v51[2]; // [rsp+70h] [rbp+17h] BYREF

  v1 = 0;
  v49 = 0LL;
  v2 = 0;
  v47 = 0;
  v3 = 0;
  LODWORD(v48) = 0;
  v4 = 0;
  LODWORD(v51[0]) = 0;
  if ( *((_BYTE *)this + 200) )
  {
    *((_BYTE *)this + 200) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 112));
    v17 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, RenderTargets, 0x400u);
      return v17;
    }
    v47 = *((_DWORD *)this + 8) != 0;
  }
  v6 = *((_DWORD *)this + 32) - 1;
  if ( v6 >= 0 )
  {
    v32 = (CDesktopRenderTarget *)((char *)this - 112);
    v33 = 8LL * v6;
    do
    {
      v34 = *(CHwndRenderTarget **)(*((_QWORD *)this + 13) + v33);
      if ( CDesktopRenderTarget::FindDisplayNoRef(v32, (HMONITOR *)v34) )
      {
        v46 = *((_BYTE *)this + 266);
        v45 = *((_BYTE *)this + 252);
        v44 = *((_BYTE *)this + 264);
        v42 = *((_DWORD *)this + 58);
        v50 = *(_OWORD *)((char *)this + 236);
        inited = CHwndRenderTarget::InitFullScreen(v34, v42, v44, v45, v46);
        v17 = inited;
        if ( inited < 0 )
        {
          v43 = 1050;
          goto LABEL_91;
        }
        inited = CDesktopRenderTarget::AddRenderTarget((CDesktopRenderTarget *)((char *)this - 112), v34);
        v17 = inited;
        if ( inited < 0 )
        {
          v43 = 1051;
LABEL_91:
          MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, inited, v43);
          return v17;
        }
        DynArray<CCursorVisual *,0>::RemoveAt((__int64 *)this + 13, v6);
        ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v34);
        v32 = (CDesktopRenderTarget *)((char *)this - 112);
      }
      v33 -= 8LL;
      --v6;
    }
    while ( v6 >= 0 );
    v1 = (int)v48;
    v2 = (int)v51[0];
  }
  v7 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v8 = qword_18023E528;
      v9 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7);
      v51[0] = (struct CRenderTarget *)v9;
      if ( qword_18023E528 )
      {
        v10 = *((_DWORD *)qword_18023E528 + 18);
        v11 = 0LL;
        if ( v10 )
          break;
      }
LABEL_9:
      if ( *(_BYTE *)(*((_QWORD *)this - 12) + 1361LL) )
        goto LABEL_42;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 176LL))(v9) )
      {
        v8 = qword_18023E528;
LABEL_42:
        v31 = *(HMONITOR *)(v9 + 464);
        v48 = 0LL;
        CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v8, v31, &v48);
        v14 = v48;
        goto LABEL_13;
      }
      v13 = (unsigned int)(*((_DWORD *)qword_18023E528 + 18) - 1);
      if ( (int)v13 < 0 )
      {
LABEL_47:
        v14 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v14 = *(struct CDisplay **)(*((_QWORD *)qword_18023E528 + 6) + 8 * v13);
          if ( *((_DWORD *)v14 + 60) == *(_DWORD *)(v9 + 456) )
            break;
          v13 = (unsigned int)(v13 - 1);
          if ( (int)v13 < 0 )
            goto LABEL_47;
        }
      }
LABEL_13:
      if ( !v14 )
      {
        CDesktopRenderTarget::ResetRenderTarget((CDesktopRenderTarget *)((char *)this - 112), v51[0]);
        v35 = *((_DWORD *)this + 32);
        v36 = 0;
        v37 = (struct CRenderTarget **)*((_QWORD *)this + 13);
        if ( v35 )
        {
          v40 = v51[0];
          while ( v51[0] != *v37 )
          {
            ++v36;
            ++v37;
            if ( v36 >= v35 )
              goto LABEL_49;
          }
        }
        else
        {
LABEL_49:
          v38 = *((_DWORD *)this + 32);
          v39 = v38 + 1;
          if ( v38 + 1 < v38 )
          {
            v17 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          else
          {
            if ( v39 <= *((_DWORD *)this + 31) )
            {
              *(struct CRenderTarget **)(*((_QWORD *)this + 13) + 8LL * v38) = v51[0];
              *((_DWORD *)this + 32) = v39;
              goto LABEL_52;
            }
            v41 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 104, 8LL, 1LL, v51);
            v17 = v41;
            if ( v41 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xC0u);
          }
          if ( (v17 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v17, 0x433u);
            return v17;
          }
LABEL_52:
          v40 = v51[0];
        }
        CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 12) + 32LL), v40);
        DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 8, v51);
        LODWORD(v7) = v7 - 1;
        goto LABEL_17;
      }
      v15 = *(__int64 (**)(void))(*(_QWORD *)v51[0] + 288LL);
      if ( (char *)v15 == (char *)CHwndRenderTarget::EnsureRenderTarget )
        v16 = CHwndRenderTarget::EnsureRenderTarget(v51[0]);
      else
        v16 = v15();
      v17 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v16, 0x43Du);
        return v17;
      }
LABEL_17:
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 8) )
        goto LABEL_18;
    }
    while ( 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8 * v11);
      if ( *(_BYTE *)(v12 + 212) || *(_DWORD *)(v12 + 208) )
        goto LABEL_42;
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v10 )
        goto LABEL_9;
    }
  }
LABEL_18:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v19 = *(int **)(*((_QWORD *)this + 1) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v19 + 184LL))(v19)
      || (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v19 + 176LL))(v19)
      || *(_BYTE *)(*((_QWORD *)v19 + 2) + 1361LL) )
    {
      v20 = (int *)(*((_QWORD *)v19 + 14) + 96LL);
    }
    else
    {
      v20 = v19 + 103;
    }
    v21 = v3 <= v4 || v1 <= v2;
    v22 = v21;
    v23 = v20[2] <= *v20 || v20[3] <= v20[1];
    if ( v22 )
    {
      if ( v23 )
      {
        v1 = 0;
        v3 = 0;
        v2 = 0;
        v4 = 0;
      }
      else
      {
        *(_OWORD *)v51 = *(_OWORD *)v20;
        v1 = HIDWORD(v51[1]);
        v3 = (int)v51[1];
        v2 = HIDWORD(v51[0]);
        v4 = (int)v51[0];
      }
    }
    else if ( !v23 )
    {
      if ( *v20 < v4 )
        v4 = *v20;
      if ( v20[1] < v2 )
        v2 = v20[1];
      if ( v20[2] > v3 )
        v3 = v20[2];
      if ( v20[3] > v1 )
        v1 = v20[3];
    }
  }
  *((float *)this + 51) = (float)v4;
  *((float *)this + 52) = (float)v2;
  *((float *)this + 53) = (float)v3;
  *((float *)this + 54) = (float)v1;
  inited = CDesktopRenderTarget::EnsureRemoteAppRenderTargets((CDesktopRenderTarget *)((char *)this - 112));
  v17 = inited;
  if ( inited < 0 )
  {
    v43 = 1106;
    goto LABEL_91;
  }
  v25 = (void *)*((_QWORD *)this + 34);
  if ( v25 && v47 )
  {
    SetEvent(v25);
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v28, &v49);
    v30 = v49;
    v17 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, CurrentDisplaySet, 0x45Cu);
    else
      CDXGIEnumeration::UpdateFeatureLevels(
        *((CDXGIEnumeration **)v49 + 2),
        (const struct _GUID *)(*((_QWORD *)this - 12) + 324LL));
    if ( v30 )
      CDisplaySet::Release(v30);
  }
  return v17;
}
