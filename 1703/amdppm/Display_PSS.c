/*
 * XREFs of Display_PSS @ 0x1C0003470
 * Callers:
 *     InitAcpiPerfStates @ 0x1C002674C (InitAcpiPerfStates.c)
 *     ValidatePssCore @ 0x1C00282BC (ValidatePssCore.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_x @ 0x1C0003078 (WPP_RECORDER_SF_x.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1)
{
  __int64 result; // rax
  PDEVICE_OBJECT v3; // rcx
  unsigned int i; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    v3 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x53u,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v3 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x54u,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v3 = WPP_GLOBAL_Control;
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( LOWORD(v3->DeviceType) )
      {
        LODWORD(v17) = i;
        result = WPP_RECORDER_SF_D(
                   (__int64)v3->DeviceExtension,
                   5u,
                   2u,
                   0x55u,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   v17);
        v3 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v17) = a1[12 * i + 2];
          result = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x56u,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                     v17);
          v3 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v17) = a1[12 * i + 3];
            result = WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x57u,
                       (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                       v17);
            v3 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v17) = a1[12 * i + 4];
              result = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         5u,
                         2u,
                         0x58u,
                         (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                         v17);
              v3 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v17) = a1[12 * i + 5];
                result = WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           5u,
                           2u,
                           0x59u,
                           (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                           v17);
                v3 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  v17 = *(_QWORD *)&a1[12 * i + 6];
                  result = WPP_RECORDER_SF_x((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v6, 0x5Au, v13);
                  v3 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v17 = *(_QWORD *)&a1[12 * i + 8];
                    result = WPP_RECORDER_SF_x((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v8, 0x5Bu, v14);
                    v3 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v17 = *(_QWORD *)&a1[12 * i + 10];
                      result = WPP_RECORDER_SF_x((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, 0x5Cu, v15);
                      v3 = WPP_GLOBAL_Control;
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v17 = *(_QWORD *)&a1[12 * i + 12];
                        result = WPP_RECORDER_SF_x((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, 0x5Du, v16);
                        v3 = WPP_GLOBAL_Control;
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          result = WPP_RECORDER_SF_(
                                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                     5u,
                                     2u,
                                     0x5Eu,
                                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                          v3 = WPP_GLOBAL_Control;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
