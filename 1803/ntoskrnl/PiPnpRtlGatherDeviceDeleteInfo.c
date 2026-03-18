/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x1407288E0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x1401A9A20 (ZwPlugPlayControl.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 a2)
{
  PVOID PoolWithTag; // rax
  int DeviceRegProp; // ebx
  _DWORD *v6; // rbx
  NTSTATUS v7; // eax
  void *v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OWORD Buffer[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+A8h] [rbp+28h] BYREF
  int v13; // [rsp+B0h] [rbp+30h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x54uLL, 0x47706E50u);
  *(_QWORD *)a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
LABEL_16:
    *(_QWORD *)a2 = 0LL;
    return (unsigned int)DeviceRegProp;
  }
  memset(PoolWithTag, 0, 0x54uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = *(_DWORD **)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_7;
  memset(Buffer, 0, 0x28uLL);
  memset(&Buffer[1], 0, 20);
  Buffer[0] = DestinationString;
  v7 = ZwPlugPlayControl(PlugPlayControlDeviceStatus, Buffer, 0x28u);
  if ( v7 >= 0 )
    *v6 = DWORD2(Buffer[1]);
  v6 = *(_DWORD **)a2;
  if ( v7 < 0 )
LABEL_7:
    *v6 = 45;
  v12 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)SourceString,
                    0LL,
                    9,
                    (__int64)&v13,
                    (__int64)(v6 + 1),
                    (__int64)&v12,
                    0);
  if ( DeviceRegProp >= 0 && v13 == 1 && v12 > 2 )
  {
    v8 = *(void **)a2;
    *(_WORD *)(*(_QWORD *)a2 + 80LL) = 0;
  }
  else
  {
    v8 = *(void **)a2;
    DeviceRegProp = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4LL) = 0;
  }
  if ( DeviceRegProp < 0 )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0x47706E50u);
    goto LABEL_16;
  }
  return (unsigned int)DeviceRegProp;
}
