/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18000FB28
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180022F44 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x18000FDCC (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18000FE58 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18000FF28 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18000FF9C (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  __int64 v1; // rax
  bool v2; // bp
  int v4; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  DXGIOutputInfo *v9; // rdi
  int updated; // eax
  struct CAnalogCompositorManager *Instance; // rsi
  __int64 v12; // rax
  CDWMDisplay *v13; // rax
  CDWMDisplay *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+70h] [rbp+8h]
  CDWMDisplay *v22; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+80h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  v22 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( !*(_DWORD *)(v1 + 80) )
    return (unsigned int)v4;
  while ( 1 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 56) + 8LL * v5);
    if ( *(_DWORD *)(v7 + 376) )
      break;
LABEL_3:
    v1 = *((_QWORD *)this + 1);
    if ( ++v5 >= *(_DWORD *)(v1 + 80) )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v9 = (DXGIOutputInfo *)(*(_QWORD *)(v7 + 352) + 272LL * v6);
    updated = DXGIOutputInfo::UpdateDesc(v9);
    v4 = updated;
    if ( updated < 0 )
      break;
    if ( !*((_DWORD *)v9 + 46) && !*((_DWORD *)v9 + 47) && !*((_DWORD *)v9 + 48) && !*((_DWORD *)v9 + 49) )
      goto LABEL_29;
    Instance = CAnalogCompositorManager::GetInstance();
    if ( Instance )
    {
      v23 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v12 = *((_QWORD *)Instance + 16) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v12 )
        v12 = *((_QWORD *)Instance + 17) - *(_QWORD *)GUID_NULL.Data4;
      if ( v12 )
        v2 = *((_DWORD *)Instance + 36) == *((_DWORD *)v9 + 28)
          && *((_DWORD *)Instance + 37) == *((_DWORD *)v9 + 29)
          && *((_DWORD *)Instance + 40) == *((_DWORD *)v9 + 31);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
      if ( v2 )
      {
        v2 = 0;
        goto LABEL_29;
      }
      v2 = 0;
    }
    updated = DXGIOutputInfo::Validate(v9);
    v4 = updated;
    if ( updated < 0 )
    {
      v20 = 255;
      goto LABEL_47;
    }
    v13 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           224LL);
    if ( v13 )
      v14 = CDWMDisplay::CDWMDisplay(v13, (struct CDWMDXGIAdapter *)v7, v9);
    else
      v14 = 0LL;
    v22 = v14;
    if ( !v14 )
    {
      v4 = -2147024882;
      v20 = 263;
      goto LABEL_44;
    }
    v15 = *((unsigned int *)this + 16);
    v16 = v21;
    v17 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
      v16 = v15 + 1;
    v4 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
    v21 = v16;
    if ( v17 < (unsigned int)v15 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v16 <= *((_DWORD *)this + 15) )
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v15) = v22;
      *((_DWORD *)this + 16) = v16;
    }
    else
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &v22);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
    }
    if ( v4 < 0 )
    {
      v20 = 265;
LABEL_44:
      v19 = v4;
      goto LABEL_48;
    }
    v22 = 0LL;
LABEL_29:
    if ( ++v6 >= *(_DWORD *)(v7 + 376) )
      goto LABEL_3;
  }
  v20 = 243;
LABEL_47:
  v19 = updated;
LABEL_48:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v20);
LABEL_4:
  if ( v22 )
    CDWMDisplay::Release(v22);
  return (unsigned int)v4;
}
