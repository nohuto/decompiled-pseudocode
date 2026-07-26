/*
 * XREFs of ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006CDF4
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D594 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006D794 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisCancelIdleRequest @ 0x1C006E618 (ndisCancelIdleRequest.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006E9E0 (ndisIdleWaitWakeCallback.c)
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSelectiveSuspendSetResumeBusyReason(_DWORD *a1, char a2, unsigned int a3, int a4)
{
  __int16 v4; // r10
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int v9; // r8d
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  char v12; // r14
  unsigned __int16 *v13; // rax
  unsigned int i; // edx
  int v15; // esi
  int v16; // ebx
  int v17; // r15d
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx

  if ( a3 )
  {
    HIBYTE(v4) = 0;
    if ( a2 )
    {
      a1[157] = a3;
      a1[158] = a4;
    }
    else
    {
      a1[159] = a3;
      a1[160] = a4;
    }
    if ( a3 != 7 && (unsigned int)(a4 + 50265855) > 1 )
    {
      if ( a3 <= 0xF )
        v6 = a3;
      else
        v6 = a3 - 33 > 0x20 ? -1 : a3 - 17;
      if ( (unsigned int)v6 <= 0x30 )
      {
        v7 = 2LL * v6;
        a1[2 * v7 + 185] = a3;
        if ( a2 )
          ++LOWORD(a1[2 * v7 + 184]);
        else
          ++HIWORD(a1[2 * v7 + 184]);
        if ( a4 )
        {
          LODWORD(v8) = 0;
          v9 = -1;
          v10 = -1;
          v11 = -1;
          v12 = 0;
          v13 = (unsigned __int16 *)(a1 + 381);
          for ( i = 0; i < 8; ++i )
          {
            if ( *v13 )
              --*v13;
            v15 = *v13;
            v16 = *(v13 - 1);
            v8 = (unsigned int)(v15 + v16 + v8);
            if ( !v12 )
            {
              v17 = *((_DWORD *)v13 + 1);
              if ( v17 == a4 )
              {
                *v13 = v15 + 1;
                if ( a2 )
                  ++*(v13 - 2);
                else
                  *(v13 - 1) = v16 + 1;
                v12 = 1;
              }
              else if ( v17 )
              {
                if ( v15 + v16 < v11 && !*(v13 - 2) )
                {
                  v11 = v15 + v16;
                  v10 = i;
                }
              }
              else
              {
                v9 = i;
              }
            }
            v13 += 6;
          }
          if ( !v12 )
          {
            if ( v9 == -1 )
            {
              if ( v10 == -1 )
                return;
              v18 = v10;
              v19 = (unsigned __int64)(v8 + 4) >> 3;
            }
            else
            {
              v18 = v9;
              LOWORD(v19) = 255;
            }
            LOWORD(a1[3 * v18 + 381]) = v19;
            v20 = 3 * v18;
            a1[v20 + 382] = a4;
            LOWORD(a1[v20 + 380]) = a2 != 0;
            LOBYTE(v4) = a2 == 0;
            HIWORD(a1[v20 + 380]) = v4;
          }
        }
      }
    }
  }
}
