/*
 * XREFs of ValidateAcpiCStates @ 0x1C0027F50
 * Callers:
 *     InitAcpi2CStates @ 0x1C0022368 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00098F8 (WPP_RECORDER_SF_ddd.c)
 *     IsValidAcpiGenericAddress @ 0x1C0027A04 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(_DWORD *a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // r10d
  __int64 v5; // r8
  unsigned int v6; // r11d
  _BYTE *v7; // r10
  unsigned __int16 v8; // r9
  int v10; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v2 = *a1;
  v3 = 1LL;
  if ( *a1 > 1u )
  {
    v4 = 0;
    v5 = (__int64)a1 + 38;
    do
    {
      if ( *(_BYTE *)(v5 - 2) < LOBYTE(a1[5 * v4 + 4])
        || *(_WORD *)v5 < HIWORD(a1[5 * v4 + 4])
        || *(_DWORD *)(v5 + 2) > a1[5 * v4 + 5] )
      {
        WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v3, v5, 0x19u, v10);
        return (unsigned int)-1073741823;
      }
      v3 = (unsigned int)(v3 + 1);
      ++v4;
      v5 += 20LL;
    }
    while ( (unsigned int)v3 < v2 );
  }
  v6 = 0;
  if ( v2 )
  {
    v7 = a1 + 4;
    do
    {
      if ( *(v7 - 12) != 127 )
      {
        switch ( *v7 )
        {
          case 0:
            v8 = 28;
LABEL_24:
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              v8,
              (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids);
            return (unsigned int)-1073741823;
          case 1:
            return (unsigned int)-1073741823;
          case 2:
            if ( !IsValidAcpiGenericAddress((char *)&dword_1C0011B7C) )
            {
              v8 = 26;
              goto LABEL_24;
            }
            break;
          default:
            if ( !IsValidAcpiGenericAddress((char *)&dword_1C0011B94)
              || !IsValidAcpiGenericAddress((char *)&dword_1C0011B64)
              || !IsValidAcpiGenericAddress((char *)&dword_1C0011B7C) )
            {
              v8 = 27;
              goto LABEL_24;
            }
            break;
        }
      }
      ++v6;
      v7 += 20;
    }
    while ( v6 < v2 );
  }
  return v1;
}
