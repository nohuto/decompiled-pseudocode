/*
 * XREFs of PspReadDfssConfigurationValues @ 0x140238704
 * Callers:
 *     PspIsDfssEnabled @ 0x1405A5620 (PspIsDfssEnabled.c)
 *     PspDfssConfigurationChangeHandler @ 0x1406DDD70 (PspDfssConfigurationChangeHandler.c)
 * Callees:
 *     KeUpdateGroupSchedulingConstants @ 0x140165450 (KeUpdateGroupSchedulingConstants.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwNotifyChangeKey @ 0x140180100 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 */

void PspReadDfssConfigurationValues()
{
  NTSTATUS v0; // ecx
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  void (__stdcall *PoolWithTag)(PVOID, PIO_STATUS_BLOCK, ULONG); // rax
  HANDLE v4; // rcx
  PIO_APC_ROUTINE v5; // r8
  OBJECT_ATTRIBUTES v6; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  if ( PspDfssConfigurationKey )
  {
    v0 = 0;
    Handle = PspDfssConfigurationKey;
  }
  else
  {
    v6.Length = 48;
    v6.RootDirectory = 0LL;
    v6.Attributes = 576;
    v6.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    *(_OWORD *)&v6.SecurityDescriptor = 0LL;
    v0 = ZwOpenKey(&Handle, 0x11u, &v6);
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
      v4 = PspDfssConfigurationKey;
      v5 = PspDfssConfigurationNotify;
    }
    else
    {
      PoolWithTag = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))ExAllocatePoolWithTag(
                                                                          NonPagedPoolNx,
                                                                          0x30uLL,
                                                                          0x73736644u);
      v4 = Handle;
      v5 = PoolWithTag;
      PspDfssConfigurationNotify = PoolWithTag;
      if ( !PoolWithTag )
      {
        ZwClose(Handle);
        return;
      }
      PspDfssConfigurationKey = Handle;
    }
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v5 + 2) = PspDfssConfigurationChangeHandler;
    if ( ZwNotifyChangeKey(v4, 0LL, v5, (PVOID)1, (PIO_STATUS_BLOCK)v5 + 2, 4u, 0, 0LL, 0, 1u) < 0 )
    {
      ZwClose(PspDfssConfigurationKey);
      PspDfssConfigurationKey = 0LL;
      ExFreePoolWithTag(PspDfssConfigurationNotify, 0x73736644u);
      PspDfssConfigurationNotify = 0LL;
    }
  }
}
