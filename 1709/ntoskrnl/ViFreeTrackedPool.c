/*
 * XREFs of ViFreeTrackedPool @ 0x1407A653C
 * Callers:
 *     VerifierFreeTrackedPool @ 0x140227388 (VerifierFreeTrackedPool.c)
 * Callees:
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3, int a4)
{
  ULONG_PTR v5; // rbx
  ULONG_PTR v7; // rdi
  __int64 *v8; // rdi
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 result; // rax

  v5 = BugCheckParameter3;
  if ( a4 == 1 )
  {
    v7 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (BugCheckParameter2 & 0xFFF) != 0 )
      v8 = (__int64 *)(v7 + 16);
    else
      v8 = (__int64 *)(v7 + 4072);
  }
  else
  {
    if ( (BugCheckParameter2 & 0xFFF) != 0 )
      v5 = BugCheckParameter3 - 16;
    v8 = (__int64 *)(v5 + BugCheckParameter2 - 8);
  }
  v9 = *v8;
  v10 = *v8 & 0xFFFFFFFFFFFFF000uLL;
  v11 = *(_QWORD *)(v10 + 8);
  if ( (MmVerifierData & 0x800) != 0 )
  {
    if ( (v9 & 3) != 0 || !MiIsAddressValid(*v8) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13AuLL, BugCheckParameter2, v9, (ULONG_PTR)v8);
    if ( *(_QWORD *)(v10 + 16) != 556929861LL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13BuLL, BugCheckParameter2, v10 + 16, (ULONG_PTR)v8);
    if ( (v11 & 3) != 0 || !MiIsAddressValid(v11 + 40) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13CuLL, BugCheckParameter2, v11, v10 + 8);
    if ( *(_QWORD *)(v11 + 40) != 2557876544LL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13DuLL, BugCheckParameter2, v11 + 40, 0x98761940uLL);
    if ( *(_QWORD *)v9 != BugCheckParameter2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13EuLL, BugCheckParameter2, *(_QWORD *)v9, v9);
    if ( *(_QWORD *)(v9 + 16) != v5 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x13FuLL, BugCheckParameter2, v5, v9 + 16);
  }
  *(_QWORD *)(v9 + 16) |= 1uLL;
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 64), (PSLIST_ENTRY)v9);
  v12 = -(__int64)v5;
  if ( (a3 & 1) != 0 )
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 96), v12);
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 80));
    _InterlockedExchangeAdd64(&qword_14036A110, v12);
    _InterlockedDecrement(&dword_14036A100);
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 104), v12);
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 84));
    _InterlockedExchangeAdd64(&qword_14036A118, v12);
    _InterlockedDecrement(&dword_14036A104);
  }
  return result;
}
