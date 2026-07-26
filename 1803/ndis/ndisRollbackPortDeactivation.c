/*
 * XREFs of ndisRollbackPortDeactivation @ 0x1C003E3F0
 * Callers:
 *     ndisPnPPortDeactivation @ 0x1C003DE80 (ndisPnPPortDeactivation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisFindPortByPortNumber @ 0x1C003D8CC (ndisFindPortByPortNumber.c)
 */

void __fastcall ndisRollbackPortDeactivation(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int *v6; // r10
  __int64 *PortByPortNumber; // rax
  __int64 v8; // r10
  __int64 v9; // r11

  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_qq(0x28u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1, a2);
  if ( a3 )
  {
    v6 = a2;
    do
    {
      PortByPortNumber = ndisFindPortByPortNumber(a1, *v6);
      if ( PortByPortNumber )
      {
        *((_DWORD *)PortByPortNumber + 4) = *((_DWORD *)PortByPortNumber + 5);
        ++*(_DWORD *)(a1 + 2760);
      }
      v6 = (unsigned int *)(v8 + 4);
    }
    while ( v9 != 1 );
  }
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_qq(0x29u, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1, a2);
}
