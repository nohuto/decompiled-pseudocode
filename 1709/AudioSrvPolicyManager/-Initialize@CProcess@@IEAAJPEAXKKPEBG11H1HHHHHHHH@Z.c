/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z @ 0x18000E7A4
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z @ 0x18000E3A0 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002AB0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x1800103D8 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x180011108 (-AddHead@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180011A1C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::Initialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        const unsigned __int16 *a7,
        unsigned int a8,
        const unsigned __int16 *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  CProcess *v18; // r14
  HANDLE CurrentProcess; // rbx
  HANDLE v20; // rax
  const char *v21; // r9
  int LastError; // ebx
  __int64 v24; // rbx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  DWORD v35; // r12d
  unsigned int v36; // r15d
  HANDLE v37; // rdi
  DWORD v38; // ebx
  HANDLE v39; // rbx
  HANDLE v40; // rax
  char *v41; // rbx
  __int64 *i; // rax
  HANDLE v43; // r13
  DWORD v44; // edi
  int *v45; // rbx
  const char *bInheritHandle; // [rsp+28h] [rbp-80h]
  ATL::CAtlException *v47; // [rsp+48h] [rbp-60h] BYREF
  _BYTE ProcessInformation[40]; // [rsp+50h] [rbp-58h] BYREF
  DWORD dwProcessId[2]; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  HANDLE hObject; // [rsp+B8h] [rbp+10h] BYREF

  v18 = this;
  *((_DWORD *)this + 54) = a3;
  *((_DWORD *)this + 55) = a4;
  *((_DWORD *)this + 62) = a8;
  *((_DWORD *)this + 117) = a10;
  *((_DWORD *)this + 118) = a11;
  *((_DWORD *)this + 119) = a12;
  *((_DWORD *)this + 120) = a13;
  *((_DWORD *)this + 122) = a15;
  *((_DWORD *)this + 121) = a14;
  *((_DWORD *)this + 123) = a16;
  *((_DWORD *)this + 124) = a17;
  hObject = 0LL;
  if ( hSourceHandle )
  {
    CurrentProcess = GetCurrentProcess();
    v20 = GetCurrentProcess();
    if ( !DuplicateHandle(v20, hSourceHandle, CurrentProcess, (LPHANDLE)v18 + 26, 0x101000u, 0, 0) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xA26,
                    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                    v21);
LABEL_4:
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return (unsigned int)LastError;
    }
  }
  v24 = -1LL;
  v25 = -1LL;
  do
    ++v25;
  while ( a5[v25] );
  v28 = _AllocStringWorker<CTCoAllocPolicy>(this, hSourceHandle, a5);
  if ( v28 < 0 )
  {
    v29 = 2604LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v29,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v28);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    return (unsigned int)v28;
  }
  v30 = -1LL;
  do
    ++v30;
  while ( a7[v30] );
  v28 = _AllocStringWorker<CTCoAllocPolicy>(v27, v26, a7);
  if ( v28 < 0 )
  {
    v29 = 2606LL;
    goto LABEL_11;
  }
  if ( a6 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( a6[v33] );
    v28 = _AllocStringWorker<CTCoAllocPolicy>(v32, v31, a6);
    if ( v28 < 0 )
    {
      v29 = 2613LL;
      goto LABEL_11;
    }
  }
  if ( a9 )
  {
    do
      ++v24;
    while ( a9[v24] );
    LastError = _AllocStringWorker<CTCoAllocPolicy>(v32, v31, a9);
    if ( LastError < 0 )
    {
      v34 = 2617LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v34,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)LastError);
      goto LABEL_4;
    }
  }
  if ( hSourceHandle )
  {
    LastError = CProcess::SetupProcessTerminationWatcher(v18);
    if ( LastError < 0 )
    {
      v34 = 2626LL;
      goto LABEL_27;
    }
  }
  v35 = *((_DWORD *)v18 + 54);
  v36 = 0;
  a8 = 0;
  v37 = hObject;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v38 = GetLastError();
    CloseHandle(v37);
    SetLastError(v38);
  }
  hObject = 0LL;
  v39 = GetCurrentProcess();
  v40 = GetCurrentProcess();
  if ( !DuplicateHandle(v40, *((HANDLE *)v18 + 26), v39, &hObject, 0x1000u, 0, 0) )
    goto LABEL_54;
  while ( 1 )
  {
    try
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead((char *)v18 + 120, v35);
    }
    catch ( ATL::CAtlException *v47 )
    {
      v45 = (int *)v47;
      if ( *(_DWORD *)v47 == -1073741571 )
        _o__resetstkoflw();
      a10 = *v45;
      LastError = a10;
      if ( a10 < 0 )
      {
        v34 = 2637LL;
        goto LABEL_27;
      }
      v18 = this;
      v36 = a8;
    }
    v35 = 0;
    v41 = (char *)hObject;
    if ( hObject )
      break;
LABEL_51:
    a8 = ++v36;
    if ( !v35 || v36 >= 0xA )
      goto LABEL_55;
  }
  if ( NtQueryInformationProcess(hObject, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
  {
    v41 = (char *)hObject;
    goto LABEL_51;
  }
  v35 = dwProcessId[0];
  for ( i = (__int64 *)*((_QWORD *)v18 + 15); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == dwProcessId[0] )
      goto LABEL_45;
  }
  i = 0LL;
LABEL_45:
  if ( !i )
  {
    v41 = (char *)OpenProcess(0x1000u, 0, dwProcessId[0]);
    v43 = hObject;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v44 = GetLastError();
      CloseHandle(v43);
      SetLastError(v44);
    }
    hObject = v41;
    goto LABEL_51;
  }
  wil::details::in1diag3::Log_HrMsg(
    retaddr,
    (void *)0xA60,
    (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    0LL,
    (int)"Encountered a stale parent PID",
    bInheritHandle);
LABEL_54:
  v41 = (char *)hObject;
LABEL_55:
  if ( (unsigned __int64)(v41 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v41);
  return 0LL;
}
