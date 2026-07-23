/*
 * XREFs of sub_18006DDE4 @ 0x18006DDE4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18006DBCC @ 0x18006DBCC (sub_18006DBCC.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18006C31C @ 0x18006C31C (sub_18006C31C.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006C490 (RtlpLoadMachineUIByPolicy.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006E400 (RtlpLoadUserUIByPolicy.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800FA340 @ 0x1800FA340 (sub_1800FA340.c)
 */

__int64 __fastcall sub_18006DDE4(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5, __int64 *a6)
{
  _BYTE *v6; // rsi
  BOOL v8; // r14d
  WCHAR *Heap; // r15
  __int64 v11; // rdi
  HANDLE v12; // rcx
  int v13; // ebx
  int v14; // eax
  const WCHAR *v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-99h] BYREF
  HANDLE CurrentUserKey; // [rsp+58h] [rbp-91h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-89h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-79h] BYREF
  _OBJECT_ATTRIBUTES v28; // [rsp+A0h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES v29; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v30; // [rsp+140h] [rbp+57h] BYREF
  int v31; // [rsp+148h] [rbp+5Fh]
  int v32; // [rsp+150h] [rbp+67h]

  v31 = a2;
  v6 = a5;
  CurrentUserKey = 0LL;
  Handle = 0LL;
  v8 = a3;
  KeyHandle = 0LL;
  v32 = 7;
  Heap = 0LL;
  LODWORD(v30) = 0;
  v11 = 0LL;
  v22 = 0LL;
  LOBYTE(v31) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    v13 = -1073741811;
    goto LABEL_40;
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
    v21 = RtlpLoadMachineUIByPolicy(KeyHandle, a1, &v22);
    v11 = v22;
    v13 = v21;
    if ( !v21 && v22 )
    {
LABEL_18:
      if ( v8 || v11 && *(_WORD *)(v11 + 4) || (v20 = sub_18006C31C(a1, a2, v6, &v22), v11 = v22, (v13 = v20) == 0) )
      {
        if ( !v11 )
        {
          v17 = sub_180047104(1, !v8, a1);
          v18 = v13;
          v11 = v17;
          if ( !v17 )
            v18 = -1073741801;
          v13 = v18;
        }
      }
      goto LABEL_23;
    }
    v12 = KeyHandle;
  }
  else
  {
    v12 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v8 && v12 && (int)sub_1800FA340(v12) >= 0 )
    v8 = (_BYTE)v31 != 1;
  v13 = sub_18006E330(0x2000000u, &CurrentUserKey);
  if ( v13 < 0 )
    goto LABEL_48;
  if ( v8 )
  {
    v14 = RtlpLoadUserUIByPolicy(CurrentUserKey, a1, &v22);
    v11 = v22;
    v13 = v14;
    if ( !v14 && v22 )
    {
LABEL_23:
      *a6 = v11;
      goto LABEL_24;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    Handle = 0LL;
    v28.RootDirectory = CurrentUserKey;
    v28.Length = 48;
    v28.ObjectName = &DestinationString;
    v28.Attributes = 64;
    *(_OWORD *)&v28.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&Handle, 0x20019u, &v28);
    if ( v13 >= 0 )
    {
      v15 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v15 = L"PreferredUILanguagesPending";
      RtlInitUnicodeString(&DestinationString, v15);
      goto LABEL_16;
    }
LABEL_48:
    *v6 = 1;
    goto LABEL_40;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v29.RootDirectory = CurrentUserKey;
  v29.Length = 48;
  v29.ObjectName = &DestinationString;
  v29.Attributes = 64;
  Handle = 0LL;
  *(_OWORD *)&v29.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &v29) < 0 )
  {
LABEL_17:
    v13 = 0;
    *v6 = 1;
    goto LABEL_18;
  }
  RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
LABEL_16:
  v13 = -1073741772;
  v16 = sub_18006E1E4(Handle, &DestinationString, (__int64)&v30);
  if ( v16 == -1073741772 || !(_DWORD)v30 )
    goto LABEL_17;
  if ( v16 == -2147483643 )
  {
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v30 + 2));
    if ( Heap )
    {
      v13 = sub_18006E1E4(Handle, &DestinationString, (__int64)&v30);
      if ( v13 >= 0 )
      {
        if ( v32 != 7 && v32 != 1 )
        {
          v11 = v22;
          v13 = 0;
          *v6 = 1;
          goto LABEL_18;
        }
        v13 = sub_180045810(a1, Heap, (unsigned int)v30 >> 1, 8, (unsigned int)!v8 + 2, 1u, &v22);
      }
      v11 = v22;
LABEL_40:
      if ( v13 )
      {
LABEL_24:
        if ( Heap )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_26;
      }
      goto LABEL_18;
    }
    v13 = -1073741801;
  }
LABEL_26:
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( CurrentUserKey )
  {
    sub_18006E310(CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v13;
}
