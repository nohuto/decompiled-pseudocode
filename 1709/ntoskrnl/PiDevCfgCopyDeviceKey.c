/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x140589CD0
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140589B60 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140589BE4 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1406C5404 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1406C7750 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgParsePropertyKeyName @ 0x14000F0D0 (PiDevCfgParsePropertyKeyName.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x140127B44 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgParseVariableName @ 0x14015798C (PiDevCfgParseVariableName.c)
 *     PnpRegistryValueExists @ 0x14015BA08 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017DB20 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14017DF00 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x140180C60 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1404522D8 (PiDevCfgConvertPropertyFromValue.c)
 *     IopGetRegistryKeyInformation @ 0x1405173D8 (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1405A0790 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x1405A096C (PiDevCfgResolveVariable.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405E6FC0 (PiDevCfgGetKeySecurityDescriptor.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        unsigned int a4,
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
  unsigned int v21; // edi
  unsigned int v22; // ebx
  bool v23; // si
  int v24; // ebx
  PVOID v25; // r12
  ULONG *v26; // r13
  unsigned int v27; // r15d
  unsigned __int64 v28; // rdi
  char *Buffer; // rsi
  ULONG v30; // r14d
  int v31; // eax
  int v32; // eax
  int v33; // edx
  char *v34; // rdi
  int v35; // eax
  bool v36; // al
  int v37; // eax
  __int64 v38; // rbx
  const WCHAR *v39; // rdi
  unsigned int v40; // r9d
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  char *v44; // rdi
  int v45; // eax
  __int64 v46; // r8
  int v47; // eax
  int v48; // edx
  NTSTATUS v49; // eax
  HANDLE v50; // rdx
  __int64 v51; // rax
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  ULONG v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v56; // [rsp+68h] [rbp-98h]
  ULONG DataSize; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v58; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v60; // [rsp+80h] [rbp-80h] BYREF
  PVOID v61; // [rsp+88h] [rbp-78h] BYREF
  PVOID v62; // [rsp+90h] [rbp-70h]
  int v63; // [rsp+98h] [rbp-68h] BYREF
  PVOID Data; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  int v67; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v68; // [rsp+C4h] [rbp-3Ch]
  ULONG v69; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-28h]
  PVOID PoolWithTag; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v73; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  ULONG Disposition; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandlea; // [rsp+138h] [rbp+38h]
  UNICODE_STRING v77; // [rsp+140h] [rbp+40h] BYREF
  HANDLE *v78; // [rsp+150h] [rbp+50h]
  UNICODE_STRING v79; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  GUID v81; // [rsp+180h] [rbp+80h] BYREF

  v7 = a7;
  KeyHandlea = KeyHandle;
  v8 = a4;
  v9 = a3;
  v78 = a6;
  v56 = a2;
  Handle = 0LL;
  v60 = 0LL;
  v62 = 0LL;
  v67 = 1;
  v68 = a4;
  v71 = a3;
  v65 = a7;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle, &P);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_19;
  Length = 2 * *((_DWORD *)P + 6) + 26;
  DataSize = 2 * *((_DWORD *)P + 9) + 18;
  if ( DataSize > Length )
    Length = DataSize;
  v54 = Length;
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
    v69 = i;
    v14 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, v12, Length, &DataSize);
    RegistryKeyInformation = v14;
    if ( v14 >= 0 )
    {
      v12[((unsigned __int64)*((unsigned int *)v12 + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v12 + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_111;
      v21 = 0;
      ValueName = DestinationString;
      v58 = 0;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 16) )
        {
          v36 = PiDevCfgParseVariableName(DestinationString.Buffer, &v73, &v58);
          v21 = v58;
          if ( v36 )
          {
            if ( (v58 & 0x400000) != 0 )
              goto LABEL_65;
            v61 = 0LL;
            v37 = PiDevCfgResolveVariable(v7, v73.Buffer, &v61);
            if ( v37 >= 0 )
            {
              if ( (unsigned int)(*((_DWORD *)v61 + 8) - 1) > 1 || *((_DWORD *)v61 + 9) > 0xFFFEu )
                goto LABEL_65;
              ValueName.Buffer = (wchar_t *)*((_QWORD *)v61 + 5);
              ValueName.Length = *((_WORD *)v61 + 18) - 2;
              ValueName.MaximumLength = *((_WORD *)v61 + 18);
            }
            else
            {
              if ( v37 != -1073741772 )
                goto LABEL_65;
              ValueName = v73;
            }
          }
        }
      }
      v22 = *((_DWORD *)v12 + 1) & 0xFFFF0000;
      v12[3] = 0;
      if ( (v22 & 0x400000) != 0 || v9 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v81, &v67) )
        goto LABEL_65;
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
                               (__int64)v56,
                               0LL,
                               (__int64)&v81,
                               (__int64)&v55,
                               0LL,
                               0,
                               (__int64)&v63,
                               0) != -1073741789 )
          {
LABEL_32:
            if ( (v24 & 0x10000) == 0 )
              goto LABEL_33;
LABEL_64:
            v7 = v65;
LABEL_65:
            Length = v54;
            continue;
          }
        }
        else if ( !PnpRegistryValueExists(v56, &ValueName) )
        {
          goto LABEL_32;
        }
        if ( (v24 & 0x20000) != 0 || !v23 )
          goto LABEL_64;
      }
