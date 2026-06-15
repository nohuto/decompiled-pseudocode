/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18001025C
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000BE74 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000D848 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  int v7; // [rsp+20h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp-20h]
  LPCRITICAL_SECTION v10; // [rsp+58h] [rbp-18h] BYREF
  char v11; // [rsp+60h] [rbp-10h]
  __int64 v12; // [rsp+80h] [rbp+10h] BYREF

  v10 = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&v10);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 168);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != 2 )
    {
      v12 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
             v5,
             &GUID_d8f0a3ea_c16c_4c58_97bc_5ec84ae597f4,
             &v12) >= 0 )
      {
        LOBYTE(v7) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v12 + 24LL))(
          v12,
          a2,
          0LL,
          0xFFFFFFFFLL,
          v7,
          0LL);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 )
    LeaveCriticalSection(v10);
  return 0LL;
}
