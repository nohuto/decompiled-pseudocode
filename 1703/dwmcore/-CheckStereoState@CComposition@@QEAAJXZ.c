/*
 * XREFs of ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z @ 0x1800695B0 (-IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z.c)
 *     ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x180069600 (-GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180069ED0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B758C (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::CheckStereoState(CComposition *this)
{
  int v1; // ebp
  CDisplaySet *v2; // rsi
  int v4; // edi
  char v5; // r14
  CD3DModuleLoaderInternal *v6; // rcx
  CDXGIEnumeration *v7; // rbx
  __int64 v8; // rcx
  struct CDXGIEnumeration *v9; // rbx
  unsigned int (__fastcall *v10)(CMILRefCountBase *__hidden); // rax
  bool v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // r14d
  CDesktopRenderTarget *v14; // rcx
  bool (__fastcall *v15)(CDesktopRenderTarget *__hidden); // rax
  char v16; // al
  CDesktopRenderTarget *v17; // r14
  __int64 v18; // rax
  int v19; // r15d
  int v20; // r13d
  __int64 (__fastcall *v21)(CDesktopRenderTarget *__hidden, unsigned int *); // rax
  int NumberOfDisplays; // eax
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(CDesktopRenderTarget *__hidden, unsigned int, bool *); // rax
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v31; // eax
  CDisplaySet *v32; // [rsp+30h] [rbp-48h] BYREF
  bool v33; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+18h] BYREF
  int D3DObjects; // [rsp+98h] [rbp+20h] BYREF

  v1 = 0;
  v2 = 0LL;
  EnterCriticalSection(&g_DisplayManager);
  v4 = 0;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v7 = qword_18023E530;
  if ( !qword_18023E530 )
    goto LABEL_46;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18023E530 + 2) + 104LL))(*((_QWORD *)qword_18023E530
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness(v8) != *((_DWORD *)v7 + 14)
    || qword_18023E530 != v7 )
  {
    ReleaseInterface<ClipPlaneInfoRef>(&qword_18023E530);
    v5 = 1;
  }
  if ( !qword_18023E530 )
  {
LABEL_46:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v6, &qword_18023E530);
    TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 4LL, &D3DObjects);
    v4 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, D3DObjects, 0x12Bu);
  }
  if ( v5 && qword_18023E540 )
    CSurfaceManager::ResetTokenThread(qword_18023E540);
  v9 = qword_18023E530;
  if ( qword_18023E530 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18023E530)(qword_18023E530);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xEDu);
  }
  else
  {
    if ( qword_18023E528 )
    {
LABEL_11:
      _InterlockedIncrement((volatile signed __int32 *)qword_18023E528);
      v2 = qword_18023E528;
      goto LABEL_12;
    }
    v32 = 0LL;
    LeaveCriticalSection(&g_DisplayManager);
    v31 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v9, &v32, 0LL, 0);
    v4 = v31;
    if ( v31 >= 0 )
    {
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_18023E528 )
      {
        if ( v32 )
          CDisplaySet::Release(v32);
      }
      else
      {
        qword_18023E528 = v32;
        if ( v32 )
          _InterlockedIncrement((volatile signed __int32 *)v32);
      }
      goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xFBu);
    EnterCriticalSection(&g_DisplayManager);
  }
LABEL_12:
  if ( v9 )
  {
    v10 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v9 + 8LL);
    if ( v10 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v9);
    else
      v10(v9);
  }
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xDDu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xEBFu);
    goto LABEL_39;
  }
  v11 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v2 + 2) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)v2 + 2) + 48LL)) != 0;
  v12 = *((_QWORD *)this + 4);
  v13 = 0;
  if ( *(_DWORD *)(v12 + 80) )
  {
    while ( 1 )
    {
      v14 = *(CDesktopRenderTarget **)(*(_QWORD *)(v12 + 56) + 8LL * v13);
      v15 = *(bool (__fastcall **)(CDesktopRenderTarget *__hidden))(*(_QWORD *)v14 + 264LL);
      v16 = v15 == CDesktopRenderTarget::HasPrimary ? CDesktopRenderTarget::HasPrimary(v14) : ((__int64 (*)(void))v15)();
      if ( v16 )
        break;
      if ( ++v13 >= *(_DWORD *)(v12 + 80) )
        goto LABEL_39;
    }
    v17 = *(CDesktopRenderTarget **)(*(_QWORD *)(v12 + 56) + 8LL * v13);
    if ( v17 )
    {
      v18 = *(_QWORD *)v17;
      v19 = *((_DWORD *)this + 71);
      v34 = 0;
      v20 = 0;
      v21 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden, unsigned int *))(v18 + 176);
      if ( v21 == CDesktopRenderTarget::GetNumberOfDisplays )
        NumberOfDisplays = CDesktopRenderTarget::GetNumberOfDisplays(v17, &v34);
      else
        NumberOfDisplays = v21(v17, &v34);
      v4 = NumberOfDisplays;
      if ( NumberOfDisplays < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NumberOfDisplays, 0xED7u);
        goto LABEL_39;
      }
      v23 = 0;
      if ( v34 )
      {
        while ( 1 )
        {
          v24 = *(_QWORD *)v17;
          v33 = 0;
          v25 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden, unsigned int, bool *))(v24 + 240);
          v26 = v25 == CDesktopRenderTarget::IsStereoDisplay
              ? CDesktopRenderTarget::IsStereoDisplay(v17, v23, &v33)
              : v25(v17, v23, &v33);
          v4 = v26;
          if ( v26 < 0 )
            break;
          if ( v33 )
            ++v1;
          if ( ++v23 >= v34 )
            goto LABEL_32;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xEDDu);
        goto LABEL_39;
      }
LABEL_32:
      v27 = *((_DWORD *)v2 + 18);
      if ( v27 )
      {
        v28 = *((_QWORD *)v2 + 6);
        v29 = v27;
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v28 + 292LL) )
            ++v20;
          v28 += 8LL;
          --v29;
        }
        while ( v29 );
      }
      if ( v11 )
      {
        if ( !v1 && v20 && v19 )
          goto LABEL_68;
        if ( v19 )
          goto LABEL_39;
      }
      if ( !v1 )
        goto LABEL_39;
LABEL_68:
      (*(void (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v17 + 248LL))(v17);
    }
  }
LABEL_39:
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v2);
    WPF::ProcessHeapImpl::Free(v2);
  }
  return (unsigned int)v4;
}
