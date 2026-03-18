/*
 * XREFs of PiDrvDbOverlayCopyKeys @ 0x14073C89C
 * Callers:
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14073CE80 (PiDrvDbOverlayNodeHive.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x1401A9F20 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1401AA8A0 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x1405D3598 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumValue @ 0x1405D7F64 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405D7FB4 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 */

__int64 __fastcall PiDrvDbOverlayCopyKeys(
        __int64 a1,
        __int64 a2,
        char *a3,
        const WCHAR *a4,
        int a5,
        const WCHAR *a6,
        unsigned int a7)
{
  ULONG v7; // esi
  unsigned int *PoolWithTag; // rdi
  int v9; // ebx
  NTSTATUS v10; // eax
  PVOID v11; // rcx
  NTSTATUS v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  ULONG v15; // esi
  ULONG v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  ULONG v21; // r8d
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  const wchar_t **v24; // rax
  __int64 v25; // rdx
  __int16 v26; // ax
  ULONG v27; // r8d
  bool v28; // zf
  unsigned int v29; // esi
  int v30; // eax
  unsigned int v31; // eax
  ULONG NumberOfBytes; // [rsp+40h] [rbp-61h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+44h] [rbp-5Dh] BYREF
  ULONG v35; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-55h]
  unsigned int v37; // [rsp+50h] [rbp-51h] BYREF
  ULONG LengthNeeded; // [rsp+54h] [rbp-4Dh] BYREF
  unsigned int v39; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  HANDLE KeyHandle; // [rsp+68h] [rbp-39h] BYREF
  ULONG v42; // [rsp+70h] [rbp-31h] BYREF
  PVOID v43; // [rsp+78h] [rbp-29h]
  HANDLE Handle; // [rsp+80h] [rbp-21h] BYREF
  const WCHAR *v45; // [rsp+88h] [rbp-19h]
  PVOID v46; // [rsp+90h] [rbp-11h]
  char *v47; // [rsp+98h] [rbp-9h]
  const WCHAR *v48; // [rsp+A0h] [rbp-1h]
  _BYTE KeyInformation[4]; // [rsp+A8h] [rbp+7h] BYREF
  char v50; // [rsp+ACh] [rbp+Bh]

  v48 = a6;
  v47 = a3;
  v45 = a4;
  v7 = 0;
  v39 = a7;
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  P = 0LL;
  v46 = 0LL;
  v42 = 0;
  v35 = 0;
  v37 = 0;
  v36 = 0;
  v43 = 0LL;
  NumberOfBytes_4 = 0;
  if ( (PiDrvDbOverlayFlags & 1) == 0 )
    return 0;
  v9 = SysCtxRegOpenKey(0LL, a1, a2, 8u, 0x20019u, (__int64)&KeyHandle);
  if ( v9 < 0 )
    goto LABEL_89;
  v10 = ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &LengthNeeded);
  v11 = 0LL;
  if ( v10 >= 0 )
  {
    if ( (v50 & 2) != 0 )
    {
      v9 = -2147483603;
      goto LABEL_89;
    }
    v7 = (v50 & 1) != 0;
  }
  if ( (a5 & 2) != 0 )
  {
    while ( 1 )
    {
      v12 = ZwQuerySecurityObject(KeyHandle, 4u, v11, LengthNeeded, &LengthNeeded);
      v11 = P;
      NumberOfBytes = v12;
      if ( v12 >= 0 )
        break;
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        v12 = NumberOfBytes;
      }
      P = 0LL;
      v11 = 0LL;
      if ( v12 != -1073741789 )
        break;
      P = ExAllocatePoolWithTag(PagedPool, LengthNeeded, 0x62647050u);
      v11 = P;
      if ( !P )
      {
        v9 = -1073741670;
        break;
      }
    }
    if ( v9 < 0 )
      goto LABEL_85;
  }
  v13 = PnpCtxRegCreateKey(0LL, v47, v45, v7, 0x6001Fu, v11, &Handle, &v42);
  v15 = 0;
  v9 = v13;
  if ( v13 < 0 )
    goto LABEL_85;
  if ( v42 == 2 && (a5 & 1) != 0 && P )
    ZwSetSecurityObject(Handle, 4u, P);
  if ( (int)PnpCtxRegQueryInfoKey(v14, (int)KeyHandle, 0, (int)&v35, 0LL, (__int64)&v37, (__int64)&NumberOfBytes_4) >= 0 )
  {
    v16 = v37;
    if ( v35 > v37 )
      v16 = v35;
    v17 = 2 * v16 + 2;
    v36 = v17;
    if ( v17 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v17, 0x62647050u);
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_85;
      }
    }
  }
  v37 = NumberOfBytes_4;
  if ( NumberOfBytes_4 && (v43 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x62647050u)) == 0LL
    || v48 && v39 && (v46 = ExAllocatePoolWithTag(PagedPool, 8LL * v39, 0x62647050u)) == 0LL )
  {
LABEL_29:
    v9 = -1073741670;
    goto LABEL_81;
  }
  while ( 2 )
  {
    NumberOfBytes_4 = v36 >> 1;
    v35 = v15;
    v18 = RegRtlEnumKey(KeyHandle, v15, PoolWithTag, &NumberOfBytes_4);
    if ( v18 == -2147483622 )
    {
LABEL_62:
      v29 = 0;
      if ( v9 < 0 )
        break;
      while ( 1 )
      {
        v39 = v36 >> 1;
        NumberOfBytes_4 = v36 >> 1;
        NumberOfBytes = v37;
        v30 = PnpCtxRegEnumValue(
                v19,
                (__int64)KeyHandle,
                v29,
                (__int64)PoolWithTag,
                (__int64)&NumberOfBytes_4,
                (__int64)&v35,
                (__int64)v43,
                (__int64)&NumberOfBytes);
        if ( v30 == -2147483622 )
          goto LABEL_81;
        if ( v30 == -1073741789 )
        {
          if ( NumberOfBytes_4 > v39 )
          {
            v31 = 2 * NumberOfBytes_4;
            v36 = 2 * NumberOfBytes_4;
            if ( PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              v31 = v36;
            }
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v31, 0x62647050u);
            if ( !PoolWithTag )
              goto LABEL_60;
          }
          if ( NumberOfBytes > v37 )
          {
            v37 = NumberOfBytes;
            if ( v43 )
              ExFreePoolWithTag(v43, 0);
            v43 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x62647050u);
            if ( !v43 )
              goto LABEL_29;
          }
          --v29;
        }
        else
        {
          if ( v30 < 0 )
          {
            v9 = v30;
            goto LABEL_81;
          }
          if ( (a5 & 1) != 0
            || v42 != 2
            || (LengthNeeded = 0,
                (unsigned int)RegRtlQueryValue(Handle, (const WCHAR *)PoolWithTag, 0LL, 0LL, &LengthNeeded) != -1073741789) )
          {
            v9 = RegRtlSetValue(Handle, (const WCHAR *)PoolWithTag, v35, v43, NumberOfBytes);
            if ( v9 < 0 )
              goto LABEL_81;
          }
        }
        ++v29;
      }
    }
    if ( v18 == -1073741789 )
    {
      v20 = 2 * NumberOfBytes_4;
      v36 = 2 * NumberOfBytes_4;
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        v20 = v36;
      }
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x62647050u);
      if ( PoolWithTag )
      {
        --v15;
        goto LABEL_59;
      }
