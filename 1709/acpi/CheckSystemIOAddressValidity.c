/*
 * XREFs of CheckSystemIOAddressValidity @ 0x1C00188C0
 * Callers:
 *     ReadSystemIO @ 0x1C0016648 (ReadSystemIO.c)
 *     WriteSystemIO @ 0x1C001886C (WriteSystemIO.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckSystemIOAddressValidity(unsigned __int8 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int *v11; // rax
  __int64 v13; // rsi
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, unsigned int *); // rax
  const char *v15; // r9
  const char *v16; // rdx
  struct _DEVICE_OBJECT *v17; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  int v19; // ecx
  _DWORD *PoolWithTag; // rax

  v8 = 1;
  if ( gpBadIOAddressList )
  {
    LODWORD(v9) = 0;
    if ( *((_DWORD *)gpBadIOAddressList + 1) )
    {
      v10 = 0LL;
      v11 = (unsigned int *)gpBadIOAddressList;
      while ( a2 < *v11 || a2 >= *v11 + v11[1] )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int)v9;
        v11 = (unsigned int *)((char *)gpBadIOAddressList + 24 * v9);
        if ( !v11[1] )
          return v8;
      }
      v13 = 24 * v10;
      if ( *((_DWORD *)gpBadIOAddressList + 6 * v10 + 2) > (unsigned int)gdwHighestOSVerQueried )
      {
        PrintDebugMessage(24, a2, 0, 0, 0LL);
        v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))((char *)gpBadIOAddressList + v13 + 16);
        if ( v14 )
        {
          v8 = 0;
          v14(a1, a2, a3, a4);
          v15 = "Read";
          if ( !a1 )
            v15 = "Wrote";
          v16 = "read";
          if ( !a1 )
            v16 = "write";
          PrintDebugMessage(23, (_DWORD)v16, a2, (_DWORD)v15, *a4);
        }
      }
      else
      {
        v8 = 0;
        PrintDebugMessage(25, a2, 0, 0, 0LL);
      }
      if ( !RootDeviceExtension || (v17 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 720)) == 0LL )
      {
        v19 = 22;
        goto LABEL_24;
      }
      WorkItem = IoAllocateWorkItem(v17);
      if ( !WorkItem )
      {
        v19 = 21;
LABEL_24:
        PrintDebugMessage(v19, 0, 0, 0, 0LL);
        return v8;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x496C6D41u);
      if ( PoolWithTag )
      {
        *(_BYTE *)PoolWithTag = a1;
        PoolWithTag[1] = a2;
        PoolWithTag[2] = v9;
        *((_QWORD *)PoolWithTag + 2) = WorkItem;
        IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, PoolWithTag);
      }
      else
      {
        PrintDebugMessage(20, 0, 0, 0, 0LL);
        IoFreeWorkItem(WorkItem);
      }
    }
  }
  return v8;
}
