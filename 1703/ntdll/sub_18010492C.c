/*
 * XREFs of sub_18010492C @ 0x18010492C
 * Callers:
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180051668 @ 0x180051668 (sub_180051668.c)
 *     sub_180051828 @ 0x180051828 (sub_180051828.c)
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     sub_180104C04 @ 0x180104C04 (sub_180104C04.c)
 */

__int64 __fastcall sub_18010492C(__int64 a1)
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
  v3 = sub_1800531B0(a1, 0LL, 0, 0);
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
    v6 = *(_QWORD *)(a1 + 8 * i + 544);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8 * i + 544) = 0LL;
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
  for ( j = sub_180104C04(a1, v8); j; j = sub_180104C04(a1, --v8) )
  {
    sub_180051828(j);
    v10 = sub_180051668(a1, j, 0);
    _InterlockedExchange((volatile __int32 *)(j + 44), 0);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483614 )
      break;
  }
  sub_1800518CC(a1, 0);
  ZwClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  return v4;
}
