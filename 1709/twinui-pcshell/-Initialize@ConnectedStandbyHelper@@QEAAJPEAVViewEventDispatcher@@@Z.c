/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180139CBC
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011EC50 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     PdcPortOpen @ 0x1801BDC98 (PdcPortOpen.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ConnectedStandbyHelper::Initialize(ConnectedStandbyHelper *this, struct ViewEventDispatcher *a2)
{
  char *Heap; // rax
  __int64 v4; // r9
  char *v5; // rbx
  int v6; // edi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // edx
  int v10; // ecx
  RTL_SRWLOCK *v11; // rcx
  unsigned int v12; // ebx
  _OWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char *v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+98h] [rbp+38h] BYREF

  *((_QWORD *)this + 3) = a2;
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[0]) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)&v14[0] + 1) = lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_;
  *((_QWORD *)&v14[1] + 1) = SingleViewShellExperienceEventHandler::OnViewPropertiesChanging;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x70uLL);
  v5 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x70uLL);
    v7 = v14[0];
    *(_DWORD *)v5 = 1315136592;
    v8 = v14[1];
    *((_DWORD *)v5 + 6) = 34;
    *((_OWORD *)v5 + 3) = v7;
    v5[80] = 1;
    *((_OWORD *)v5 + 4) = v8;
    *((_QWORD *)v5 + 5) = this;
    v17 = PdcpNotificationClientCallback;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    InitializeSRWLock((PSRWLOCK)v5 + 1);
    AcquireSRWLockExclusive((PSRWLOCK)v5 + 1);
    *((_DWORD *)v5 + 4) = GetCurrentThreadId();
    v6 = PdcPortOpen(v10, v9, (_DWORD)v5, (unsigned int)&v17);
    v11 = (RTL_SRWLOCK *)(v5 + 8);
    if ( v6 )
    {
      *((_DWORD *)v5 + 4) = 0;
      ReleaseSRWLockExclusive(v11);
    }
    else
    {
      *((_QWORD *)this + 4) = v5;
      *((_DWORD *)v5 + 4) = 0;
      ReleaseSRWLockExclusive(v11);
      v5 = 0LL;
    }
    if ( v5 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v6 = -1073741801;
  }
  LODWORD(v16) = v6 | 0x10000000;
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v16,
         L"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
         (const unsigned __int16 *)0x1F,
         v4) )
  {
    return 0LL;
  }
  v12 = (unsigned int)v16;
  if ( (int)v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      (const char *)(unsigned int)v16);
  return v12;
}
