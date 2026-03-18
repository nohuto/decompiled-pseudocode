/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x140785B88
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405896A4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgMigrateService @ 0x1406C67A4 (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCopyTree @ 0x14077E2D0 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwQueryKey @ 0x14017DB80 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x1401802E0 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x140180C60 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x140521DE8 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x1405334F0 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumValue @ 0x140588538 (_RegRtlEnumValue.c)
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        char *a1,
        const WCHAR *a2,
        char *a3,
        const WCHAR *a4,
        char a5,
        SIZE_T a6,
        char a7)
{
  ULONG v8; // esi
  unsigned int *v9; // rdi
  signed int v10; // ebx
  char v11; // al
  PVOID PoolWithTag; // rax
  unsigned int v13; // esi
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rax
  int v19; // eax
  ULONG v20; // ecx
  signed int v21; // eax
  unsigned __int64 v22; // rax
  ULONG i; // edx
  unsigned __int64 v24; // rax
  PVOID v25; // r9
  ULONG v26; // r8d
  signed int v27; // eax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-61h] BYREF
  char *v30; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-41h] BYREF
  ULONG LengthNeeded; // [rsp+78h] [rbp-39h] BYREF
  const WCHAR *v35; // [rsp+80h] [rbp-31h] BYREF
  const WCHAR *v36; // [rsp+88h] [rbp-29h] BYREF
  PVOID v37; // [rsp+90h] [rbp-21h]
  PVOID P; // [rsp+98h] [rbp-19h]
  HANDLE Handle; // [rsp+A0h] [rbp-11h] BYREF
  ULONG v40; // [rsp+A8h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+ACh] [rbp-5h] BYREF
  _BYTE KeyInformation[4]; // [rsp+B0h] [rbp-1h] BYREF
  char v43; // [rsp+B4h] [rbp+3h]

  NumberOfBytes = a6;
  v36 = a2;
  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0;
  P = 0LL;
  v9 = 0LL;
  LengthNeeded = 0;
  v37 = 0LL;
  v35 = a4;
  v30 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_82;
  }
  v10 = RegRtlOpenKeyTransacted(a1, v36, 8, 0x20019u, &KeyHandle, NumberOfBytes);
  if ( v10 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (v43 & 2) != 0 )
      {
        v10 = -2147483603;
        goto LABEL_82;
      }
      v8 = (v43 & 1) != 0;
    }
    v11 = a5;
    if ( a5 )
    {
      PoolWithTag = 0LL;
      while ( ZwQuerySecurityObject(KeyHandle, 4u, PoolWithTag, LengthNeeded, &LengthNeeded) == -1073741789 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, LengthNeeded, 0x4C474552u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          v10 = -1073741801;
          break;
        }
      }
      if ( v10 < 0 )
        goto LABEL_82;
      v11 = a5;
    }
    v10 = RegRtlCreateKeyTransacted(
            v30,
            v35,
            v8,
            0x6001Fu,
            (void *)((unsigned __int64)P & -(__int64)(v11 != 0)),
            0,
            &Handle,
            &v40,
            NumberOfBytes);
    if ( v10 < 0 )
      goto LABEL_82;
    if ( a5 && P && v40 == 2 )
      ZwSetSecurityObject(Handle, 4u, P);
    v13 = 0;
    if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, (unsigned int *)&v36, 0LL, (unsigned int *)&v30, &v35) )
    {
      v19 = 0;
    }
    else
    {
      v14 = (unsigned int)v36;
      if ( (unsigned int)v36 <= (unsigned int)v30 )
        v14 = (unsigned int)v30;
      if ( v14 )
      {
        v15 = v14 + 1;
        v16 = v14;
        v17 = -1;
        if ( v14 + 1 >= v14 )
          v17 = v14 + 1;
        v14 = v17;
        v10 = v15 < v16 ? 0xC0000095 : 0;
        if ( v15 < v16 )
          goto LABEL_82;
      }
      v13 = -1;
      v18 = 2LL * v14;
      if ( v18 <= 0xFFFFFFFF )
        v13 = 2 * v14;
      v10 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_82;
      v19 = (int)v35;
    }
    LODWORD(LowLimit) = v19;
    if ( !v13 || (v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u)) != 0LL )
    {
      if ( !(_DWORD)LowLimit || (v37 = ExAllocatePoolWithTag(PagedPool, (unsigned int)LowLimit, 0x4C474552u)) != 0LL )
      {
        v20 = 0;
        LODWORD(HighLimit) = 0;
        while ( 1 )
        {
          LODWORD(v30) = v13 >> 1;
          v21 = RegRtlEnumKey(KeyHandle, v20, v9, (unsigned int *)&v30);
          if ( v21 == -2147483622 )
            break;
          if ( v21 == -1073741789 )
          {
            v22 = 2LL * (unsigned int)v30;
            v13 = -1;
            if ( v22 <= 0xFFFFFFFF )
              v13 = 2 * (_DWORD)v30;
            v10 = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v22 > 0xFFFFFFFF )
              break;
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
            v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u);
            if ( !v9 )
            {
LABEL_76:
              v10 = -1073741801;
              goto LABEL_78;
            }
            v20 = HighLimit;
          }
          else
          {
            if ( v21
              || (*((_WORD *)v9 + ((unsigned __int64)v13 >> 1) - 1) = 0,
                  (v21 = RegRtlCopyTreeInternal(
                           (_DWORD)KeyHandle,
                           (_DWORD)v9,
                           (_DWORD)Handle,
                           (_DWORD)v9,
                           a5,
                           NumberOfBytes,
                           a7)) != 0)
              && v21 != -2147483603 )
            {
              v10 = v21;
              break;
            }
            v20 = HighLimit + 1;
            LODWORD(HighLimit) = HighLimit + 1;
          }
        }
        if ( v10 >= 0 )
        {
          LODWORD(v30) = 0;
          for ( i = 0; ; i = (unsigned int)v30 )
          {
            LODWORD(v35) = v13 >> 1;
            LODWORD(HighLimit) = v13 >> 1;
            LODWORD(NumberOfBytes) = LowLimit;
            v27 = RegRtlEnumValue(KeyHandle, i, v9, &HighLimit, &v36, v37, (unsigned int *)&NumberOfBytes);
            if ( v27 == -2147483622 )
              break;
            if ( v27 == -1073741789 )
            {
              if ( (unsigned int)HighLimit > (unsigned int)v35 )
              {
                v24 = 2LL * (unsigned int)HighLimit;
                v13 = -1;
                if ( v24 <= 0xFFFFFFFF )
                  v13 = 2 * HighLimit;
                v10 = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v24 > 0xFFFFFFFF )
                  break;
                if ( v9 )
                  ExFreePoolWithTag(v9, 0);
                v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u);
                if ( !v9 )
                  goto LABEL_76;
              }
              if ( (unsigned int)NumberOfBytes > (unsigned int)LowLimit )
              {
                LODWORD(LowLimit) = NumberOfBytes;
                if ( v37 )
                  ExFreePoolWithTag(v37, 0);
                v37 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4C474552u);
                if ( !v37 )
                  goto LABEL_39;
              }
            }
            else
            {
              if ( v27
                || (v25 = v37,
                    v26 = (unsigned int)v36,
                    *((_WORD *)v9 + ((unsigned __int64)v13 >> 1) - 1) = 0,
                    (v27 = RegRtlSetValue(Handle, (const WCHAR *)v9, v26, v25, NumberOfBytes)) != 0) )
              {
                v10 = v27;
                break;
              }
              LODWORD(v30) = (_DWORD)v30 + 1;
            }
          }
        }
LABEL_78:
        if ( v37 )
          ExFreePoolWithTag(v37, 0);
      }
      else
      {
LABEL_39:
        v10 = -1073741801;
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v10 = -1073741801;
    }
  }
LABEL_82:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v10;
}
