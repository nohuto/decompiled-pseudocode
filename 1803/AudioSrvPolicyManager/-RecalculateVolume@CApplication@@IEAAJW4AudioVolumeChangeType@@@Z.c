/*
 * XREFs of ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180010E10
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x1800110B8 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180015C28 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplication::RecalculateVolume(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v12 = (LPCRITICAL_SECTION)(a1 + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&v12);
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( !*(_DWORD *)(v6 + 472) )
      CProcess::RecalculateVolume(v6, a2);
  }
  lpCriticalSection = v4;
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *(_QWORD **)(a1 + 120);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 24LL))(
      v8,
      *(unsigned int *)(a1 + 16),
      *(_QWORD *)(a1 + 24));
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v13 )
    LeaveCriticalSection(v12);
  return 0LL;
}
