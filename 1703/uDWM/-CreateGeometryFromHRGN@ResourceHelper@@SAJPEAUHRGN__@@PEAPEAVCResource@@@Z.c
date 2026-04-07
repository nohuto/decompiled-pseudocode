/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180014B70
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180025400 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180076E30 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CResource **a2)
{
  struct _RGNDATA *v2; // rbx
  volatile signed __int32 *v5; // rdi
  DWORD RegionData; // eax
  size_t v7; // r15
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct _RGNDATA *v9; // rax
  int v10; // eax
  signed int v11; // r15d
  volatile signed __int32 *v12; // rcx
  void (__fastcall *v13)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  int v15; // eax
  signed int LastError; // eax
  int v17; // r9d
  signed int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-78h]
  volatile signed __int32 *v20; // [rsp+30h] [rbp-68h]
  _BYTE v21[40]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  memset_0(v21, 0, 0x24uLL);
  v5 = (volatile signed __int32 *)*a2;
  v20 = (volatile signed __int32 *)*a2;
  if ( *a2 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = v20;
  }
  if ( !v5 )
  {
    v15 = CResource::Create(29LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x97u);
      v5 = v20;
      goto LABEL_15;
    }
    v5 = v20;
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v7 = RegionData;
    if ( !RegionData )
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      v19 = 156;
      if ( v11 >= 0 )
        v11 = -2003304445;
      v17 = v11;
      goto LABEL_41;
    }
    v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v8 == WPF::ProcessHeapImpl::Alloc )
      v9 = (struct _RGNDATA *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v7);
    else
      v9 = (struct _RGNDATA *)v8(WPF::g_pProcessHeap, (unsigned int)v7);
    v2 = v9;
    if ( !v9 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Fu);
      goto LABEL_15;
    }
    memset_0(v9, 0, v7);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v7, v2) )
    {
      v18 = GetLastError();
      v11 = v18;
      if ( v18 > 0 )
        v11 = (unsigned __int16)v18 | 0x80070000;
      v19 = 167;
      if ( v11 >= 0 )
        v11 = -2003304445;
      v17 = v11;
      goto LABEL_41;
    }
  }
  else
  {
    v2 = (struct _RGNDATA *)v21;
  }
  v10 = (*(__int64 (__fastcall **)(void (__fastcall **)(_QWORD, __int64), _QWORD, char *, _QWORD))(**((_QWORD **)v5 + 2)
                                                                                                 + 1168LL))(
          *((void (__fastcall ***)(_QWORD, __int64))v5 + 2),
          *((unsigned int *)v5 + 6),
          v2->Buffer,
          v2->rdh.nCount);
  v11 = v10;
  if ( v10 < 0 )
  {
    v19 = 177;
    v17 = v10;
LABEL_41:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v19);
    goto LABEL_15;
  }
  v12 = (volatile signed __int32 *)*a2;
  if ( *a2 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 && v12 )
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v12)(v12, 1LL);
    v5 = v20;
  }
  *a2 = (struct CResource *)v5;
  _InterlockedIncrement(v5 + 2);
  v5 = v20;
LABEL_15:
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, 1LL);
  if ( v2 && v2 != (struct _RGNDATA *)v21 )
  {
    v13 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v13 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
    else
      v13(WPF::g_pProcessHeap, v2);
  }
  return (unsigned int)v11;
}
