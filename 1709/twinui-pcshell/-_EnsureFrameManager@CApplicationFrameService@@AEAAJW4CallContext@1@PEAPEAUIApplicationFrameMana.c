/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004F518
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18004DEE0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18004E040 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_ @ 0x180050CBC (Windows--Internal--ComTaskPool--QueueTask__lambda_96e0e644045a5df6c639af1253b871cf__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, _QWORD *a3)
{
  int *v5; // rbx
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // r9
  signed int v14; // ecx
  __int64 v15; // rbx
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+38h] BYREF
  int v21; // [rsp+A8h] [rbp+40h] BYREF
  int CompareAddress; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+50h] BYREF

  v21 = a2;
  v18[1] = -2LL;
  *a3 = 0LL;
  v20 = -2147023728;
  v23 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (int *)(a1 + 204);
  v6 = *(_DWORD *)(a1 + 204);
  if ( !v6 )
    *v5 = 1;
  if ( *v5 == 2 )
  {
    v20 = 0;
    v7 = *(_QWORD *)(a1 + 184);
    v8 = v23;
    if ( v23 != v7 )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(a1 + 184));
        v8 = v23;
      }
      v23 = v7;
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
        WaitOnAddress((volatile void *)(a1 + 204), &CompareAddress, 4uLL, 0xFFFFFFFF);
      }
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = *v5 != 2 ? 0x80070490 : 0;
      v20 = v14;
      if ( !v21 )
      {
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v20,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const unsigned __int16 *)0x4E9,
          v13);
        v14 = v20;
      }
      if ( v14 >= 0 )
      {
        v15 = *(_QWORD *)(a1 + 184);
        v16 = v23;
        if ( v23 != v15 )
        {
          if ( v15 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(a1 + 184));
            v16 = v23;
          }
          v23 = v15;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  else
  {
    v18[0] = a1;
    v19[0] = &v20;
    v19[1] = a1;
    v19[2] = &v21;
    v19[3] = v18;
    v19[4] = &v23;
    v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_96e0e644045a5df6c639af1253b871cf______ptr64_(
            v10,
            v9,
            (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext),
            v19);
    if ( v11 < 0 )
    {
      v20 = v11;
      if ( !v21 )
        CRVPrivate::VerifyCriticalResult(
          (unsigned __int64)&v20,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const unsigned __int16 *)0x4D7,
          v12);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      *(_DWORD *)(v18[0] + 204LL) = 0;
      WakeByAddressAll((PVOID)(v18[0] + 204LL));
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  *a3 = v23;
  return v20;
}
