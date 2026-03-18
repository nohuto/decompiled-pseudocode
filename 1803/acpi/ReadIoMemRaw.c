/*
 * XREFs of ReadIoMemRaw @ 0x1C0030620
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C0030420 (AcpiPccRingDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ReadIoMemRaw(unsigned __int8 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // r9d

  v3 = 0LL;
  if ( !a2 )
  {
    switch ( a3 )
    {
      case 8:
        return *a1;
      case 16:
        return *(unsigned __int16 *)a1;
      case 32:
        return *(unsigned int *)a1;
      case 64:
        return *(_QWORD *)a1;
    }
    v4 = 13;
    goto LABEL_15;
  }
  if ( a2 == 1 )
  {
    switch ( a3 )
    {
      case 8:
        return __inbyte((unsigned __int16)a1);
      case 16:
        return __inword((unsigned __int16)a1);
      case 32:
        return __indword((unsigned __int16)a1);
      default:
        v4 = 12;
LABEL_15:
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          21,
          v4,
          (__int64)&WPP_aa09a4a2e6b4360d6f89773cef358f13_Traceguids,
          a3);
        return v3;
    }
  }
  return v3;
}
