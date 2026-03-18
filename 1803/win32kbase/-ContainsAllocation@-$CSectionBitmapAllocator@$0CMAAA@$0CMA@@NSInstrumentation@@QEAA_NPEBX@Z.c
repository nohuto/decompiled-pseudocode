/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005D6E8
 * Callers:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C005D540 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005D984 (-Free@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<180224,704>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  int v3; // r8d
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  bool result; // al
  unsigned int v7; // edx

  v2 = a1[1];
  v3 = a2;
  v4 = a1[2];
  v5 = v4 ^ v2;
  result = a2
        && a2 >= v5
        && a2 <= v5 + 180224
        && (v7 = (a2 & 0xFFF) / 0x2C0, !((v3 & 0xFFFu) % 0x2C0uLL))
        && RtlTestBit(
             (PRTL_BITMAP)(v4 ^ a1[3]),
             ((v3 - ((unsigned int)v2 ^ (unsigned int)v4)) >> 12)
           + v7
           + 4 * ((v3 - ((unsigned int)v2 ^ (unsigned int)v4)) >> 12)) != 0;
  return result;
}
