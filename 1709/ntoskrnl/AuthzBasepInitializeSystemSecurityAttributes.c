/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x1405D05F4
 * Callers:
 *     SeRmInitPhase1 @ 0x140849C70 (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14014C0E0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  _QWORD *SecurityAttributesList; // rbx
  BOOLEAN IsMultiSessionSku; // al
  char v4; // si
  unsigned int v5; // edi
  _WORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+24h] [rbp-3Ch]
  int *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  _BOOL8 *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  _BOOL8 v17; // [rsp+88h] [rbp+28h] BYREF

  v16 = HIDWORD(a1);
  v10 = 3145774;
  v11 = L"WIN://ISMULTISESSIONSKU";
  v7[1] = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 2;
  v9 = &v10;
  v8 = 1;
  v7[0] = 1;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    LODWORD(v13) = 1;
    v4 = IsMultiSessionSku;
    LOWORD(v12) = 6;
    v17 = IsMultiSessionSku != 0;
    v14 = &v17;
    v5 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v15, (__int64)v7);
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
