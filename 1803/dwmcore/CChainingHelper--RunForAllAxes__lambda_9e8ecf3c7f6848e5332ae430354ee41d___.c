/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_9e8ecf3c7f6848e5332ae430354ee41d___ @ 0x1801CBA34
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1801CBD60 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x1801CBD14 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_9e8ecf3c7f6848e5332ae430354ee41d___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 result; // rax

  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    LOBYTE(a4) = (*(_BYTE *)(v6 + *a2) & 4) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis((unsigned int)v4, a2, *a2, a4);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 200))(v10, TemporaryConfigurationAxis, 1LL);
    ++v4;
    v7 += 12LL;
    v6 += 12LL;
  }
  while ( v4 < 3 );
  return result;
}
