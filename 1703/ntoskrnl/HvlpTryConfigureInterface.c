/*
 * XREFs of HvlpTryConfigureInterface @ 0x140155CA0
 * Callers:
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x1408269B0 (HvlEnableVsmCalls.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x140155D10 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140155D50 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  __int64 (*v2)(); // r8
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(__int64 (**)())(*(_QWORD *)(a1 + 240) + 2600LL);
  if ( v2 )
    goto LABEL_11;
  if ( !(unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
    return 3224702976LL;
  HviGetHypervisorFeatures(&v6);
  __writemsr(0x40000000u, ((unsigned __int64)BYTE1(CmNtCSDVersion) << 16) | 0x1040A00003AD7LL);
  v4 = __readmsr(0x40000001u) | 1;
  if ( (v6 & 0x100000000000LL) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x200) != 0 )
  {
    v5 = v4 & 0xFFFFFFFFFFFFF000uLL;
    v2 = (__int64 (*)())((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_14033B430)(
                          v4 & 0xFFFFFFFFFFFFF000uLL,
                          1LL,
                          32LL);
    if ( v2 )
      goto LABEL_10;
    return 3221225626LL;
  }
  v2 = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *))qword_14033B428)(a1, 1LL, &v5);
  if ( !v2 )
    return 3221225626LL;
  v4 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)v4) & 0xFFF;
LABEL_10:
  __writemsr(0x40000001u, v4);
LABEL_11:
  HvcallCodeVa = v2;
  result = 0LL;
  _InterlockedExchange64(&HvlpHypercallCodeVa, (__int64)v2);
  return result;
}
