/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005EFC4
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00663BC (--$FreeIsolatedType@V-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005F084 (-ContainsAllocation@-$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<77824,304>::Free(__int64 *a1, void *a2)
{
  __int64 v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *a1;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    NSInstrumentation::CSectionBitmapAllocator<77824,304>::ContainsAllocation(a1, a2);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x130
       + 13 * ((unsigned int)((_DWORD)a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12);
    RtlClearBit((PRTL_BITMAP)(a1[2] ^ a1[3]), v5);
    memset(a2, 0, 0x130uLL);
    *((_DWORD *)a1 + 8) = v5;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
