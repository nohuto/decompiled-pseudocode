/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1800347D0
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180019264 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180033D60 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180035168 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm1_4
  int v3; // esi
  float v4; // xmm0_4
  float v5; // xmm2_4
  DWORD TickCount; // eax
  __int64 *CursorPosition; // rax
  LONG HighPart; // r11d
  __int64 v9; // r12
  POINT v10; // rax
  LARGE_INTEGER v11; // rbx
  int v12; // r14d
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  bool v15; // si
  bool v16; // r15
  __int64 v17; // rcx
  const char *v18; // r9
  struct ControllerNavigationManager *ControllerNavigationManager; // rbx
  const char *v20; // r9
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER v23; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v24[4]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER v25; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+220h] [rbp+118h]
  __int16 v28; // [rsp+242h] [rbp+13Ah]
  int v29; // [rsp+24Ch] [rbp+144h]
  int v30; // [rsp+250h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+740h] [rbp+638h]

  v1 = *((float *)this + 491);
  v3 = 0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v4 < 1.0 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 492)) & _xmm) < 1.0 )
    return (unsigned int)v3;
  v5 = *((float *)this + 492);
  PerformanceCount.LowPart = (int)v1;
  PerformanceCount.HighPart = (int)v5;
  *((float *)this + 491) = v1 - (float)(int)v1;
  *((float *)this + 492) = v5 - (float)(int)v5;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 861) + 72LL))(*((_QWORD *)this + 861)) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v24, 0, 0x6C8uLL);
    v26 = 1736;
    v24[0] = 2;
    TickCount = GetTickCount();
    v28 = 0;
    v24[2] = TickCount;
    v25 = PerformanceCount;
    v27 = *((_QWORD *)this + 240);
    v29 = (int)v1;
    v30 = (int)v5;
    v3 = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v24);
    if ( v3 >= 0 )
    {
      if ( (*((_BYTE *)this + 1952) & 0x20) != 0 )
        return (unsigned int)v3;
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 883) + 96LL))(*((_QWORD *)this + 883));
      if ( v3 >= 0 )
        return (unsigned int)v3;
    }
    goto LABEL_5;
  }
  CursorPosition = (__int64 *)ControllerProcessor::GetCursorPosition(this, (struct tagPOINT *)&v23);
  HighPart = PerformanceCount.HighPart;
  v9 = *CursorPosition;
  *(_QWORD *)((char *)this + 1956) = *CursorPosition;
  PerformanceCount.HighPart = HIDWORD(v9) + HighPart;
  PerformanceCount.LowPart = v9 + (int)v1;
  v10 = ControllerProcessor::AdjustPointToBounds((struct tagPOINT)PerformanceCount, (struct tagRECT *)this + 121);
  v11 = (LARGE_INTEGER)v10;
  v12 = 1;
  v15 = v10 != __PAIR64__(v14, v13);
  v16 = v10.x == *((_DWORD *)this + 484)
     || v10.x == *((_DWORD *)this + 486) - 1
     || v10.y == *((_DWORD *)this + 485)
     || v10.y == *((_DWORD *)this + 487) - 1;
  if ( v9 == v10 )
    v12 = 0;
  if ( *((_BYTE *)this + 2000) && v12 && PtInRect((const RECT *)this + 124, v10) )
  {
    PerformanceCount = v11;
    v17 = *((_QWORD *)ISMStatics::GetControllerNavigationManager() + 24);
    if ( !v17 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xC2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
        v18);
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *))(*(_QWORD *)(v17 + 8) + 24LL))(v17 + 8, &PerformanceCount);
  }
  v3 = ControllerProcessor::SetPointerPosition(this, (struct tagPOINT)v11, v15);
  if ( v3 < 0
    || (*((_BYTE *)this + 1952) & 0x20) == 0
    && (v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 883) + 80LL))(
               *((_QWORD *)this + 883),
               *((_QWORD *)this + 885),
               *((_QWORD *)this + 886)),
        v3 < 0) )
  {
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return (unsigned int)v3;
  }
  if ( v16 && v12 && (*((_BYTE *)this + 1952) & 0x10) != 0 )
  {
    v23 = v11;
    ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      (_QWORD *)ControllerNavigationManager + 16,
      (__int64 **)&PerformanceCount,
      (_DWORD *)ControllerNavigationManager + 56);
    if ( PerformanceCount.QuadPart == *((_QWORD *)ControllerNavigationManager + 17) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
        v20);
      JUMPOUT(0x180034B96LL);
    }
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(PerformanceCount.QuadPart + 24) + 8LL)
                                                     + 24LL))(
      *(_QWORD *)(PerformanceCount.QuadPart + 24) + 8LL,
      &v23);
  }
  return (unsigned int)v3;
}
