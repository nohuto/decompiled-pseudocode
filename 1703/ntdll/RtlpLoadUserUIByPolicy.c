/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x18006E400
 * Callers:
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FB628 @ 0x1800FB628 (sub_1800FB628.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE CurrentUserKey; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  CurrentUserKey = 0LL;
  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      ObjectAttributes.RootDirectory = a1;
    }
    else
    {
      v8 = sub_18006E330(0x2000000u, 0LL, v6, v7, &CurrentUserKey);
      if ( v8 < 0 )
        goto LABEL_6;
      ObjectAttributes.RootDirectory = CurrentUserKey;
    }
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v8 >= 0 )
    {
      v8 = sub_1800FA3D4(KeyHandle);
      if ( !v8 )
      {
        v12 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v12 + 4) < *(_WORD *)(v12 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = 0;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
            goto LABEL_6;
          }
          v13 = sub_1800FB628(v12, v10, v11);
        }
        else
        {
          v13 = sub_180047104(1, 0, a2);
        }
        *a3 = v13;
        if ( !v13 )
        {
          v8 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_6:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( CurrentUserKey )
    sub_18006E310((char *)CurrentUserKey);
  return (unsigned int)v8;
}
