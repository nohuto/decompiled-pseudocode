/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180010F44
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r15d
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int i; // ebx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  unsigned int v20; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  v18[1] = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 400) & -(__int64)(this != 0LL));
  v18[2] = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v19 = v7;
  v18[0] = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, _QWORD *))(**((_QWORD **)this + 73) + 32LL))(
    *((_QWORD *)this + 73),
    0LL,
    &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
    v18);
  v20 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _QWORD))(*(_QWORD *)a3 + 32LL))(a3, v18[0]);
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v20,
         L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
         (const unsigned __int16 *)0x126B,
         v8) )
  {
    v22 = 0LL;
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveShellCreationBehavior,
            &GUID_5d6c0d20_18bb_403c_becf_46e01ee3bfe4,
            &v22);
    if ( CRVPrivate::VerifyCriticalResult(
           (unsigned __int64)&v20,
           L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
           (const unsigned __int16 *)0x126F,
           v9) )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v22 + 72LL))(v22, 0LL, &v21);
      for ( i = 0;
            CRVPrivate::VerifyCriticalResult(
              (unsigned __int64)&v20,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const unsigned __int16 *)0x1274,
              v10)
         && i < v21;
            ++i )
      {
        v17 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v22 + 80LL))(
                v22,
                0LL,
                i,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v17);
        if ( CRVPrivate::VerifyCriticalResult(
               (unsigned __int64)&v20,
               L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
               (const unsigned __int16 *)0x127D,
               v12) )
        {
          v20 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v17);
        }
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    v14 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return v20;
}