LABEL_33:
      v61 = 0LL;
      v25 = 0LL;
      Data = 0LL;
      RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v61);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_111;
      v26 = (ULONG *)v61;
      v27 = *((_DWORD *)v61 + 1) & 0xFFFF0000;
      v28 = *((unsigned int *)v61 + 3);
      Buffer = (char *)v61 + *((unsigned int *)v61 + 2);
      v30 = (unsigned __int16)*((_DWORD *)v61 + 1);
      if ( v65
        && *(_QWORD *)(v65 + 16)
        && v30 - 1 <= 1
        && (unsigned int)v28 >= 2
        && !*(_WORD *)&Buffer[2 * (v28 >> 1) - 2]
        && PiDevCfgParseVariableName((char *)v61 + *((unsigned int *)v61 + 2), &v73, &v58) )
      {
        Buffer = (char *)v73.Buffer;
        v61 = 0LL;
        v32 = PiDevCfgResolveVariable(v65, v73.Buffer, &v61);
        RegistryKeyInformation = v32;
        if ( v32 < 0 )
        {
          RegistryKeyInformation = 0;
          if ( v32 == -1073741772 )
            LODWORD(v28) = v73.MaximumLength;
          else
            Buffer = 0LL;
          goto LABEL_50;
        }
        if ( (v58 & 0xC0000) == 0 )
        {
          LODWORD(v28) = *((_DWORD *)v61 + 9);
          Buffer = (char *)*((_QWORD *)v61 + 5);
          v30 = (unsigned __int16)*((_DWORD *)v61 + 8);
          v27 |= *((_DWORD *)v61 + 8) & 0xFFFF0000;
          goto LABEL_50;
        }
        ResultLength = (int)ValueName.Buffer;
        v31 = PiDevCfgResolveMultiSzValue(
                *((unsigned int *)v61 + 8),
                *((unsigned int *)v61 + 9),
                *((_QWORD *)v61 + 5),
                v58,
                v56);
      }
      else
      {
        if ( v30 != 7 && v30 - 1 > 1 || (v27 & 0xC0000) == 0 )
          goto LABEL_50;
        ResultLength = (int)ValueName.Buffer;
        v31 = PiDevCfgResolveMultiSzValue(v30, (unsigned int)v28, Buffer, v27, v56);
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
        LODWORD(v28) = DataSize;
        v30 = 7;
        Buffer = (char *)Data;
        if ( DataSize >= 2 && !*(_WORD *)Data )
          v27 |= 0x200000u;
      }
