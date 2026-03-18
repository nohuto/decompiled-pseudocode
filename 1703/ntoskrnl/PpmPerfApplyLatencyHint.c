/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x140130A6C
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x1400471C0 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x14000E7B0 (PpmGetHeterogeneousClass.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 *v3; // rdi
  _BOOL8 HeterogeneousClass; // rcx
  int v5; // r8d
  __int64 v6; // r11
  __int64 result; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 24312);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = &PpmCurrentProfile[175 * dword_14034BB2C];
  HeterogeneousClass = PpmGetHeterogeneousClass(a1);
  result = (unsigned int)(v5 - 1);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v5 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v8 = *(_DWORD *)(v1 + 24);
    else
      v8 = 100;
  }
  else
  {
    v8 = *(_DWORD *)(v6 + 320);
  }
  v9 = v8;
  if ( *((unsigned __int8 *)v3 + HeterogeneousClass + 113) < v8 )
    v9 = *((unsigned __int8 *)v3 + HeterogeneousClass + 113);
  if ( (unsigned int)v9 > *(_DWORD *)(v1 + 80) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v6 + 280))(v2, v9, *(unsigned int *)(v6 + 328));
    *(_DWORD *)(v1 + 80) = result;
  }
  return result;
}
