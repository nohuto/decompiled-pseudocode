/*
 * XREFs of ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x18001A6D4
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180008C54 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002CA8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010160 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::CreateInstance(struct CApplicationManager **a1)
{
  int v2; // ebx
  HANDLE ProcessHeap; // rax
  char *v4; // rax
  char *v5; // rdi
  void *v6; // rbp
  DWORD LastError; // ebx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1 == 0LL ? 0x80004003 : 0;
  if ( a1 && !g_ApplicationManager )
  {
    ProcessHeap = GetProcessHeap();
    v4 = (char *)HeapAlloc(ProcessHeap, 0, 0xB0uLL);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 2) = 1;
      *(_QWORD *)v4 = &CApplicationManager::`vftable';
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 32));
      *((_QWORD *)v5 + 9) = 0LL;
      *((_QWORD *)v5 + 10) = 0LL;
      *((_QWORD *)v5 + 11) = 0LL;
      *((_QWORD *)v5 + 12) = 0LL;
      *((_QWORD *)v5 + 13) = 0LL;
      *((_DWORD *)v5 + 28) = 10;
      InitializeSRWLock((PSRWLOCK)v5 + 15);
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 17) = 0LL;
      *((_QWORD *)v5 + 18) = 0LL;
      *((_QWORD *)v5 + 19) = 0LL;
      *((_QWORD *)v5 + 20) = 0LL;
      *((_DWORD *)v5 + 42) = 10;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = (void *)*((_QWORD *)v5 + 2);
      if ( v6 )
      {
        LastError = GetLastError();
        LocalFree(v6);
        SetLastError(LastError);
      }
      *((_QWORD *)v5 + 2) = 0LL;
      if ( ConvertStringSidToSidW(
             L"S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991",
             (PSID *)v5 + 2) )
      {
        v2 = 0;
      }
      else
      {
        v2 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1D0,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v8);
      }
      if ( v2 >= 0 )
      {
        *a1 = (struct CApplicationManager *)v5;
        v5 = 0LL;
      }
    }
    else
    {
      v2 = -2147024882;
    }
    if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
    }
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v2);
    }
    AudPolicyLogError("CApplicationManager::CreateInstance", 400, v2);
  }
  return (unsigned int)v2;
}
