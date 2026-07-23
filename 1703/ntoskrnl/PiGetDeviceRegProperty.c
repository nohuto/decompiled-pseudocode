/*
 * XREFs of PiGetDeviceRegProperty @ 0x14055B3C0
 * Callers:
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     wcsstr @ 0x14016BDC0 (wcsstr.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PnpFindAlternateStringData @ 0x14055C104 (PnpFindAlternateStringData.c)
 *     RtlFormatMessageEx @ 0x1406E73C4 (RtlFormatMessageEx.c)
 */

__int64 __fastcall PiGetDeviceRegProperty(__int64 a1, __int64 a2, int a3, int a4, WCHAR *Src, PULONG ReturnLength)
{
  size_t v8; // r13
  int DeviceRegProp; // eax
  unsigned int v10; // ebx
  PVOID PoolWithTag; // rax
  void *v13; // rsi
  int v14; // eax
  int AlternateStringData; // eax
  wchar_t *v16; // r12
  size_t v17; // r15
  wchar_t *v18; // rax
  __int64 v19; // rcx
  char v20; // cl
  va_list v21; // r13
  const wchar_t *v22; // rcx
  unsigned int i; // r13d
  va_list v24; // rax
  __int64 v25; // rcx
  wchar_t *v26; // rax
  _PARSE_MESSAGE_CONTEXT *v27; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-98h] BYREF
  PWSTR MessageFormat; // [rsp+70h] [rbp-90h]
  PWSTR Buffer; // [rsp+78h] [rbp-88h]
  va_list Arguments[20]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(Size) = a4;
  v8 = 0LL;
  NumberOfBytes = *ReturnLength;
  Buffer = Src;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1,
                    0LL,
                    a4,
                    (__int64)&NumberOfBytes + 4,
                    (__int64)Src,
                    (__int64)&NumberOfBytes,
                    0);
  v10 = DeviceRegProp;
  if ( a3 == 1 )
  {
    if ( DeviceRegProp >= 0 )
    {
      if ( HIDWORD(NumberOfBytes) != 1 )
        return (unsigned int)-1073741584;
    }
    else if ( DeviceRegProp != -1073741789 )
    {
      return v10;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v10 == -1073741789 )
    {
      v14 = CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              a1,
              0LL,
              Size,
              (__int64)&NumberOfBytes + 4,
              (__int64)PoolWithTag,
              (__int64)&NumberOfBytes,
              0);
      v10 = v14;
      if ( v14 < 0 )
      {
        if ( v14 == -1073741789 )
          *ReturnLength = NumberOfBytes;
      }
      else
      {
        if ( HIDWORD(NumberOfBytes) == 1 )
          goto LABEL_16;
        v10 = -1073741584;
      }
LABEL_23:
      ExFreePoolWithTag(v13, 0);
      return v10;
    }
    memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
LABEL_16:
    LODWORD(Size) = NumberOfBytes;
    Str = (wchar_t *)v13;
    MessageFormat = (PWSTR)v13;
    AlternateStringData = PnpFindAlternateStringData(v13, (unsigned int)NumberOfBytes, &Str, &Size);
    v16 = Str;
    v17 = (unsigned int)Size;
    if ( AlternateStringData
      && (MessageFormat = Str, v18 = wcsstr(Str, L";("), v8 = (size_t)v18, v19 = ((unsigned int)v17 >> 1) - 2, v18)
      && v16[v19] == 41 )
    {
      *v18 = 0;
      v21 = (va_list)(v18 + 2);
      v16[v19] = 0;
      Size = (size_t)(v18 + 2);
      memset(Arguments, 0, sizeof(Arguments));
      v22 = (const wchar_t *)Size;
      Arguments[0] = v21;
      for ( i = 1; ; ++i )
      {
        v26 = wcschr(v22, 0x2Cu);
        if ( !v26 )
        {
          v8 = Size;
          goto LABEL_18;
        }
        *v26 = 0;
        v24 = (va_list)(v26 + 1);
        if ( i >= 0x13 )
          break;
        v25 = i;
        Arguments[v25] = v24;
        v22 = (const wchar_t *)v24;
      }
      v8 = Size;
      v20 = 1;
    }
    else
    {
LABEL_18:
      v20 = 0;
    }
    if ( *ReturnLength < (unsigned int)v17 )
    {
      v10 = -1073741789;
    }
    else if ( v8 )
    {
      if ( v20 )
        v10 = -1073741619;
      else
        v10 = RtlFormatMessageEx(MessageFormat, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength, v27);
    }
    else
    {
      memmove(Buffer, v16, v17);
    }
    *ReturnLength = v17;
    goto LABEL_23;
  }
  if ( DeviceRegProp >= 0 )
  {
    if ( HIDWORD(NumberOfBytes) != a3 )
      v10 = -1073741584;
    if ( (v10 & 0x80000000) == 0 )
      goto LABEL_8;
  }
  if ( v10 == -1073741789 )
LABEL_8:
    *ReturnLength = NumberOfBytes;
  return v10;
}
