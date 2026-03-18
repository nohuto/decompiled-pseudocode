/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00A73B4
 * Callers:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A7474 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C00A7270 (-ContainsAllocation@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::Free(__int64 *a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *a1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    NSInstrumentation::CSectionBitmapAllocator<24576,96>::ContainsAllocation(a1, (unsigned __int64)a2);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x60
       + 42 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12);
    RtlClearBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    memset(a2, 0, 0x60uLL);
    *((_DWORD *)a1 + 8) = v5;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
