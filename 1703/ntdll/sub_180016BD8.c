/*
 * XREFs of sub_180016BD8 @ 0x180016BD8
 * Callers:
 *     TpPostWork @ 0x180016B90 (TpPostWork.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 *     TpSimpleTryPost @ 0x18007DF90 (TpSimpleTryPost.c)
 * Callees:
 *     sub_1800037A4 @ 0x1800037A4 (sub_1800037A4.c)
 *     sub_180017034 @ 0x180017034 (sub_180017034.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180073700 @ 0x180073700 (sub_180073700.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180016BD8(__int64 a1)
{
  char v2; // bp
  signed __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  signed __int64 v5; // rbx
  signed __int32 v6; // edx
  int v7; // r9d
  bool v8; // zf
  __int64 result; // rax
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v2 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v2 = 0;
    }
    v4 = v3;
    v5 = (v3 ^ (v3 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v3;
    if ( (v5 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v4 >> 60) & 8) != 0 )
    {
      v5 &= ~0x8000000000000000uLL;
      v2 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    }
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v5, v4);
  }
  while ( v4 != v3 );
  if ( v2 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    sub_180073700(v12);
  }
  _m_prefetchw((const void *)(a1 + 232));
  v6 = *(_DWORD *)(a1 + 232);
  do
  {
    v7 = v6 & 1;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), (v6 & 0xFFFFFFFE) + 2, v6);
    v8 = v6 == (_DWORD)result;
    v6 = result;
  }
  while ( !v8 );
  if ( v7 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      sub_1800037A4(*(_QWORD *)(a1 + 144), a1 + 200, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104));
    sub_180017034(a1 + 200, *(_QWORD *)(a1 + 144), *(unsigned int *)(a1 + 192), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
