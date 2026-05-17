/*
 * XREFs of RtlCheckTokenCapability @ 0x180046650
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 * Callees:
 *     sub_180044698 @ 0x180044698 (sub_180044698.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180046440 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800464A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x180047BB0 (RtlIsCapabilitySid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180047C00 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAccessCheck @ 0x1800A5300 (ZwAccessCheck.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1800A58E0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1800A5B40 (ZwDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(__int64 a1, unsigned __int8 *a2, _BYTE *a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _DWORD *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[48]; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v24[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v25; // [rsp+128h] [rbp+28h]
  char v26[160]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v27[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v11 = 0LL;
  *a3 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(a2) )
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
    v9 = ZwOpenProcessTokenEx(-1LL, 10LL, 0LL, &v15);
    if ( v9 < 0 )
      goto LABEL_16;
    v17 = 0LL;
    v19 = 0;
    v18 = 0LL;
    v20 = 0LL;
    v21 = v24;
    v16 = 48;
    v24[0] = 12;
    v24[1] = 2;
    v25 = 1;
    v9 = ZwDuplicateToken(v15, 8LL, &v16);
    ZwClose(v15);
  }
  if ( v9 >= 0 )
  {
    v7 = 0LL;
LABEL_4:
    ZwQueryInformationToken(v7, 1LL, &Src);
    RtlCreateSecurityDescriptor(v22, 1LL);
    RtlSetOwnerSecurityDescriptor((__int64)v22, (__int64)Src, 0);
    RtlSetGroupSecurityDescriptor((__int64)v22, (__int64)Src, 0);
    RtlCreateAcl(v26, 160LL, 2LL);
    sub_180044698(v26, 2u, 0, 65537, (unsigned __int8 *)Src, 0);
    sub_180044698(v26, 2u, 0, 65537, a2, 0);
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v22, v8, v26, 0LL);
    v12 = 56;
    v9 = ZwAccessCheck(v22, v11, 65537LL, &unk_180114750, v27, &v12, &v14, &v13);
    if ( v9 >= 0 )
    {
      if ( !v13 && v14 == 65537 )
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
