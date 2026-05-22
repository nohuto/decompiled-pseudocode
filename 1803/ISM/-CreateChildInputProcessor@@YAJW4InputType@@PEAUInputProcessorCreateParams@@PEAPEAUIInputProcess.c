/*
 * XREFs of ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002634C
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800913C0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800933B0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180096BCC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x18002629C (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateChildInputProcessor(int a1, _QWORD *a2, __int64 a3)
{
  bool v6; // zf
  int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // r9d
  GUID v14; // [rsp+20h] [rbp-38h] BYREF

  v14 = DirectX::g_XMZero;
  if ( a1 <= 0 || (v6 = ((a1 - 1) & a1) == 0, v7 = 1, !v6) )
    v7 = 0;
  v8 = v7 == 0 ? 0x80070057 : 0;
  if ( !v7 )
    goto LABEL_19;
  if ( !a2 || !*a2 || !a2[1] || (v9 = a2[2]) == 0 )
  {
    v8 = -2147024809;
    goto LABEL_19;
  }
  if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v9 + 24LL))(v9, &v14) < 0
    || *(_OWORD *)&DirectX::g_XMZero == *(_OWORD *)&v14 )
  {
LABEL_14:
    v8 = -2147023728;
LABEL_19:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return v8;
  }
  v10 = 0;
  while ( *(_OWORD *)&v14 != *((_OWORD *)&unk_180134370 + 3 * v10) )
  {
    if ( (unsigned int)++v10 >= 0xE )
      goto LABEL_14;
  }
  v11 = 6LL * v10;
  v12 = v10 + 1;
  if ( *((_DWORD *)&unk_180134370 + 2 * v11 + 4) != a1 )
    v12 = 0;
  return (unsigned int)CreateInputProcessorWorker(a2, a3, a1, v12);
}
