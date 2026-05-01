/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180065188
 * Callers:
 *     ?CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180066810 (-CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1800663CC (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1800667C0 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(CTaskWindow *this, const struct TASKWINDOW_INIT_DATA *const a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 5) = *(_QWORD *)a2;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 23);
  v4 = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)this + 7) != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)a2 + 1));
    v5 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)a2 + 10);
  if ( *((_QWORD *)this + 17) != v6 )
  {
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)a2 + 10));
    v7 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(*((unsigned int *)a2 + 5), &v9) )
    return 2147947423LL;
  *((_DWORD *)this + 13) = v9;
  if ( (~(*((_DWORD *)this + 17) >> 3) & 1) == 0
    || (result = (*(__int64 (__fastcall **)(char *, char *, char *))(*((_QWORD *)this + 1) + 64LL))(
                   (char *)this + 8,
                   (char *)a2 + 24,
                   (char *)a2 + 40),
        (int)result >= 0) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 152LL))((char *)this + 8);
    return CTaskWindow::_RegisterForViewReadinessChanges(this);
  }
  return result;
}
