/*
 * XREFs of CheckSystemIOAddressValidity @ 0x1C004C668
 * Callers:
 *     ReadSystemIO @ 0x1C004D8A8 (ReadSystemIO.c)
 *     WriteSystemIO @ 0x1C004E34C (WriteSystemIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

char __fastcall CheckSystemIOAddressValidity(char a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  const void *v5; // rdi
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, unsigned int *); // rax
  const char *v15; // r9
  const char *v16; // rdx
  struct _DEVICE_OBJECT *v17; // rcx
  int v18; // ecx
  struct _IO_WORKITEM *WorkItem; // rbx
  _DWORD *PoolWithTag; // rax

  v5 = (const void *)a2;
  v8 = 1;
  if ( gpBadIOAddressList )
  {
    LODWORD(v9) = 0;
    if ( *((_DWORD *)gpBadIOAddressList + 1) )
    {
      v10 = 0LL;
      v11 = (unsigned int *)gpBadIOAddressList;
      while ( a2 < *v11 || a2 >= v11[1] + *v11 )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int)v9;
        v11 = (unsigned int *)((char *)gpBadIOAddressList + 24 * v9);
        if ( !v11[1] )
          return v8;
      }
      v12 = 3 * v10;
      if ( *((_DWORD *)gpBadIOAddressList + 6 * v10 + 2) > (unsigned int)gdwHighestOSVerQueried )
      {
        PrintDebugMessage(24, (const void *)a2, 0LL, 0LL, 0LL);
        v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))*((_QWORD *)gpBadIOAddressList + v12 + 2);
        if ( v14 )
        {
          LOBYTE(v13) = a1;
          v8 = 0;
          v14(v13, (unsigned int)v5, a3, a4);
          v15 = "Read";
          if ( !a1 )
            v15 = "Wrote";
          v16 = "read";
          if ( !a1 )
            v16 = "write";
          PrintDebugMessage(23, v16, v5, v15, (const void *)*a4);
        }
      }
      else
      {
        v8 = 0;
        PrintDebugMessage(25, (const void *)a2, 0LL, 0LL, 0LL);
      }
      v17 = (struct _DEVICE_OBJECT *)RootDeviceExtension;
      if ( RootDeviceExtension )
        v17 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 720);
      if ( !v17 )
      {
        v18 = 22;
LABEL_20:
        PrintDebugMessage(v18, 0LL, 0LL, 0LL, 0LL);
        return v8;
      }
      WorkItem = IoAllocateWorkItem(v17);
      if ( !WorkItem )
      {
        v18 = 21;
        goto LABEL_20;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x496C6D41u);
      if ( PoolWithTag )
      {
        *(_BYTE *)PoolWithTag = a1;
        PoolWithTag[1] = (_DWORD)v5;
        PoolWithTag[2] = v9;
        *((_QWORD *)PoolWithTag + 2) = WorkItem;
        IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, PoolWithTag);
      }
      else
      {
        PrintDebugMessage(20, 0LL, 0LL, 0LL, 0LL);
        IoFreeWorkItem(WorkItem);
      }
    }
  }
  return v8;
}
