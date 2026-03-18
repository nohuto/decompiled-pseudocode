/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x14057E428
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14057E328 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1405C1EC4 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1405EF09C (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_14038DDB0;
  Handle = (HANDLE)qword_14038DDB0;
  if ( qword_14038DDB0 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_14038DDB0, (signed __int64)Handle, 0LL) )
    {
      ZwClose(Handle);
      v1 = (HANDLE)qword_14038DDB0;
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
