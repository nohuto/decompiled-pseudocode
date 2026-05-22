/*
 * XREFs of ?GetProperties@GestureTargetingTarget@@UEAAJPEAPEAVPropertyMap@Input@@@Z @ 0x180014F70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureTargetingTarget::GetProperties(GestureTargetingTarget *this, struct Input::PropertyMap **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = (**v3)(v3, &GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78, &v7);
    if ( v4 >= 0 )
    {
      if ( !v7 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, v7 + 4, 197, 255);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v4 = (*(__int64 (__fastcall **)(__int64, struct Input::PropertyMap **))(*(_QWORD *)v7 + 32LL))(v7, a2);
    }
  }
  else
  {
    v4 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 4, 186, 255);
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
