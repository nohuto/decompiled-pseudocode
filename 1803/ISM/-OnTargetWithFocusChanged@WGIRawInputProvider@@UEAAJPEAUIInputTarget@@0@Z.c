/*
 * XREFs of ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180076BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180077280 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnTargetWithFocusChanged(
        WGIRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+28h] BYREF

  v8[1] = -2LL;
  v10 = 0;
  v9 = 0;
  if ( !a3 )
    return (unsigned int)WGIRawInputProvider::SetInputFocusProcess((WGIRawInputProvider *)((char *)this - 8), v10, v9);
  v8[0] = 0LL;
  v4 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a3)(
         a3,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         v8);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v8[0] + 32LL))(v8[0], &v10);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v8[0] + 72LL))(v8[0], &v9);
      if ( v4 >= 0 )
      {
        v6 = v8[0];
        if ( v8[0] )
        {
          v8[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        return (unsigned int)WGIRawInputProvider::SetInputFocusProcess(
                               (WGIRawInputProvider *)((char *)this - 8),
                               v10,
                               v9);
      }
    }
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  v5 = v8[0];
  if ( v8[0] )
  {
    v8[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
