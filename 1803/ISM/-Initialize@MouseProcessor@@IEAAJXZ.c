/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJXZ @ 0x18006A2DC
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006A250 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009460 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MouseProcessor::Initialize(MouseProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  HKEY v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF

  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5));
  v3 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, &v14);
  if ( v4 >= 0 )
  {
    v5 = v14;
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v5 + 24LL))(
           v5,
           *((_QWORD *)this + 6),
           0LL,
           (char *)this + 80);
    if ( v4 >= 0 && ((1LL << gdwDeviceFamily) & 0xDDB5) != 0 )
    {
      v13 = 0LL;
      v4 = CoreUICreate(&v13);
      if ( v4 >= 0 )
      {
        v7 = v13;
        v8 = *((_QWORD *)this + 138);
        if ( v8 )
        {
          *((_QWORD *)this + 138) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), MouseProcessor *, char *))(*(_QWORD *)v7 + 120LL))(
               v7,
               lambda_e686793c0a8f719813e509f3c54c3781_::_lambda_invoker_cdecl_,
               this,
               (char *)this + 1104);
        if ( v4 >= 0 )
        {
          v9 = (HKEY)*((_QWORD *)this + 11);
          if ( v9 )
          {
            *((_QWORD *)this + 11) = 0LL;
            (*(void (__fastcall **)(HKEY))(*(_QWORD *)v9 + 16LL))(v9);
          }
          RegistryWatcher::Create(
            v9,
            L"SYSTEM\\MOUSE",
            this,
            lambda_3596711b79d73f9b4e9b30522d843cd5_::_lambda_invoker_cdecl_,
            (struct RegistryWatcher **)this + 11);
        }
      }
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v4;
}
