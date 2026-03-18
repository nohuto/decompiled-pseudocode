/*
 * XREFs of DpSpbResourceIoControl @ 0x1C0208CA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C0209118 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpSpbResourceIoControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PVOID InputBuffer,
        ULONG OutputBufferLength,
        PVOID OutputBuffer,
        HANDLE Event,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  PVOID Ptr; // rbx
  __int64 InputBufferLength; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rax
  struct _EX_RUNDOWN_REF *v18; // [rsp+50h] [rbp-38h] BYREF
  ULONG IoControlCode; // [rsp+A0h] [rbp+18h]

  IoControlCode = a3;
  v18 = 0LL;
  Ptr = Event;
  InputBufferLength = a4;
  if ( !InputBuffer && a4 )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = InputBufferLength;
LABEL_4:
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( !OutputBuffer && OutputBufferLength )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = OutputBufferLength;
    goto LABEL_4;
  }
  if ( !IoStatusBlock )
  {
    v13 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdWarning(v13);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpSpbResourceIoControl, 0, (__int64)&v18);
  if ( (int)result >= 0 )
  {
    v14 = v18;
    if ( !Event )
      Ptr = v18[7].Ptr;
    LODWORD(Ptr) = ZwDeviceIoControlFile(
                     v18[5].Ptr,
                     Ptr,
                     0LL,
                     0LL,
                     IoStatusBlock,
                     IoControlCode,
                     InputBuffer,
                     InputBufferLength,
                     OutputBuffer,
                     OutputBufferLength);
    if ( (_DWORD)Ptr == 259 )
    {
      if ( Event )
        goto LABEL_21;
      v16 = KeWaitForSingleObject(v14[8].Ptr, Executive, 0, 0, 0LL);
      Ptr = (PVOID)v16;
      if ( v16 )
      {
        v17 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v17 + 24) = Ptr;
LABEL_20:
        WdLogEvent5_WdError(v17);
        goto LABEL_21;
      }
      LODWORD(Ptr) = IoStatusBlock->Status;
    }
    if ( (int)Ptr < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v17 + 24) = (int)Ptr;
      goto LABEL_20;
    }
LABEL_21:
    ExReleaseRundownProtection(v14 + 3);
    return (unsigned int)Ptr;
  }
  return result;
}
