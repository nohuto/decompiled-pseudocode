/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18001EFC4
 * Callers:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 * Callees:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(
        LPCRITICAL_SECTION lpCriticalSection,
        PRTL_CRITICAL_SECTION_DEBUG *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  struct CDXGIEnumeration *v6; // rdi
  unsigned int (__fastcall *v7)(CMILRefCountBase *__hidden); // rax
  int v9; // eax
  CDisplaySet *v10; // rax
  struct CDXGIEnumeration *v11; // [rsp+50h] [rbp+8h] BYREF
  CDisplaySet *v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v4 = CDisplayManager::EnsureDXGIEnumeration(lpCriticalSection, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xEAu);
    goto LABEL_4;
  }
  if ( lpCriticalSection[1].DebugInfo )
  {
LABEL_3:
    _InterlockedIncrement((volatile signed __int32 *)lpCriticalSection[1].DebugInfo);
    *a2 = lpCriticalSection[1].DebugInfo;
LABEL_4:
    v6 = v11;
    goto LABEL_5;
  }
  v12 = 0LL;
  LeaveCriticalSection(lpCriticalSection);
  v6 = v11;
  v9 = CDisplayManager::DeriveCurrentDisplaySet(lpCriticalSection, v11, &v12, 0LL);
  v5 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection(lpCriticalSection);
    if ( lpCriticalSection[1].DebugInfo )
    {
      if ( v12 )
        CDisplaySet::Release(v12);
    }
    else
    {
      v10 = v12;
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v12;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)v10);
    }
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xF8u);
  EnterCriticalSection(lpCriticalSection);
LABEL_5:
  if ( v6 )
  {
    v7 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v6 + 8LL);
    if ( v7 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v6);
    else
      v7(v6);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
