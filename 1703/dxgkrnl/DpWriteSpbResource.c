/*
 * XREFs of DpWriteSpbResource @ 0x1C01CD3D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C01CD6A0 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpWriteSpbResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        PLARGE_INTEGER ByteOffset,
        void *a6,
        PIO_STATUS_BLOCK a7)
{
  char v7; // bp
  __int64 Length; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  __int64 v13; // rax
  PVOID Ptr; // rdx
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0LL;
  v7 = 0;
  Length = (unsigned int)a3;
  if ( !a4 && (_DWORD)a3 )
  {
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3, 0LL);
    *(_QWORD *)(v10 + 24) = Length;
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  IoStatusBlock = a7;
  if ( !a7 )
  {
    v13 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdWarning(v13);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpWriteSpbResource, 0, (__int64)&v20);
  if ( (int)result >= 0 )
  {
    Ptr = a6;
    v15 = v20;
    if ( !a6 )
    {
      Ptr = v20[7].Ptr;
      v7 = 1;
    }
    LODWORD(Length) = ZwWriteFile(v20[5].Ptr, Ptr, 0LL, 0LL, IoStatusBlock, a4, Length, ByteOffset, 0LL);
    if ( (_DWORD)Length == 259 )
    {
      if ( !v7 )
        goto LABEL_17;
      v18 = KeWaitForSingleObject(v15[8].Ptr, Executive, 0, 0, 0LL);
      Length = v18;
      if ( v18 )
      {
        v19 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v19 + 24) = Length;
LABEL_16:
        WdLogEvent5_WdError(v19);
        goto LABEL_17;
      }
      LODWORD(Length) = IoStatusBlock->Status;
    }
    if ( (int)Length < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v19 + 24) = (int)Length;
      goto LABEL_16;
    }
LABEL_17:
    ExReleaseRundownProtection(v15 + 3);
    return (unsigned int)Length;
  }
  return result;
}
