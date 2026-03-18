/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005FBEC
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0066D00 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005FCAC (-ContainsAllocation@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<81920,160>::Free(__int64 *a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *a1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    NSInstrumentation::CSectionBitmapAllocator<81920,160>::ContainsAllocation(a1, a2);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0xA0
       + 25 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12);
    RtlClearBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    memset(a2, 0, 0xA0uLL);
    *((_DWORD *)a1 + 8) = v5;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
