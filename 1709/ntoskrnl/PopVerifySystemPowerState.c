/*
 * XREFs of PopVerifySystemPowerState @ 0x1405B987C
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14024220C (PopActionRetrieveInitialState.c)
 *     PdcPoVerifyPowerState @ 0x1405B8520 (PdcPoVerifyPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1405B94B4 (PopVerifySystemPowerPolicy.c)
 *     PopAdvanceSystemPowerState @ 0x1406F751C (PopAdvanceSystemPowerState.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1404E8714 (PopIsHibernateSupported.c)
 *     PopIsHiberbootSupported @ 0x1406F5144 (PopIsHiberbootSupported.c)
 */

void __fastcall PopVerifySystemPowerState(int *a1, int a2)
{
  int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  char v5; // al
  __int128 *v6; // rcx
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v4 - 2) <= 3 )
    {
      v5 = 1;
      if ( a2 >= 0 )
      {
        v6 = &PopCapabilities;
        if ( a2 > 1 )
        {
          if ( a2 != 2 )
            goto LABEL_28;
        }
        else
        {
          if ( v4 == 5 )
          {
            if ( (unsigned __int8)PopIsHiberbootSupported(&PopCapabilities) || PopIsHibernateSupported(v7) )
              goto LABEL_28;
            v4 = 4;
          }
          if ( v4 == 4 )
          {
            if ( BYTE5(PopCapabilities) )
              goto LABEL_28;
            v4 = 3;
          }
          if ( v4 == 3 )
          {
            if ( BYTE4(PopCapabilities) )
              goto LABEL_28;
            v4 = 2;
          }
          if ( v4 == 2 )
          {
            if ( BYTE3(PopCapabilities) )
              goto LABEL_28;
            v4 = 1;
          }
          if ( v4 != 1 || v2 != 1 )
            goto LABEL_28;
          v5 = 0;
          v4 = 2;
        }
        if ( v4 == 2 )
        {
          if ( BYTE3(PopCapabilities) )
            goto LABEL_28;
          v4 = 3;
        }
        if ( v4 == 3 )
        {
          if ( BYTE4(PopCapabilities) )
            goto LABEL_28;
          v4 = 4;
        }
        if ( v4 != 4 )
        {
LABEL_25:
          if ( v4 == 5 && (!v5 || !(unsigned __int8)PopIsHiberbootSupported(v6) && !PopIsHibernateSupported(v8)) )
            v4 = 1;
          goto LABEL_28;
        }
        if ( !BYTE5(PopCapabilities) )
        {
          v4 = 5;
          goto LABEL_25;
        }
      }
LABEL_28:
      *v3 = v4;
    }
  }
}
