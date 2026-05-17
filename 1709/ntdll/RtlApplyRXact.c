/*
 * XREFs of RtlApplyRXact @ 0x18008CF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180084300 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x180084340 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A0CB0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A1A90 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A1CD0 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v4; // edi
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[1];
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0LL, 3LL, a1[3], *(_DWORD *)(a1[3] + 8));
  if ( (int)result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      v5 = v1;
    }
    else
    {
      v4 = RXactpCommit(a1);
      v5 = v1;
      if ( v4 >= 0 )
      {
        ZwDeleteValueKey(v1, &DestinationString);
        RtlAbortRXact((__int64)a1);
        return 0LL;
      }
    }
    ZwDeleteValueKey(v5, &DestinationString);
    return (unsigned int)v4;
  }
  return result;
}
