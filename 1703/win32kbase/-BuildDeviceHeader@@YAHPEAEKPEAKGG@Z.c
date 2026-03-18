/*
 * XREFs of ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C010B9BC
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010BD74 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceHeader(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 a4,
        char a5)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned __int8 v7; // dl
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // r10

  v5 = *a3;
  v6 = 0;
  if ( (int)v5 + 4 < a2 )
  {
    v7 = 5;
    v6 = 1;
    if ( a4 > 0xFFu )
      v7 = 6;
    a1[v5] = v7;
    v8 = (unsigned int)(v5 + 1);
    a1[v8] = a4;
    v9 = (unsigned int)(v8 + 1);
    if ( v7 != 5 )
    {
      a1[v9] = HIBYTE(a4);
      v9 = (unsigned int)(v9 + 1);
    }
    a1[v9] = 9;
    v10 = (unsigned int)(v9 + 1);
    a1[v10] = a5;
    *a3 = v10 + 1;
  }
  return v6;
}
