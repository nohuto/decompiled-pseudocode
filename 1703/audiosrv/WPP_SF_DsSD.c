/*
 * XREFs of WPP_SF_DsSD @ 0x1800C7920
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DsSD(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9; // [rsp+98h] [rbp+20h] BYREF

  v9 = a4;
  v6 = -1LL;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a6 + 2 * v7) );
  }
  if ( a5 )
  {
    do
      ++v6;
    while ( *(_BYTE *)(a5 + v6) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_1108182ce8c13c0b5d2500d454403f98_Traceguids, 22LL, &v9);
}
