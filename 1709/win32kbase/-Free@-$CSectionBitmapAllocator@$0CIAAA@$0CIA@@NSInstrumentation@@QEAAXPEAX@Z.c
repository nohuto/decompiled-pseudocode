/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00428B4
 * Callers:
 *     ?FreeType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0042578 (-FreeType@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C0042978 (-ContainsAllocation@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<163840,640>::Free(__int64 *a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *a1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    NSInstrumentation::CSectionBitmapAllocator<163840,640>::ContainsAllocation(a1, a2);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x280
       + 6 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12);
    RtlClearBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    memset(a2, 0, 0x280uLL);
    *((_DWORD *)a1 + 8) = v5;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
