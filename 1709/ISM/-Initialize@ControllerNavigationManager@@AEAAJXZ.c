/*
 * XREFs of ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x18003C350
 * Callers:
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::Initialize(ControllerNavigationManager *this)
{
  struct ControllerNavigationManager *v1; // rdi
  __int64 *v2; // r14
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  char *v12; // rbp
  __int64 v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  char v19; // [rsp+50h] [rbp-28h]
  ControllerNavigationManager *v20; // [rsp+80h] [rbp+8h] BYREF

  v20 = this;
  v1 = ControllerNavigationManager::s_instance;
  v18 = 0LL;
  v19 = 0;
  v2 = (__int64 *)((char *)ControllerNavigationManager::s_instance + 120);
  v3 = *((_QWORD *)ControllerNavigationManager::s_instance + 15);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate((char *)v1 + 120);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v6 = 200;
    goto LABEL_27;
  }
  v7 = (_QWORD *)((char *)v1 + 128);
  v8 = *((_QWORD *)v1 + 16);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v4 = CoreUIFactoryCreate((char *)v1 + 128);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v6 = 203;
    goto LABEL_27;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, ControllerNavigationManager **))(*(_QWORD *)*v7 + 24LL))(
         *v7,
         &GUID_656bebd9_ea24_478d_90ff_8f5a94ff8f09,
         &v20);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v6 = 207;
    goto LABEL_27;
  }
  v4 = InputSecurityDescriptor::QueryDescriptor(&v18, 8LL, L"ControllerNavigationManagerPort");
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v6 = 211;
    goto LABEL_27;
  }
  v9 = *v2;
  v10 = (_QWORD *)((char *)v1 + 136);
  v11 = *((_QWORD *)v1 + 17);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64))(*(_QWORD *)v9 + 48LL))(
         v9,
         v18,
         L"ControllerNavigationManagerPort",
         (__int64)v1 + 136);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v6 = 216;
    goto LABEL_27;
  }
  v12 = (char *)v1 + 16;
  v13 = *v7;
  v14 = (__int64 *)((char *)v1 + 144);
  v15 = *v14;
  if ( *v14 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(
         v13,
         v12,
         0LL,
         (unsigned int)v20,
         L"System\\RemoteControllerNavigationManager",
         *v10,
         v14);
  v16 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v6 = 224;
LABEL_27:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v6, v4);
LABEL_28:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v18);
  return v16;
}
