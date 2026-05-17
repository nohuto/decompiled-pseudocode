/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180079BE4
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x180076C10 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180079D00 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180160320;
  Handle = (HANDLE)qword_180160320;
  if ( qword_180160320 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180160320, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_180160320;
    }
    else
    {
      v1 = Handle;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
