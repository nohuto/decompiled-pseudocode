/*
 * XREFs of RtlCheckTokenCapability @ 0x180030720
 * Callers:
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlIsCapabilitySid @ 0x18002ECC0 (RtlIsCapabilitySid.c)
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800320D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180032130 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180032190 (RtlSetDaclSecurityDescriptor.c)
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009AAC0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x18009B0A0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009B300 (ZwDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(__int64 a1, void *a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[48]; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v25[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v26; // [rsp+128h] [rbp+28h]
  int v27[40]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v28[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v11 = 0LL;
  *a3 = 0;
  if ( !RtlIsCapabilitySid((__int64)a2) )
  {
    v9 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v11 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  v9 = ZwOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v9 == -1073741700 )
  {
    v9 = ZwOpenProcessTokenEx(-1LL, 10LL, 0LL, &v16);
    if ( v9 < 0 )
      goto LABEL_16;
    v18 = 0LL;
    v20 = 0;
    v19 = 0LL;
    v21 = 0LL;
    v22 = v25;
    v17 = 48;
    v25[0] = 12;
    v25[1] = 2;
    v26 = 1;
    v9 = ZwDuplicateToken(v16, 8LL, &v17, 0LL, 2, &v11);
    ZwClose(v16);
  }
  if ( v9 >= 0 )
  {
    v7 = v11;
LABEL_4:
    v12 = 88;
    ZwQueryInformationToken(v7, 1LL, &Src, 88LL, &v12);
    RtlCreateSecurityDescriptor(v23, 1);
    RtlSetOwnerSecurityDescriptor(v23, Src, 0LL);
    RtlSetGroupSecurityDescriptor(v23, Src, 0LL);
    RtlCreateAcl((__int64)v27, 0xA0u, 2);
    sub_180037408((int)v27, 2, 0, 65537, Src, 0);
    sub_180037408((int)v27, 2, 0, 65537, a2, 0);
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v23, v8, v27, 0LL);
    v13 = 56;
    v9 = ZwAccessCheck(v23, v11, 65537LL, &unk_180114600, v28, &v13, &v15, &v14);
    if ( v9 >= 0 )
    {
      if ( !v14 && v15 == 65537 )
        *a3 = 1;
      v9 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v9;
  }
LABEL_16:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v9;
}
