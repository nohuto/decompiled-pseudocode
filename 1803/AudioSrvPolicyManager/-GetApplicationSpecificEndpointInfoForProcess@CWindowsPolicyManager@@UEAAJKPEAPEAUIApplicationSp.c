/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180014A30 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x18001C504 (-FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetApplicationSpecificEndpointInfoForProcess(
        CWindowsPolicyManager *this,
        unsigned int a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  CApplicationManager *v3; // rdi
  struct CProcess *v4; // rbx
  RTL_SRWLOCK *v7; // rbp
  int Process; // eax
  int v9; // edi
  struct CProcess *v10; // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int ApplicationSpecificEndpointInfo; // eax
  struct CProcess *v14; // rbx
  struct CProcess *v16; // [rsp+20h] [rbp-28h] BYREF
  struct CProcess *v17; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = g_ApplicationManager;
  v4 = 0LL;
  v17 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)g_ApplicationManager + 120);
  AcquireSRWLockShared((PSRWLOCK)g_ApplicationManager + 15);
  v16 = 0LL;
  Process = CApplicationManager::FindProcess(v3, a2, &v16);
  v9 = Process;
  if ( Process >= 0 )
  {
    v4 = v16;
    v17 = v16;
    if ( v7 )
      ReleaseSRWLockShared(v7);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x556,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Process);
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v16;
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v16 + 32LL))(v16);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
      }
      v4 = v17;
    }
  }
  if ( v9 >= 0 )
  {
    ApplicationSpecificEndpointInfo = CProcess::GetApplicationSpecificEndpointInfo(
                                        (struct CProcess *)((char *)v4 + 16),
                                        a3);
    v9 = ApplicationSpecificEndpointInfo;
    if ( ApplicationSpecificEndpointInfo >= 0 )
    {
      v9 = 0;
      goto LABEL_17;
    }
    v11 = (unsigned int)ApplicationSpecificEndpointInfo;
    v12 = 279LL;
  }
  else
  {
    v11 = (unsigned int)v9;
    v12 = 278LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)v11);
LABEL_17:
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v14 = v17;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v17 + 32LL))(v17);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
  }
  return (unsigned int)v9;
}
