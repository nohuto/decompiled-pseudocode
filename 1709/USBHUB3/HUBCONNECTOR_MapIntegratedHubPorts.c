/*
 * XREFs of HUBCONNECTOR_MapIntegratedHubPorts @ 0x1C006D9B4
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006DB98 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_RegisterPort @ 0x1C006CFE8 (HUBCONNECTOR_RegisterPort.c)
 */

__int64 __fastcall HUBCONNECTOR_MapIntegratedHubPorts(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // si
  unsigned __int16 v4; // bp
  unsigned __int16 v5; // di
  __int64 i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = *(_WORD *)(a1 + 280);
  v4 = *(_WORD *)(a1 + 282);
  v5 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
LABEL_2:
    if ( v2 <= v4 )
    {
      for ( i = *(_QWORD *)(a1 + 2352); ; i = *(_QWORD *)result )
      {
        v7 = i - 248;
        result = v7 + 248;
        if ( a1 + 2352 == v7 + 248 )
          break;
        if ( *(_WORD *)(v7 + 200) == v5 )
        {
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 272);
            *(_OWORD *)(v7 + 1368) = *(_OWORD *)v8;
            *(_OWORD *)(v7 + 1384) = *(_OWORD *)(v8 + 16);
            *(_OWORD *)(v7 + 1400) = *(_OWORD *)(v8 + 32);
            *(_QWORD *)(v7 + 1416) = *(_QWORD *)(v8 + 48);
            *(_DWORD *)(v7 + 1392) = v2;
            result = *(unsigned int *)(v7 + 204);
            if ( (result & 1) == 0 || (result = HUBCONNECTOR_RegisterPort(v7), (int)result >= 0) )
            {
              ++v5;
              ++v2;
              if ( v5 <= *(_WORD *)(a1 + 48) )
                goto LABEL_2;
            }
          }
          return result;
        }
      }
    }
  }
  return result;
}
