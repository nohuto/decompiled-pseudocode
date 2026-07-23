/*
 * XREFs of SepIsLockedDown @ 0x1406F0554
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140545960 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 *     ExQueryFastCacheDevLicense @ 0x140456E40 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x140725434 (KIsSideloadingEnabled.c)
 */

__int64 __fastcall SepIsLockedDown(_BYTE *a1)
{
  unsigned int v1; // ebx
  NTSTATUS v3; // eax
  unsigned __int8 v5; // [rsp+50h] [rbp+8h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+18h] BYREF
  ULONG Type; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v5 = 0;
  *a1 = 1;
  if ( (unsigned __int8)SeILSigningPolicy < 2u )
  {
    *a1 = 0;
    return v1;
  }
  v1 = KIsSideloadingEnabled(&v5);
  if ( (v1 & 0x80000000) != 0 )
    return v1;
  Data = v5;
  if ( v5 )
    goto LABEL_9;
  v3 = ZwQueryLicenseValue(&stru_14033DDB8, &Type, &Data, 4u, &ResultDataSize);
  v1 = v3;
  if ( v3 != -1073741772 )
  {
    if ( v3 < 0 )
      return v1;
    if ( !Data )
      goto LABEL_8;
LABEL_9:
    *a1 = 0;
    return v1;
  }
  Data = 0;
  v1 = 0;
LABEL_8:
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v1;
}
