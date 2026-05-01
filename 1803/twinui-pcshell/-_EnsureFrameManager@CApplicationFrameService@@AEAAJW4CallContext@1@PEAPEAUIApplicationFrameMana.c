/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18008146C
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180082820 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180129650 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x180129DD0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a15a07f4e0c3f5666a19ba90306a96ee__&___ptr64_ @ 0x180128F20 (Windows--Internal--ComTaskPool--QueueTask__lambda_a15a07f4e0c3f5666a19ba90306a96ee__-___ptr64_.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x1801290B0 (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v5; // rdi
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v13; // eax
  CCriticalFailureHandler *v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v17; // [rsp+28h] [rbp-40h]
  _QWORD v18[6]; // [rsp+38h] [rbp-30h] BYREF
  CCriticalFailureHandler *v19; // [rsp+A0h] [rbp+38h] BYREF
  int v20; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+50h] BYREF

  v20 = a2;
  *a3 = 0LL;
  LODWORD(v19) = -2147023728;
  v21 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  v7 = v6;
  if ( !v6 )
  {
    *v5 = 1;
    v7 = 1;
  }
  if ( v7 == 2 )
  {
    LODWORD(v19) = 0;
    v8 = *(_QWORD *)(a1 + 176);
    v9 = v21;
    if ( v21 != v8 )
    {
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(a1 + 176));
        v9 = v21;
      }
      v21 = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_11;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>((volatile void *)(a1 + 196));
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = *v5 != 2 ? 0x80070490 : 0;
    LODWORD(v19) = *v5 != 2 ? 0x80070490 : 0;
    if ( !v20 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v15, (int *)&v19);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v15 = (unsigned int)v19;
      }
      if ( (v15 & 0x80000000) == 0LL )
        goto LABEL_29;
      if ( (_DWORD)v15 != -2147024882 && (_DWORD)v15 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v15,
          (int *)&v19,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x506u,
          v16,
          v17);
        LODWORD(v15) = (_DWORD)v19;
      }
    }
    if ( (v15 & 0x80000000) != 0LL )
    {
LABEL_30:
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_11;
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v21, (__int64 *)(a1 + 176));
    goto LABEL_30;
  }
  v22 = a1;
  v18[0] = &v19;
  v18[1] = a1;
  v18[2] = &v20;
  v18[3] = &v22;
  v18[4] = &v21;
  v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_a15a07f4e0c3f5666a19ba90306a96ee______ptr64_(
          v11,
          v10,
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext),
          v18);
  if ( v13 < 0 )
  {
    LODWORD(v19) = v13;
    if ( !v20 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v14, (int *)&v19);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v13 = (int)v19;
      }
      if ( v13 < 0 && v13 != -2147024882 && v13 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v14,
          (int *)&v19,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4F4u,
          v16,
          v17);
    }
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_DWORD *)(v22 + 196) = 0;
    WakeByAddressAll((PVOID)(v22 + 196));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
LABEL_11:
  *a3 = v21;
  return (unsigned int)v19;
}
