/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x140593178
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PiDevCfgParseVariableName @ 0x140150470 (PiDevCfgParseVariableName.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1401F961C (PiDevCfgParseInterfaceKeyName.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404E3388 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1406995DC (PiDevCfgConfigureDeviceInterface.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(__int64 a1, void *a2, __int64 a3)
{
  const WCHAR *v3; // rdi
  NTSTATUS v6; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v9; // eax
  wchar_t *PoolWithTag; // rsi
  ULONG v11; // r12d
  NTSTATUS i; // eax
  int v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v23; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v24; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v27[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING v29; // [rsp+100h] [rbp+0h] BYREF
  GUID v30; // [rsp+110h] [rbp+10h] BYREF

  v3 = 0LL;
  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  v23.Buffer = L"Interfaces";
  v22 = 0LL;
  P = 0LL;
  *(_DWORD *)&v23.Length = 1441812;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &v23;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v6;
  if ( v6 == -1073741772 )
  {
    MatchingFilteredDeviceInterfaceList = 0;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_3;
  *(_DWORD *)&v23.Length = 262146;
  v23.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  Handle = 0LL;
  ObjectAttributes.ObjectName = &v23;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v9;
  if ( v9 == -1073741772 )
    goto LABEL_13;
  if ( v9 < 0 )
    goto LABEL_3;
  v27[0] = Handle;
  v27[1] = a3;
  v28 = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          0LL,
                                          a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)v27,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v28;
    if ( v28 >= 0 )
    {
LABEL_13:
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x26EuLL, 0x63647050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_3;
      }
      v11 = 0;
      for ( i = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x26Eu, &ResultLength);
            ;
            i = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, PoolWithTag, 0x26Eu, &ResultLength) )
      {
        MatchingFilteredDeviceInterfaceList = i;
        if ( i < 0 )
        {
          if ( i == -2147483622 )
          {
            MatchingFilteredDeviceInterfaceList = 0;
          }
          else if ( i == -2147483643 )
          {
            MatchingFilteredDeviceInterfaceList = -1073741773;
          }
          goto LABEL_51;
        }
        PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
        if ( wcsicmp(PoolWithTag + 8, L"*") )
          break;
LABEL_45:
        ++v11;
      }
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag + 8);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_51;
      v24 = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_51;
      LODWORD(v21) = 0;
      if ( !a3 || !*(_QWORD *)(a3 + 16) || !PiDevCfgParseVariableName(DestinationString.Buffer, &v29, &v21) )
        goto LABEL_39;
      v21 = 0LL;
      v13 = PiDevCfgResolveVariable(a3, v29.Buffer, &v21);
      MatchingFilteredDeviceInterfaceList = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741772 )
        {
          v24 = v29;
          goto LABEL_39;
        }
      }
      else
      {
        v14 = *(_DWORD *)(v21 + 32);
        if ( (unsigned int)(v14 - 1) <= 1 )
        {
          v15 = *(_WORD *)(v21 + 36);
          v24.Buffer = *(wchar_t **)(v21 + 40);
          v24.MaximumLength = v15;
          v24.Length = v15 - 2;
LABEL_28:
          if ( v3 )
          {
            if ( *v3 )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v23, v3);
                if ( PiDevCfgParseInterfaceKeyName((__int64)&v23, &v30, &v22) )
                {
                  MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(a1, (int *)&v30, v22, 1, &P, 0LL);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                  MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface(P, Handle, a3);
                  ExFreePoolWithTag(P, 0);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                }
                v16 = -1LL;
                do
                  ++v16;
                while ( v3[v16] );
                v3 += v16 + 1;
                if ( !*v3 )
                  goto LABEL_36;
              }
LABEL_51:
              ExFreePoolWithTag(PoolWithTag, 0);
LABEL_3:
              if ( Handle )
                ZwClose(Handle);
              goto LABEL_5;
            }
LABEL_36:
            v3 = 0LL;
            goto LABEL_42;
          }
LABEL_39:
          v3 = 0LL;
          if ( !PiDevCfgParseInterfaceKeyName((__int64)&v24, &v30, &v22) )
          {
LABEL_43:
            ZwClose(Handle);
            goto LABEL_44;
          }
          MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(a1, (int *)&v30, v22, 1, &P, 0LL);
          if ( MatchingFilteredDeviceInterfaceList < 0 )
            goto LABEL_51;
          MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface(P, Handle, a3);
          ExFreePoolWithTag(P, 0);
LABEL_42:
          if ( MatchingFilteredDeviceInterfaceList < 0 )
            goto LABEL_51;
          goto LABEL_43;
        }
        if ( v14 == 7 )
        {
          v3 = *(const WCHAR **)(v21 + 40);
          goto LABEL_28;
        }
      }
      ZwClose(Handle);
      v3 = 0LL;
LABEL_44:
      Handle = 0LL;
      goto LABEL_45;
    }
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
