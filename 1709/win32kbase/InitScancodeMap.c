/*
 * XREFs of InitScancodeMap @ 0x1C0062360
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     FastGetProfileValue @ 0x1C005FF30 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0060610 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

int InitScancodeMap()
{
  const WCHAR *v0; // rdi
  void *v1; // rbx
  NTSTATUS v2; // eax
  const WCHAR *v3; // rdi
  void *v4; // rax
  void *v5; // rbx
  ULONG v6; // ebx
  ULONG v7; // ebx
  void *v8; // rax
  __int64 v9; // rdi
  struct tagSCANCODEFLEXIBLEMAP *v10; // rdi
  ULONG Length; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+44h] [rbp-35h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-21h] BYREF
  ULONG Size; // [rsp+60h] [rbp-19h]
  _BYTE Size_4[12]; // [rsp+64h] [rbp-15h] BYREF
  _WORD v18[40]; // [rsp+70h] [rbp-9h] BYREF

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  v13 = gdwPolicyFlags;
  v0 = L"Scancode Map";
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v18[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v18, 40, 0);
    v0 = v18;
  }
  v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
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
        v6 = Length;
        goto LABEL_22;
      }
      if ( v2 == -2147483643 )
        break;
      if ( !v13 )
      {
        ZwClose(v1);
        goto LABEL_10;
      }
      ZwClose(v1);
      v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
      if ( !v1 )
        goto LABEL_10;
    }
    ZwClose(v1);
    v6 = Size;
LABEL_22:
    if ( v6 - 13 <= 0xFFF1 )
    {
      v8 = Win32AllocPoolZInit(v6 + 8LL, 1835234133LL);
      v9 = (__int64)v8;
      if ( v8 )
      {
        FastGetProfileValue(0LL, 8u, L"Scancode Map", 0LL, v8, v6, 0);
        gpScancodeMap = v9;
      }
    }
  }
LABEL_10:
  if ( gpFlexMap )
  {
    Win32FreePool((__int64)gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v13 = gdwPolicyFlags;
  v3 = L"Scancode Map Ex";
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v18[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v18, 40, 0);
    v3 = v18;
  }
  v4 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
  v5 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v3);
      LODWORD(v4) = ZwQueryValueKey(
                      v5,
                      &DestinationString,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      Length,
                      &Length);
      if ( (int)v4 >= 0 )
      {
        Length = Size;
        memmove(0LL, Size_4, Size);
        LODWORD(v4) = ZwClose(v5);
        v7 = Length;
        goto LABEL_25;
      }
      if ( (_DWORD)v4 == -2147483643 )
        break;
      if ( !v13 )
      {
        if ( v5 )
          LODWORD(v4) = ZwClose(v5);
        return (int)v4;
      }
      ZwClose(v5);
      v4 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
      v5 = v4;
      if ( !v4 )
        return (int)v4;
    }
    LODWORD(v4) = ZwClose(v5);
    v7 = Size;
LABEL_25:
    if ( v7 >= 0x10 && (v7 & 0xF) == 0 )
    {
      v4 = Win32AllocPoolZInit(v7, 1835234133LL);
      v10 = (struct tagSCANCODEFLEXIBLEMAP *)v4;
      if ( v4 )
      {
        LODWORD(v4) = FastGetProfileValue(0LL, 8u, L"Scancode Map Ex", 0LL, v4, v7, 0);
        gdwFlexMapSize = v7 >> 4;
        gpFlexMap = v10;
      }
    }
  }
  return (int)v4;
}
