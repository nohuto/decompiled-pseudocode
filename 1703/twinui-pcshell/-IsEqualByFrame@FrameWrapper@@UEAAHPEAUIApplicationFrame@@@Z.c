/*
 * XREFs of ?IsEqualByFrame@FrameWrapper@@UEAAHPEAUIApplicationFrame@@@Z @ 0x1800618A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FrameWrapper::IsEqualByFrame(
        FrameWrapper *this,
        int (__fastcall ***a2)(struct IApplicationFrame *, GUID *, __int64 *))
{
  struct IApplicationFrame *v2; // rdi
  unsigned int v3; // ebx
  int (__fastcall **v4)(struct IApplicationFrame *, GUID *, __int64 *); // rax
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct IApplicationFrame *)*((_QWORD *)this + 2);
  v3 = 0;
  if ( a2 && v2 )
  {
    if ( a2 == (int (__fastcall ***)(struct IApplicationFrame *, GUID *, __int64 *))v2 )
      return 1;
    v4 = *a2;
    v8 = 0LL;
    v7 = 0LL;
    if ( (*v4)((struct IApplicationFrame *)a2, &GUID_00000000_0000_0000_c000_000000000046, &v8) >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(struct IApplicationFrame *, GUID *, __int64 *))v2)(
             v2,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v7);
      if ( v5 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v5 >= 0 && v8 == v7 )
        return 1;
    }
  }
  return v3;
}
