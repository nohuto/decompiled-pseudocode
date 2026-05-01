/*
 * XREFs of ??0CIAMGlobals@@QEAA@XZ @ 0x180024768
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

CIAMGlobals *__fastcall CIAMGlobals::CIAMGlobals(CIAMGlobals *this)
{
  _DWORD *v1; // rdi
  signed __int32 v3; // eax
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 4;
  v1 = (_DWORD *)((char *)this + 68);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\ICoreWindow",
         L"VisibilityDelay",
         0x20000018u,
         0LL,
         (char *)this + 68,
         &v5) )
  {
    *v1 = 1000;
    *((_BYTE *)this + 64) = 0;
  }
  else
  {
    *((_BYTE *)this + 64) = 1;
  }
  *((_DWORD *)this + 18) = GetCurrentThreadId();
  *((_DWORD *)this + 19) = GetCurrentProcessId();
  *((_QWORD *)this + 10) = GetShellWindow();
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext, 1u);
  *((_WORD *)this + 46) = 0;
  *((_DWORD *)this + 22) = v3 + 1;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 47) = GlobalAddAtomW(L"IAMWindowPropertyIndexBehaviorFlags");
  return this;
}
