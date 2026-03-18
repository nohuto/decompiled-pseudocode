/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x14056CF78
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14056CE78 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14062F9A8 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140652690 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_1403D1C00;
  Handle = (HANDLE)qword_1403D1C00;
  if ( qword_1403D1C00 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_1403D1C00, (signed __int64)Handle, 0LL) )
    {
      ZwClose(Handle);
      v1 = (HANDLE)qword_1403D1C00;
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
