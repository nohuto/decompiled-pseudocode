/*
 * XREFs of zzzSetSystemImage @ 0x1C00C1638
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01B6FA0 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01B7024 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxSetSystemCursor @ 0x1C0209AFC (xxxSetSystemCursor.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetSystemImage(struct tagCURSOR *a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  int v10; // eax
  int v11; // edx
  int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rcx

  if ( (struct tagCURSOR *)a2 != a1 )
  {
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      {
        v13 = 0;
        if ( *((int *)a1 + 22) > 0 )
        {
          v14 = 0LL;
          do
          {
            v15 = *(_QWORD *)(v14 + *((_QWORD *)a1 + 12));
            HMChangeOwnerPheProcess(
              gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v15,
              gptiRit);
            ++v13;
            *(_QWORD *)(v15 + 24) = 0LL;
            v14 += 8LL;
          }
          while ( v13 < *((_DWORD *)a1 + 22) );
        }
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) )
        {
          GreDecQuotaCount(v4);
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 376LL));
        }
        if ( *((_QWORD *)a1 + 12) )
        {
          GreDecQuotaCount(*((_QWORD *)a1 + 3));
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 376LL));
        }
        if ( *((_QWORD *)a1 + 16) )
        {
          GreDecQuotaCount(*((_QWORD *)a1 + 3));
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 376LL));
        }
      }
    }
    v5 = *((_DWORD *)a1 + 37);
    v6 = *(_OWORD *)((char *)a1 + 84);
    v7 = *(_OWORD *)((char *)a1 + 100);
    v8 = *(_OWORD *)((char *)a1 + 116);
    v9 = *(_OWORD *)((char *)a1 + 132);
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)(a2 + 84);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)(a2 + 100);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)(a2 + 116);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)(a2 + 132);
    *((_DWORD *)a1 + 37) = *(_DWORD *)(a2 + 148);
    v10 = *(_DWORD *)(a2 + 80);
    *(_OWORD *)(a2 + 84) = v6;
    *(_OWORD *)(a2 + 100) = v7;
    *(_OWORD *)(a2 + 116) = v8;
    *(_OWORD *)(a2 + 132) = v9;
    *(_DWORD *)(a2 + 148) = v5;
    v11 = *((_DWORD *)a1 + 20) & 8;
    *((_DWORD *)a1 + 20) ^= ((unsigned __int8)*((_DWORD *)a1 + 20) ^ (unsigned __int8)v10) & 8;
    *(_DWORD *)(a2 + 80) = v11 | *(_DWORD *)(a2 + 80) & 0xFFFFFFF7;
    if ( *((_QWORD *)a1 + 3) )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      {
        v16 = 0;
        if ( *((int *)a1 + 22) > 0 )
        {
          v17 = 0LL;
          do
          {
            ++v16;
            v18 = *(_QWORD *)(v17 + *((_QWORD *)a1 + 12));
            v17 += 8LL;
            *(_QWORD *)(v18 + 24) = *(_QWORD *)(gptiRit + 376LL);
          }
          while ( v16 < *((_DWORD *)a1 + 22) );
        }
      }
      else
      {
        if ( *((_QWORD *)a1 + 11) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 376LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
        if ( *((_QWORD *)a1 + 12) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 376LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
        if ( *((_QWORD *)a1 + 16) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 376LL));
          GreIncQuotaCount(*((_QWORD *)a1 + 3));
        }
      }
      DestroyCursor(a1, 2LL);
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
