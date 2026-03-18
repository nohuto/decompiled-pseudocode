/*
 * XREFs of ACPISystemPowerProcessSxD @ 0x1C0095060
 * Callers:
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0028B30 (ACPISystemPowerInitializeRootMapping.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerGetSxD @ 0x1C0090110 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerProcessSxD(__int64 *a1, __int64 a2, _BYTE *a3)
{
  int *v5; // rbx
  int i; // edi
  int v7; // eax
  int SxD; // eax
  char v10; // r8
  const char *v11; // r10
  const char *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (int *)(a2 + 4);
  for ( i = 1; i < 7; ++i )
  {
    v7 = AcpiSupportedSystemStates;
    if ( _bittest(&v7, i) )
    {
      SxD = ACPISystemPowerGetSxD(a1, i, &v15);
      if ( SxD != -1073741772 )
      {
        if ( SxD >= 0 )
        {
          v14 = v15;
          *a3 = 1;
          if ( v14 > *v5 )
            *v5 = v14;
        }
        else
        {
          v10 = 0;
          v11 = byte_1C0067B08;
          v12 = byte_1C0067B08;
          if ( a1 )
          {
            v13 = a1[1];
            v10 = (char)a1;
            if ( (v13 & 0x200000000000LL) != 0 )
            {
              v11 = (const char *)a1[70];
              if ( (v13 & 0x400000000000LL) != 0 )
                v12 = (const char *)a1[71];
            }
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x11u,
            (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
            SxD,
            v10,
            v11,
            v12);
        }
      }
    }
    else
    {
      *v5 = 0;
    }
    ++v5;
  }
  return 0LL;
}
