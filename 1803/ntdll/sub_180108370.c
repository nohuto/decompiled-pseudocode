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
  __int64 v3; // rdx
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // edx
  unsigned __int32 v6; // ecx
  __int64 result; // rax

  v2 = a1 - 200;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v3 = 2147353478LL;
  if ( *(_BYTE *)v3 )
    sub_1800023A8(*(_QWORD *)(v2 + 144), a1, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  _m_prefetchw((const void *)(v2 + 232));
  v4 = *(_DWORD *)(v2 + 232);
  while ( 1 )
  {
    v5 = v4 >> 1;
    if ( !(v4 >> 1) )
      break;
    v6 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 232), 0, v4);
    if ( v4 == v6 )
      goto LABEL_11;
  }
  v5 = 0;
LABEL_11:
  if ( v5 )
    sub_180055584((_RTL_SRWLOCK *)(v2 + 56), -v5, 0);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
  return result;
}
