/*
 * XREFs of ??1InputStateManager@@MEAA@XZ @ 0x180005DBC
 * Callers:
 *     ??_GInputStateManager@@MEAAPEAXI@Z @ 0x180005D78 (--_GInputStateManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall InputStateManager::~InputStateManager(InputStateManager *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rdx
  int v4; // r10d
  char *v5; // r8
  __int64 v6; // rbp
  __int64 v7; // r9
  _QWORD *v8; // rsi
  __int64 v9; // r14
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+20h] [rbp-848h] BYREF
  _QWORD v23[256]; // [rsp+40h] [rbp-828h] BYREF

  v22[1] = -2LL;
  v22[2] = this;
  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  v2 = (_DWORD *)((char *)this + 72);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 1042);
  v5 = (char *)this + 72;
  v6 = 256LL;
  v7 = 256LL;
  do
  {
    if ( *(_DWORD *)v5 != v4 )
    {
      v23[v3] = *((_QWORD *)v5 + 1);
      v3 = (unsigned int)(v3 + 1);
    }
    v5 += 16;
    --v7;
  }
  while ( v7 );
  if ( (_DWORD)v3 )
  {
    v8 = v23;
    v9 = (unsigned int)v3;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v8 + 16LL))(*v8, v3, v5);
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  v10 = v2 + 1024;
  v11 = 256LL;
  do
  {
    *v2 = *v10;
    v2 += 4;
    --v11;
  }
  while ( v11 );
  v12 = (_DWORD *)((char *)this + 4176);
  v13 = (_DWORD *)((char *)this + 8272);
  do
  {
    *v12 = *v13;
    v12 += 4;
    --v6;
  }
  while ( v6 );
  v14 = *((_QWORD *)this + 5);
  if ( v14 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v14 + 16LL))(v14, v13, v5);
  }
  if ( *((_QWORD *)this + 8) )
  {
    v22[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 6) + 24LL))(
           *((_QWORD *)this + 6),
           v22,
           v5) >= 0 )
      (*(void (__fastcall **)(_QWORD, const wchar_t *, __int64))(*(_QWORD *)v22[0] + 48LL))(
        v22[0],
        L"System\\Input\\DeviceCommandEndpoint",
        1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 144LL))(
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    v15 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v16 = *((_QWORD *)this + 7);
  if ( v16 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v16 + 16LL))(v16, v13, v5);
  }
  v17 = *((_QWORD *)this + 6);
  if ( v17 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v17 + 16LL))(v17, v13, v5);
  }
  v18 = *((_QWORD *)this + 1036);
  if ( v18 )
  {
    *((_QWORD *)this + 1036) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v18 + 16LL))(v18, v13, v5);
  }
  v19 = *((_QWORD *)this + 7);
  if ( v19 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v19 + 16LL))(v19, v13, v5);
  }
  v20 = *((_QWORD *)this + 6);
  if ( v20 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v20 + 16LL))(v20, v13, v5);
  }
  v21 = *((_QWORD *)this + 5);
  if ( v21 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v21 + 16LL))(v21, v13, v5);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
