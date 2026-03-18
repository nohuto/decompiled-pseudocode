/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x1407F09B8
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405DAA00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgMigrateService @ 0x14072D250 (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCopyTree @ 0x1407E6CF4 (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1401307B0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryKey @ 0x1401A7780 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x1401A9F20 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1401AA8A0 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x140506280 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140587220 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 *     _RegRtlEnumValue @ 0x1405E2FEC (_RegRtlEnumValue.c)
 *     _RegRtlQueryInfoKey @ 0x1405E4B7C (_RegRtlQueryInfoKey.c)
 *     _RegRtlCopyTreeInternal @ 0x1407F09B8 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        char *a1,
        const WCHAR *a2,
        SIZE_T a3,
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
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  bool v17; // cf
  unsigned __int64 v18; // rax
  int v19; // eax
  ULONG v20; // ecx
  signed int v21; // eax
  unsigned __int64 v22; // rax
  ULONG i; // edx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  PVOID v26; // r9
  ULONG v27; // r8d
  signed int v28; // eax
  char *v30; // [rsp+50h] [rbp-61h] BYREF
  SIZE_T v31; // [rsp+58h] [rbp-59h] BYREF
  const WCHAR *v32; // [rsp+60h] [rbp-51h] BYREF
  SIZE_T NumberOfBytes; // [rsp+68h] [rbp-49h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-41h] BYREF
  ULONG LengthNeeded; // [rsp+78h] [rbp-39h] BYREF
  PVOID v36; // [rsp+80h] [rbp-31h]
  PVOID P; // [rsp+88h] [rbp-29h]
  unsigned __int64 LowLimit; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 HighLimit; // [rsp+98h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-11h] BYREF
  ULONG v41; // [rsp+A8h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+ACh] [rbp-5h] BYREF
  _BYTE KeyInformation[4]; // [rsp+B0h] [rbp-1h] BYREF
  char v44; // [rsp+B4h] [rbp+3h]

  v31 = a6;
  v30 = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0;
  P = 0LL;
  v9 = 0LL;
  LengthNeeded = 0;
  v36 = 0LL;
  v32 = a4;
  NumberOfBytes = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_82;
  }
  v10 = RegRtlOpenKeyTransacted(v30, a2, 8, 0x20019u, &KeyHandle, v31);
  if ( v10 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (v44 & 2) != 0 )
      {
        v10 = -2147483603;
        goto LABEL_82;
      }
      v8 = (v44 & 1) != 0;
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
            (char *)NumberOfBytes,
            v32,
            v8,
            0x6001Fu,
            (void *)((unsigned __int64)P & -(__int64)(v11 != 0)),
            0,
            &Handle,
            &v41,
            v31);
    if ( v10 < 0 )
      goto LABEL_82;
    if ( a5 && P && v41 == 2 )
      ZwSetSecurityObject(Handle, 4u, P);
    v13 = 0;
    if ( (unsigned int)RegRtlQueryInfoKey(
                         KeyHandle,
                         0LL,
                         (unsigned int *)&HighLimit,
                         0LL,
                         (unsigned int *)&v30,
                         &LowLimit) )
    {
      v19 = 0;
    }
    else
    {
      v14 = HighLimit;
      if ( (unsigned int)HighLimit <= (unsigned int)v30 )
        v14 = (unsigned int)v30;
      if ( v14 )
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = v14 + 1 < v14;
        v14 = -1;
        if ( !v17 )
          v14 = v16;
        v10 = v17 ? 0xC0000095 : 0;
        if ( v16 < v15 )
          goto LABEL_82;
      }
      v13 = -1;
      v18 = 2LL * v14;
      if ( v18 <= 0xFFFFFFFF )
        v13 = 2 * v14;
      v10 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_82;
      v19 = LowLimit;
    }
    LODWORD(NumberOfBytes) = v19;
    if ( !v13 || (v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u)) != 0LL )
    {
      if ( !(_DWORD)NumberOfBytes
        || (v36 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4C474552u)) != 0LL )
      {
        v20 = 0;
        LODWORD(v32) = 0;
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
            v20 = (unsigned int)v32;
          }
          else
          {
            if ( v21
              || (*((_WORD *)v9 + ((unsigned __int64)v13 >> 1) - 1) = 0,
                  (v21 = RegRtlCopyTreeInternal((_DWORD)KeyHandle, (_DWORD)v9, (_DWORD)Handle, (_DWORD)v9, a5, v31, a7)) != 0)
              && v21 != -2147483603 )
            {
              v10 = v21;
              break;
            }
            v20 = (_DWORD)v32 + 1;
            LODWORD(v32) = (_DWORD)v32 + 1;
          }
        }
        if ( v10 >= 0 )
        {
          LODWORD(v30) = 0;
          for ( i = 0; ; i = (unsigned int)v30 )
          {
            LODWORD(LowLimit) = v13 >> 1;
            LODWORD(v32) = v13 >> 1;
            LODWORD(v31) = NumberOfBytes;
            v28 = RegRtlEnumValue(KeyHandle, i, v9, &v32, &HighLimit, v36, (unsigned int *)&v31);
            if ( v28 == -2147483622 )
              break;
            if ( v28 == -1073741789 )
            {
              if ( (unsigned int)v32 > (unsigned int)LowLimit )
              {
                v24 = 2LL * (unsigned int)v32;
                v13 = -1;
                if ( v24 <= 0xFFFFFFFF )
                  v13 = 2 * (_DWORD)v32;
                v10 = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v24 > 0xFFFFFFFF )
                  break;
                if ( v9 )
                  ExFreePoolWithTag(v9, 0);
                v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4C474552u);
                if ( !v9 )
                  goto LABEL_76;
              }
              if ( (unsigned int)v31 > (unsigned int)NumberOfBytes )
              {
                v25 = v31;
                LODWORD(NumberOfBytes) = v31;
                if ( v36 )
                {
                  ExFreePoolWithTag(v36, 0);
                  v25 = NumberOfBytes;
                }
                v36 = ExAllocatePoolWithTag(PagedPool, v25, 0x4C474552u);
                if ( !v36 )
                  goto LABEL_39;
              }
            }
            else
            {
              if ( v28
                || (v26 = v36,
                    v27 = HighLimit,
                    *((_WORD *)v9 + ((unsigned __int64)v13 >> 1) - 1) = 0,
                    (v28 = RegRtlSetValue(Handle, (const WCHAR *)v9, v27, v26, v31)) != 0) )
              {
                v10 = v28;
                break;
              }
              LODWORD(v30) = (_DWORD)v30 + 1;
            }
          }
        }
LABEL_78:
        if ( v36 )
          ExFreePoolWithTag(v36, 0);
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
