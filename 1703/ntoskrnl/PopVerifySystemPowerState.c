/*
 * XREFs of PopVerifySystemPowerState @ 0x140581AE8
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14013DA14 (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x14057A1E0 (PopAdvanceSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1405C3AEC (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyPowerState @ 0x1405D63B0 (PdcPoVerifyPowerState.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1404C5968 (PopIsHibernateSupported.c)
 *     PopIsHiberbootSupported @ 0x14057A1BC (PopIsHiberbootSupported.c)
 */

void __fastcall PopVerifySystemPowerState(int *a1, int a2)
{
  int v2; // r9d
  int v3; // r10d
  int *v4; // r11
  char v5; // al
  char v6; // si
  __int128 *v7; // rcx
  char v8; // di
  char v9; // bl
  _BYTE *v10; // rcx
  _BYTE *v12; // rcx

  if ( a1 )
  {
    v2 = *a1;
    v3 = a2;
    v4 = a1;
    if ( *a1 <= -1 || (unsigned int)(v2 - 2) <= 3 )
    {
      v5 = 1;
      if ( a2 >= 0 )
      {
        v6 = BYTE5(PopCapabilities);
        v7 = &PopCapabilities;
        v8 = BYTE4(PopCapabilities);
        v9 = BYTE3(PopCapabilities);
        if ( a2 > 1 )
        {
          if ( a2 != 2 )
            goto LABEL_28;
        }
        else
        {
          if ( v2 == 5 )
          {
            if ( PopIsHiberbootSupported((__int64)&PopCapabilities) )
              goto LABEL_28;
            if ( PopIsHibernateSupported(v10) )
              goto LABEL_28;
            v2 = 4;
          }
          if ( v2 == 4 )
          {
            if ( v6 )
              goto LABEL_28;
            v2 = 3;
          }
          if ( v2 == 3 )
          {
            if ( v8 )
              goto LABEL_28;
            v2 = 2;
          }
          if ( v2 == 2 )
          {
            if ( v9 )
              goto LABEL_28;
            v2 = 1;
          }
          if ( v2 != 1 || v3 != 1 )
            goto LABEL_28;
          v5 = 0;
          v2 = 2;
        }
        if ( v2 == 2 )
        {
          if ( v9 )
            goto LABEL_28;
          v2 = 3;
        }
        if ( v2 == 3 )
        {
          if ( v8 )
            goto LABEL_28;
          v2 = 4;
        }
        if ( v2 != 4 )
        {
LABEL_25:
          if ( v2 == 5 && (!v5 || !PopIsHiberbootSupported((__int64)v7) && !PopIsHibernateSupported(v12)) )
            v2 = 1;
          goto LABEL_28;
        }
        if ( !v6 )
        {
          v2 = 5;
          goto LABEL_25;
        }
      }
LABEL_28:
      *v4 = v2;
    }
  }
}
