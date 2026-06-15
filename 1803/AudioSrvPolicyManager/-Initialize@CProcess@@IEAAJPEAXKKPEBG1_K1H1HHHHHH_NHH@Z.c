/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z @ 0x180013E44
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z @ 0x1800139AC (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002CA8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180015DB8 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18001738C (-AddHead@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180019A74 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::Initialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        char *hObject,
        const unsigned __int16 *a8,
        int a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        unsigned int a17,
        int a18,
        int a19)
{
  CProcess *v20; // r14
  HANDLE *v21; // rdi
  char *v22; // r15
  DWORD LastError; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v25; // rax
  const char *v26; // r9
  int v27; // ebx
  void *v29; // rdi
  DWORD v30; // ebx
  __int64 v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  void *v36; // r12
  DWORD v37; // ebx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // r13
  DWORD v42; // ebx
  __int64 v43; // r9
  const unsigned __int16 *v44; // r15
  void *v45; // r13
  DWORD v46; // ebx
  DWORD v47; // r12d
  unsigned int v48; // r15d
  HANDLE v49; // rdi
  DWORD v50; // ebx
  void *v51; // rdi
  HANDLE v52; // rbx
  HANDLE v53; // rax
  char *v54; // rbx
  __int64 *i; // rax
  HANDLE v56; // r13
  DWORD v57; // edi
  int *v58; // rbx
  const char *bInheritHandle; // [rsp+28h] [rbp-80h]
  ATL::CAtlException *v60; // [rsp+48h] [rbp-60h] BYREF
  _BYTE ProcessInformation[40]; // [rsp+50h] [rbp-58h] BYREF
  DWORD dwProcessId[2]; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v20 = this;
  *((_DWORD *)this + 54) = a3;
  *((_DWORD *)this + 55) = a4;
  *((_DWORD *)this + 62) = a9;
  *((_DWORD *)this + 119) = a11;
  *((_DWORD *)this + 120) = a12;
  *((_DWORD *)this + 121) = a13;
  *((_DWORD *)this + 122) = a14;
  *((_DWORD *)this + 124) = a16;
  *((_DWORD *)this + 123) = a15;
  *((_QWORD *)this + 33) = hObject;
  *((_BYTE *)this + 753) = a17;
  *((_DWORD *)this + 125) = a18;
  *((_DWORD *)this + 126) = a19;
  hObject = 0LL;
  if ( hSourceHandle )
  {
    v21 = (HANDLE *)((char *)this + 208);
    v22 = (char *)*((_QWORD *)this + 26);
    if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v22);
      SetLastError(LastError);
    }
    *v21 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v25 = GetCurrentProcess();
    if ( !DuplicateHandle(v25, hSourceHandle, CurrentProcess, v21, 0x101000u, 0, 0) )
    {
      v27 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0xA89,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              v26);
LABEL_6:
      if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(hObject);
      return (unsigned int)v27;
    }
  }
  v29 = (void *)*((_QWORD *)v20 + 28);
  if ( v29 )
  {
    v30 = GetLastError();
    CoTaskMemFree(v29);
    SetLastError(v30);
  }
  *((_QWORD *)v20 + 28) = 0LL;
  v31 = -1LL;
  v32 = -1LL;
  do
    ++v32;
  while ( a5[v32] );
  v27 = _AllocStringWorker<CTCoAllocPolicy>(this, hSourceHandle, a5);
  if ( v27 < 0 )
  {
    v35 = 2703LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_6;
  }
  v36 = (void *)*((_QWORD *)v20 + 30);
  if ( v36 )
  {
    v37 = GetLastError();
    CoTaskMemFree(v36);
    SetLastError(v37);
  }
  *((_QWORD *)v20 + 30) = 0LL;
  v38 = -1LL;
  do
    ++v38;
  while ( a8[v38] );
  v27 = _AllocStringWorker<CTCoAllocPolicy>(v34, v33, a8);
  if ( v27 < 0 )
  {
    v35 = 2705LL;
    goto LABEL_15;
  }
  if ( a6 )
  {
    v41 = (void *)*((_QWORD *)v20 + 29);
    if ( v41 )
    {
      v42 = GetLastError();
      CoTaskMemFree(v41);
      SetLastError(v42);
    }
    *((_QWORD *)v20 + 29) = 0LL;
    v43 = -1LL;
    do
      ++v43;
    while ( a6[v43] );
    v27 = _AllocStringWorker<CTCoAllocPolicy>(v40, v39, a6);
    if ( v27 < 0 )
    {
      v35 = 2712LL;
      goto LABEL_15;
    }
  }
  v44 = a10;
  if ( a10 )
  {
    v45 = (void *)*((_QWORD *)v20 + 32);
    if ( v45 )
    {
      v46 = GetLastError();
      CoTaskMemFree(v45);
      SetLastError(v46);
    }
    *((_QWORD *)v20 + 32) = 0LL;
    do
      ++v31;
    while ( v44[v31] );
    v27 = _AllocStringWorker<CTCoAllocPolicy>(v40, v39, v44);
    if ( v27 < 0 )
    {
      v35 = 2716LL;
      goto LABEL_15;
    }
  }
  if ( hSourceHandle )
  {
    v27 = CProcess::SetupProcessTerminationWatcher(v20);
    if ( v27 < 0 )
    {
      v35 = 2725LL;
      goto LABEL_15;
    }
  }
  v47 = *((_DWORD *)v20 + 54);
  v48 = 0;
  a17 = 0;
  v49 = hObject;
  if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v50 = GetLastError();
    CloseHandle(v49);
    SetLastError(v50);
  }
  hObject = 0LL;
  v51 = (void *)*((_QWORD *)v20 + 26);
  v52 = GetCurrentProcess();
  v53 = GetCurrentProcess();
  if ( !DuplicateHandle(v53, v51, v52, (LPHANDLE)&hObject, 0x1000u, 0, 0) )
    goto LABEL_55;
  while ( 1 )
  {
    try
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead((char *)v20 + 120, v47);
    }
    catch ( ATL::CAtlException *v60 )
    {
      v58 = (int *)v60;
      if ( *(_DWORD *)v60 == -1073741571 )
        _o__resetstkoflw();
      a9 = *v58;
      v27 = a9;
      if ( a9 < 0 )
      {
        v35 = 2736LL;
        goto LABEL_15;
      }
      v20 = this;
      v48 = a17;
    }
    v47 = 0;
    v54 = hObject;
    if ( hObject )
      break;
LABEL_63:
    a17 = ++v48;
    if ( !v47 || v48 >= 0xA )
      goto LABEL_56;
  }
  if ( NtQueryInformationProcess(hObject, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
  {
    v54 = hObject;
    goto LABEL_63;
  }
  v47 = dwProcessId[0];
  for ( i = (__int64 *)*((_QWORD *)v20 + 15); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == dwProcessId[0] )
      goto LABEL_53;
  }
  i = 0LL;
LABEL_53:
  if ( !i )
  {
    v54 = (char *)OpenProcess(0x1000u, 0, dwProcessId[0]);
    v56 = hObject;
    if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v57 = GetLastError();
      CloseHandle(v56);
      SetLastError(v57);
    }
    hObject = v54;
    goto LABEL_63;
  }
  wil::details::in1diag3::Log_HrMsg(
    retaddr,
    (void *)0xAC3,
    (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    0LL,
    (int)"Encountered a stale parent PID",
    bInheritHandle);
LABEL_55:
  v54 = hObject;
LABEL_56:
  if ( (unsigned __int64)(v54 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v54);
  return 0LL;
}
