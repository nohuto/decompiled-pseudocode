/*
 * XREFs of Usbh_SetWAKE_ON_CONNECT @ 0x1C004DC80
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

unsigned int __fastcall Usbh_SetWAKE_ON_CONNECT(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rbx
  int v8; // r8d
  unsigned int result; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]

  v7 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v8,
      14,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = a4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v10);
  }
  result = v7[640] & 0xFEFFFFFF;
  v7[640] = result;
  if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) >= 0 )
  {
    if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) <= 1 )
    {
LABEL_11:
      result |= 0x1000000u;
      goto LABEL_12;
    }
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 2 )
    {
LABEL_12:
      v7[640] = result;
      return result;
    }
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 && a4 == 4 )
    {
      if ( *a3 )
        goto LABEL_11;
      goto LABEL_12;
    }
  }
  return result;
}