LABEL_50:
      if ( Buffer )
      {
        if ( v30 == 0x8000 )
        {
          if ( !v71 )
          {
            v34 = (char *)v56;
            if ( !v78 )
              goto LABEL_57;
            v35 = PiDevCfgPushCopyKeyEntry(v78, Buffer, v56, ((v27 & 0x20000) == 0) | 0x80000000);
            goto LABEL_56;
          }
        }
        else if ( v30 || (v27 & 0x100000) == 0 )
        {
          v33 = v71;
          if ( !v71 )
          {
            if ( (v27 & 0x200000) != 0 )
            {
              v34 = (char *)v56;
              RegistryKeyInformation = ZwDeleteValueKey(v56, &ValueName);
              if ( RegistryKeyInformation == -1073741772 )
                RegistryKeyInformation = 0;
              goto LABEL_57;
            }
            ResultLengtha = v28;
            v34 = (char *)v56;
            v35 = ZwSetValueKey(v56, &ValueName, *v26, v30, Buffer, ResultLengtha);
LABEL_56:
            RegistryKeyInformation = v35;
LABEL_57:
            if ( v25 )
              ExFreePoolWithTag(v25, 0);
            v9 = v71;
            if ( !v71 && v30 != 0x8000 && (v27 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
                v46 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
              else
                v46 = 0LL;
              RegRtlDeleteTreeInternal(v34, ValueName.Buffer, v46, 0);
            }
            ExFreePoolWithTag(v26, 0);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_111;
            v12 = (WCHAR *)PoolWithTag;
            i = v69;
            v8 = v68;
            goto LABEL_64;
          }
          if ( (v27 & 0x200000) != 0 )
          {
            v43 = 0;
            P = 0LL;
            v42 = 0;
            v55 = 0;
            v63 = 0;
            v44 = 0LL;
            goto LABEL_102;
          }
          if ( v67 != 1 )
          {
            v40 = v67;
            v55 = v67;
LABEL_101:
            v41 = PiDevCfgConvertPropertyFromValue(v30, v28, (wchar_t *)Buffer, v40, &v63, &P);
            v42 = v63;
            RegistryKeyInformation = v41;
            v43 = v55;
            v44 = (char *)P;
            v33 = v71;
LABEL_102:
            if ( RegistryKeyInformation >= 0 && (v44 || !v43) )
            {
              v45 = PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      0,
                      v33,
                      v68,
                      (__int64)v56,
                      ResultLength,
                      (__int64)&v81,
                      v43,
                      (__int64)v44,
                      v42);
              RegistryKeyInformation = v45;
              if ( v45 == -1073741790 || !v55 && v45 == -1073741275 )
                RegistryKeyInformation = 0;
              if ( v44 )
              {
                if ( v44 != Buffer )
                  ExFreePoolWithTag(v44, 0);
                P = 0LL;
              }
            }
            goto LABEL_110;
          }
          if ( v30 )
          {
            if ( v30 <= 2 )
            {
              v40 = 18;
              goto LABEL_144;
            }
            switch ( v30 )
            {
              case 4u:
                v40 = 7;
                goto LABEL_144;
              case 7u:
                v40 = 8210;
                goto LABEL_144;
              case 0xBu:
                v40 = 9;
LABEL_144:
                v55 = v40;
                goto LABEL_101;
            }
          }
          v40 = 4099;
          goto LABEL_144;
        }
      }
LABEL_110:
      v34 = (char *)v56;
      goto LABEL_57;
    }
    if ( v14 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_9;
    }
    if ( v14 != -2147483643 )
      goto LABEL_159;
    ExFreePoolWithTag(v12, 0);
    Length = DataSize;
    v54 = DataSize;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DataSize, 0x63647050u);
    v12 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
      break;
    --i;
  }
  RegistryKeyInformation = -1073741670;
LABEL_159:
  if ( RegistryKeyInformation < 0 )
    goto LABEL_111;
LABEL_9:
  if ( v9 )
  {
LABEL_111:
    v16 = v62;
    goto LABEL_15;
  }
  v15 = v78;
  v16 = v62;
  if ( v78 )
  {
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
      v54 = DataSize;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, DataSize, 0x63647050u);
      v12 = (WCHAR *)PoolWithTag;
      if ( !PoolWithTag )
      {
        RegistryKeyInformation = -1073741670;
        goto LABEL_15;
      }
      --j;
