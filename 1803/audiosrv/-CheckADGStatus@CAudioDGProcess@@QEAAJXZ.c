/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002B0B4
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18002AFD8 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800ACB7C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rdi
  __int64 v2; // rcx
  unsigned int LockSemaphore; // ebx
  __int64 v5; // rdx
  const char *v6; // r9
  unsigned int LastError; // eax
  signed int v8; // eax
  unsigned int v9; // [rsp+20h] [rbp-30h]
  HANDLE Handles; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  CAudioDGProcess *ExitCode; // [rsp+60h] [rbp+10h] BYREF

  ExitCode = this;
  v1 = g_ADGProcess;
  v2 = *(_QWORD *)&g_ADGProcess[2].LockCount;
  if ( !v2 )
  {
    LockSemaphore = -2004287472;
    v5 = 326LL;
    goto LABEL_18;
  }
  Handles = (HANDLE)g_ADGProcess[2].SpinCount;
  v11 = v2;
  if ( WaitForMultipleObjectsEx(2u, &Handles, 0, 0xFFFFFFFF, 0) != 1 )
  {
    LockSemaphore = 0;
    goto LABEL_4;
  }
  if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) )
  {
    if ( (_DWORD)ExitCode != -1073740760 )
    {
      if ( !(_DWORD)ExitCode )
        goto LABEL_5;
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x159,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                    (const char *)(unsigned int)ExitCode,
                    v9);
      goto LABEL_22;
    }
    LockSemaphore = -2147024319;
    v5 = 341LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore,
      v9);
    goto LABEL_19;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x153,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                v6);
LABEL_22:
  LockSemaphore = LastError;
LABEL_4:
  if ( (LockSemaphore & 0x80000000) != 0 )
  {
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore,
      v9);
    return LockSemaphore;
  }
LABEL_5:
  Handles = &v1[1].LockCount;
  LOBYTE(v11) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&Handles);
  if ( BYTE4(v1[2].OwningThread) )
  {
    LockSemaphore = (unsigned int)v1[2].LockSemaphore;
  }
  else
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, (LPDWORD)&ExitCode) && (_DWORD)ExitCode == 259 )
    {
      LockSemaphore = CAudioDGProcess::CheckADGStartupStatus((HANDLE *)&v1->DebugInfo);
    }
    else
    {
      v8 = GetLastError();
      LockSemaphore = v8;
      LODWORD(ExitCode) = v8;
      if ( v8 > 0 )
        LockSemaphore = (unsigned __int16)v8 | 0x80070000;
    }
    LODWORD(v1[2].LockSemaphore) = LockSemaphore;
    BYTE4(v1[2].OwningThread) = 1;
  }
  if ( (LockSemaphore & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)LockSemaphore,
      v9);
  if ( (_BYTE)v11 )
    LeaveCriticalSection((LPCRITICAL_SECTION)Handles);
  return LockSemaphore;
}
