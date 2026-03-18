/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___ @ 0x1801885EC
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x1801889B8 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180188928 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_1e5d9756e7d7dec37c99f750d2178ac8___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 result; // rax

  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = *(_QWORD *)(a2 + 8);
    LOBYTE(a4) = (*(_BYTE *)(v6 + v8) & 4) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis((unsigned int)v4, a2, v8, a4);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v10 + 192))(v11, TemporaryConfigurationAxis, 1LL);
    ++v4;
    v7 += 12LL;
    v6 += 12LL;
  }
  while ( v4 < 3 );
  return result;
}
