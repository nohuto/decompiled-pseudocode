/*
 * XREFs of HUBFDO_GetPortStatusForDebugging @ 0x1C000B75C
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000B9B4 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBFDO_GetPortStatusForDebugging(_QWORD *a1, int a2)
{
  __int64 i; // r8
  __int64 v4; // r8
  char v5; // al
  unsigned __int16 v6; // ax
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-30h]

  for ( i = a1[294]; ; i = *(_QWORD *)(v4 + 248) )
  {
    v4 = i - 248;
    if ( a1 + 294 == (_QWORD *)(v4 + 248) )
      break;
    if ( *(unsigned __int16 *)(v4 + 200) == a2 )
    {
      v5 = *(_BYTE *)(v4 + 168) & 0x1C;
      *(_BYTE *)(v4 + 169) = 0;
      *(_WORD *)(v4 + 172) = a2;
      *(_BYTE *)(v4 + 168) = v5 | 0xA3;
      if ( (*(_DWORD *)(v4 + 204) & 0x100) != 0 )
      {
        *(_WORD *)(v4 + 170) = 2;
        v6 = 8;
      }
      else
      {
        *(_WORD *)(v4 + 170) = 0;
        v6 = 4;
      }
      *(_WORD *)(v4 + 174) = v6;
      v7 = HUBMISC_ControlTransfer(
             (_DWORD)a1,
             a1[30],
             v4,
             (int)v4 + 16,
             (__int64)HUBFDO_GetPortStatusForDebuggingComplete,
             v4 + 184,
             v6,
             0,
             0);
      if ( v7 < 0 )
      {
        LODWORD(v8) = v7;
        WPP_RECORDER_SF_d(a1[314], 2u, 3u, 0x20u, (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids, v8);
      }
      return;
    }
  }
}
