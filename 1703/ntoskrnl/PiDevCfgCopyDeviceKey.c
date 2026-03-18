/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x140593BA4
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140593A60 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140593AB8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1406995DC (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14069BED0 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x14014FF38 (PnpValidateStringData.c)
 *     PiDevCfgParseVariableName @ 0x140150470 (PiDevCfgParseVariableName.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015051C (PiDevCfgPushCopyKeyEntry.c)
 *     PnpRegistryValueExists @ 0x140150618 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017E1A0 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x140181280 (ZwSetSecurityObject.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401F96B8 (PiDevCfgParsePropertyKeyName.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x140586A18 (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14059481C (PiDevCfgGetKeySecurityDescriptor.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406997F8 (PiDevCfgConvertPropertyFromValue.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        int a4,
        int a5,
        HANDLE *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r12
  int RegistryKeyInformation; // ebx
  unsigned int Length; // edi
  WCHAR *v12; // r15
  ULONG i; // r14d
  NTSTATUS v14; // eax
  HANDLE *v15; // r13
  PVOID v16; // r14
  HANDLE v17; // r12
  ULONG j; // esi
  NTSTATUS v19; // eax
  int v21; // edi
  unsigned int v22; // ebx
  bool v23; // si
  int v24; // ebx
  PVOID v25; // r12
  ULONG *v26; // r13
  unsigned int v27; // r15d
  unsigned int MaximumLength; // edi
  unsigned int *Buffer; // rsi
  unsigned int v30; // r14d
  int v31; // eax
  const WCHAR *v32; // rdx
  HANDLE v33; // rdi
  int v34; // eax
  bool v35; // al
  int v36; // eax
  _WORD *v37; // rcx
  int v38; // eax
  __int64 v39; // rbx
  const WCHAR *v40; // rdi
  unsigned int v41; // r9d
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  unsigned int *v45; // rdi
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  int v49; // edx
  NTSTATUS v50; // eax
  HANDLE v51; // rdx
  __int64 v52; // rax
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  ULONG v55; // [rsp+60h] [rbp-A0h]
  unsigned int v56; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v57; // [rsp+68h] [rbp-98h]
  ULONG DataSize; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v61; // [rsp+80h] [rbp-80h] BYREF
  PVOID v62; // [rsp+88h] [rbp-78h] BYREF
  PVOID v63; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+98h] [rbp-68h] BYREF
  PVOID Data; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v68; // [rsp+C0h] [rbp-40h] BYREF
  int v69; // [rsp+C4h] [rbp-3Ch]
  ULONG v70; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  const WCHAR *v72; // [rsp+D8h] [rbp-28h]
  PVOID PoolWithTag; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v74; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  ULONG Disposition; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandlea; // [rsp+138h] [rbp+38h]
  UNICODE_STRING v78; // [rsp+140h] [rbp+40h] BYREF
  HANDLE *v79; // [rsp+150h] [rbp+50h]
  UNICODE_STRING v80; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  GUID v82; // [rsp+180h] [rbp+80h] BYREF

  v7 = a7;
  KeyHandlea = KeyHandle;
  v8 = a4;
  v9 = a3;
  v79 = a6;
  v57 = a2;
  Handle = 0LL;
  v61 = 0LL;
  v63 = 0LL;
  v68 = 1;
  v69 = a4;
  v72 = (const WCHAR *)a3;
  v66 = a7;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle, &P);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_19;
  Length = 2 * *((_DWORD *)P + 6) + 26;
  DataSize = 2 * *((_DWORD *)P + 9) + 18;
  if ( DataSize > Length )
    Length = DataSize;
  v55 = Length;
  ExFreePoolWithTag(P, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
  v12 = (WCHAR *)PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_19;
  }
  for ( i = 0; ; ++i )
  {
    v70 = i;
    v14 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, v12, Length, &DataSize);
    RegistryKeyInformation = v14;
    if ( v14 >= 0 )
    {
      v12[((unsigned __int64)*((unsigned int *)v12 + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v12 + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_153;
      v21 = 0;
      ValueName = DestinationString;
      v59 = 0;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 16) )
        {
          v35 = PiDevCfgParseVariableName(DestinationString.Buffer, &v74, &v59);
          v21 = v59;
          if ( v35 )
          {
            if ( (v59 & 0x400000) != 0 )
              goto LABEL_58;
            v62 = 0LL;
            v36 = PiDevCfgResolveVariable(v7, v74.Buffer, &v62);
            if ( v36 >= 0 )
            {
              if ( (unsigned int)(*((_DWORD *)v62 + 8) - 1) > 1 || *((_DWORD *)v62 + 9) > 0xFFFEu )
                goto LABEL_58;
              ValueName.Buffer = (wchar_t *)*((_QWORD *)v62 + 5);
              ValueName.Length = *((_WORD *)v62 + 18) - 2;
              ValueName.MaximumLength = *((_WORD *)v62 + 18);
            }
            else
            {
              if ( v36 != -1073741772 )
                goto LABEL_58;
              ValueName = v74;
            }
          }
        }
      }
      v22 = *((_DWORD *)v12 + 1) & 0xFFFF0000;
      v12[3] = 0;
      if ( (v22 & 0x400000) != 0 || v9 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v82, &v68) )
        goto LABEL_58;
      v23 = (a5 & 1) != 0;
      v24 = v21 | v22;
      if ( (v24 & 0x30000) != 0 || !v23 )
      {
        if ( v9 )
        {
          if ( (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               v9,
                               v8,
                               (__int64)v57,
                               0LL,
                               (__int64)&v82,
                               (__int64)&v56,
                               0LL,
                               0,
                               (__int64)&v64,
                               0) != -1073741789 )
          {
LABEL_32:
            if ( (v24 & 0x10000) == 0 )
              goto LABEL_33;
LABEL_57:
            v7 = v66;
LABEL_58:
            Length = v55;
            continue;
          }
        }
        else if ( !PnpRegistryValueExists(v57, &ValueName) )
        {
          goto LABEL_32;
        }
        if ( (v24 & 0x20000) != 0 || !v23 )
          goto LABEL_57;
      }
LABEL_33:
      v62 = 0LL;
      v25 = 0LL;
      Data = 0LL;
      RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v62);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_153;
      v26 = (ULONG *)v62;
      v27 = *((_DWORD *)v62 + 1) & 0xFFFF0000;
      MaximumLength = *((_DWORD *)v62 + 3);
      Buffer = (unsigned int *)((char *)v62 + *((unsigned int *)v62 + 2));
      v30 = (unsigned __int16)*((_DWORD *)v62 + 1);
      if ( v66
        && *(_QWORD *)(v66 + 16)
        && v30 - 1 <= 1
        && PnpValidateStringData((__int64)v62 + *((unsigned int *)v62 + 2), MaximumLength)
        && PiDevCfgParseVariableName(v37, &v74, &v59) )
      {
        Buffer = (unsigned int *)v74.Buffer;
        v62 = 0LL;
        v38 = PiDevCfgResolveVariable(v66, v74.Buffer, &v62);
        RegistryKeyInformation = v38;
        if ( v38 < 0 )
        {
          RegistryKeyInformation = 0;
          if ( v38 == -1073741772 )
            MaximumLength = v74.MaximumLength;
          else
            Buffer = 0LL;
          goto LABEL_43;
        }
        if ( (v59 & 0xC0000) == 0 )
        {
          MaximumLength = *((_DWORD *)v62 + 9);
          Buffer = (unsigned int *)*((_QWORD *)v62 + 5);
          v30 = (unsigned __int16)*((_DWORD *)v62 + 8);
          v27 |= *((_DWORD *)v62 + 8) & 0xFFFF0000;
          goto LABEL_43;
        }
        v31 = PiDevCfgResolveMultiSzValue(
                *((_DWORD *)v62 + 8),
                *((_DWORD *)v62 + 9),
                *((_WORD **)v62 + 5),
                v59,
                v57,
                ValueName.Buffer,
                &DataSize,
                &Data);
      }
      else
      {
        if ( v30 != 7 && v30 - 1 > 1 || (v27 & 0xC0000) == 0 )
          goto LABEL_43;
        v31 = PiDevCfgResolveMultiSzValue(v30, MaximumLength, Buffer, v27, v57, ValueName.Buffer, &DataSize, &Data);
      }
      v25 = Data;
      RegistryKeyInformation = v31;
      if ( v31 < 0 )
      {
        Buffer = 0LL;
        RegistryKeyInformation = 0;
      }
      else
      {
        MaximumLength = DataSize;
        v30 = 7;
        Buffer = (unsigned int *)Data;
        if ( DataSize >= 2 && !*(_WORD *)Data )
          v27 |= 0x200000u;
      }
LABEL_43:
      if ( Buffer )
      {
        if ( v30 != 0x8000 )
        {
          if ( !v30 && (v27 & 0x100000) != 0 )
            goto LABEL_116;
          v32 = v72;
          if ( !v72 )
          {
            if ( (v27 & 0x200000) != 0 )
            {
              v33 = v57;
              RegistryKeyInformation = ZwDeleteValueKey(v57, &ValueName);
              if ( RegistryKeyInformation == -1073741772 )
                RegistryKeyInformation = 0;
              goto LABEL_50;
            }
            ResultLengtha = MaximumLength;
            v33 = v57;
            v34 = ZwSetValueKey(v57, &ValueName, *v26, v30, Buffer, ResultLengtha);
            goto LABEL_49;
          }
          if ( (v27 & 0x200000) != 0 )
          {
            v44 = 0;
            P = 0LL;
            v43 = 0;
            v56 = 0;
            v64 = 0;
            v45 = 0LL;
            goto LABEL_133;
          }
          if ( v68 != 1 )
          {
            v41 = v68;
            v56 = v68;
            goto LABEL_131;
          }
          if ( v30 )
          {
            if ( v30 <= 2 )
            {
              v41 = 18;
              goto LABEL_129;
            }
            switch ( v30 )
            {
              case 4u:
                v41 = 7;
                goto LABEL_129;
              case 7u:
                v41 = 8210;
                goto LABEL_129;
              case 0xBu:
                v41 = 9;
LABEL_129:
                v56 = v41;
LABEL_131:
                v42 = PiDevCfgConvertPropertyFromValue(
                        v30,
                        MaximumLength,
                        (_DWORD)Buffer,
                        v41,
                        (__int64)&v64,
                        (__int64)&P);
                v43 = v64;
                RegistryKeyInformation = v42;
                v44 = v56;
                v45 = (unsigned int *)P;
                v32 = v72;
LABEL_133:
                if ( RegistryKeyInformation >= 0 && (v45 || !v44) )
                {
                  v46 = PiDevCfgSetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          0LL,
                          v32,
                          v69,
                          (__int64)v57,
                          ResultLength,
                          (__int64)&v82,
                          v44,
                          v45,
                          v43);
                  RegistryKeyInformation = v46;
                  if ( !v56 && v46 == -1073741275 )
                    RegistryKeyInformation = 0;
                  if ( v45 )
                  {
                    if ( v45 != Buffer )
                      ExFreePoolWithTag(v45, 0);
                    P = 0LL;
                  }
                }
                goto LABEL_116;
            }
          }
          v41 = 4099;
          goto LABEL_129;
        }
        if ( !v72 )
        {
          v33 = v57;
          if ( !v79 )
            goto LABEL_50;
          v34 = PiDevCfgPushCopyKeyEntry(v79, Buffer, v57, ((v27 & 0x20000) == 0) | 0x80000000);
LABEL_49:
          RegistryKeyInformation = v34;
LABEL_50:
          if ( v25 )
            ExFreePoolWithTag(v25, 0);
          v9 = (__int64)v72;
          if ( !v72 && v30 != 0x8000 && (v27 & 0x100000) != 0 )
          {
            if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
              v47 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
            else
              v47 = 0LL;
            RegRtlDeleteTreeInternal(v33, ValueName.Buffer, v47, 0LL);
          }
          ExFreePoolWithTag(v26, 0);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_153;
          v12 = (WCHAR *)PoolWithTag;
          i = v70;
          v8 = v69;
          goto LABEL_57;
        }
      }
LABEL_116:
      v33 = v57;
      goto LABEL_50;
    }
    if ( v14 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_9;
    }
    if ( v14 != -2147483643 )
      goto LABEL_152;
    ExFreePoolWithTag(v12, 0);
    Length = DataSize;
    v55 = DataSize;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DataSize, 0x63647050u);
    v12 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
      break;
    --i;
  }
  RegistryKeyInformation = -1073741670;
