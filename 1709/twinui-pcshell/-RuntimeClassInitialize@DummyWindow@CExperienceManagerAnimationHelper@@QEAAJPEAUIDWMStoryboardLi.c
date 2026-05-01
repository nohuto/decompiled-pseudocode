/*
 * XREFs of ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x1801DAE0C
 * Callers:
 *     ??0CStartExperienceManager@@QEAA@XZ @ 0x1800B5AF4 (--0CStartExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        __int64 (__fastcall ***a2)(struct IDWMStoryboardListener *, GUID *, __int64 *))
{
  __int64 v3; // rcx
  __int64 (__fastcall **v5)(struct IDWMStoryboardListener *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rcx
  HRESULT v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  HCURSOR CursorW; // rax
  const char *v17; // r9
  HWND v18; // rcx
  WNDCLASSEXW v19; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int pvAttribute; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+77h] BYREF

  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v5 = *a2;
  v22 = 0LL;
  v6 = (*v5)((struct IDWMStoryboardListener *)a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v22);
  v7 = v22;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_4;
  v23 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v23);
  if ( v8 < 0 )
  {
    v9 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v7 = v22;
LABEL_4:
    if ( v7 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_19;
  }
  v10 = v23;
  v11 = v23;
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v10 = v23;
  }
  v12 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v11;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v10 = v23;
  }
  if ( v10 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v13 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v8 = 0;
LABEL_19:
  if ( v8 < 0 )
  {
    v14 = 13LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  memset(&v19, 0, sizeof(v19));
  v19.cbSize = 80;
  v19.lpfnWndProc = (WNDPROC)CWRLImpWndProc<CExperienceManagerAnimationHelper::DummyWindow>::s_WndProcBase;
  v19.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  v19.cbWndExtra = 8;
  v19.hCursor = CursorW;
  v19.lpszClassName = L"DummyDWMListenerWindow";
  RegisterClassExW(&v19);
  CreateWindowExW(0x8200080u, L"DummyDWMListenerWindow", 0LL, 0x80000000, 0, 0, 0, 0, 0LL, 0LL, &_ImageBase, this);
  v18 = (HWND)*((_QWORD *)this + 3);
  if ( !v18 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x26,
             (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
             v17);
  pvAttribute = 1;
  v8 = DwmSetWindowAttribute(v18, 0xDu, &pvAttribute, 4u);
  if ( v8 < 0 )
  {
    v14 = 41LL;
    goto LABEL_21;
  }
  ShowWindow(*((HWND *)this + 3), 8);
  return 0LL;
}
