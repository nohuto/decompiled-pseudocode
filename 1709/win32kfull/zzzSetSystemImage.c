/*
 * XREFs of zzzSetSystemImage @ 0x1C0051988
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00515F0 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0117350 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01BC2FC (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01BC380 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxSetSystemCursor @ 0x1C020B89C (xxxSetSystemCursor.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetSystemImage(struct tagCURSOR *a1, __int64 a2)
{
  int v4; // ecx
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm5
  int v9; // eax
  int v10; // ecx
  int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rcx

  if ( (struct tagCURSOR *)a2 != a1 )
  {
    if ( *((_QWORD *)a1 + 3) )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      {
        v12 = 0;
        if ( *((int *)a1 + 22) > 0 )
        {
          v13 = 0LL;
          do
          {
            v14 = *(_QWORD *)(v13 + *((_QWORD *)a1 + 12));
            HMChangeOwnerPheProcess(
              gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v14,
              gptiRit);
            ++v12;
            *(_QWORD *)(v14 + 24) = 0LL;
            v13 += 8LL;
          }
          while ( v12 < *((_DWORD *)a1 + 22) );
        }
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) )
        {
          ((void (*)(void))GreDecQuotaCount)();
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 400LL));
        }
        if ( *((_QWORD *)a1 + 12) )
        {
          GreDecQuotaCount(*((_QWORD *)a1 + 3));
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 400LL));
        }
        if ( *((_QWORD *)a1 + 16) )
        {
          GreDecQuotaCount(*((_QWORD *)a1 + 3));
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 400LL));
        }
      }
    }
    v4 = *((_DWORD *)a1 + 37);
    v5 = *(_OWORD *)((char *)a1 + 84);
    v6 = *(_OWORD *)((char *)a1 + 100);
    v7 = *(_OWORD *)((char *)a1 + 116);
    v8 = *(_OWORD *)((char *)a1 + 132);
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)(a2 + 84);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)(a2 + 100);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)(a2 + 116);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)(a2 + 132);
    *((_DWORD *)a1 + 37) = *(_DWORD *)(a2 + 148);
    v9 = *(_DWORD *)(a2 + 80);
    *(_OWORD *)(a2 + 84) = v5;
    *(_OWORD *)(a2 + 100) = v6;
    *(_OWORD *)(a2 + 116) = v7;
    *(_OWORD *)(a2 + 132) = v8;
    *(_DWORD *)(a2 + 148) = v4;
    v10 = *((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 20) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v9) & 8;
    *(_DWORD *)(a2 + 80) ^= ((unsigned __int8)v10 ^ (unsigned __int8)*(_DWORD *)(a2 + 80)) & 8;
    if ( *((_QWORD *)a1 + 3) )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      {
        v15 = 0;
        if ( *((int *)a1 + 22) > 0 )
        {
          v16 = 0LL;
          do
          {
            ++v15;
            v17 = *(_QWORD *)(v16 + *((_QWORD *)a1 + 12));
            v16 += 8LL;
            *(_QWORD *)(v17 + 24) = *(_QWORD *)(gptiRit + 400LL);
          }
          while ( v15 < *((_DWORD *)a1 + 22) );
        }
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 400LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
        if ( *((_QWORD *)a1 + 12) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 400LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
        if ( *((_QWORD *)a1 + 16) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 400LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
      }
      DestroyCursor(a1);
    }
    if ( gpcurLogCurrent == a2 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      zzzUpdateCursorImage();
    }
    *(_DWORD *)(a2 + 80) |= 0x200u;
  }
  return 1LL;
}
