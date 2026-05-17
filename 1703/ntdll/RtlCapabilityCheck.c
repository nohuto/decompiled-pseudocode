/*
 * XREFs of RtlCapabilityCheck @ 0x180047640
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800478B0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlIsMultiSessionSku @ 0x18006EB40 (RtlIsMultiSessionSku.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 __fastcall RtlCapabilityCheck(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rcx
  int v7; // ebx
  int v9; // r8d
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  _QWORD v22[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  _BYTE v26[48]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int8 v27[48]; // [rsp+E8h] [rbp-18h] BYREF

  v13 = 1280;
  v11[0] = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v10 = 0;
  v12 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    v7 = RtlDeriveCapabilitySidsFromName(a2, v26, v27);
    if ( v7 < 0 )
      goto LABEL_13;
    if ( (unsigned __int8)RtlIsMultiSessionSku()
      && (RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
          v17 = 48,
          p_DestinationString = &DestinationString,
          v18 = 0LL,
          v20 = 64,
          v21 = 0LL,
          (int)ZwOpenKey(&v14, 0x80000000LL, &v17) >= 0)
      && (int)ZwQueryValueKey(v14, a2, 2LL, v22, 16, v15) >= 0 )
    {
      RtlInitializeSid((__int64)v23, (__int64)&v12, 1u);
      v9 = 0;
      v24 = 18;
    }
    else
    {
      v7 = RtlCheckTokenMembershipEx(a1, v26, 2, &v10);
      if ( v7 < 0 )
        goto LABEL_13;
      if ( v10 )
        goto LABEL_11;
      RtlInitializeSid((__int64)v23, (__int64)&v12, 1u);
      v24 = 18;
      v7 = RtlCheckTokenMembershipEx(a1, v23, 0, &v10);
      if ( v7 < 0 )
        goto LABEL_13;
      if ( v10 )
        goto LABEL_11;
      v24 = 4;
      v9 = 2;
    }
    v7 = RtlCheckTokenMembershipEx(a1, v23, v9, &v10);
    if ( v7 >= 0 )
    {
      if ( v10
        || (RtlInitializeSid((__int64)v23, (__int64)&v12, 2u),
            v24 = 32,
            v25 = 544,
            v7 = RtlCheckTokenMembershipEx(a1, v23, 0, &v10),
            v7 >= 0)
        && v10 )
      {
LABEL_11:
        v7 = RtlCheckTokenCapability(a1, v27, v11);
        if ( v7 >= 0 )
          *a3 = v11[0];
      }
    }
LABEL_13:
    v4 = v14;
    goto LABEL_14;
  }
  v7 = -1073741811;
LABEL_14:
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v7;
}
