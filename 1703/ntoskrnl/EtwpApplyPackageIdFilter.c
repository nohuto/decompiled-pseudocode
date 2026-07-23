/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x140712820
 * Callers:
 *     EtwpApplyTransientFilters @ 0x14045E770 (EtwpApplyTransientFilters.c)
 *     EtwpApplyScopeFilters @ 0x140480E10 (EtwpApplyScopeFilters.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140088580 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     PsQueryProcessAttributesByToken @ 0x1404F77A0 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // bl
  bool v6; // r14
  bool v7; // r12
  PACCESS_TOKEN v8; // r13
  unsigned __int16 v9; // r14
  unsigned int v10; // edi
  unsigned __int16 v11; // si
  unsigned int v12; // edi
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  ULONG_PTR PackageSize; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR AppIdSize; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR AppId[72]; // [rsp+150h] [rbp+50h] BYREF

  v3 = 0;
  v16 = a1;
  v6 = a2 == 0LL;
  v7 = a3 == 0LL;
  v8 = PsReferencePrimaryToken(*(PEPROCESS *)(a1 + 80));
  PsQueryProcessAttributesByToken((__int64)v8, &v14, v15);
  if ( v14 )
  {
    PackageSize = 256LL;
    AppIdSize = 130LL;
    if ( RtlQueryPackageIdentity(v8, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL) >= 0 )
    {
      if ( a2 )
      {
        v9 = 0;
        v10 = (PackageSize >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v9 + 4] != v10
               || wcsnicmp(*(const wchar_t **)&a2[8 * v9 + 8], PackageFullName, v10) )
          {
            if ( ++v9 >= *a2 )
              goto LABEL_8;
          }
          v6 = 1;
        }
        else
        {
LABEL_8:
          v6 = 0;
        }
      }
      if ( a3 )
      {
        v11 = 0;
        v12 = (AppIdSize >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v11 + 4] != v12 || wcsnicmp(*(const wchar_t **)&a3[8 * v11 + 8], AppId, v12) )
          {
            if ( ++v11 >= *a3 )
              goto LABEL_14;
          }
          v7 = 1;
        }
        else
        {
LABEL_14:
          v7 = 0;
        }
      }
      if ( v6 && v7 )
        v3 = 1;
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v16 + 80) + 856LL), (unsigned __int64)v8);
  return v3;
}
