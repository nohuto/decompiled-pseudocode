/*
 * XREFs of PopVerifyPowerActionPolicy @ 0x1405B977C
 * Callers:
 *     PopVerifySystemPowerPolicy @ 0x1405B94B4 (PopVerifySystemPowerPolicy.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PdcPoVerifyActionPolicy @ 0x1406FF530 (PdcPoVerifyActionPolicy.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1404E8714 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 *     PopIsHiberbootSupported @ 0x1406F5144 (PopIsHiberbootSupported.c)
 */

char __fastcall PopVerifyPowerActionPolicy(int *a1)
{
  char v1; // di
  int v3; // eax
  char IsHiberbootSupported; // al
  int v5; // r9d
  int v6; // r10d
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  v3 = a1[1];
  if ( (v3 & 0xFFFFFC0) != 0 )
    return 0;
  if ( v3 < 0 )
    a1[1] = v3 & 0xFFFFFFF8 | 4;
  if ( (int)PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v12) >= 0 )
  {
    if ( (a1[1] & 8) != 0 )
      IsHiberbootSupported = PopIsHiberbootSupported(v12);
    else
      IsHiberbootSupported = PopIsHibernateSupported(v12);
    while ( 1 )
    {
      v7 = *a1;
      if ( *a1 == v5 )
        break;
      v8 = *a1 - v5 - v5;
      if ( !v8 )
        goto LABEL_17;
      v9 = v8 - v5;
      if ( !v9 )
      {
        if ( IsHiberbootSupported )
          goto LABEL_13;
        if ( !PopPromoteHibernateToShutdown )
        {
          if ( v6 )
            goto LABEL_26;
LABEL_19:
          *a1 = 0;
          v1 = v5;
          goto LABEL_13;
        }
LABEL_16:
        *a1 = 4;
        goto LABEL_13;
      }
      v10 = v9 - 3;
      if ( v10 )
      {
        if ( v10 != 2 || !v12[20] )
          goto LABEL_13;
LABEL_26:
        *a1 = 2;
        goto LABEL_13;
      }
      if ( !v12[7] )
        goto LABEL_16;
LABEL_13:
      if ( v7 == *a1 )
        return v1;
    }
    *a1 = 2;
LABEL_17:
    if ( !v6 )
    {
      if ( IsHiberbootSupported )
      {
        *a1 = 3;
        goto LABEL_13;
      }
      goto LABEL_19;
    }
    goto LABEL_13;
  }
  return 1;
}
