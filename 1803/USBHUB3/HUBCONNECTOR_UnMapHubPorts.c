/*
 * XREFs of HUBCONNECTOR_UnMapHubPorts @ 0x1C006DB78
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0067280 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006DA48 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_DeRegisterPort @ 0x1C006D268 (HUBCONNECTOR_DeRegisterPort.c)
 */

void __fastcall HUBCONNECTOR_UnMapHubPorts(_WORD *a1)
{
  unsigned __int16 v1; // di
  _QWORD **v3; // rsi
  _QWORD *i; // rax
  __int64 v5; // rcx
  unsigned __int16 v6; // di
  _QWORD **v7; // rsi
  _QWORD *j; // rax
  __int64 v9; // rcx

  v1 = a1[73];
  if ( v1 <= a1[74] )
  {
    v3 = (_QWORD **)(a1 + 1176);
    do
    {
      for ( i = *v3; ; i = (_QWORD *)*i )
      {
        v5 = (__int64)(i - 31);
        if ( v3 == i )
          break;
        if ( *(_WORD *)(v5 + 200) == v1 )
        {
          if ( i != (_QWORD *)248 )
            HUBCONNECTOR_DeRegisterPort(v5);
          break;
        }
      }
      ++v1;
    }
    while ( v1 <= a1[74] );
  }
  v6 = a1[76];
  if ( v6 <= a1[77] )
  {
    v7 = (_QWORD **)(a1 + 1176);
    do
    {
      for ( j = *v7; ; j = (_QWORD *)*j )
      {
        v9 = (__int64)(j - 31);
        if ( v7 == j )
          break;
        if ( *(_WORD *)(v9 + 200) == v6 )
        {
          if ( j != (_QWORD *)248 )
            HUBCONNECTOR_DeRegisterPort(v9);
          break;
        }
      }
      ++v6;
    }
    while ( v6 <= a1[77] );
  }
}
