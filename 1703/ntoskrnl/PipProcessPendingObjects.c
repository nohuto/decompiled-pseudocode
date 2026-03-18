/*
 * XREFs of PipProcessPendingObjects @ 0x140834030
 * Callers:
 *     PipProcessPendingServices @ 0x1408226E8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140822774 (PipProcessPendingOsExtensionResources.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpCtxRegOpenKey @ 0x1405D1A38 (_PnpCtxRegOpenKey.c)
 *     PnpCheckDriverDependencies @ 0x140695738 (PnpCheckDriverDependencies.c)
 *     _PnpCtxRegEnumKey @ 0x140739C78 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegQueryValue @ 0x140739C98 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PipProcessPendingObjects(
        void *a1,
        __int64 (__fastcall *a2)(unsigned int *, void *, _QWORD, char *),
        __int64 a3,
        int (__fastcall *a4)(unsigned int *, void *, void *, _QWORD))
{
  _WORD *PoolWithTag; // rbx
  unsigned int v5; // esi
  int v9; // eax
  ULONG i; // r14d
  __int64 v11; // rcx
  int v12; // edi
  int Value; // eax
  __int64 v14; // rcx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-CFh] BYREF
  SIZE_T NumberOfBytes; // [rsp+34h] [rbp-CCh] BYREF
  void *v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20[132]; // [rsp+50h] [rbp-B0h] BYREF

  NumberOfBytes = 260LL;
  PoolWithTag = 0LL;
  v19 = 0LL;
  v5 = 0;
  v9 = PnpCtxRegEnumKey((__int64)a1, a1, 0, v20, (unsigned int *)&NumberOfBytes);
  for ( i = 1; ; ++i )
  {
    v12 = v9;
    if ( v9 == -2147483622 || v9 == -1073741444 )
      break;
    if ( v9 < 0 )
      goto LABEL_29;
    if ( (int)PnpCtxRegOpenKey(*(__int64 **)&PiPnpRtlCtx, (__int64)a1, (__int64)v20, 0, 1u, (__int64)&v19) >= 0 )
    {
      if ( !a2 )
        goto LABEL_8;
      v16 = 0;
      v12 = a2(v20, v19, 0LL, &v16);
      if ( v12 < 0 )
        goto LABEL_29;
      if ( !v16 )
      {
LABEL_8:
        LODWORD(NumberOfBytes) = v5;
        Value = PnpCtxRegQueryValue(
                  v11,
                  v19,
                  L"DependOnFirmware",
                  (_DWORD *)&NumberOfBytes + 1,
                  PoolWithTag,
                  (unsigned int *)&NumberOfBytes);
        if ( Value == -1073741789 || Value == -2147483643 )
        {
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x42706E50u);
          v5 = NumberOfBytes;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          Value = PnpCtxRegQueryValue(
                    v14,
                    v19,
                    L"DependOnFirmware",
                    (_DWORD *)&NumberOfBytes + 1,
                    PoolWithTag,
                    (unsigned int *)&NumberOfBytes);
        }
        if ( Value == -1073741772 )
        {
          if ( PoolWithTag )
          {
            if ( v5 >= 2 )
              *PoolWithTag = 0;
LABEL_19:
            if ( PoolWithTag )
            {
              if ( v5 >= 2 )
              {
                if ( *PoolWithTag )
                {
                  v17[0] = 0;
                  if ( (int)PnpCheckDriverDependencies(PoolWithTag, v17, 0LL) < 0 || !v17[0] )
                    goto LABEL_26;
                }
              }
            }
          }
          if ( a4(v20, a1, v19, 0LL) >= 0 )
            --i;
          goto LABEL_26;
        }
        if ( Value < 0 )
          goto LABEL_26;
        goto LABEL_19;
      }
    }
LABEL_26:
    LODWORD(NumberOfBytes) = 260;
    v9 = PnpCtxRegEnumKey(v11, a1, i, v20, (unsigned int *)&NumberOfBytes);
  }
  v12 = 0;
LABEL_29:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x42706E50u);
  return (unsigned int)v12;
}
