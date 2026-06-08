/*
 * XREFs of Display_PSS @ 0x1C00029DC
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001C13C (InitAcpiPerfStates.c)
 *     ValidatePssCore @ 0x1C001DC00 (ValidatePssCore.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_x @ 0x1C000B59C (WPP_RECORDER_SF_x.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1)
{
  PDEVICE_OBJECT v2; // rcx
  unsigned int i; // esi
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+20h] [rbp-28h]

  if ( a1 )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      result = WPP_RECORDER_SF_(
                 WPP_GLOBAL_Control->DeviceExtension,
                 5,
                 2,
                 83,
                 (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v2 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   84,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v2 = WPP_GLOBAL_Control;
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( LOWORD(v2->DeviceType) )
      {
        result = WPP_RECORDER_SF_D(
                   v2->DeviceExtension,
                   5,
                   2,
                   85,
                   (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                   i);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          result = WPP_RECORDER_SF_D(
                     WPP_GLOBAL_Control->DeviceExtension,
                     5,
                     2,
                     86,
                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                     a1[12 * i + 2]);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = WPP_RECORDER_SF_D(
                       WPP_GLOBAL_Control->DeviceExtension,
                       5,
                       2,
                       87,
                       (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                       a1[12 * i + 3]);
            v2 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              result = WPP_RECORDER_SF_D(
                         WPP_GLOBAL_Control->DeviceExtension,
                         5,
                         2,
                         88,
                         (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                         a1[12 * i + 4]);
              v2 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                result = WPP_RECORDER_SF_D(
                           WPP_GLOBAL_Control->DeviceExtension,
                           5,
                           2,
                           89,
                           (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                           a1[12 * i + 5]);
                v2 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  result = WPP_RECORDER_SF_x(
                             WPP_GLOBAL_Control->DeviceExtension,
                             v5,
                             v6,
                             90,
                             v13,
                             *(_QWORD *)&a1[12 * i + 6]);
                  v2 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    result = WPP_RECORDER_SF_x(
                               WPP_GLOBAL_Control->DeviceExtension,
                               v7,
                               v8,
                               91,
                               v14,
                               *(_QWORD *)&a1[12 * i + 8]);
                    v2 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      result = WPP_RECORDER_SF_x(
                                 WPP_GLOBAL_Control->DeviceExtension,
                                 v9,
                                 v10,
                                 92,
                                 v15,
                                 *(_QWORD *)&a1[12 * i + 10]);
                      v2 = WPP_GLOBAL_Control;
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        result = WPP_RECORDER_SF_x(
                                   WPP_GLOBAL_Control->DeviceExtension,
                                   v11,
                                   v12,
                                   93,
                                   v16,
                                   *(_QWORD *)&a1[12 * i + 12]);
                        v2 = WPP_GLOBAL_Control;
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          result = WPP_RECORDER_SF_(
                                     WPP_GLOBAL_Control->DeviceExtension,
                                     5,
                                     2,
                                     94,
                                     (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                          v2 = WPP_GLOBAL_Control;
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
