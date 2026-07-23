/*
 * XREFs of sub_180026040 @ 0x180026040
 * Callers:
 *     TpPostWork @ 0x180025FD0 (TpPostWork.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     TpSimpleTryPost @ 0x1800562E0 (TpSimpleTryPost.c)
 * Callees:
 *     sub_180002428 @ 0x180002428 (sub_180002428.c)
 *     sub_180026138 @ 0x180026138 (sub_180026138.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026040(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // ett
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v6; // rcx

  sub_180055584(a1 + 56, 1LL);
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v3 = result & 1;
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result & 0xFFFFFFFE) + 2,
                             result);
  }
  while ( v4 != (_DWORD)result );
  if ( v3 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      sub_180002428(*(_QWORD *)(a1 + 144), a1 + 200, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 104));
    sub_180026138(a1 + 200, *(_QWORD *)(a1 + 144), *(unsigned int *)(a1 + 192), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
