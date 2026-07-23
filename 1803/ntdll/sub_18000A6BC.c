/*
 * XREFs of sub_18000A6BC @ 0x18000A6BC
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x180009D80 (RtlCheckPortableOperatingSystem.c)
 *     sub_180009E4C @ 0x180009E4C (sub_180009E4C.c)
 *     RtlQueryRegistryValuesEx @ 0x18000A0A0 (RtlQueryRegistryValuesEx.c)
 *     sub_18000A514 @ 0x18000A514 (sub_18000A514.c)
 *     RtlQueryRegistryValues @ 0x1800E7460 (RtlQueryRegistryValues.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_18000AAA8 @ 0x18000AAA8 (sub_18000AAA8.c)
 *     sub_18000AB38 @ 0x18000AB38 (sub_18000AB38.c)
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009AD20 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000A6BC(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, PVOID Environment, char a6)
{
  __int64 v6; // r15
  int v9; // r12d
  __int64 result; // rax
  int v11; // r12d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  NTSTATUS v15; // ebx
  ULONG Length; // r13d
  int v17; // eax
  const WCHAR *v18; // rdx
  int v19; // r14d
  int v20; // eax
  int v21; // eax
  int v22; // r15d
  ULONG i; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned __int32 v27; // [rsp+48h] [rbp-49h]
  NTSTATUS v28; // [rsp+48h] [rbp-49h]
  NTSTATUS v29; // [rsp+48h] [rbp-49h]
  ULONG ResultLength; // [rsp+4Ch] [rbp-45h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  v6 = a4;
  v9 = a1;
  result = sub_18000AF44(a1, a2, 0LL, &Handle);
  v27 = result;
  if ( (int)result >= 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v11 )
      v12 = 0LL;
    else
      v12 = a2;
    RtlInitUnicodeString(&DestinationString, v12);
    RegionSize = 4096LL;
    v13 = sub_18000AAA8(&RegionSize);
    v14 = v13;
    if ( v13 )
    {
      v15 = v27;
      *(_DWORD *)(v13 + 8) = 0;
      Length = RegionSize - 2;
      KeyHandle = Handle;
LABEL_6:
      if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 8) & 0x21) != 0 )
      {
        v17 = *(_DWORD *)(a3 + 8);
        if ( (v17 & 0x20) == 0 || *(_QWORD *)(a3 + 16) && (v17 & 1) == 0 && !*(_QWORD *)a3 )
        {
          if ( (v17 & 3) != 0 && KeyHandle != Handle )
          {
            ZwClose(KeyHandle);
            KeyHandle = Handle;
            v17 = *(_DWORD *)(a3 + 8);
          }
          v18 = *(const WCHAR **)(a3 + 16);
          if ( (v17 & 1) == 0 )
          {
            if ( v18 )
            {
              RtlInitUnicodeString(&ValueName, v18);
              v19 = 0;
              while ( 1 )
              {
                v20 = v19++;
                if ( v20 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
                  goto LABEL_28;
                }
                v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v14, Length, &ResultLength);
                if ( v15 == -2147483643 )
                  v15 = -1073741789;
                v28 = v15;
                if ( v15 < 0 )
                {
                  if ( v15 == -1073741772 )
                  {
                    *(_DWORD *)(v14 + 4) = 0;
                    *(_DWORD *)(v14 + 12) = 0;
                    ResultLength = Length;
                    v15 = sub_18000AB38((int)KeyHandle, a3, v14, (int)&ResultLength, v6, Environment, a6);
                    v28 = v15;
                  }
                  if ( v15 != -1073741789 )
                    goto LABEL_26;
                }
                else
                {
                  if ( *(_DWORD *)(v14 + 4) == 7 )
                  {
                    *(_WORD *)(ResultLength + v14) = 0;
                    *(_DWORD *)(v14 + 12) += 2;
                  }
                  ResultLength = Length;
                  v21 = sub_18000AB38((int)KeyHandle, a3, v14, (int)&ResultLength, v6, Environment, a6);
                  v28 = v21;
                  v15 = v21;
                  if ( v21 != -1073741789 )
                  {
                    if ( v21 < 0 )
                      goto LABEL_28;
                    if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                      ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_26:
                    if ( v15 >= 0 )
                    {
                      a3 += 56LL;
                      goto LABEL_6;
                    }
                    goto LABEL_28;
                  }
                }
                RegionSize = ResultLength + 10LL;
                v24 = sub_18000AAA8(&RegionSize);
                v15 = v28;
                v14 = v24;
                if ( !v24 )
                  goto LABEL_28;
                *(_DWORD *)(v24 + 8) = 0;
                Length = RegionSize - 2;
              }
            }
            if ( (v17 & 8) != 0 )
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      v6,
                      *(_QWORD *)(a3 + 24));
              goto LABEL_26;
            }
            goto LABEL_42;
          }
          if ( v18 )
          {
            RtlInitUnicodeString(&DestinationString, v18);
            ObjectAttributes.RootDirectory = Handle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v15 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
            if ( v15 < 0 )
              goto LABEL_28;
            if ( !*(_QWORD *)a3 )
              goto LABEL_26;
LABEL_42:
            v22 = 0;
            for ( i = 0; ; ++i )
            {
              v15 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v14, Length, &ResultLength);
              if ( v15 == -2147483643 )
                v15 = -1073741789;
              v29 = v15;
              if ( v15 == -2147483622 )
              {
                if ( i || (v15 = -1073741772, (*(_BYTE *)(a3 + 8) & 4) == 0) )
                  v15 = 0;
                goto LABEL_49;
              }
              if ( v15 >= 0 )
              {
                ResultLength = Length;
                v15 = sub_18000AB38((int)KeyHandle, a3, v14, (int)&ResultLength, a4, Environment, a6);
                v29 = v15;
              }
              if ( v15 == -1073741789 )
              {
                RegionSize = ResultLength + 10LL;
                v25 = sub_18000AAA8(&RegionSize);
                v14 = v25;
                if ( !v25 )
                {
                  v15 = v29;
                  goto LABEL_49;
                }
                *(_DWORD *)(v25 + 8) = 0;
                --i;
                v26 = v22;
                Length = RegionSize - 2;
                ++v22;
                if ( v26 > 4 )
                {
                  DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
                  v15 = v29;
LABEL_49:
                  v6 = a4;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( v15 < 0 )
                  goto LABEL_28;
                v22 = 0;
                if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
                {
                  ValueName.Buffer = (PWCH)(v14 + 20);
                  ValueName.Length = *(_WORD *)(v14 + 16);
                  ValueName.MaximumLength = *(_WORD *)(v14 + 16);
                  if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
                    --i;
                }
              }
            }
          }
        }
        v15 = -1073741811;
      }
LABEL_28:
      if ( Handle && !v11 )
        ZwClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          ZwClose(KeyHandle);
      }
      sub_18000AAA8(0LL);
      return (unsigned int)v15;
    }
    else
    {
      if ( !v11 )
        ZwClose(Handle);
      return v27;
    }
  }
  return result;
}
