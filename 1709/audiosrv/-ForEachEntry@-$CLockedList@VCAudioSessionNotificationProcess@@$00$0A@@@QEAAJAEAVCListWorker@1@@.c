/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180013518
 * Callers:
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180015B30 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x180079238 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x1800792F0 (-Add@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotification.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800795E4 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, __int64 *); // r14
  LPCRITICAL_SECTION v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned int i; // ebx
  unsigned int j; // ebx
  __int64 v8; // rax
  ATL::CAtlException *v9; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v10; // [rsp+38h] [rbp-50h] BYREF
  void *Block[3]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  memset(Block, 0, sizeof(Block));
  v12 = 0;
  v4 = 0LL;
  v16 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v15) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    try
    {
      v8 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v3[1]);
      ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::Add(
        Block,
        v8);
      v16 = ++v4;
    }
    catch ( ATL::CAtlException *v9 )
    {
      if ( *(_DWORD *)v9 == -1073741571 )
        _o__resetstkoflw();
      v3 = lpCriticalSection;
      v2 = a2;
      v4 = v16;
      i = v15;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  for ( j = 0; j < v4; ++j )
  {
    try
    {
      v15 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](Block);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      (**v2)(v2, &v15);
    }
    catch ( ATL::CAtlException *v10 )
    {
      if ( *(_DWORD *)v10 == -1073741571 )
        _o__resetstkoflw();
      v2 = a2;
      v4 = v16;
      continue;
    }
  }
  if ( Block[0] )
  {
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors((CAudioSessionNotificationProcess *)Block[0]);
    free(Block[0]);
  }
  return 0LL;
}
