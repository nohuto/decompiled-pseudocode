/*
 * XREFs of ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C01486E0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DXGADAPTER::CallDriverQueryInterface(
        PDEVICE_OBJECT *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  __int64 v6; // rax
  PIRP v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _DEVICE_OBJECT *v13; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 8208LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, this[24], 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v7 )
  {
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_AGP_BUS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 327864;
    v7->IoStatus.Status = -1073741637;
    v13 = this[24];
    IoStatusBlock.Status = -1073741637;
    result = IofCallDriver(v13, v7);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v10);
    return -1073741801;
  }
  return result;
}
