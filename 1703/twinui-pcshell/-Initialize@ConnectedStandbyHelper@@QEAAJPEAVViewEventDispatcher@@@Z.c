/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x18010F8AC
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3FB0 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     PdcPortOpen @ 0x1801722C8 (PdcPortOpen.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall ConnectedStandbyHelper::Initialize(ConnectedStandbyHelper *this, struct ViewEventDispatcher *a2)
{
  __int64 v3; // r9
  int v4; // edi
  char *Heap; // rax
  char *v6; // rbx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // edx
  int v10; // ecx
  RTL_SRWLOCK *v11; // rcx
  unsigned int v12; // ebx
  _OWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char *v16; // [rsp+80h] [rbp+20h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+88h] [rbp+28h] BYREF

  *((_QWORD *)this + 3) = a2;
  memset(v14, 0, sizeof(v14));
  *((_QWORD *)this + 4) = 0LL;
  LODWORD(v14[0]) = 1;
  *((_QWORD *)&v14[0] + 1) = lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_;
  *((_QWORD *)&v14[1] + 1) = SingleViewShellExperienceEventHandler::OnViewPropertiesChanging;
  if ( lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x70uLL);
    v6 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x70uLL);
      v7 = v14[0];
      *(_DWORD *)v6 = 1315136592;
      v8 = v14[1];
      *((_DWORD *)v6 + 6) = 34;
      *((_OWORD *)v6 + 3) = v7;
      v6[80] = 1;
      *((_OWORD *)v6 + 4) = v8;
      *((_QWORD *)v6 + 5) = this;
      v17 = PdcpNotificationClientCallback;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_QWORD *)v6 + 2) = 0LL;
      InitializeSRWLock((PSRWLOCK)v6 + 1);
      AcquireSRWLockExclusive((PSRWLOCK)v6 + 1);
      *((_DWORD *)v6 + 4) = GetCurrentThreadId();
      v4 = PdcPortOpen(v10, v9, (_DWORD)v6, (unsigned int)&v17);
      v11 = (RTL_SRWLOCK *)(v6 + 8);
      if ( v4 )
      {
        *((_DWORD *)v6 + 4) = 0;
        ReleaseSRWLockExclusive(v11);
      }
      else
      {
        *((_QWORD *)this + 4) = v6;
        *((_DWORD *)v6 + 4) = 0;
        ReleaseSRWLockExclusive(v11);
        v6 = 0LL;
      }
      if ( v6 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  else
  {
    v4 = -1073741584;
  }
  LODWORD(v16) = v4 | 0x10000000;
  if ( CRVPrivate::VerifyCriticalResult(
         (unsigned __int64)&v16,
         L"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
         (const unsigned __int16 *)0x1F,
         v3) )
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
