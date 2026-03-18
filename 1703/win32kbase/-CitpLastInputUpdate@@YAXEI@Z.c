/*
 * XREFs of ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC
 * Callers:
 *     CitSetInfo @ 0x1C0004C60 (CitSetInfo.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 *     CitLastInputUpdate @ 0x1C0156640 (CitLastInputUpdate.c)
 * Callees:
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00530F4 (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C00531CC (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C005332C (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitpLastInputUpdate(unsigned __int8 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  struct _CIT_IMPACT_CONTEXT *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _CIT_USE_DATA *UseData; // rax
  unsigned __int16 *v8; // r9
  struct _CIT_USE_DATA *v9; // r8
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax

  LODWORD(v2) = a2;
  if ( a1 != 32 && a2 - MEMORY[0xFFFFF780000002E4] > 0x3E8 )
    MEMORY[0xFFFFF780000002E4] = a2;
  if ( qword_1C018E8C8 )
  {
    if ( a2 < dword_1C018E8D0 )
      v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CitpTimeUpdate(v2);
    v4 = qword_1C018E8C8;
    if ( a1 != 32 )
      CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C018E8C8 + 544), v2);
    CIT_USER_ACTIVE_TRACKER::OnUserActiveEvent((struct _CIT_IMPACT_CONTEXT *)((char *)v4 + 568), v2);
    v5 = *((_QWORD *)v4 + 55);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 872);
      if ( v6 )
      {
        UseData = CitpProcessGetUseData((struct tagPROCESSINFO *)v5);
        v8 = 0LL;
        v9 = UseData;
        if ( UseData )
        {
          switch ( a1 )
          {
            case 1u:
              v16 = 70LL;
              break;
            case 2u:
              v16 = 78LL;
              break;
            case 4u:
              if ( *((_QWORD *)v4 + 7) > (unsigned __int64)(unsigned int)dword_1C018E914 )
                *(_BYTE *)(*((_QWORD *)v4 + 6) + (unsigned int)dword_1C018E914) |= byte_1C018E918;
              v16 = 74LL;
              break;
            case 8u:
              if ( *((_QWORD *)v4 + 9) > (unsigned __int64)(unsigned int)dword_1C018E914 )
                *(_BYTE *)(*((_QWORD *)v4 + 8) + (unsigned int)dword_1C018E914) |= byte_1C018E918;
              v16 = 72LL;
              break;
            case 0x10u:
              v16 = 76LL;
              break;
            default:
              return;
          }
          v8 = (unsigned __int16 *)((char *)v9 + v16);
          if ( *((_QWORD *)v4 + 5) > (unsigned __int64)(unsigned int)dword_1C018E914 )
            *(_BYTE *)(*((_QWORD *)v4 + 4) + (unsigned int)dword_1C018E914) |= byte_1C018E918;
        }
        v10 = 1;
        if ( (unsigned int)(v2 - *(_DWORD *)(v6 + 68)) > 0x3E8 )
        {
          *(_DWORD *)(v6 + 68) = v2;
          *(_BYTE *)(v6 + 74) = 0;
          if ( v9 )
            CitpStatIncrement((unsigned __int16 *)v9 + 34, 1u);
          CitpStatIncrement((unsigned __int16 *)v4 + 230, v10);
        }
        if ( (a1 & *(_BYTE *)(v6 + 74)) == 0 )
        {
          if ( v8 )
            CitpStatIncrement(v8, v10);
          if ( a1 == v10 )
          {
            v12 = 462LL;
          }
          else
          {
            v11 = a1 - v10 - v10;
            if ( v11 )
            {
              v13 = v11 - 2;
              if ( v13 )
              {
                v14 = v13 - 4;
                if ( v14 )
                {
                  v15 = v14 - 8;
                  if ( v15 )
                  {
                    if ( v15 != 112 )
                      return;
                    v12 = 474LL;
                  }
                  else
                  {
                    v12 = 466LL;
                  }
                }
                else
                {
                  v12 = 470LL;
                }
              }
              else
              {
                v12 = 468LL;
              }
            }
            else
            {
              v12 = 464LL;
            }
          }
          CitpStatIncrement((unsigned __int16 *)((char *)v4 + v12), v10);
          *(_BYTE *)(v6 + 74) |= a1;
        }
      }
    }
  }
}
