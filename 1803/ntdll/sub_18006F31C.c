/*
 * XREFs of sub_18006F31C @ 0x18006F31C
 * Callers:
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18006EB70 @ 0x18006EB70 (sub_18006EB70.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006E970 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006F7EC @ 0x18006F7EC (sub_18006F7EC.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FA90 (RtlpLoadUserUIByPolicy.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800F82F0 @ 0x1800F82F0 (sub_1800F82F0.c)
 */

__int64 __fastcall sub_18006F31C(__int64 a1, int a2, unsigned int a3, int a4, _BYTE *a5, _QWORD *a6)
{
  _BYTE *v6; // rdi
  BOOL v8; // r15d
  PVOID v10; // r12
  HANDLE v11; // rcx
  int v12; // ebx
  const WCHAR *v13; // rdx
  int v14; // ecx
  WCHAR *Heap; // rsi
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  _DWORD v21[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE CurrentUserKey; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v24; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING ValueName; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v28; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES v29; // [rsp+F0h] [rbp-10h] BYREF
  _OBJECT_ATTRIBUTES v30; // [rsp+120h] [rbp+20h] BYREF
  __int64 v31; // [rsp+190h] [rbp+90h] BYREF
  int v32; // [rsp+198h] [rbp+98h]
  int v33; // [rsp+1A0h] [rbp+A0h]

  v32 = a2;
  v6 = a5;
  CurrentUserKey = 0LL;
  *(_QWORD *)&v21[1] = 0LL;
  v8 = a3;
  KeyHandle = 0LL;
  v33 = 7;
  v10 = 0LL;
  LODWORD(v31) = 0;
  v19 = 0LL;
  LOBYTE(v32) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v12 = -1073741811;
LABEL_53:
    if ( v12 )
    {
LABEL_23:
      if ( v10 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      goto LABEL_25;
    }
LABEL_18:
    Heap = 0LL;
    if ( v8 || v19 && *(_WORD *)(v19 + 4) )
    {
LABEL_19:
      if ( !v19 )
      {
        v19 = sub_180032BDC(1, !v8, a1);
        if ( !v19 )
          v12 = -1073741801;
      }
      goto LABEL_22;
    }
    v12 = 0;
    v20 = 7;
    v24 = 0LL;
    v21[0] = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v24 = 0LL;
      v30.ObjectName = &ValueName;
      v30.Length = 48;
      v30.RootDirectory = 0LL;
      v30.Attributes = 64;
      *(_OWORD *)&v30.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&v24, 0x20019u, &v30) < 0 )
        goto LABEL_40;
      RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
      v17 = sub_18006F7EC(v24, &ValueName, (__int64)v21);
      if ( v17 == -1073741772 || !v21[0] )
        goto LABEL_40;
      if ( v17 == -2147483643 )
      {
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v21[0] + 2));
        if ( !Heap )
        {
          v12 = -1073741801;
          goto LABEL_41;
        }
        v12 = sub_18006F7EC(v24, &ValueName, (__int64)v21);
        if ( v12 >= 0 )
        {
          if ( v20 != 7 && v20 != 1 )
          {
            v12 = 0;
LABEL_40:
            *v6 = 1;
            goto LABEL_41;
          }
          v18 = v21[0] >> 1;
          *v6 = 0;
          v12 = sub_180035E90(a1, Heap, v18, 8, 3, 1u, &v19);
        }
      }
      else
      {
        v12 = -1073741772;
      }
    }
    else
    {
      v12 = -1073741811;
    }
LABEL_41:
    if ( v24 )
      ZwClose(v24);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v12 )
      goto LABEL_22;
    goto LABEL_19;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v12 = RtlpLoadMachineUIByPolicy(KeyHandle, a1, &v19);
    if ( !v12 && v19 )
      goto LABEL_18;
    v11 = KeyHandle;
  }
  else
  {
    v11 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v8 && v11 && (int)sub_1800F82F0(v11) >= 0 )
    v8 = (_BYTE)v32 != 1;
  v12 = sub_18006F938(0x2000000u, &CurrentUserKey);
  if ( v12 < 0 )
  {
LABEL_55:
    *v6 = 1;
    goto LABEL_53;
  }
  if ( v8 )
  {
    v12 = RtlpLoadUserUIByPolicy(CurrentUserKey, a1, &v19);
    if ( !v12 )
    {
      if ( v19 )
      {
LABEL_22:
        *a6 = v19;
        goto LABEL_23;
      }
    }
  }
  *(_QWORD *)&v21[1] = 0LL;
  if ( v8 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v28.RootDirectory = CurrentUserKey;
    v28.Length = 48;
    v28.ObjectName = &DestinationString;
    v28.Attributes = 64;
    *(_OWORD *)&v28.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey((PHANDLE)&v21[1], 0x20019u, &v28);
    if ( v12 >= 0 )
    {
      v13 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v13 = L"PreferredUILanguagesPending";
      goto LABEL_16;
    }
    goto LABEL_55;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v29.RootDirectory = CurrentUserKey;
  v29.Length = 48;
  v29.ObjectName = &DestinationString;
  v29.Attributes = 64;
  *(_OWORD *)&v29.SecurityDescriptor = 0LL;
  if ( ZwOpenKey((PHANDLE)&v21[1], 0x20019u, &v29) < 0 )
    goto LABEL_17;
  v13 = L"MachinePreferredUILanguages";
LABEL_16:
  RtlInitUnicodeString(&DestinationString, v13);
  v12 = -1073741772;
  v14 = sub_18006F7EC(*(HANDLE *)&v21[1], &DestinationString, (__int64)&v31);
  if ( v14 == -1073741772 || !(_DWORD)v31 )
    goto LABEL_17;
  if ( v14 == -2147483643 )
  {
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v31 + 2));
    if ( v10 )
    {
      v12 = sub_18006F7EC(*(HANDLE *)&v21[1], &DestinationString, (__int64)&v31);
      if ( v12 < 0 )
        goto LABEL_53;
      if ( v33 == 7 || v33 == 1 )
      {
        v12 = sub_180035E90(a1, (const WCHAR *)v10, (unsigned int)v31 >> 1, 8, (unsigned int)!v8 + 2, 1u, &v19);
        goto LABEL_53;
      }
LABEL_17:
      v12 = 0;
      *v6 = 1;
      goto LABEL_18;
    }
    v12 = -1073741801;
  }
LABEL_25:
  if ( *(_QWORD *)&v21[1] )
  {
    ZwClose(*(HANDLE *)&v21[1]);
    *(_QWORD *)&v21[1] = 0LL;
  }
  if ( CurrentUserKey )
  {
    sub_18006F918(CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v12;
}
