/*
 * XREFs of PspReadDfssConfigurationValues @ 0x14024D7C0
 * Callers:
 *     PspIsDfssEnabled @ 0x1405C3280 (PspIsDfssEnabled.c)
 *     PspDfssConfigurationChangeHandler @ 0x140714220 (PspDfssConfigurationChangeHandler.c)
 * Callees:
 *     KeUpdateGroupSchedulingConstants @ 0x140157500 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x14017FAC0 (ZwNotifyChangeKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlQueryImageFileKeyOption @ 0x140584CF0 (RtlQueryImageFileKeyOption.c)
 */

void PspReadDfssConfigurationValues()
{
  NTSTATUS v0; // ecx
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  PIO_APC_ROUTINE v3; // r8
  HANDLE v4; // rcx
  OBJECT_ATTRIBUTES v5; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  if ( PspDfssConfigurationKey )
  {
    v0 = 0;
    Handle = PspDfssConfigurationKey;
  }
  else
  {
    v5.Length = 48;
    v5.RootDirectory = 0LL;
    v5.Attributes = 576;
    v5.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    *(_OWORD *)&v5.SecurityDescriptor = 0LL;
    v0 = ZwOpenKey(&Handle, 0x11u, &v5);
  }
  if ( v0 >= 0 )
  {
    v1 = &PspDfssConfigValues;
    v2 = 4LL;
    do
    {
      if ( (int)RtlQueryImageFileKeyOption(Handle, 4, 0LL) >= 0 )
      {
        if ( !**(_DWORD **)v1 )
          **(_DWORD **)v1 = 1;
      }
      else
      {
        **(_DWORD **)v1 = v1[4];
      }
      v1 += 6;
      --v2;
    }
    while ( v2 );
    if ( PspDfssConfigurationNotify )
    {
      KeUpdateGroupSchedulingConstants();
    }
    else
    {
      PspDfssConfigurationNotify = (PIO_APC_ROUTINE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x73736644u);
      if ( !PspDfssConfigurationNotify )
      {
        ZwClose(Handle);
        return;
      }
      PspDfssConfigurationKey = Handle;
    }
    v3 = PspDfssConfigurationNotify;
    v4 = PspDfssConfigurationKey;
    *((_QWORD *)PspDfssConfigurationNotify + 3) = 0LL;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 2) = PspDfssConfigurationChangeHandler;
    if ( ZwNotifyChangeKey(v4, 0LL, v3, (PVOID)1, (PIO_STATUS_BLOCK)v3 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
    {
      ZwClose(PspDfssConfigurationKey);
      PspDfssConfigurationKey = 0LL;
      ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
      PspDfssConfigurationNotify = 0LL;
    }
  }
}
