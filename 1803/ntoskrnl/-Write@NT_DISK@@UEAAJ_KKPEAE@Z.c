/*
 * XREFs of ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140716FD0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IoBuildAsynchronousFsdRequest @ 0x140098330 (IoBuildAsynchronousFsdRequest.c)
 *     IoSynchronousCallDriver @ 0x1400C4040 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 */

__int64 __fastcall NT_DISK::Write(PDEVICE_OBJECT *this, LARGE_INTEGER a2, ULONG a3, unsigned __int8 *a4)
{
  PIRP v5; // rax
  IRP *v6; // rbx
  unsigned int v7; // edi
  LARGE_INTEGER v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = IoBuildAsynchronousFsdRequest(4u, this[35], a4, a3, &v9, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
    v7 = IoSynchronousCallDriver(this[35], v5);
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
