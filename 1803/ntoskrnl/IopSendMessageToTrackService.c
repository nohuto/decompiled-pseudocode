/*
 * XREFs of IopSendMessageToTrackService @ 0x14071A854
 * Callers:
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     LpcpRequestWaitReplyPort @ 0x140560A98 (LpcpRequestWaitReplyPort.c)
 */

NTSTATUS __fastcall IopSendMessageToTrackService(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v6; // r14d
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  _QWORD *Pool; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  size_t v15; // r8
  int v16; // eax
  _BYTE v17[40]; // [rsp+30h] [rbp-138h] BYREF
  int v18; // [rsp+58h] [rbp-110h]

  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  while ( 1 )
  {
    if ( !IopLinkTrackingServiceObject )
    {
      if ( !*(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
        return -1073741153;
      result = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL);
      if ( result == 192 || result == 257 )
        return result;
      if ( IopLinkTrackingServiceObject )
      {
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
      }
      else
      {
        IopLinkTrackingPacket.List.Flink = 0LL;
        IopLinkTrackingPacket.WorkerRoutine = (void (__fastcall *)(void *))IopConnectLinkTrackingPort;
        IopLinkTrackingPacket.Parameter = &IopLinkTrackingPacket;
        KeResetEvent(&stru_1403C85A0);
        ExQueueWorkItem(&IopLinkTrackingPacket, DelayedWorkQueue);
        v9 = KeWaitForSingleObject(&stru_1403C85A0, Executive, PreviousMode, 0, 0LL);
        v10 = v9;
        if ( v9 != 192 && v9 != 257 && dword_1403C85B8 < 0 )
          v10 = dword_1403C85B8;
        KeSetEvent(&IopLinkTrackingPortObject, 0, 0);
        if ( v10 )
          return v10;
      }
    }
    Pool = IopVerifierExAllocatePool(PagedPool, 0xB8uLL);
    v12 = Pool;
    if ( !Pool )
      break;
    memset(Pool + 5, 0, 0x90uLL);
    v12[5] = 0LL;
    *((_OWORD *)v12 + 3) = *(_OWORD *)a1;
    *((_DWORD *)v12 + 16) = *(_DWORD *)(a1 + 16);
    *(_OWORD *)((char *)v12 + 68) = *a2;
    *(_OWORD *)((char *)v12 + 84) = a2[1];
    *(_OWORD *)((char *)v12 + 100) = a2[2];
    *(_OWORD *)((char *)v12 + 116) = a2[3];
    if ( *(_DWORD *)(a3 + 8) < 0x24u )
    {
      ExFreePoolWithTag(v12, 0);
      return -2147483643;
    }
    *((_DWORD *)v12 + 33) = *(_DWORD *)(a3 + 12);
    *(_OWORD *)(v12 + 17) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v12 + 19) = *(_OWORD *)(a3 + 32);
    v13 = *(_DWORD *)(a3 + 8);
    if ( v13 > 0x24 )
    {
      v14 = v13 - 36;
      v15 = 16LL;
      if ( v14 <= 0x10 )
        v15 = v14;
      memmove(v12 + 21, (const void *)(a3 + 48), v15);
    }
    *v12 = 12058768LL;
    v16 = LpcpRequestWaitReplyPort((__int64)IopLinkTrackingServiceObject, (__int64)v12, (unsigned __int64)v17, 0, 0, 2);
    v10 = v16;
    if ( v16 >= 0 )
      return v18;
    if ( v16 != -1073741769
      || (v10 = KeWaitForSingleObject(&IopLinkTrackingPortObject, Executive, PreviousMode, 0, 0LL),
          ObfDereferenceObject(IopLinkTrackingServiceObject),
          IopLinkTrackingServiceObject = 0LL,
          KeSetEvent(&IopLinkTrackingPortObject, 0, 0),
          v6) )
    {
      if ( v10 >= 0 )
        return v18;
      return v10;
    }
    v6 = 1;
  }
  return -1073741670;
}
