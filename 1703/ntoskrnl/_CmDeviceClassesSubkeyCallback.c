/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x1405AAA10
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404878A0 (_CmValidateDeviceInterfaceName.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1404E7DF0 (_CmIsDeviceInterfaceEnabled.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405AB144 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  unsigned int v5; // r8d
  unsigned __int64 v6; // r14
  wchar_t *v8; // r13
  _WORD *v9; // r15
  wchar_t *PoolWithTag; // rdi
  bool v11; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  size_t v14; // rdx
  wchar_t *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // esi
  unsigned __int8 (__fastcall *v19)(__int64 *, wchar_t *, __int64, _QWORD); // rax
  unsigned int v20; // eax
  __int64 v22; // rcx
  wchar_t *v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING pcchRemaining; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v31; // [rsp+C8h] [rbp+58h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = -1LL;
  Handle = 0LL;
  v8 = 0LL;
  ppszDestEnd = 0LL;
  v9 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0;
  if ( v5 == 1 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a3[v24] );
    if ( v24 != 38 || *a3 != 123 )
      return 0LL;
  }
  else if ( v5 - 2 <= 1 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( !v12 || *a3 != 35 )
      return 0LL;
  }
  if ( v5 >= 3 && (v5 != 3 || !*(_BYTE *)(a4 + 1428))
    || (!a1 ? (v22 = 0LL) : (v22 = *a1), (int)SysCtxRegOpenKey(v22, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0) )
  {
    v13 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 >= 3u )
    {
      if ( v13 == 3 )
      {
        do
          ++v6;
        while ( a3[v6] );
        if ( v6 > 1 )
          v11 = *a3 == 35;
      }
      goto LABEL_17;
    }
    if ( v13 != 2 || !*(_WORD *)(a4 + 1012) )
    {
LABEL_17:
      if ( *(_DWORD *)a4 < 2u )
        goto LABEL_26;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3F0uLL, 0x52504E50u);
      if ( PoolWithTag )
      {
        v14 = 504LL;
        if ( *(_WORD *)(a4 + 4) )
        {
          if ( RtlStringCchCopyExW(
                 PoolWithTag,
                 0x1F8uLL,
                 (NTSTRSAFE_PCWSTR)(a4 + 4),
                 &ppszDestEnd,
                 (size_t *)&pcchRemaining.Length,
                 0x900u) < 0 )
            goto LABEL_35;
          v15 = ppszDestEnd;
          v16 = *(_QWORD *)&pcchRemaining.Length;
          *ppszDestEnd = 0;
          v14 = v16 - 1;
        }
        else
        {
          v15 = PoolWithTag;
        }
        if ( *(_DWORD *)a4 == 2 || v11 )
        {
          if ( RtlStringCchCopyW(v15, v14, a3) < 0 )
            goto LABEL_35;
          if ( v11 )
            *v15 = 92;
        }
LABEL_26:
        if ( *(_DWORD *)a4 < 3u )
        {
          v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
          v8 = v23;
          if ( v23 )
          {
            memset(v23, 0, 0x5B8uLL);
            *(_DWORD *)v8 = *(_DWORD *)a4 + 1;
            RtlStringCchCopyExW(v8 + 2, 0x1F8uLL, PoolWithTag, 0LL, 0LL, 0x900u);
            RtlStringCchCopyExW(v8 + 506, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a4 + 1012), 0LL, 0LL, 0x900u);
            *((_QWORD *)v8 + 177) = *(_QWORD *)(a4 + 1416);
            *((_DWORD *)v8 + 356) = *(_DWORD *)(a4 + 1424);
            *((_BYTE *)v8 + 1428) = *(_BYTE *)(a4 + 1428);
            *((_QWORD *)v8 + 179) = *(_QWORD *)(a4 + 1432);
            *((_QWORD *)v8 + 180) = *(_QWORD *)(a4 + 1440);
            *((_QWORD *)v8 + 181) = *(_QWORD *)(a4 + 1448);
            *((_DWORD *)v8 + 364) = *(_DWORD *)(a4 + 1456);
            *((_DWORD *)v8 + 365) = *(_DWORD *)(a4 + 1460);
            PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v8);
            *(_QWORD *)(a4 + 1416) = *((_QWORD *)v8 + 177);
            *(_DWORD *)(a4 + 1424) = *((_DWORD *)v8 + 356);
            *(_DWORD *)(a4 + 1460) = *((_DWORD *)v8 + 365);
            *(_QWORD *)(a4 + 1448) = *((_QWORD *)v8 + 181);
            *(_DWORD *)(a4 + 1456) = *((_DWORD *)v8 + 364);
LABEL_33:
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
          }
        }
        else
        {
          *(_QWORD *)PoolWithTag = *(_QWORD *)L"\\\\?\\";
          if ( CmValidateDeviceInterfaceName((__int64)a1, (__int64)PoolWithTag) >= 0
            && RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
          {
            v18 = DestinationString.MaximumLength >> 1;
            if ( !*(_BYTE *)(a4 + 1428)
              || CmIsDeviceInterfaceEnabled((__int64)a1, PoolWithTag, v17, (__int64)&v31) >= 0 && v31 )
            {
              v19 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, __int64, _QWORD))(a4 + 1432);
              if ( !v19 || v19(a1, PoolWithTag, 3LL, *(_QWORD *)(a4 + 1440)) )
              {
                *(_DWORD *)(a4 + 1460) += v18;
                v20 = *(_DWORD *)(a4 + 1456);
                if ( v20 > v18 )
                {
                  RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 1448), v20, PoolWithTag, 0LL, 0LL, 0x900u);
                  *(_QWORD *)(a4 + 1448) += 2LL * v18;
                  *(_DWORD *)(a4 + 1456) -= v18;
                  goto LABEL_33;
                }
              }
            }
          }
        }
LABEL_35:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
LABEL_37:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_39;
    }
    v9 = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
    if ( v9 )
    {
      LODWORD(v25) = 400;
      if ( (int)RegRtlQueryValue(Handle, L"DeviceInstance", &pcchRemaining, v9, (unsigned int *)&v25) < 0 )
        goto LABEL_37;
      if ( *(_DWORD *)&pcchRemaining.Length != 1 )
        goto LABEL_37;
      if ( (unsigned int)v25 < 2 )
        goto LABEL_37;
      v9[199] = 0;
      if ( RtlInitUnicodeStringEx(&DestinationString, v9) < 0
        || RtlInitUnicodeStringEx(&pcchRemaining, (PCWSTR)(a4 + 1012)) < 0
        || !RtlEqualUnicodeString(&DestinationString, &pcchRemaining, 1u) )
      {
        goto LABEL_37;
      }
      goto LABEL_17;
    }
  }
LABEL_39:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
