/*
 * XREFs of PpmPerfApplyLatencyHint @ 0x140143F9C
 * Callers:
 *     PpmPerfApplyLatencyHints @ 0x140036AA0 (PpmPerfApplyLatencyHints.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x14014BE50 (PpmGetHeterogeneousClass.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfApplyLatencyHint(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 *v4; // rdi
  __int64 HeterogeneousClass; // rcx
  int v6; // r8d
  __int64 v7; // r11
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // r9d

  v2 = *(_QWORD *)(a1 + 24184);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = &PpmCurrentProfile[336 * dword_1403AAA2C];
  HeterogeneousClass = (unsigned __int8)PpmGetHeterogeneousClass(a1, a2, *((unsigned int *)v4 + 24));
  result = (unsigned int)(v6 - 1);
  v9 = *((unsigned __int8 *)v4 + HeterogeneousClass + 113);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    result = (unsigned int)(v6 - 5);
    if ( (unsigned int)result <= 1 || PpmPerfBoostAtGuaranteed )
      v10 = *(_DWORD *)(v2 + 24);
    else
      v10 = 100;
  }
  else
  {
    v10 = *(_DWORD *)(v7 + 320);
  }
  if ( (unsigned int)v9 >= v10 )
    v9 = v10;
  if ( (unsigned int)v9 > *(_DWORD *)(v2 + 56) )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v7 + 280))(v3, v9, *(unsigned int *)(v7 + 328));
    *(_DWORD *)(v2 + 56) = result;
  }
  return result;
}
