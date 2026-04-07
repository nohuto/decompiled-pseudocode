/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180033420
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180019F50 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800732C8 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CResource **a2)
{
  struct _RGNDATA *v2; // rbx
  volatile signed __int32 *v5; // rax
  DWORD RegionData; // eax
  size_t v7; // rbp
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  struct _RGNDATA *v9; // rax
  int v10; // eax
  signed int v11; // ebp
  volatile signed __int32 *v12; // rcx
  CBaseObject *v13; // rdx
  void (__fastcall *v14)(WPF::ProcessHeapImpl *, void *); // rax
  int v16; // eax
  signed int LastError; // eax
  int v18; // r9d
  signed int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-78h]
  CBaseObject *v21; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[40]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  memset_0(v22, 0, 0x24uLL);
  v5 = (volatile signed __int32 *)*a2;
  v21 = (CBaseObject *)v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
  }
  else
  {
    v16 = CResource::Create(0x1Eu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v21);
    v11 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x97u);
      goto LABEL_13;
    }
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
      v20 = 156;
      if ( v11 >= 0 )
        v11 = -2003304445;
      v18 = v11;
      goto LABEL_38;
    }
    v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v8 == WPF::ProcessHeapImpl::Alloc )
      v9 = (struct _RGNDATA *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v7);
    else
      v9 = (struct _RGNDATA *)v8(WPF::g_pProcessHeap, (unsigned int)v7);
    v2 = v9;
    if ( !v9 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Fu);
      goto LABEL_13;
    }
    memset_0(v9, 0, v7);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v7, v2) )
    {
      v19 = GetLastError();
      v11 = v19;
      if ( v19 > 0 )
        v11 = (unsigned __int16)v19 | 0x80070000;
      v20 = 167;
      if ( v11 >= 0 )
        v11 = -2003304445;
      v18 = v11;
      goto LABEL_38;
    }
  }
  else
  {
    v2 = (struct _RGNDATA *)v22;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(**((_QWORD **)v21 + 2) + 1184LL))(
          *((_QWORD *)v21 + 2),
          *((unsigned int *)v21 + 6),
          v2->Buffer,
          v2->rdh.nCount);
  v11 = v10;
  if ( v10 < 0 )
  {
    v20 = 177;
    v18 = v10;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v20);
    goto LABEL_13;
  }
  v12 = (volatile signed __int32 *)*a2;
  if ( *a2 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 && v12 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v12)(v12, 1LL);
  v13 = v21;
  *a2 = v21;
  _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
LABEL_13:
  if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v21)(v21, 1LL);
  if ( v2 && v2 != (struct _RGNDATA *)v22 )
  {
    v14 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v14 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
    else
      v14(WPF::g_pProcessHeap, v2);
  }
  return (unsigned int)v11;
}
