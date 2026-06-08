/*
 * XREFs of Display_xSD @ 0x1C0002508
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C001F114 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002DF08 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00023E0 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     GetCoordinationType @ 0x1C000A918 (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000AC38 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_xSD(unsigned int *a1, const char *a2)
{
  const char *v2; // rdi
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v6; // r8
  int v7; // edx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v2 = a2;
    if ( a2 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          2,
          109,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x6Eu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          v2);
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
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          2,
          112,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      }
      for ( i = 0; i < *a1; ++i )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)a2,
            2,
            113,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
            i);
        }
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
        }
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
        }
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
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          CoordinationType = GetCoordinationType(a1[5 * i + 4]);
          WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 117, v8, v7, CoordinationType);
        }
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
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)a2,
            2,
            119,
            (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        }
      }
    }
  }
}
