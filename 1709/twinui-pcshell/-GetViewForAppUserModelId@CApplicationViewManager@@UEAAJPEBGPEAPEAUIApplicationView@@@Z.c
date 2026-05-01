/*
 * XREFs of ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x1800755E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetViewForAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rbx
  struct IApplicationView *v7; // rdi
  PVOID v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rcx
  _QWORD *Ptr; // rdi
  __int64 v12; // rcx
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]

  v6 = this + 47;
  AcquireSRWLockShared(this + 47);
  *a3 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -2147319765;
  do
  {
    if ( v8 >= this[49].Ptr )
      break;
    lpString2 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v10 = *((_QWORD *)this[48].Ptr + (_QWORD)v8);
    v15 = -1LL;
    v16 = -1LL;
    if ( (*(int (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v10 + 112LL))(v10, &lpString2) >= 0
      && CompareStringOrdinal(a2, -1, lpString2, -1, 1) == 2 )
    {
      Ptr = this[48].Ptr;
      v12 = Ptr[(_QWORD)v8];
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v7 = (struct IApplicationView *)Ptr[(_QWORD)v8];
      v9 = 0;
    }
    if ( lpString2 )
      CoTaskMemFree((LPVOID)lpString2);
    v8 = (char *)v8 + 1;
  }
  while ( !v7 );
  *a3 = v7;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
