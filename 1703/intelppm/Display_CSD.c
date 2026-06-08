/*
 * XREFs of Display_CSD @ 0x1C0009CEC
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C001BE20 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     GetCoordinationType @ 0x1C000A56C (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000A8E8 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_CSD(int *a1)
{
  PDEVICE_OBJECT v2; // r10
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v5; // r10
  int v6; // edx
  int v7; // r8d
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    v2 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x82u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      v2 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x83u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = *a1;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x84u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v10);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x85u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
            v2 = WPP_GLOBAL_Control;
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( LOWORD(v2->DeviceType) )
      {
        LODWORD(v9) = i;
        WPP_RECORDER_SF_D(
          (__int64)v2->DeviceExtension,
          5u,
          2u,
          0x86u,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v9);
        v2 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v9) = a1[6 * i + 1];
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x87u,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v9);
          v2 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v9) = a1[6 * i + 2];
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x88u,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              v9);
            v2 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x89u,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
              v2 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                CoordinationType = GetCoordinationType((unsigned int)a1[6 * i + 4]);
                WPP_RECORDER_SF_Ds(*(_QWORD *)(v5 + 64), v6, v7, 138, v8, v6, CoordinationType);
                v2 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v9) = a1[6 * i + 5];
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0x8Bu,
                    (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                    v9);
                  v2 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LODWORD(v9) = a1[6 * i + 6];
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0x8Cu,
                      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                      v9);
                    v2 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0x8Du,
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
