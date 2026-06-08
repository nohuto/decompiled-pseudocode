/*
 * XREFs of ValidateAcpiIdleDomain @ 0x1C0027DD0
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C0021130 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C00098F8 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00099E0 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  _DWORD *v4; // rbx
  int v6; // r10d
  unsigned int v7; // eax
  int v8; // ecx
  unsigned __int16 v9; // r9
  int v11; // [rsp+20h] [rbp-38h]

  v2 = *a1;
  v3 = 0;
  v4 = (_DWORD *)a2;
  v6 = 0;
  if ( (_DWORD)v2 )
  {
LABEL_2:
    if ( a1[6 * v6 + 1] == 6 )
    {
      if ( a1[6 * v6 + 4] != 254 )
      {
        LODWORD(a2) = KeGetPcr()->Prcb.Number;
        WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, 0LL, 0x15u, v11);
        return (unsigned int)-1073741637;
      }
      v7 = a1[6 * v6 + 5];
      if ( v7 > 0x280 )
      {
        v9 = 22;
      }
      else
      {
        if ( v7 )
        {
          a2 = a1[6 * v6 + 6];
          if ( (unsigned int)a2 < *v4 )
          {
            v8 = 0;
            while ( v6 == v8 || (_DWORD)a2 != a1[6 * v8 + 6] )
            {
              if ( ++v8 >= (unsigned int)v2 )
              {
                if ( ++v6 >= (unsigned int)v2 )
                  return v3;
                goto LABEL_2;
              }
            }
            return (unsigned int)-1073741637;
          }
          LODWORD(a2) = KeGetPcr()->Prcb.Number;
          WPP_RECORDER_SF_DDDD((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, 0LL, v2, v11);
          return (unsigned int)-1073741823;
        }
        v9 = 23;
      }
      LODWORD(a2) = KeGetPcr()->Prcb.Number;
    }
    else
    {
      LODWORD(a2) = KeGetPcr()->Prcb.Number;
      v9 = 20;
    }
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, 0LL, v9, v11);
    return (unsigned int)-1073741823;
  }
  return v3;
}
