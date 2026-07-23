/*
 * XREFs of RtlProtectHeap @ 0x18000D6A0
 * Callers:
 *     sub_18006EC1C @ 0x18006EC1C (sub_18006EC1C.c)
 *     RtlDeleteFunctionTable @ 0x180073E80 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180074550 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800747E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 *     sub_180077618 @ 0x180077618 (sub_180077618.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     RtlSetProtectedPolicy @ 0x1800850D0 (RtlSetProtectedPolicy.c)
 *     sub_180087928 @ 0x180087928 (sub_180087928.c)
 *     RtlGrowFunctionTable @ 0x1800E1400 (RtlGrowFunctionTable.c)
 * Callees:
 *     sub_18000D764 @ 0x18000D764 (sub_18000D764.c)
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180100B70 @ 0x180100B70 (sub_180100B70.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG v4; // edi
  int v5; // ecx
  int v6; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&stru_180159A80);
    v4 = sub_18001E548(HeapHandle);
    if ( MakeReadOnly )
    {
      sub_18000D844(HeapHandle, 1LL, 2LL);
      v5 = 2;
      if ( v4 == 64 )
        v5 = 32;
      v4 = v5;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v6 = sub_180100B70(HeapHandle, v4);
    else
      v6 = sub_18000D764(HeapHandle, v4);
    if ( v6 >= 0 && !MakeReadOnly )
      sub_18000D844(HeapHandle, 2LL, 1LL);
    RtlLeaveCriticalSection(&stru_180159A80);
  }
}
