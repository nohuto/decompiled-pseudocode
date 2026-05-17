/*
 * XREFs of sub_180108370 @ 0x180108370
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800023A8 @ 0x1800023A8 (sub_1800023A8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180108370(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // edx
  unsigned __int32 v7; // ecx
  __int64 result; // rax

  v2 = a1 - 200;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    sub_1800023A8(*(_QWORD *)(v2 + 144), a1, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  _m_prefetchw((const void *)(v2 + 232));
  v5 = *(_DWORD *)(v2 + 232);
  while ( 1 )
  {
    v6 = v5 >> 1;
    if ( !(v5 >> 1) )
      break;
    v7 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 232), 0, v5);
    if ( v5 == v7 )
      goto LABEL_11;
  }
  v6 = 0;
LABEL_11:
  if ( v6 )
    sub_180055584((volatile signed __int64 *)(v2 + 56), -v6, 0LL, v3);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
  return result;
}
