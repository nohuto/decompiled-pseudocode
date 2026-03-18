/*
 * XREFs of InitScancodeMap @ 0x1C0070380
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     FastGetProfileValue @ 0x1C00735B0 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0073FB0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

int InitScancodeMap()
{
  const WCHAR *v0; // rdi
  void *v1; // rbx
  NTSTATUS v2; // eax
  ULONG v3; // ebx
  const WCHAR *v4; // rdi
  void *v5; // rax
  void *v6; // rbx
  ULONG v7; // ebx
  void *v8; // rax
  __int64 v9; // rdi
  struct tagSCANCODEFLEXIBLEMAP *v10; // rdi
  PULONG ResultLength; // [rsp+28h] [rbp-51h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-51h]
  ULONG Length; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+44h] [rbp-35h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-21h] BYREF
  ULONG Size; // [rsp+60h] [rbp-19h]
  _BYTE Size_4[12]; // [rsp+64h] [rbp-15h] BYREF
  _WORD v20[40]; // [rsp+70h] [rbp-9h] BYREF

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  v15 = gdwPolicyFlags;
  v0 = L"Scancode Map";
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v20[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v20);
    v0 = v20;
  }
  v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
  if ( v1 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v0);
      v2 = ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
      if ( v2 >= 0 )
      {
        Length = Size;
        memmove(0LL, Size_4, Size);
        ZwClose(v1);
        v3 = Length;
        goto LABEL_11;
      }
      if ( v2 == -2147483643 )
        break;
      if ( !v15 )
      {
        ZwClose(v1);
        goto LABEL_12;
      }
      ZwClose(v1);
      v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
      if ( !v1 )
        goto LABEL_12;
    }
    ZwClose(v1);
    v3 = Size;
LABEL_11:
    if ( v3 - 13 <= 0xFFF1 )
    {
      v8 = Win32AllocPoolZInit(v3 + 8LL, 1835234133LL);
      v9 = (__int64)v8;
      if ( v8 )
      {
        LODWORD(ResultLength) = v3;
        FastGetProfileValue(0LL, v8, (size_t)ResultLength, 0);
        gpScancodeMap = v9;
      }
    }
  }
LABEL_12:
  if ( gpFlexMap )
  {
    Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v15 = gdwPolicyFlags;
  v4 = L"Scancode Map Ex";
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v20[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v20);
    v4 = v20;
  }
  v5 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
  v6 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v4);
      LODWORD(v5) = ZwQueryValueKey(
                      v6,
                      &DestinationString,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      Length,
                      &Length);
      if ( (int)v5 >= 0 )
      {
        Length = Size;
        memmove(0LL, Size_4, Size);
        LODWORD(v5) = ZwClose(v6);
        v7 = Length;
        goto LABEL_23;
      }
      if ( (_DWORD)v5 == -2147483643 )
        break;
      if ( !v15 )
      {
        if ( v6 )
          LODWORD(v5) = ZwClose(v6);
        return (int)v5;
      }
      ZwClose(v6);
      v5 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v15);
      v6 = v5;
      if ( !v5 )
        return (int)v5;
    }
    LODWORD(v5) = ZwClose(v6);
    v7 = Size;
LABEL_23:
    if ( v7 >= 0x10 && (v7 & 0xF) == 0 )
    {
      v5 = Win32AllocPoolZInit(v7, 1835234133LL);
      v10 = (struct tagSCANCODEFLEXIBLEMAP *)v5;
      if ( v5 )
      {
        LODWORD(ResultLengtha) = v7;
        LODWORD(v5) = FastGetProfileValue(0LL, v5, (size_t)ResultLengtha, 0);
        gdwFlexMapSize = v7 >> 4;
        gpFlexMap = v10;
      }
    }
  }
  return (int)v5;
}
