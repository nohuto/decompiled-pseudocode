/*
 * XREFs of DpOpenSpbResource @ 0x1C01CCDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C0042578 (RtlUnicodeStringPrintf.c)
 *     DpiCreateSpbResourceRecord @ 0x1C01CD530 (DpiCreateSpbResourceRecord.c)
 */

__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        void *a2,
        const UNICODE_STRING *a3,
        __int64 a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  const UNICODE_STRING *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rdx
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  __int64 v17; // rax
  unsigned __int16 Length; // ax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  ACCESS_MASK DesiredAccess; // [rsp+30h] [rbp-A1h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-99h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  __int64 v33; // [rsp+50h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-49h] BYREF
  wchar_t pszDest[20]; // [rsp+98h] [rbp-39h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = a3;
  DestinationString.Buffer = 0LL;
  v8 = (unsigned int)a2;
  DesiredAccess = a4;
  v9 = a1;
  FileHandle = a2;
  if ( KeGetCurrentIrql() )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    LODWORD(v11) = -1073741811;
    v10[3] = 275LL;
    v10[4] = 21LL;
    v10[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v10);
    return (unsigned int)v11;
  }
  if ( a1
    && (v13 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v13 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v13 + 20) - 2) <= 1 )
  {
    v14 = *(_DWORD **)(v13 + 1152);
    LOBYTE(a3) = 0;
    if ( v14 )
    {
      a1 = 0LL;
      do
      {
        if ( (unsigned int)a1 >= *v14 )
          break;
        v15 = 0;
        a4 = 9LL * (unsigned int)a1;
        v16 = v14[9 * (unsigned int)a1 + 4];
        if ( v16 )
        {
          v17 = (__int64)&v14[9 * (unsigned int)a1 + 8];
          while ( *(_BYTE *)(v17 - 12) != 0x84 || *(_QWORD *)(v17 - 4) != __PAIR64__(HIDWORD(FileHandle), v8) )
          {
            ++v15;
            v17 += 20LL;
            if ( v15 >= v16 )
              goto LABEL_18;
          }
          LOBYTE(a3) = 1;
        }
LABEL_18:
        a1 = (unsigned int)(a1 + 1);
      }
      while ( !(_BYTE)a3 );
      if ( (_BYTE)a3 )
      {
        DestinationString.Length = 0;
        if ( v7 )
          Length = v7->Length;
        else
          Length = 0;
        DestinationString.MaximumLength = Length + 80;
        DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                                PagedPool,
                                                (unsigned __int16)(Length + 80),
                                                0x74727044u);
        if ( !DestinationString.Buffer )
        {
          v20 = WdLogNewEntry5_WdLowResource(v19);
          LODWORD(v11) = -1073741801;
          *(_QWORD *)(v20 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v20);
          return (unsigned int)v11;
        }
        LODWORD(v11) = RtlStringCbPrintfW(pszDest, 0x22uLL, L"%0*I64x");
        if ( (int)v11 >= 0 )
          LODWORD(v11) = RtlUnicodeStringPrintf(&DestinationString, L"%s%s", L"\\Device\\RESOURCE_HUB\\", pszDest);
        if ( (int)v11 >= 0 )
        {
          if ( v7 )
          {
            if ( *v7->Buffer != 92 )
              RtlAppendUnicodeToString(&DestinationString, L"\\");
            RtlAppendUnicodeStringToString(&DestinationString, v7);
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v24 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
          v11 = v24;
          if ( v24 >= 0 )
          {
            v27 = DpiCreateSpbResourceRecord(v13, FileHandle, &v33);
            v11 = v27;
            if ( v27 >= 0 )
            {
              *a7 = v33;
LABEL_38:
              if ( DestinationString.Buffer )
                ExFreePoolWithTag(DestinationString.Buffer, 0);
              return (unsigned int)v11;
            }
          }
          v23 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v23 + 24) = v11;
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v22, v21);
          *(_QWORD *)(v23 + 24) = (int)v11;
        }
        WdLogEvent5_WdError(v23);
        goto LABEL_38;
      }
    }
    v28 = WdLogNewEntry5_WdWarning(a1, v14, a3, a4);
    *(_QWORD *)(v28 + 24) = SHIDWORD(FileHandle);
    WdLogEvent5_WdWarning(v28);
    return 3221225712LL;
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v29 + 24) = v9;
    WdLogEvent5_WdWarning(v29);
    return 3221225711LL;
  }
}
