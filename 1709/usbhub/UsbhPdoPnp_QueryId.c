/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1C001B1D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001BCF4 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // r15d
  unsigned int Length; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  struct _KSEMAPHORE *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // r12
  struct _KEVENT *v21; // rbx
  int v22; // r9d
  PVOID PoolWithTag; // rax
  __int64 v24; // r12
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *Blink; // rdx
  __int64 v27; // rdx
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT *Event; // [rsp+80h] [rbp+8h]
  __int64 v30; // [rsp+90h] [rbp+18h]
  struct _DEVICE_OBJECT *v31; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  KeWaitForSingleObject((PVOID)(v5 + 2560), Executive, 0, 0, 0LL);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v9 = Length - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 2 )
          {
            if ( *(_BYTE *)(v5 + 2724) )
            {
              Status = RtlStringFromGUID((const GUID *const)(v5 + 2708), &GuidString);
              if ( Status >= 0 )
              {
                Status = 0;
                a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
              }
            }
          }
LABEL_33:
          if ( CurrentStackLocation->Parameters.Read.Length )
            goto LABEL_18;
          goto LABEL_47;
        }
        if ( *(_QWORD *)(v5 + 2128) )
        {
          if ( (*(_DWORD *)(v5 + 1412) & 0x200000) != 0 )
            v2 = 12LL;
          v12 = 2120LL;
        }
        else
        {
          v12 = 2136LL;
        }
      }
      else
      {
        v12 = 2104LL;
      }
    }
    else
    {
      v12 = 2088LL;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v19 = PdoExt(a1);
      v20 = *(_QWORD *)(v5 + 1176);
      v30 = v19 + 944;
      v31 = (struct _DEVICE_OBJECT *)v20;
      v21 = (struct _KEVENT *)FdoExt(v20);
      v21[142].Header.Type = 1;
      Event = v21 + 139;
      KeWaitForSingleObject(&v21[139], Executive, 0, 0, 0LL);
      Log(v20, 0x10000, 1212771939, 1LL, v21[142].Header.Signalling);
      if ( v21[142].Header.Signalling )
      {
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v22 + 39), 0x42554855u);
        v24 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x28uLL);
          *(_DWORD *)v24 = 1215918946;
          *(_QWORD *)(v24 + 24) = a1;
          v25 = (_LIST_ENTRY *)(v24 + 8);
          *(_DWORD *)(v24 + 32) = 1346728819;
          Blink = v21[129].Header.WaitListHead.Blink;
          if ( Blink->Flink != &v21[129].Header.WaitListHead )
            __fastfail(3u);
          v25->Flink = &v21[129].Header.WaitListHead;
          *(_QWORD *)(v24 + 16) = Blink;
          Blink->Flink = v25;
          v21[129].Header.WaitListHead.Blink = v25;
        }
        else
        {
          ++v21[130].Header.LockNV;
          v24 = 1936941672LL;
        }
        KeSetEvent(Event, 0, 0);
        Usbh_SSH_Event(v31, 6u, v30);
      }
      else
      {
        KeSetEvent(Event, 0, 0);
        v24 = 0LL;
      }
      KeWaitForSingleObject((PVOID)(v5 + 2880), Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v5 + 2880), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*(_QWORD *)(v5 + 1176), v27, (_QWORD *)v24);
    }
    v12 = 2072LL;
  }
  v13 = v12 + v5;
  if ( !(v12 + v5) )
    goto LABEL_33;
  v14 = *(unsigned int *)(v13 + 4);
  if ( !(_DWORD)v14 || !*(_QWORD *)(v13 + 8) )
    goto LABEL_33;
  v15 = ExAllocatePoolWithTag(PagedPool, v2 + v14, 0x42554855u);
  v16 = v15;
  if ( !v15 )
  {
LABEL_47:
    Status = -1073741670;
    goto LABEL_18;
  }
  memset(v15, 0, v2 + *(unsigned int *)(v13 + 4));
  if ( v2 )
  {
    *(_QWORD *)v16 = *(_QWORD *)L"MSFT30";
    v16[2] = *(_DWORD *)L"30";
  }
  memmove(&v16[(unsigned __int64)v2 / 4], *(const void **)(v13 + 8), *(unsigned int *)(v13 + 4));
  Status = 0;
  a2->IoStatus.Information = (unsigned __int64)v16;
LABEL_18:
  v17 = *(struct _KSEMAPHORE **)(a1 + 64);
  if ( !v17 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( v17->Header.LockNV != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeReleaseSemaphore(v17 + 80, 16, 1, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      Status);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
