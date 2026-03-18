/*
 * XREFs of HUBID_BuildClassCompatibleID @ 0x1C00183EC
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x1C0018754 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C0010A34 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x1C0017B38 (HUBID_AssignIDString.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002B820 (HUBMISC_GenerateControllerSuffix.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildClassCompatibleID(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 *v6; // rax
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r14
  unsigned __int16 v9; // r15
  __int64 v10; // rax
  int result; // eax
  _BYTE *v12; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v15; // [rsp+90h] [rbp-70h] BYREF
  char v16; // [rsp+A0h] [rbp-60h] BYREF
  char v17; // [rsp+B0h] [rbp-50h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v17;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  v6 = *(unsigned __int8 **)(a1 + 2008);
  if ( v6 )
  {
    v7 = v6[5];
    v8 = v6[6];
    v9 = v6[7];
  }
  else
  {
    v9 = 0;
    v8 = 0;
    v7 = 0;
  }
  if ( (*(_DWORD *)(a1 + 2464) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 2496);
    if ( *(_BYTE *)(v10 + 12) )
    {
      if ( *(_BYTE *)(v10 + 4) )
      {
        result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S");
        if ( result < 0 )
          return result;
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result < 0 )
          return result;
      }
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2496) + 4LL);
  }
  else
  {
    v12 = *(_BYTE **)(a1 + 2104);
    if ( !v12 )
      goto LABEL_20;
    if ( v12[26] )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S", v12 + 18);
      if ( result < 0 )
        return result;
      result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
      if ( result < 0 )
        return result;
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2104) + 18LL);
  }
  if ( *v12 )
  {
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S");
    if ( result < 0 )
      return result;
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result < 0 )
      return result;
  }
LABEL_20:
  if ( v7 == 1 && (v9 & 0xFFDF) == 0 && (*(_DWORD *)(a1 + 1644) & 0x1000000) != 0 )
  {
    v14[0] = 0x100000LL;
    *(_QWORD *)&v15.Length = 0LL;
    v15.Buffer = 0LL;
    v14[1] = &v16;
    HUBMISC_GenerateControllerSuffix(a1, v14, v12);
    if ( !LOWORD(v14[0]) )
    {
LABEL_27:
      if ( v15.Buffer )
        ExFreePoolWithTag(v15.Buffer, 0x64334855u);
      goto LABEL_29;
    }
    v15.Buffer = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xC0uLL, 0x64334855u);
    if ( v15.Buffer )
    {
      v15.MaximumLength = 192;
      if ( RtlUnicodeStringPrintf(
             &v15,
             L"USB\\Class_%02X&Subclass_%02X&Prot_%02X&%wZ%cUSB\\Class_%02X&Subclass_%02X&%wZ%cUSB\\Class_%02X&%wZ") >= 0 )
        HUBID_AssignIDString((const void **)&v15, 2, a2, (__int64)a3);
      goto LABEL_27;
    }
  }
LABEL_29:
  result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X&SubClass_%02X&Prot_%02X", v7, v8, v9);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result >= 0 )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X&SubClass_%02X", v7, v8);
      if ( result >= 0 )
      {
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result >= 0 )
        {
          result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X", v7);
          if ( result >= 0 )
            return HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        }
      }
    }
  }
  return result;
}
