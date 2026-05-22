/*
 * XREFs of ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x18002F1CC
 * Callers:
 *     ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x18002F504 (-Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MobileCursorBroker::Initialize(MobileCursorBroker *this)
{
  HMODULE LibraryA; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rcx
  int CursorManager; // eax
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v29; // [rsp+48h] [rbp-40h] BYREF
  char v30; // [rsp+50h] [rbp-38h]
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h]

  v29 = 0LL;
  v30 = 0;
  v32 = 0LL;
  v31 = 0;
  LibraryA = LoadLibraryA("ShellChrome.dll");
  *((_QWORD *)this + 6) = LibraryA;
  if ( !LibraryA )
  {
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 58, 5);
    goto LABEL_41;
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CursorManager = CreateCursorManager((char *)this + 8, (char *)this + 88);
  v4 = CursorManager;
  if ( CursorManager < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 62, CursorManager);
    goto LABEL_41;
  }
  *((_QWORD *)this + 8) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorPosition");
  *((_QWORD *)this + 7) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorVisible");
  *((_QWORD *)this + 9) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorType");
  *((_QWORD *)this + 10) = GetProcAddress(*((HMODULE *)this + 6), "SetMouseCursorOrientation");
  v8 = (__int64 *)((char *)this + 1336);
  v9 = *((_QWORD *)this + 167);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = CoreUICreate((char *)this + 1336);
  v4 = v10;
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 73, v10);
    goto LABEL_41;
  }
  v12 = InputSecurityDescriptor::QueryDescriptor(&v29, 8LL, L"System\\Input\\CursorBrokerPort");
  v4 = v12;
  if ( v12 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 77, v12);
    goto LABEL_41;
  }
  v14 = *v8;
  v15 = (_QWORD *)((char *)this + 1360);
  v16 = *((_QWORD *)this + 170);
  if ( v16 )
  {
    *v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v14 + 48LL))(
          v14,
          v29,
          L"System\\Input\\CursorBrokerPort",
          (char *)this + 1360);
  v4 = v17;
  if ( v17 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 82, v17);
    goto LABEL_41;
  }
  v19 = (_QWORD *)((char *)this + 1344);
  v20 = *((_QWORD *)this + 168);
  if ( v20 )
  {
    *v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = CoreUIFactoryCreate((char *)this + 1344);
  v4 = v21;
  if ( v21 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v19 + 24LL))(
            *v19,
            &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
            &v31);
    if ( v23 >= 0 )
    {
      v26 = *v19;
      v27 = *((_QWORD *)this + 169);
      if ( v27 )
      {
        *((_QWORD *)this + 169) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v26 + 32LL))(
              v26,
              (char *)this + 24,
              0LL,
              v31,
              L"System\\Input\\CursorBrokerEndpoint",
              *v15,
              (char *)this + 1352);
      v4 = v23;
      if ( v23 >= 0 )
      {
        *((_DWORD *)this + 342) = 2;
        goto LABEL_41;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_32:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v25 = 96;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_32;
      v25 = 88;
    }
    McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, v25, v23);
    goto LABEL_32;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 84, v21);
LABEL_41:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v29);
  return v4;
}
