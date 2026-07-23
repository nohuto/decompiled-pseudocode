/*
 * XREFs of sub_18000D844 @ 0x18000D844
 * Callers:
 *     InitFn @ 0x180008C50 (InitFn.c)
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 * Callees:
 *     sub_18000D8E0 @ 0x18000D8E0 (sub_18000D8E0.c)
 *     sub_18000D9D4 @ 0x18000D9D4 (sub_18000D9D4.c)
 *     sub_18000DB30 @ 0x18000DB30 (sub_18000DB30.c)
 *     sub_18000DBA0 @ 0x18000DBA0 (sub_18000DBA0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

NTSTATUS __fastcall sub_18000D844(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  NTSTATUS result; // eax

  if ( !a4 )
    result = RtlEnterCriticalSection(&stru_180159A80);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        result = sub_18000DBA0(a1);
    }
    else
    {
      result = sub_18000D9D4(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        result = sub_18000DB30(a1);
    }
    else
    {
      result = sub_18000D8E0(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&stru_180159A80);
  return result;
}