LABEL_93:
      ;
    }
    v12[((unsigned __int64)*((unsigned int *)v12 + 3) >> 1) + 8] = 0;
    RegistryKeyInformation = RtlInitUnicodeStringEx(&v79, v12 + 8);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_15;
    v77 = v79;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v17;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = &v79;
    RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_15;
    v38 = v65;
    v39 = 0LL;
    v58 = 0;
    if ( v65 && *(_QWORD *)(v65 + 16) && PiDevCfgParseVariableName(v79.Buffer, &v73, &v58) )
    {
      v61 = 0LL;
      v47 = PiDevCfgResolveVariable(v38, v73.Buffer, &v61);
      if ( v47 < 0 )
      {
        if ( v47 != -1073741772 )
          goto LABEL_169;
        v77 = v73;
      }
      else
      {
        v48 = *((_DWORD *)v61 + 8);
        if ( (unsigned int)(v48 - 1) > 1 )
        {
          if ( v48 == 7 )
          {
            v39 = (const WCHAR *)*((_QWORD *)v61 + 5);
            goto LABEL_76;
          }
LABEL_169:
          ZwClose(Handle);
          Handle = 0LL;
LABEL_92:
          Length = v54;
          goto LABEL_93;
        }
        v77.Buffer = (wchar_t *)*((_QWORD *)v61 + 5);
        v77.Length = *((_WORD *)v61 + 18) - 2;
        v77.MaximumLength = *((_WORD *)v61 + 18);
      }
    }
LABEL_76:
    RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
    if ( RegistryKeyInformation >= 0 )
    {
      v16 = v62;
    }
    else
    {
      RegistryKeyInformation = 0;
      v62 = 0LL;
      v16 = 0LL;
    }
    if ( !v39 )
    {
      ObjectAttributes.RootDirectory = v56;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v77;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v16;
      RegistryKeyInformation = ZwCreateKey(&v60, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( RegistryKeyInformation >= 0 )
      {
        if ( Disposition == 2 && v16 )
          ZwSetSecurityObject(v60, 4u, v16);
        RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v15, Handle, v60, a5 | 0x40000000u);
        if ( RegistryKeyInformation < 0 )
          ZwClose(v60);
        Handle = 0LL;
LABEL_86:
        v60 = 0LL;
      }
LABEL_87:
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
        v62 = 0LL;
      }
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      goto LABEL_92;
    }
    while ( 2 )
    {
      if ( !*v39 )
        goto LABEL_87;
      RtlInitUnicodeString(&v77, v39);
      ObjectAttributes.RootDirectory = v56;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v77;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v16;
      v49 = ZwOpenKey(&v60, 0xF003Fu, &ObjectAttributes);
      RegistryKeyInformation = v49;
      if ( v49 >= 0 )
      {
        if ( v16 )
          ZwSetSecurityObject(v60, 4u, v16);
        goto LABEL_181;
      }
      if ( v49 != -1073741772 )
        goto LABEL_87;
      if ( (v58 & 0x10000) != 0 )
      {
        RegistryKeyInformation = 0;
      }
      else
      {
        RegistryKeyInformation = ZwCreateKey(&v60, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_87;
LABEL_181:
        v50 = Handle;
        if ( !Handle )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &v79;
          ObjectAttributes.RootDirectory = v17;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_191;
          v50 = Handle;
        }
        RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v15, v50, v60, a5 | 0x40000000u);
        if ( RegistryKeyInformation < 0 )
        {
LABEL_191:
          ZwClose(v60);
          goto LABEL_86;
        }
        Handle = 0LL;
        v60 = 0LL;
      }
      v51 = -1LL;
      do
        ++v51;
      while ( v39[v51] );
      v39 += v51 + 1;
      continue;
    }
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v60 )
    ZwClose(v60);
  return (unsigned int)RegistryKeyInformation;
}