LABEL_152:
  if ( RegistryKeyInformation < 0 )
  {
LABEL_153:
    v16 = v63;
    goto LABEL_15;
  }
LABEL_9:
  if ( v9 )
    goto LABEL_153;
  v15 = v79;
  v16 = v63;
  if ( !v79 )
    goto LABEL_15;
  v17 = KeyHandlea;
  for ( j = 0; ; ++j )
  {
    v19 = ZwEnumerateKey(v17, j, KeyBasicInformation, v12, Length, &DataSize);
    RegistryKeyInformation = v19;
    if ( v19 >= 0 )
      break;
    if ( v19 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_15;
    }
    if ( v19 != -2147483643 )
      goto LABEL_15;
    ExFreePoolWithTag(v12, 0);
    Length = DataSize;
    v55 = DataSize;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DataSize, 0x63647050u);
    v12 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
    {
      RegistryKeyInformation = -1073741670;
      goto LABEL_15;
    }
    --j;
LABEL_92:
    ;
  }
  v12[((unsigned __int64)*((unsigned int *)v12 + 3) >> 1) + 8] = 0;
  RegistryKeyInformation = RtlInitUnicodeStringEx(&v80, v12 + 8);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_15;
  v78 = v80;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v17;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = &v80;
  RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_15;
  v39 = v66;
  v40 = 0LL;
  v59 = 0;
  if ( v66 && *(_QWORD *)(v66 + 16) && PiDevCfgParseVariableName(v80.Buffer, &v74, &v59) )
  {
    v62 = 0LL;
    v48 = PiDevCfgResolveVariable(v39, v74.Buffer, &v62);
    if ( v48 < 0 )
    {
      if ( v48 != -1073741772 )
        goto LABEL_162;
      v78 = v74;
    }
    else
    {
      v49 = *((_DWORD *)v62 + 8);
      if ( (unsigned int)(v49 - 1) > 1 )
      {
        if ( v49 == 7 )
        {
          v40 = (const WCHAR *)*((_QWORD *)v62 + 5);
          goto LABEL_75;
        }
LABEL_162:
        ZwClose(Handle);
        Handle = 0LL;
LABEL_91:
        Length = v55;
        goto LABEL_92;
      }
      v78.Buffer = (wchar_t *)*((_QWORD *)v62 + 5);
      v78.Length = *((_WORD *)v62 + 18) - 2;
      v78.MaximumLength = *((_WORD *)v62 + 18);
    }
  }
