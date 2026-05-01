/*
 * XREFs of ?HandleCrashRecovery@CImmersiveApp@@UEAAXXZ @ 0x180054FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::HandleCrashRecovery(CImmersiveApp *this, __int64 a2)
{
  unsigned __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int PropW; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0LL; i < *((_QWORD *)this + 37); ++i )
  {
    LOBYTE(a2) = i == 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * i);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 176LL))(v4, a2);
  }
  v5 = *((_QWORD *)this + 34);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5) )
  {
    *((_DWORD *)this + 114) = 0;
  }
  else
  {
    *((_DWORD *)this + 114) = 1;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 128LL))(v5, &v8) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8 + 24LL))(v8, &hWnd) >= 0 )
    {
      PropW = (unsigned int)GetPropW(hWnd, *((LPCWSTR *)this + 58));
      if ( PropW )
        *((_DWORD *)this + 114) = PropW;
    }
    v7 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
