/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___ @ 0x180188674
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x1801889B8 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180188928 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_23f88ebc045d49f831271d5759945fa1___(__int64 a1, __int64 a2)
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  _BYTE *v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // r10
  __int64 v8; // r11
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)i,
                                   a2,
                                   ***(_QWORD ***)a2,
                                   *(_QWORD *)(a2 + 8));
    LOBYTE(v5) = *v5;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, _DWORD))(v6 + 192))(
               v8,
               TemporaryConfigurationAxis,
               0LL,
               v5,
               *v7);
  }
  return result;
}
