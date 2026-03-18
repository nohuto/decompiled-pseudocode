/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C00624D0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0062100 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0062410 (-Free@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<40960,160>::ContainsAllocation(
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
      && a2 <= v4 + 40960
      && !((a2 & 0xFFF) % 0xA0)
      && RtlTestBit(
           (PRTL_BITMAP)(v3 ^ a1[3]),
           (a2 & 0xFFF) / 0xA0 + 25 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
}
