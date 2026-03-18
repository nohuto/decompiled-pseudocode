/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005E2F0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C005E020 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005E228 (-Free@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rcx
  bool result; // al

  v2 = a1[1];
  v3 = a1[2];
  v4 = v3 ^ v2;
  result = a2
        && a2 >= v4
        && a2 <= v4 + 81920
        && (v6 = a2 & 0xFFF, !(v6 % 0x140))
        && RtlTestBit(
             (PRTL_BITMAP)(v3 ^ a1[3]),
             v6 / 0x140 + 12 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
  return result;
}
