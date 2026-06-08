/*
 * XREFs of Display_xSD @ 0x1C0002958
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C001BEA4 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002A678 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     GetCoordinationType @ 0x1C000A56C (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000A8E8 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2)
{
  const char *v2; // rdi
  PDEVICE_OBJECT v4; // r10
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v7; // r10
  int v8; // edx
  int v9; // r8d
  int v10; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v2 = a2;
    if ( a2 )
    {
      v4 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          2,
          109,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        v4 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x6Eu,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            v2);
          v4 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)a2,
              2,
              111,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              *a1);
            v4 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)a2,
                2,
                112,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
              v4 = WPP_GLOBAL_Control;
            }
          }
        }
      }
      for ( i = 0; i < *a1; ++i )
      {
        if ( LOWORD(v4->DeviceType) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_D(
            v4->DeviceExtension,
            (_DWORD)a2,
            2,
            113,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            i);
          v4 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)a2,
              2,
              114,
              (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
              a1[5 * i + 1]);
            v4 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)a2,
                2,
                115,
                (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                a1[5 * i + 2]);
              v4 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  (_DWORD)a2,
                  2,
                  116,
                  (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                  a1[5 * i + 3]);
                v4 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  CoordinationType = GetCoordinationType(a1[5 * i + 4]);
                  WPP_RECORDER_SF_Ds(*(_QWORD *)(v7 + 64), v8, v9, 117, v10, v8, CoordinationType);
                  v4 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    LOBYTE(a2) = 5;
                    WPP_RECORDER_SF_D(
                      WPP_GLOBAL_Control->DeviceExtension,
                      (_DWORD)a2,
                      2,
                      118,
                      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
                      a1[5 * i + 5]);
                    v4 = WPP_GLOBAL_Control;
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(a2) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        (_DWORD)a2,
                        2,
                        119,
                        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
                      v4 = WPP_GLOBAL_Control;
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