LABEL_60:
      v9 = -1073741670;
      goto LABEL_83;
    }
    if ( v18 < 0 )
    {
      v9 = v18;
      goto LABEL_62;
    }
    v21 = 0;
    NumberOfBytes = 0;
    if ( !v48 )
      goto LABEL_56;
    v22 = NumberOfBytes_4;
    if ( !NumberOfBytes_4 )
    {
      v15 = v35;
      goto LABEL_56;
    }
    NumberOfBytes_4 = 0;
    if ( !v39 )
      goto LABEL_53;
    v23 = (unsigned int)(v22 - 1);
    v45 = v48;
    v47 = (char *)v23;
    v24 = (const wchar_t **)v48;
    while ( 1 )
    {
      if ( wcsnicmp(*v24, (const wchar_t *)PoolWithTag, v23) )
        goto LABEL_49;
      v25 = *(_QWORD *)v45 + 2 * v22;
      v26 = *(_WORD *)(v25 - 2);
      if ( !v26 )
        break;
      if ( v26 == 92 && v46 )
      {
        v27 = NumberOfBytes;
        *((_QWORD *)v46 + NumberOfBytes) = v25;
        v21 = v27 + 1;
        NumberOfBytes = v21;
        goto LABEL_50;
      }
LABEL_49:
      v21 = NumberOfBytes;
LABEL_50:
      v24 = (const wchar_t **)(v45 + 4);
      ++NumberOfBytes_4;
      v45 += 4;
      if ( NumberOfBytes_4 >= v39 )
        goto LABEL_53;
      v23 = (unsigned __int64)v47;
    }
    v21 = NumberOfBytes;
    LODWORD(v22) = 0;
LABEL_53:
    v28 = (_DWORD)v22 == 0;
    v15 = v35;
    if ( v28 )
      goto LABEL_59;
LABEL_56:
    v9 = PiDrvDbOverlayCopyKeys(
           (_DWORD)KeyHandle,
           (_DWORD)PoolWithTag,
           (_DWORD)Handle,
           (_DWORD)PoolWithTag,
           a5,
           (unsigned __int64)v46 & -(__int64)(v21 != 0),
           v21);
    if ( v9 == -2147483603 )
    {
      v9 = 0;
      goto LABEL_59;
    }
    if ( v9 >= 0 )
    {
LABEL_59:
      ++v15;
      continue;
    }
    break;
  }
LABEL_81:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_83:
  if ( v43 )
    ExFreePoolWithTag(v43, 0);
LABEL_85:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
LABEL_89:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
