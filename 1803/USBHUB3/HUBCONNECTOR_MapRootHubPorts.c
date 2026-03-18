/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1C006D5D0
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C006DA48 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C006CEC0 (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // bx
  unsigned __int16 v3; // r15
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // r12
  _QWORD **v6; // r14
  _QWORD *i; // rax
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *k; // rax
  __int64 v11; // rbp
  int v12; // eax
  _QWORD *j; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned __int16 v17; // [rsp+70h] [rbp+8h]

  v1 = *(_WORD *)(a1 + 152);
  v3 = *(_WORD *)(a1 + 146);
  v4 = *(_WORD *)(a1 + 148);
  v17 = v4;
  v5 = *(_WORD *)(a1 + 154);
  if ( v1 <= v5 )
  {
    while ( 1 )
    {
      if ( v3 > v4 )
        return;
      v6 = (_QWORD **)(a1 + 2352);
      for ( i = *(_QWORD **)(a1 + 2352); ; i = (_QWORD *)*i )
      {
        v8 = (__int64)(i - 31);
        if ( v6 == i )
          goto LABEL_18;
        if ( *(_WORD *)(v8 + 200) == v3 )
          break;
      }
      if ( i != (_QWORD *)248 )
      {
        if ( (*(_DWORD *)(v8 + 204) & 0x10) != 0 )
        {
          if ( v3 == v4 )
          {
            *(_WORD *)(v8 + 212) = v1;
            *(_WORD *)(v8 + 214) = v5;
            *(_DWORD *)(v8 + 1368) = 1;
            *(_DWORD *)(v8 + 1372) = *(_DWORD *)(a1 + 96);
            while ( 2 )
            {
              if ( v1 <= v5 )
              {
                for ( j = *(_QWORD **)(a1 + 2352); ; j = (_QWORD *)*j )
                {
                  v14 = (__int64)(j - 31);
                  if ( v6 == j )
                    goto LABEL_35;
                  if ( *(_WORD *)(v14 + 200) == v1 )
                    break;
                }
                if ( j == (_QWORD *)248
                  || (*(_DWORD *)(v14 + 1368) = 1,
                      *(_DWORD *)(v14 + 1372) = *(_DWORD *)(a1 + 96),
                      *(_DWORD *)(v14 + 1392) = v1,
                      *(_WORD *)(v14 + 1388) = 0,
                      (int)HUBCONNECTOR_RegisterPort(v14) >= 0) )
                {
LABEL_35:
                  ++v1;
                  continue;
                }
              }
              break;
            }
          }
          else
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(v8 + 1432),
              2u,
              6u,
              0x18u,
              (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids);
          }
          return;
        }
        *(_DWORD *)(v8 + 1368) = 1;
        *(_DWORD *)(v8 + 1372) = *(_DWORD *)(a1 + 96);
        *(_DWORD *)(v8 + 1392) = v1;
        v9 = *(_DWORD *)(v8 + 204);
        *(_WORD *)(v8 + 1388) = 0;
        if ( (v9 & 1) != 0 )
          break;
      }
LABEL_18:
      ++v1;
      ++v3;
      if ( v1 > v5 )
        return;
    }
    if ( (int)HUBCONNECTOR_RegisterPort(v8) >= 0 )
    {
      for ( k = *v6; ; k = (_QWORD *)*k )
      {
        v11 = (__int64)(k - 31);
        if ( v6 == k )
          goto LABEL_16;
        if ( *(_WORD *)(v11 + 200) == v1 )
          break;
      }
      if ( k == (_QWORD *)248 )
      {
LABEL_16:
        LODWORD(v15) = v3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v8 + 1432),
          2u,
          6u,
          0x19u,
          (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
          v15);
LABEL_17:
        v4 = v17;
        goto LABEL_18;
      }
      *(_DWORD *)(v11 + 1368) = 1;
      *(_DWORD *)(v11 + 1372) = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(v11 + 1392) = v1;
      v12 = *(_DWORD *)(v11 + 204);
      *(_WORD *)(v11 + 1388) = 0;
      if ( (v12 & 1) == 0 )
      {
        LODWORD(v16) = v1;
        LODWORD(v15) = v3;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v8 + 1432),
          2u,
          6u,
          0x1Au,
          (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
          v15,
          v16);
      }
      if ( (int)HUBCONNECTOR_RegisterPort(v11) >= 0 )
        goto LABEL_17;
    }
  }
}
