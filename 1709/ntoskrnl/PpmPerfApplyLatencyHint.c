/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x14000CB0C
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x140090630 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x140130B1C (PpmGetHeterogeneousClass.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 HeterogeneousClass; // rcx
  int v6; // r8d
  __int64 v7; // r11
  __int64 result; // rax
  unsigned int v9; // r9d
  __int64 v10; // rdx

  v2 = *(_QWORD *)(a1 + 24184);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = PpmCurrentProfile + 2688LL * dword_1403661AC;
  HeterogeneousClass = (unsigned __int8)PpmGetHeterogeneousClass(a1, a2, *(unsigned int *)(v4 + 96));
  result = (unsigned int)(v6 - 1);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v6 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v9 = *(_DWORD *)(v2 + 24);
    else
      v9 = 100;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 320);
  }
  v10 = v9;
  if ( *(unsigned __int8 *)(HeterogeneousClass + v4 + 113) < v9 )
    v10 = *(unsigned __int8 *)(HeterogeneousClass + v4 + 113);
  if ( (unsigned int)v10 > *(_DWORD *)(v2 + 56) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v7 + 280))(v3, v10, *(unsigned int *)(v7 + 328));
    *(_DWORD *)(v2 + 56) = result;
  }
  return result;
}
