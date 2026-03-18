/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C0062844
 * Callers:
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C006255C (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0062780 (-Free@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r11
  unsigned __int64 v4; // rax

  v2 = a1[1];
  v3 = a1[2];
  v4 = v3 ^ v2;
  return a2
      && a2 >= v4
      && a2 <= v4 + 49152
      && !((a2 & 0xFFF) % 0xC0)
      && RtlTestBit(
           (PRTL_BITMAP)(v3 ^ a1[3]),
           (a2 & 0xFFF) / 0xC0 + 21 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
}
