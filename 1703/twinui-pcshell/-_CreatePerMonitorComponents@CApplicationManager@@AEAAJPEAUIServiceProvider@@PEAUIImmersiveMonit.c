/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180010964
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  unsigned int i; // ebx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v16[1] = -2LL;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 328) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  v16[0] = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, _QWORD *))(**((_QWORD **)this + 64) + 32LL))(
    *((_QWORD *)this + 64),
    0LL,
    &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
    v16);
  v19 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, v16[0]);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v19,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x1202,
         v6) )
  {
    v21 = 0LL;
    v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveShellCreationBehavior,
            &GUID_5d6c0d20_18bb_403c_becf_46e01ee3bfe4,
            &v21);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v19,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x1206,
           v7) )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v21 + 72LL))(v21, 0LL, &v20);
      for ( i = 0;
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&v19,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x120B,
              v8)
         && i < v20;
            ++i )
      {
        v15 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 80LL))(
                v21,
                0LL,
                i,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v15);
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&v19,
               L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
               (const unsigned __int16 *)0x1214,
               v10) )
        {
          v19 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v15);
        }
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v13 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v18 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v19;
}
