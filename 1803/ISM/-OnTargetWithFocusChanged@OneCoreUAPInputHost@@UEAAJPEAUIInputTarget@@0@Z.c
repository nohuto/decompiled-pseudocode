/*
 * XREFs of ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x180004630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::OnTargetWithFocusChanged(
        OneCoreUAPInputHost *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF

  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( v6 )
  {
    v14 = 0LL;
    if ( (**v6)(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v14) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v14 + 24LL))(
             v14,
             a2,
             a3);
      if ( v7 < 0 )
      {
        v8 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        return (unsigned int)v7;
      }
    }
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = *((_QWORD *)this + 6);
  v11 = *((_QWORD *)this + 7);
  while ( v10 != v11 )
  {
    v14 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v10 + 16))(
           *(_QWORD *)(v10 + 16),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v14) >= 0 )
      (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v14 + 24LL))(
        v14,
        a2,
        a3);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v10 += 24LL;
  }
  return 0;
}
