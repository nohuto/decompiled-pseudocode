/*
 * XREFs of sub_180106B9C @ 0x180106B9C
 * Callers:
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 * Callees:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800733EC @ 0x1800733EC (sub_1800733EC.c)
 *     sub_1800735B4 @ 0x1800735B4 (sub_1800735B4.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     sub_180106E70 @ 0x180106E70 (sub_180106E70.c)
 */

__int64 __fastcall sub_180106B9C(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // eax
  ULONG v4; // ebp
  __int64 i; // r8
  __int64 v6; // rcx
  unsigned __int32 v7; // eax
  __int64 v8; // rsi
  __int64 j; // rdi
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 208);
  v3 = sub_1800064C0(a1, 0LL, 0, 0);
  if ( v3 )
  {
    v4 = RtlNtStatusToDosError(v3);
    if ( v4 )
      return v4;
  }
  else
  {
    v4 = 0;
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 204); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 8 * i + 560);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8 * i + 560) = 0LL;
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v1);
      if ( v7 <= v1 )
        *(_DWORD *)(v6 + 4) = v7;
      *(_DWORD *)(v6 + 44) = 0;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v6 + 32;
      *(_QWORD *)(a1 + 256) = v6 + 32;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
    }
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 416);
  for ( j = sub_180106E70(a1, v8); j; j = sub_180106E70(a1, --v8) )
  {
    sub_1800735B4(j);
    v10 = sub_1800733EC(a1, j, 0);
    _InterlockedExchange((volatile __int32 *)(j + 44), 0);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483614 )
      break;
  }
  sub_180003410(a1, 0);
  ZwClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  return v4;
}
