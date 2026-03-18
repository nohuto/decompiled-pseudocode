/*
 * XREFs of ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140687044
 * Callers:
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14026994C (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x14002FA10 (IoSynchronousCallDriver.c)
 *     IoBuildAsynchronousFsdRequest @ 0x140081210 (IoBuildAsynchronousFsdRequest.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 */

__int64 __fastcall PC_ENVIRONMENT::Write(PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, LARGE_INTEGER a4)
{
  PIRP v5; // rax
  IRP *v6; // rdi
  unsigned int v7; // ebx
  LARGE_INTEGER v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = IoBuildAsynchronousFsdRequest(4u, DeviceObject, Buffer, Length, &v9, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
    v7 = IoSynchronousCallDriver(DeviceObject, v5);
    MmUnlockPages(v6->MdlAddress);
    IoFreeMdl(v6->MdlAddress);
    IoFreeIrp(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
