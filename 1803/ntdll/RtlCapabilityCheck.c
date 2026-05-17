/*
 * XREFs of RtlCapabilityCheck @ 0x180043D40
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1800867B0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180035010 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x180044370 (RtlIsMultiSessionSku.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall RtlCapabilityCheck(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // r8
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h]
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  _QWORD v25[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  _BYTE v29[48]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v30[48]; // [rsp+E0h] [rbp-20h] BYREF

  v16 = 1280;
  v14[0] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v25[0] = 0LL;
  v25[1] = 0LL;
  v13 = 0;
  v15 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    v7 = RtlDeriveCapabilitySidsFromName(a2, (__int64)v29, (__int64)v30);
    if ( v7 < 0 )
      goto LABEL_16;
    if ( (unsigned __int8)RtlIsMultiSessionSku()
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          v20 = 48,
          p_DestinationString = &DestinationString,
          v21 = 0LL,
          v23 = 64,
          v24 = 0LL,
          (int)ZwOpenKey(&v17, 0x80000000LL, &v20) >= 0)
      && (int)ZwQueryValueKey(v17, a2, 2LL, v25, 16, v18) >= 0 )
    {
      LOBYTE(v8) = 1;
      RtlInitializeSid(v26, &v15, v8);
      v10 = 0;
      v27 = 18;
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(a1, v29, 2, &v13);
      if ( v7 < 0 )
        goto LABEL_16;
      if ( v13 )
        goto LABEL_14;
      LOBYTE(v9) = 1;
      RtlInitializeSid(v26, &v15, v9);
      v27 = 18;
      v7 = RtlCheckTokenMembershipEx(a1, v26, 0, &v13);
      if ( v7 < 0 )
        goto LABEL_16;
      if ( v13 )
        goto LABEL_14;
      v27 = 4;
      v10 = 2;
    }
    v7 = RtlCheckTokenMembershipEx(a1, v26, v10, &v13);
    if ( v7 >= 0 )
    {
      if ( v13
        || (LOBYTE(v11) = 2,
            RtlInitializeSid(v26, &v15, v11),
            v27 = 32,
            v28 = 544,
            v7 = RtlCheckTokenMembershipEx(a1, v26, 0, &v13),
            v7 >= 0)
        && v13 )
      {
LABEL_14:
        v7 = RtlCheckTokenCapability(a1, v30, v14);
        if ( v7 >= 0 )
          *a3 = v14[0];
      }
    }
LABEL_16:
    v4 = v17;
    goto LABEL_17;
  }
  v7 = -1073741811;
LABEL_17:
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v7;
}
