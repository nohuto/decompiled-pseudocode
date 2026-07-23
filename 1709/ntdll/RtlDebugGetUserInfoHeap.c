/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x180103D5C
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18004C0E4 (RtlpValidateHeapEntry.c)
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 */

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(unsigned __int64 a1, int a2, char *a3, PVOID *a4, PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // si
  char v10; // r14
  ULONG v12; // edi
  unsigned __int64 v13; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180159468)(a1);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v10 = 1;
      v12 |= 1u;
    }
    RtlpValidateHeap(a1);
    v13 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( RtlpValidateHeapEntry(a1, v13, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap((PVOID)a1, v12, a3, a4, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return UserInfoHeap;
}
