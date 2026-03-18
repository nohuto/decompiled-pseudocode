/*
 * XREFs of KiSetupTimeIncrement @ 0x140149E5C
 * Callers:
 *     KeInitializeClock @ 0x140848FF0 (KeInitializeClock.c)
 * Callees:
 *     RtlGenerateQpcToIncrementConstants @ 0x14014A130 (RtlGenerateQpcToIncrementConstants.c)
 *     RtlpComputeFraction @ 0x14014A164 (RtlpComputeFraction.c)
 */

__int64 __fastcall KiSetupTimeIncrement(unsigned __int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // r9d
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = 5000;
  v3 = 156250;
  if ( a2 > 0x1388 )
    v2 = a2;
  KeMinimumIncrement = v2;
  if ( a1 < 0x2625A )
    v3 = a1;
  v5 = KiMinDynamicTickDuration;
  KeMaximumIncrement = v3;
  if ( a2 > KiMinDynamicTickDuration )
  {
    v5 = a2;
    KiMinDynamicTickDuration = a2;
  }
  v6 = KiMaxDynamicTickDuration;
  if ( a1 < KiMaxDynamicTickDuration )
  {
    v6 = a1;
    KiMaxDynamicTickDuration = a1;
  }
  if ( v6 < v5 )
    KiMaxDynamicTickDuration = v5;
  KiTickOffset = v3;
  KiMaximumIncrementReciprocal = RtlpComputeFraction(1LL, v3, &v12);
  KeNumberProcessorsGroup0[1] = -v12;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  KeTimeAdjustmentFrequency = PerformanceFrequency.QuadPart;
  v8 = v7;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))RtlGenerateQpcToIncrementConstants)(
         (LARGE_INTEGER)PerformanceFrequency.QuadPart,
         &v12);
  MEMORY[0xFFFFF78000000300] = PerformanceFrequency.QuadPart;
  MEMORY[0xFFFFF78000000360] = v9;
  MEMORY[0xFFFFF78000000369] = v12;
  MEMORY[0xFFFFF78000000358] = v9;
  MEMORY[0xFFFFF78000000368] = v12;
  MEMORY[0xFFFFF78000000348] = v8.QuadPart;
  MEMORY[0xFFFFF78000000350] = v8.QuadPart;
  result = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerPeriod = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerCount = 0x989680 / KeMaximumIncrement;
  return result;
}
