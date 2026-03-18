/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x1405D18F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     _CmValidateDeviceInterfaceName @ 0x14051E570 (_CmValidateDeviceInterfaceName.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140528078 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140594ADC (_PnpCtxRegEnumKeyWithCallback.c)
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
  __int64 v13; // rcx
  unsigned int v14; // eax
  size_t v15; // rdx
  wchar_t *v16; // r14
  __int64 v17; // rdx
  wchar_t *v18; // rax
  __int64 v20; // r8
  unsigned int v21; // esi
  unsigned __int8 (__fastcall *v22)(__int64 *, wchar_t *, __int64, _QWORD); // rax
  unsigned int v23; // eax
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
    || (!a1 ? (v13 = 0LL) : (v13 = *a1), (int)SysCtxRegOpenKey(v13, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0) )
  {
    v14 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 >= 3u )
    {
      if ( v14 == 3 )
      {
        do
          ++v6;
        while ( a3[v6] );
        if ( v6 > 1 )
          v11 = *a3 == 35;
      }
      goto LABEL_14;
    }
    if ( v14 != 2 || !*(_WORD *)(a4 + 1012) )
    {
LABEL_14:
      if ( *(_DWORD *)a4 < 2u )
        goto LABEL_27;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3F0uLL, 0x52504E50u);
      if ( PoolWithTag )
      {
        v15 = 504LL;
        if ( *(_WORD *)(a4 + 4) )
        {
          if ( RtlStringCchCopyExW(
                 PoolWithTag,
                 0x1F8uLL,
                 (NTSTRSAFE_PCWSTR)(a4 + 4),
                 &ppszDestEnd,
                 (size_t *)&pcchRemaining.Length,
                 0x900u) < 0 )
            goto LABEL_32;
          v16 = ppszDestEnd;
          v17 = *(_QWORD *)&pcchRemaining.Length;
          *ppszDestEnd = 0;
          v15 = v17 - 1;
        }
        else
        {
          v16 = PoolWithTag;
        }
        if ( *(_DWORD *)a4 == 2 || v11 )
        {
          if ( RtlStringCchCopyW(v16, v15, a3) < 0 )
            goto LABEL_32;
          if ( v11 )
            *v16 = 92;
        }
LABEL_27:
        if ( *(_DWORD *)a4 >= 3u )
        {
          *(_QWORD *)PoolWithTag = *(_QWORD *)L"\\\\?\\";
          if ( CmValidateDeviceInterfaceName((__int64)a1, (__int64)PoolWithTag) >= 0
            && RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
          {
            v21 = DestinationString.MaximumLength >> 1;
            if ( !*(_BYTE *)(a4 + 1428)
              || CmIsDeviceInterfaceEnabled((__int64)a1, PoolWithTag, v20, (__int64)&v31) >= 0 && v31 )
            {
              v22 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, __int64, _QWORD))(a4 + 1432);
              if ( !v22 || v22(a1, PoolWithTag, 3LL, *(_QWORD *)(a4 + 1440)) )
              {
                *(_DWORD *)(a4 + 1460) += v21;
                v23 = *(_DWORD *)(a4 + 1456);
                if ( v23 > v21 )
                {
                  RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 1448), v23, PoolWithTag, 0LL, 0LL, 0x900u);
                  *(_QWORD *)(a4 + 1448) += 2LL * v21;
                  *(_DWORD *)(a4 + 1456) -= v21;
LABEL_30:
                  if ( v8 )
                    ExFreePoolWithTag(v8, 0);
                }
              }
            }
          }
        }
        else
        {
          v18 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
          v8 = v18;
          if ( v18 )
          {
            memset(v18, 0, 0x5B8uLL);
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
            PnpCtxRegEnumKeyWithCallback(a1, (__int64)Handle, (__int64)&CmDeviceClassesSubkeyCallback, (__int64)v8);
            *(_QWORD *)(a4 + 1416) = *((_QWORD *)v8 + 177);
            *(_DWORD *)(a4 + 1424) = *((_DWORD *)v8 + 356);
            *(_DWORD *)(a4 + 1460) = *((_DWORD *)v8 + 365);
            *(_QWORD *)(a4 + 1448) = *((_QWORD *)v8 + 181);
            *(_DWORD *)(a4 + 1456) = *((_DWORD *)v8 + 364);
            goto LABEL_30;
          }
        }
LABEL_32:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
LABEL_34:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_36;
    }
    v9 = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
    if ( v9 )
    {
      LODWORD(v25) = 400;
      if ( (int)RegRtlQueryValue(Handle, L"DeviceInstance", &pcchRemaining, v9, (unsigned int *)&v25) < 0 )
        goto LABEL_34;
      if ( *(_DWORD *)&pcchRemaining.Length != 1 )
        goto LABEL_34;
      if ( (unsigned int)v25 < 2 )
        goto LABEL_34;
      v9[199] = 0;
      if ( RtlInitUnicodeStringEx(&DestinationString, v9) < 0
        || RtlInitUnicodeStringEx(&pcchRemaining, (PCWSTR)(a4 + 1012)) < 0
        || !RtlEqualUnicodeString(&DestinationString, &pcchRemaining, 1u) )
      {
        goto LABEL_34;
      }
      goto LABEL_14;
    }
  }
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
