/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18007F03C
 * Callers:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  CDisplaySet *v12; // [rsp+60h] [rbp+18h] BYREF
  LPCRITICAL_SECTION v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v13 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  v4 = CDisplayManager::EnsureDXGIEnumeration(lpCriticalSection, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xEDu);
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
  v9 = CDisplayManager::DeriveCurrentDisplaySet(lpCriticalSection, v11, &v12, 0LL, 0);
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFBu);
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
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v5;
}
