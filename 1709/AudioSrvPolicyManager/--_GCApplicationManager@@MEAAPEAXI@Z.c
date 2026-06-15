/*
 * XREFs of ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x180012690
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000BC8C (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000FF5C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800104B0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
CApplicationManager *__fastcall CApplicationManager::`scalar deleting destructor'(CApplicationManager *this, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rsi
  __int64 v6; // rdi
  CApplication *v7; // rcx
  _QWORD *v8; // rdi
  volatile signed __int32 *v9; // rsi
  void *v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v13; // [rsp+30h] [rbp-38h]

  *(_QWORD *)this = &CApplicationManager::`vftable';
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      v7 = *(CApplication **)(v6 + 272);
      if ( v7 )
        CApplication::DelinkProcess(v7, (struct CProcess *)v6);
      CProcess::CleanupProcessTerminationWatcher((CProcess *)v6, 1);
      CProcess::NotifyPLM(v6, 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      }
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v8 )
  {
    v9 = (volatile signed __int32 *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 120);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection(v4);
  v10 = (void *)*((_QWORD *)this + 2);
  if ( v10 )
    LocalFree(v10);
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