LABEL_75:
  RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
  if ( RegistryKeyInformation >= 0 )
  {
    v16 = v63;
  }
  else
  {
    RegistryKeyInformation = 0;
    v63 = 0LL;
    v16 = 0LL;
  }
  if ( v40 )
  {
    while ( 1 )
    {
      if ( !*v40 )
        goto LABEL_86;
      RtlInitUnicodeString(&v78, v40);
      ObjectAttributes.RootDirectory = v57;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v78;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v16;
      v50 = ZwOpenKey(&v61, 0xF003Fu, &ObjectAttributes);
      RegistryKeyInformation = v50;
      if ( v50 < 0 )
      {
        if ( v50 != -1073741772 )
          goto LABEL_86;
        if ( (v59 & 0x10000) != 0 )
        {
          RegistryKeyInformation = 0;
          goto LABEL_179;
        }
        RegistryKeyInformation = ZwCreateKey(&v61, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_86;
      }
      else if ( v16 )
      {
        ZwSetSecurityObject(v61, 4u, v16);
      }
      v51 = Handle;
      if ( !Handle )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v80;
        ObjectAttributes.RootDirectory = v17;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_184;
        v51 = Handle;
      }
      RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v15, v51, v61, a5 | 0x40000000u);
      if ( RegistryKeyInformation < 0 )
      {
LABEL_184:
        ZwClose(v61);
        goto LABEL_85;
      }
      Handle = 0LL;
      v61 = 0LL;
LABEL_179:
      v52 = -1LL;
      do
        ++v52;
      while ( v40[v52] );
      v40 += v52 + 1;
    }
  }
  ObjectAttributes.RootDirectory = v57;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &v78;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v16;
  RegistryKeyInformation = ZwCreateKey(&v61, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( RegistryKeyInformation >= 0 )
  {
    if ( Disposition == 2 && v16 )
      ZwSetSecurityObject(v61, 4u, v16);
    RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v15, Handle, v61, a5 | 0x40000000u);
    if ( RegistryKeyInformation < 0 )
      ZwClose(v61);
    Handle = 0LL;
LABEL_85:
    v61 = 0LL;
  }
LABEL_86:
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    v16 = 0LL;
    v63 = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( RegistryKeyInformation >= 0 )
    goto LABEL_91;
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v61 )
    ZwClose(v61);
  return (unsigned int)RegistryKeyInformation;
}
