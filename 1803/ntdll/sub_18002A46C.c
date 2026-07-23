/*
 * XREFs of sub_18002A46C @ 0x18002A46C
 * Callers:
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18002C8C4 @ 0x18002C8C4 (sub_18002C8C4.c)
 *     sub_18002DCD4 @ 0x18002DCD4 (sub_18002DCD4.c)
 *     sub_18002DE34 @ 0x18002DE34 (sub_18002DE34.c)
 *     sub_18002DEA4 @ 0x18002DEA4 (sub_18002DEA4.c)
 */

NTSTATUS __fastcall sub_18002A46C(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  NTSTATUS result; // eax

  if ( !a4 )
    result = RtlEnterCriticalSection(&stru_18015AAC0);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        result = sub_18002DEA4(a1);
    }
    else
    {
      result = sub_18002DCD4(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        result = sub_18002DE34(a1);
    }
    else
    {
      result = sub_18002C8C4(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&stru_18015AAC0);
  return result;
}
