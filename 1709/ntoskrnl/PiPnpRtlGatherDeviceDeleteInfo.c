/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x1406C28B0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x14017FDE0 (ZwPlugPlayControl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, PVOID *a2)
{
  PVOID PoolWithTag; // rax
  int DeviceRegProp; // edi
  _DWORD *v6; // rdi
  __int64 v8; // [rsp+28h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OWORD Buffer[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+A8h] [rbp+28h] BYREF
  int v12; // [rsp+B0h] [rbp+30h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x54uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x54uLL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = *a2;
    if ( *a2
      && (memset(Buffer, 0, 0x28uLL),
          memset(&Buffer[1], 0, 20),
          Buffer[0] = DestinationString,
          ZwPlugPlayControl(PlugPlayControlDeviceStatus, Buffer, 0x28u) >= 0) )
    {
      *v6 = DWORD2(Buffer[1]);
    }
    else
    {
      *(_DWORD *)*a2 = 45;
    }
    v8 = (__int64)*a2 + 4;
    v11 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)SourceString,
                      0LL,
                      9,
                      (__int64)&v12,
                      v8,
                      (__int64)&v11,
                      0);
    if ( DeviceRegProp >= 0 && v12 == 1 && v11 > 2 )
    {
      *((_WORD *)*a2 + 40) = 0;
    }
    else
    {
      DeviceRegProp = 0;
      *((_WORD *)*a2 + 2) = 0;
    }
  }
  else
  {
    DeviceRegProp = -1073741670;
    if ( *a2 )
      ExFreePoolWithTag(*a2, 0x47706E50u);
    *a2 = 0LL;
  }
  return (unsigned int)DeviceRegProp;
}
