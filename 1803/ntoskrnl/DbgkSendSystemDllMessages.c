/*
 * XREFs of DbgkSendSystemDllMessages @ 0x14070E1AC
 * Callers:
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlStringCbCopyW @ 0x14006D198 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsWow64GetProcessNtdllType @ 0x1404EA258 (PsWow64GetProcessNtdllType.c)
 *     PsQuerySystemDllInfo @ 0x14055FF3C (PsQuerySystemDllInfo.c)
 *     DbgkpQueueMessage @ 0x14070F184 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140710C10 (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, __int64 a3)
{
  _DWORD *v3; // rbx
  _KPROCESS *Process; // r12
  HANDLE *v6; // rsi
  int i; // r14d
  __int64 SystemDllInfo; // rax
  __int64 v9; // r15
  void *v10; // r15
  PIMAGE_NT_HEADERS v11; // rax
  wchar_t *v12; // r15
  char v13; // [rsp+30h] [rbp-108h]
  __int64 v15; // [rsp+48h] [rbp-F0h]
  wchar_t *v16; // [rsp+50h] [rbp-E8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-80h] BYREF
  _BYTE v20[48]; // [rsp+C8h] [rbp-70h] BYREF

  v3 = (_DWORD *)a3;
  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (HANDLE *)(a3 + 48);
  for ( i = 0; i < 6; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v9 = SystemDllInfo;
    v15 = SystemDllInfo;
    if ( SystemDllInfo
      && (i <= 0
       || *(_WORD *)(SystemDllInfo + 2)
       && Process[1].ActiveProcessors.Bitmap[7]
       && i == (unsigned int)PsWow64GetProcessNtdllType((__int64)Process)) )
    {
      memset(v6, 0, 0x20uLL);
      v16 = 0LL;
      v10 = *(void **)(v9 + 24);
      v6[1] = v10;
      if ( a1 && i )
      {
        v13 = 1;
        KiStackAttachProcess(Process, 0, (__int64)v20);
      }
      else
      {
        v13 = 0;
      }
      v11 = RtlImageNtHeader(v10);
      if ( v11 )
      {
        *((_DWORD *)v6 + 4) = v11->FileHeader.PointerToSymbolTable;
        *((_DWORD *)v6 + 5) = v11->FileHeader.NumberOfSymbols;
      }
      if ( !a1 )
      {
        v12 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1
            ? 0LL
            : (wchar_t *)KeGetCurrentThread()->Teb;
        v16 = v12;
        if ( v12 )
        {
          RtlStringCbCopyW(v12 + 2356, 0x20AuLL, *(NTSTRSAFE_PCWSTR *)(v15 + 40));
          *((_QWORD *)v12 + 5) = v12 + 2356;
          v6[3] = v12 + 20;
          v3 = (_DWORD *)a3;
        }
      }
      if ( v13 )
        KiUnstackDetachProcess((__int64)v20, 0LL);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 1600;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v15 + 8);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
        *v6 = 0LL;
      *v3 = 5242920;
      v3[1] = 8;
      v3[10] = 5;
      if ( a1 )
      {
        if ( (int)DbgkpQueueMessage(Process, a1, a2) < 0 && *v6 )
          ObCloseHandle(*v6, 0);
      }
      else
      {
        DbgkpSendApiMessage(Process);
        if ( *v6 )
          ObCloseHandle(*v6, 0);
        if ( v16 )
          *((_QWORD *)v16 + 5) = 0LL;
      }
    }
  }
}
