/*
 * XREFs of DbgkSendSystemDllMessages @ 0x14067E910
 * Callers:
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsQuerySystemDllInfo @ 0x1404499AC (PsQuerySystemDllInfo.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsWow64GetProcessMachine @ 0x14053B210 (PsWow64GetProcessMachine.c)
 *     DbgkpQueueMessage @ 0x14067F83C (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  _KPROCESS *Process; // r15
  HANDLE *v6; // rdi
  int i; // esi
  __int64 SystemDllInfo; // rbx
  unsigned __int64 v9; // rax
  __int16 v10; // cx
  void *v11; // rbx
  PIMAGE_NT_HEADERS v12; // rax
  wchar_t *v13; // r14
  char v14; // [rsp+30h] [rbp-F8h]
  __int64 v15; // [rsp+40h] [rbp-E8h]
  wchar_t *v16; // [rsp+48h] [rbp-E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-80h] BYREF
  $5BC46E0569261879018906DEC3127961 v20; // [rsp+B8h] [rbp-70h] BYREF

  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (HANDLE *)(a3 + 12);
  for ( i = 0; i < 4; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v15 = SystemDllInfo;
    if ( SystemDllInfo )
    {
      if ( i <= 0
        || (v9 = Process[1].ActiveProcessors.Bitmap[7]) != 0
        && ((v10 = *(_WORD *)(v9 + 8), v10 == 332) || v10 == 452)
        && *(_WORD *)(SystemDllInfo + 2) == (unsigned __int16)PsWow64GetProcessMachine((__int64)Process) )
      {
        memset(v6, 0, 0x20uLL);
        v16 = 0LL;
        v11 = *(void **)(SystemDllInfo + 24);
        v6[1] = v11;
        if ( a1 && i )
        {
          v14 = 1;
          KiStackAttachProcess(Process, 0, (__int64)&v20);
        }
        else
        {
          v14 = 0;
        }
        v12 = RtlImageNtHeader(v11);
        if ( v12 )
        {
          *((_DWORD *)v6 + 4) = v12->FileHeader.PointerToSymbolTable;
          *((_DWORD *)v6 + 5) = v12->FileHeader.NumberOfSymbols;
        }
        if ( !a1 )
        {
          v13 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
              ? 0LL
              : (wchar_t *)KeGetCurrentThread()->Teb;
          v16 = v13;
          if ( v13 )
          {
            RtlStringCbCopyW(v13 + 2356, 0x20AuLL, *(NTSTRSAFE_PCWSTR *)(v15 + 40));
            *((_QWORD *)v13 + 5) = v13 + 2356;
            v6[3] = v13 + 20;
          }
        }
        if ( v14 )
          KiUnstackDetachProcess(&v20, 0LL);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(v15 + 8);
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
          *v6 = 0LL;
        *a3 = 5242920;
        a3[1] = 8;
        a3[10] = 5;
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
}
