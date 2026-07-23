/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x1406312F8
 * Callers:
 *     SeRmInitPhase1 @ 0x1408B209C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140178488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  _QWORD *SecurityAttributesList; // rbx
  BOOLEAN IsMultiSessionSku; // al
  char v4; // si
  unsigned int v5; // edi
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  _BOOL8 *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+84h] [rbp+24h]
  _BOOL8 v15; // [rsp+88h] [rbp+28h] BYREF

  v14 = HIDWORD(a1);
  v8 = 3145774;
  v9 = L"WIN://ISMULTISESSIONSKU";
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 2;
  v7[1] = &v8;
  v7[0] = 0x100000001LL;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    LODWORD(v11) = 1;
    v4 = IsMultiSessionSku;
    LOWORD(v10) = 6;
    v15 = IsMultiSessionSku != 0;
    v12 = &v15;
    v5 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v13, (__int64)v7);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v5 = -1073741823;
    }
    else
    {
      SecurityAttributesList = 0LL;
      SepAllowAccessUponLogoff = v4;
    }
    if ( SecurityAttributesList )
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
