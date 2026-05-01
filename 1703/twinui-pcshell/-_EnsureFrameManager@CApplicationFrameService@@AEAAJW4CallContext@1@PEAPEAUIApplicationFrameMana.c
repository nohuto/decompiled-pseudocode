/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004CF68
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004B6C0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18004B9F0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18004BB90 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_ @ 0x18004E920 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_96e0e644045a5df6c639af1253b871cf__-___ptr64.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, _QWORD *a3)
{
  int *v5; // rbx
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  signed __int32 v9; // ebx
  IUnknown **v10; // rax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  signed int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v21[6]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+38h] BYREF
  int v23; // [rsp+B8h] [rbp+40h] BYREF
  int CompareAddress; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+50h] BYREF

  v23 = a2;
  v20[1] = -2LL;
  *a3 = 0LL;
  v22 = -2147023728;
  v25 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (int *)(a1 + 180);
  v6 = *(_DWORD *)(a1 + 180);
  if ( !v6 )
    *v5 = 1;
  if ( *v5 == 2 )
  {
    v22 = 0;
    v7 = *(_QWORD *)(a1 + 160);
    v8 = v25;
    if ( v25 != v7 )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(a1 + 160));
        v8 = v25;
      }
      v25 = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      while ( 1 )
      {
        CompareAddress = *v5;
        if ( CompareAddress != 1 )
          break;
        WaitOnAddress((volatile void *)(a1 + 180), &CompareAddress, 4uLL, 0xFFFFFFFF);
      }
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v15 = *v5 != 2 ? 0x80070490 : 0;
      v22 = v15;
      if ( !v23 )
      {
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const unsigned __int16 *)0x4E9,
          v14);
        v15 = v22;
      }
      if ( v15 >= 0 )
      {
        v16 = *(_QWORD *)(a1 + 160);
        v17 = v25;
        if ( v25 != v16 )
        {
          if ( v16 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*(_QWORD *)(a1 + 160));
            v17 = v25;
          }
          v25 = v16;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  else
  {
    v19 = a1;
    v21[0] = &v22;
    v21[1] = a1;
    v21[2] = &v23;
    v21[3] = &v19;
    v21[4] = &v25;
    v9 = _InterlockedExchangeAdd(
           (volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext,
           1u);
    v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_96e0e644045a5df6c639af1253b871cf______ptr64_(
                         v20,
                         v21);
    v11 = Windows::Internal::ComTaskPool::RunTask(3, 0x40u, v9 + 1, 0, *v10, 0LL);
    v13 = v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v11 < 0 )
    {
      v22 = v11;
      if ( !v23 )
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const unsigned __int16 *)0x4D7,
          v12);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      *(_DWORD *)(v19 + 180) = 0;
      WakeByAddressAll((PVOID)(v19 + 180));
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  *a3 = v25;
  return v22;
}
