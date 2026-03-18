/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C0042978
 * Callers:
 *     ?FreeType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0042578 (-FreeType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00428B4 (-Free@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<163840,640>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r10
  int v3; // r8d
  unsigned __int64 v4; // rax
  bool result; // al
  unsigned int v6; // edx

  v2 = a1[2];
  v3 = a2;
  v4 = v2 ^ a1[1];
  result = a2
        && a2 >= v4
        && a2 <= v4 + 163840
        && (v6 = (a2 & 0xFFF) / 0x280, !((v3 & 0xFFFu) % 0x280uLL))
        && RtlTestBit((PRTL_BITMAP)(v2 ^ a1[3]), v6 + 6 * ((v3 - ((unsigned int)v2 ^ *((_DWORD *)a1 + 2))) >> 12)) != 0;
  return result;
}
