/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x1405A0C10
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateMultiSzData @ 0x1401280D4 (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryString @ 0x1401333B0 (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     PnpGetObjectProperty @ 0x14052531C (PnpGetObjectProperty.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PnpRegSzToString @ 0x140555E50 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // ebx
  unsigned int *v7; // r15
  int v8; // r14d
  __int64 v9; // r8
  int ObjectProperty; // eax
  unsigned int v11; // esi
  _DWORD *p_Data1; // rdi
  int Data1_low; // ecx
  _DWORD *PoolWithTag; // rax
  PGUID v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-9h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF
  int v21; // [rsp+A0h] [rbp+17h]

  *(_QWORD *)&GuidString.Length = 0LL;
  v16 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &GuidString);
  if ( RegistryValue < 0 )
    goto LABEL_59;
  v7 = *(unsigned int **)&GuidString.Length;
  if ( !PnpValidateRegistryString(*(_DWORD **)&GuidString.Length) )
    goto LABEL_21;
  PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], (int *)&GuidString);
  GuidString.MaximumLength = *((_WORD *)v7 + 6);
  GuidString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue < 0 )
    goto LABEL_16;
  ExFreePoolWithTag(v7, 0);
  *(_QWORD *)&GuidString.Length = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &GuidString);
  if ( RegistryValue < 0 )
  {
LABEL_59:
    v7 = *(unsigned int **)&GuidString.Length;
  }
  else
  {
    v7 = *(unsigned int **)&GuidString.Length;
    if ( *(_DWORD *)(*(_QWORD *)&GuidString.Length + 4LL) != 4 || *(_DWORD *)(*(_QWORD *)&GuidString.Length + 12LL) != 4 )
      goto LABEL_21;
    v8 = 1;
    v9 = *a1;
    v21 = *(_DWORD *)(*(unsigned int *)(*(_QWORD *)&GuidString.Length + 8LL) + *(_QWORD *)&GuidString.Length);
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0LL,
                       *(_QWORD *)(v9 + 48),
                       1u,
                       0LL,
                       0LL,
                       (__int64)&Guid,
                       (__int64)&v18,
                       (PVOID *)&v16,
                       &GuidString,
                       0);
    RegistryValue = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( ObjectProperty == -1073741275 )
      {
        RegistryValue = 0;
        goto LABEL_58;
      }
    }
    else
    {
      if ( (unsigned int)v18 > 0x2012 )
        goto LABEL_47;
      if ( (_DWORD)v18 == 8210 )
      {
        v11 = *(_DWORD *)&GuidString.Length;
        if ( PnpValidateMultiSzData(v16, *(unsigned int *)&GuidString.Length) )
        {
          v8 = 7;
          goto LABEL_48;
        }
        goto LABEL_21;
      }
      if ( (unsigned int)v18 > 0xD )
      {
        if ( (_DWORD)v18 == 18 )
        {
LABEL_12:
          v11 = *(_DWORD *)&GuidString.Length;
          if ( *(_DWORD *)&GuidString.Length >= 2u )
          {
            p_Data1 = &v16->Data1;
            if ( !*((_WORD *)v16 + ((unsigned __int64)*(unsigned int *)&GuidString.Length >> 1) - 1) )
              goto LABEL_14;
          }
          goto LABEL_21;
        }
        if ( (_DWORD)v18 != 17 )
        {
          if ( (_DWORD)v18 == 20 )
            goto LABEL_12;
          if ( (unsigned int)v18 <= 0x15 )
            goto LABEL_47;
          if ( (unsigned int)v18 > 0x18 )
          {
            if ( (_DWORD)v18 == 25 )
              goto LABEL_12;
            goto LABEL_47;
          }
          goto LABEL_49;
        }
        if ( *(_DWORD *)&GuidString.Length != 1 )
          goto LABEL_21;
        v8 = 4;
        v11 = 4;
        p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
        if ( p_Data1 )
        {
          Data1_low = LOBYTE(v16->Data1) == 0xFF;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v18 != 13 )
      {
        if ( (unsigned int)v18 <= 5 )
        {
          if ( (unsigned int)v18 >= 4 )
          {
            if ( *(_DWORD *)&GuidString.Length != 2 )
              goto LABEL_21;
            v8 = 4;
            v11 = 4;
            p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( p_Data1 )
            {
              Data1_low = LOWORD(v16->Data1);
              goto LABEL_30;
            }
LABEL_29:
            RegistryValue = -1073741670;
            goto LABEL_16;
          }
          if ( (unsigned int)v18 > 1 )
          {
            if ( *(_DWORD *)&GuidString.Length != 1 )
              goto LABEL_21;
            v8 = 4;
            v11 = 4;
            p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( p_Data1 )
            {
              Data1_low = LOBYTE(v16->Data1);
LABEL_30:
              *p_Data1 = Data1_low;
              goto LABEL_15;
            }
            goto LABEL_29;
          }
LABEL_58:
          p_Data1 = 0LL;
          v11 = 0;
          v8 = 0;
          goto LABEL_15;
        }
        if ( (unsigned int)v18 <= 7 )
        {
LABEL_49:
          if ( *(_DWORD *)&GuidString.Length == 4 )
          {
            v8 = 4;
            v11 = 4;
            goto LABEL_48;
          }
          goto LABEL_21;
        }
        if ( (unsigned int)v18 <= 9 )
        {
          v11 = 8;
          if ( *(_DWORD *)&GuidString.Length == 8 )
          {
            v8 = 11;
LABEL_48:
            p_Data1 = &v16->Data1;
LABEL_14:
            v16 = 0LL;
LABEL_15:
            *(_DWORD *)(a3 + 32) = v8;
            *(_DWORD *)(a3 + 36) = v11;
            *(_QWORD *)(a3 + 40) = p_Data1;
            goto LABEL_16;
          }
LABEL_21:
          RegistryValue = -1073741823;
          goto LABEL_16;
        }
LABEL_47:
        v11 = *(_DWORD *)&GuidString.Length;
        v8 = 3;
        goto LABEL_48;
      }
      if ( *(_DWORD *)&GuidString.Length != 16 )
        goto LABEL_21;
      RegistryValue = RtlStringFromGUIDEx(v16, &UnicodeString, 1u);
      if ( RegistryValue >= 0 )
      {
        v11 = UnicodeString.Length + 2;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
        p_Data1 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, UnicodeString.Buffer, v11);
          goto LABEL_15;
        }
        goto LABEL_29;
      }
    }
  }
LABEL_16:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
