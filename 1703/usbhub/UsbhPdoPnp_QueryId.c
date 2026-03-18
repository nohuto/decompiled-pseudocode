/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1C0019240
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0027CA0 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v2; // r12
  __int64 v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // r15d
  unsigned int Length; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  _DWORD *v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-38h] BYREF

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
  KeWaitForSingleObject((PVOID)(v5 + 2544), Executive, 0, 0, 0LL);
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
            if ( *(_BYTE *)(v5 + 2708) )
            {
              Status = RtlStringFromGUID((const GUID *const)(v5 + 2692), &GuidString);
              if ( Status >= 0 )
              {
                Status = 0;
                a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
              }
            }
          }
LABEL_26:
          if ( CurrentStackLocation->Parameters.Read.Length )
            goto LABEL_19;
          goto LABEL_38;
        }
        if ( *(_QWORD *)(v5 + 2128) )
        {
          v12 = 2120LL;
          v2 = (*(_DWORD *)(v5 + 1412) & 0x200000) != 0 ? 0xC : 0;
        }
        else
        {
          v12 = 2136LL;
        }
        v13 = v12 + v5;
      }
      else
      {
        v13 = v5 + 2104;
      }
    }
    else
    {
      v13 = v5 + 2088;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v19 = PdoExt(a1);
      v20 = (_QWORD *)UsbhIncHubBusy(*(_QWORD *)(v5 + 1176), (__int64)(v19 + 236), a1, 1346728819, 1);
      KeWaitForSingleObject((PVOID)(v5 + 2864), Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v5 + 2864), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*(_QWORD *)(v5 + 1176), v21, v20);
    }
    v13 = v5 + 2072;
  }
  if ( !v13 )
    goto LABEL_26;
  v14 = *(unsigned int *)(v13 + 4);
  if ( !(_DWORD)v14 || !*(_QWORD *)(v13 + 8) )
    goto LABEL_26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2 + v14, 0x42554855u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_38:
    Status = -1073741670;
    goto LABEL_19;
  }
  memset(PoolWithTag, 0, v2 + *(unsigned int *)(v13 + 4));
  if ( v2 )
  {
    *(_QWORD *)v16 = *(_QWORD *)L"MSFT30";
    v16[2] = *(_DWORD *)L"30";
  }
  memmove((char *)v16 + v2, *(const void **)(v13 + 8), *(unsigned int *)(v13 + 4));
  Status = 0;
  a2->IoStatus.Information = (unsigned __int64)v16;
LABEL_19:
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v17 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeReleaseSemaphore((PRKSEMAPHORE)(v17 + 2544), 16, 1, 0);
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
