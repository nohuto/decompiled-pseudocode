/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x140741D70
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405930D4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgMigrateService @ 0x14069AB80 (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCopyTree @ 0x140739BE0 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryKey @ 0x14017E200 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x140180900 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x140181280 (ZwSetSecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlEnumValue @ 0x140445A14 (_RegRtlEnumValue.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _RegRtlSetValue @ 0x140456A24 (_RegRtlSetValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140489954 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
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
  ULONG v8; // edi
  unsigned int *v9; // rsi
  signed int v10; // ebx
  char v11; // al
  PVOID PoolWithTag; // rax
  unsigned __int64 v13; // rdi
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // eax
  ULONG v19; // ecx
  signed int v20; // eax
  const WCHAR *v21; // rax
  ULONG i; // edx
  const WCHAR *v23; // rax
  PVOID v24; // r9
  ULONG v25; // r8d
  signed int v26; // eax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-61h] BYREF
  char *v29; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-49h] BYREF
  const WCHAR *v32; // [rsp+70h] [rbp-41h] BYREF
  const WCHAR *v33; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int64 LowLimit; // [rsp+80h] [rbp-31h] BYREF
  ULONG LengthNeeded; // [rsp+88h] [rbp-29h] BYREF
  PVOID v36; // [rsp+90h] [rbp-21h]
  PVOID P; // [rsp+98h] [rbp-19h]
  HANDLE Handle; // [rsp+A0h] [rbp-11h] BYREF
  ULONG v39; // [rsp+A8h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+ACh] [rbp-5h] BYREF
  _BYTE KeyInformation[4]; // [rsp+B0h] [rbp-1h] BYREF
  char v42; // [rsp+B4h] [rbp+3h]

  NumberOfBytes = a6;
  v33 = a2;
  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0;
  P = 0LL;
  v9 = 0LL;
  LengthNeeded = 0;
  v36 = 0LL;
  v32 = a4;
  v29 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_78;
  }
  v10 = RegRtlOpenKeyTransacted(a1, v33, 8, 0x20019u, &KeyHandle, NumberOfBytes);
  if ( v10 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (v42 & 2) != 0 )
      {
        v10 = -2147483603;
        goto LABEL_78;
      }
      v8 = (v42 & 1) != 0;
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
        goto LABEL_78;
      v11 = a5;
    }
    v10 = RegRtlCreateKeyTransacted(
            v29,
            v32,
            v8,
            0x6001Fu,
            (void *)((unsigned __int64)P & -(__int64)(v11 != 0)),
            0,
            &Handle,
            &v39,
            NumberOfBytes);
    if ( v10 < 0 )
      goto LABEL_78;
    if ( a5 && P && v39 == 2 )
      ZwSetSecurityObject(Handle, 4u, P);
    LODWORD(v13) = 0;
    if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, (unsigned int *)&v33, 0LL, (unsigned int *)&v29, &v32) )
    {
      v18 = 0;
    }
    else
    {
      v14 = (unsigned int)v33;
      if ( (unsigned int)v33 <= (unsigned int)v29 )
        v14 = (unsigned int)v29;
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
          goto LABEL_78;
      }
      v13 = 2LL * v14;
      if ( v13 > 0xFFFFFFFF )
      {
        v10 = -1073741675;
        goto LABEL_78;
      }
      v10 = 0;
      v18 = (int)v32;
    }
    LODWORD(LowLimit) = v18;
    if ( !(_DWORD)v13 || (v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x4C474552u)) != 0LL )
    {
      if ( !(_DWORD)LowLimit || (v36 = ExAllocatePoolWithTag(PagedPool, (unsigned int)LowLimit, 0x4C474552u)) != 0LL )
      {
        v19 = 0;
        LODWORD(HighLimit) = 0;
        while ( 1 )
        {
          LODWORD(v29) = (unsigned int)v13 >> 1;
          v20 = RegRtlEnumKey(KeyHandle, v19, v9, (unsigned int *)&v29);
          if ( v20 == -2147483622 )
            break;
          if ( v20 == -1073741789 )
          {
            v21 = (const WCHAR *)(2LL * (unsigned int)v29);
            v33 = v21;
            if ( (unsigned __int64)v21 > 0xFFFFFFFF )
            {
LABEL_51:
              v10 = -1073741675;
              goto LABEL_74;
            }
            LODWORD(v13) = 2 * (_DWORD)v29;
            v10 = 0;
            if ( v9 )
            {
              ExFreePoolWithTag(v9, 0);
              LODWORD(v21) = (_DWORD)v33;
            }
            v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v21, 0x4C474552u);
            if ( !v9 )
            {
LABEL_72:
              v10 = -1073741801;
              goto LABEL_74;
            }
            v19 = HighLimit;
          }
          else
          {
            if ( v20
              || (*((_WORD *)v9 + ((unsigned __int64)(unsigned int)v13 >> 1) - 1) = 0,
                  (v20 = RegRtlCopyTreeInternal(
                           (_DWORD)KeyHandle,
                           (_DWORD)v9,
                           (_DWORD)Handle,
                           (_DWORD)v9,
                           a5,
                           NumberOfBytes,
                           a7)) != 0)
              && v20 != -2147483603 )
            {
              v10 = v20;
              break;
            }
            v19 = HighLimit + 1;
            LODWORD(HighLimit) = HighLimit + 1;
          }
        }
        if ( v10 >= 0 )
        {
          LODWORD(v29) = 0;
          for ( i = 0; ; i = (unsigned int)v29 )
          {
            LODWORD(v32) = (unsigned int)v13 >> 1;
            LODWORD(HighLimit) = (unsigned int)v13 >> 1;
            LODWORD(NumberOfBytes) = LowLimit;
            v26 = RegRtlEnumValue(
                    KeyHandle,
                    i,
                    v9,
                    (unsigned int *)&HighLimit,
                    &v33,
                    v36,
                    (unsigned int *)&NumberOfBytes);
            if ( v26 == -2147483622 )
              break;
            if ( v26 == -1073741789 )
            {
              if ( (unsigned int)HighLimit > (unsigned int)v32 )
              {
                v23 = (const WCHAR *)(2LL * (unsigned int)HighLimit);
                v32 = v23;
                if ( (unsigned __int64)v23 > 0xFFFFFFFF )
                  goto LABEL_51;
                LODWORD(v13) = 2 * HighLimit;
                v10 = 0;
                if ( v9 )
                {
                  ExFreePoolWithTag(v9, 0);
                  LODWORD(v23) = (_DWORD)v32;
                }
                v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v23, 0x4C474552u);
                if ( !v9 )
                  goto LABEL_72;
              }
              if ( (unsigned int)NumberOfBytes > (unsigned int)LowLimit )
              {
                LODWORD(LowLimit) = NumberOfBytes;
                if ( v36 )
                  ExFreePoolWithTag(v36, 0);
                v36 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4C474552u);
                if ( !v36 )
                  goto LABEL_38;
              }
            }
            else
            {
              if ( v26
                || (v24 = v36,
                    v25 = (unsigned int)v33,
                    *((_WORD *)v9 + ((unsigned __int64)(unsigned int)v13 >> 1) - 1) = 0,
                    (v26 = RegRtlSetValue(Handle, (const WCHAR *)v9, v25, v24, NumberOfBytes)) != 0) )
              {
                v10 = v26;
                break;
              }
              LODWORD(v29) = (_DWORD)v29 + 1;
            }
          }
        }
LABEL_74:
        if ( v36 )
          ExFreePoolWithTag(v36, 0);
      }
      else
      {
LABEL_38:
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
LABEL_78:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v10;
}
