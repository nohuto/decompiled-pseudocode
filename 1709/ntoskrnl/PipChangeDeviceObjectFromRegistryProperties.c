/*
 * XREFs of PipChangeDeviceObjectFromRegistryProperties @ 0x1405767CC
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObSetSecurityObjectByPointer @ 0x140486290 (ObSetSecurityObjectByPointer.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140504D60 (RtlGetSaclSecurityDescriptor.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14054A09C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PipGetRegistryDwordWithFallback @ 0x140576B28 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140576C08 (PipGetRegistrySecurityWithFallback.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140576E70 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140577080 (RtlGetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall PipChangeDeviceObjectFromRegistryProperties(__int64 a1, ACL *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  int v6; // r15d
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rdx
  ACL *v10; // r13
  __int64 v11; // rax
  PSID v12; // r12
  int v13; // r14d
  char RegistryDwordWithFallback; // al
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r15d
  int v20; // edi
  __int64 v21; // rdx
  int v22; // r15d
  void *RegistrySecurityWithFallback; // rax
  void *v24; // r14
  __int64 i; // rax
  int OwnerSecurityDescriptor; // esi
  char v27; // dl
  __int64 v28; // r8
  unsigned int v30; // esi
  char v31; // r8
  void *v32; // rax
  char v33; // [rsp+40h] [rbp-71h]
  BOOLEAN OwnerDefaulted; // [rsp+41h] [rbp-70h] BYREF
  BOOLEAN SaclPresent; // [rsp+42h] [rbp-6Fh] BYREF
  char v36; // [rsp+43h] [rbp-6Eh]
  char v37; // [rsp+44h] [rbp-6Dh]
  int v38; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-65h] BYREF
  PSID Owner; // [rsp+50h] [rbp-61h] BYREF
  int v41; // [rsp+58h] [rbp-59h] BYREF
  __int64 v42; // [rsp+60h] [rbp-51h]
  ACL *v43; // [rsp+68h] [rbp-49h] BYREF
  PACL Sacl; // [rsp+70h] [rbp-41h] BYREF
  __int64 v45; // [rsp+78h] [rbp-39h]
  __int64 v46; // [rsp+80h] [rbp-31h]
  _BYTE v47[40]; // [rsp+88h] [rbp-29h] BYREF

  v5 = a1;
  v42 = a4;
  v45 = a3;
  Sacl = a2;
  v6 = a3;
  v7 = (int)a2;
  if ( a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(v8 + 48);
  v46 = a1 + 312;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 312);
  v12 = 0LL;
  v33 = 0;
  v43 = 0LL;
  Owner = 0LL;
  v13 = *(_DWORD *)(v11 + 32) & 0x800;
  v39 = 0;
  v41 = 0;
  v38 = 0;
  RegistryDwordWithFallback = PipGetRegistryDwordWithFallback(26, v9, v7, a3, a4, (__int64)&v39);
  v15 = *(_QWORD *)(v8 + 48);
  v36 = RegistryDwordWithFallback;
  v16 = PipGetRegistryDwordWithFallback(27, v15, v7, v6, v42, (__int64)&v41);
  v17 = *(_QWORD *)(v8 + 48);
  v37 = v16;
  PipGetRegistryDwordWithFallback(28, v17, v7, v6, v42, (__int64)&v38);
  if ( a5 || (v18 = *(_QWORD *)(v5 + 24)) == 0 )
    v18 = v5;
  v19 = 0;
  while ( v18 )
  {
    v19 |= *(_DWORD *)(v18 + 52);
    v18 = *(_QWORD *)(v18 + 24);
  }
  v20 = 0;
  v21 = *(_QWORD *)(v8 + 48);
  v22 = (v38 | v19) & 0x5010F;
  v38 = 0;
  RegistrySecurityWithFallback = (void *)PipGetRegistrySecurityWithFallback(
                                           v13 != 0 ? v42 : 0,
                                           v21,
                                           (_DWORD)Sacl,
                                           v13 != 0 ? v45 : 0,
                                           v42 & -(__int64)(v13 != 0));
  v24 = RegistrySecurityWithFallback;
  if ( !RegistrySecurityWithFallback )
  {
    if ( !v36 )
    {
LABEL_10:
      if ( v37 && v41 )
        *(_DWORD *)(v5 + 48) |= 8u;
      *(_DWORD *)(v5 + 52) = v22 | *(_DWORD *)(v5 + 52) & 0xFFFAFEF0;
      for ( i = *(_QWORD *)(v5 + 24); i; i = *(_QWORD *)(i + 24) )
        *(_DWORD *)(i + 52) |= v22;
      OwnerSecurityDescriptor = 0;
      if ( v24 )
        OwnerSecurityDescriptor = ObSetSecurityObjectByPointer(v5, v20, (__int64)v24);
      v27 = v33;
      v28 = v46;
      do
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 16LL) & 0x100) != 0 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 40LL) + 396LL) |= 0xC00000u;
        if ( v33 && *(_QWORD *)(v5 + 272) )
          *(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) |= 0x800u;
        v5 = *(_QWORD *)(v5 + 24);
      }
      while ( v5 );
      goto LABEL_21;
    }
    memset(v47, 0, sizeof(v47));
    v30 = v39;
    v32 = IopCreateDefaultDeviceSecurityDescriptor(v39, v22, v31, v47, &v43, (__int64)&Owner, &v38);
    v10 = v43;
    v24 = v32;
    v12 = Owner;
    if ( !v32 )
    {
      OwnerSecurityDescriptor = -1073741823;
      goto LABEL_22;
    }
    v20 = v38;
    v33 = 1;
LABEL_39:
    if ( v36 )
      *(_DWORD *)(v5 + 72) = v30;
    goto LABEL_10;
  }
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(RegistrySecurityWithFallback, &Owner, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
  {
    v27 = 0;
  }
  else
  {
    v20 = Owner != 0LL;
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(v24, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor >= 0 )
    {
      if ( Owner )
        v20 |= 2u;
      OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(v24, &SaclPresent, &Sacl, &OwnerDefaulted);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        if ( SaclPresent )
          v20 |= 8u;
        OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(v24, &SaclPresent, &Sacl, &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          v30 = v39;
          if ( SaclPresent )
            v20 |= 4u;
          goto LABEL_39;
        }
      }
    }
    v27 = 0;
  }
LABEL_21:
  if ( v24 && !v27 )
    ExFreePoolWithTag(v24, 0);
LABEL_22:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)OwnerSecurityDescriptor;
}
