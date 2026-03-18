/*
 * XREFs of xxxSetMonitorIcoCurIndex @ 0x1C00C1534
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxEnsureMonitorCursors @ 0x1C010A23C (xxxEnsureMonitorCursors.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01B6FA0 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01B7024 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxSetSystemCursor @ 0x1C0209AFC (xxxSetSystemCursor.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0044EE0 (_DestroyCursor.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     FixupCursorForMonitor @ 0x1C0049D7C (FixupCursorForMonitor.c)
 *     GetCursorForDim @ 0x1C00C161C (GetCursorForDim.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C00C1B44 (xxxClientLoadImage.c)
 *     xxxClientCopyImage @ 0x1C00C36B4 (xxxClientCopyImage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetMonitorIcoCurIndex(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _DWORD *v5; // r15
  __int64 v7; // r9
  int v8; // r13d
  unsigned int v9; // r10d
  unsigned int i; // ebp
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // edx
  _QWORD *v15; // rcx
  int v16; // r11d
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int128 v20; // xmm0
  _QWORD *v21; // rbx
  __int128 v22; // [rsp+40h] [rbp-68h]
  __int128 v23; // [rsp+50h] [rbp-58h]
  _OWORD v24[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+18h]

  v26 = a3;
  result = gpsi;
  v5 = &gfCursorSizeNeeded;
  v7 = a2;
  v8 = *(unsigned __int16 *)(gpsi + 8680LL);
  v9 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v5 == v9 )
      goto LABEL_3;
    result = gasyscur[0];
    v11 = 2LL * (int)a3;
    v12 = gasyscur[2 * (int)a3 + 1];
    if ( !v12 )
      goto LABEL_3;
    if ( i )
    {
      switch ( i )
      {
        case 1u:
          v13 = 48;
          break;
        case 2u:
          v13 = 64;
          break;
        case 3u:
          v13 = 96;
          break;
        default:
          v13 = 128;
          break;
      }
    }
    else
    {
      v13 = 32;
    }
    result = GetCursorForDim(v12, v13, a3, v7);
    v17 = result;
    if ( !a4 && !result )
      goto LABEL_34;
    if ( a4 != 1 )
    {
      if ( a4 != 2 || !result )
        goto LABEL_3;
      result = xxxClientCopyImage(*v15, 2, v13, v13, v9);
      goto LABEL_37;
    }
    if ( !result )
      goto LABEL_3;
    switch ( v8 )
    {
      case 32:
LABEL_12:
        result = v9;
        break;
      case 48:
        result = 1LL;
        break;
      case 64:
        result = 2LL;
        break;
      case 96:
        result = 3LL;
        break;
      case 128:
        result = 4LL;
        break;
      default:
        goto LABEL_12;
    }
    if ( i == (_DWORD)result )
      goto LABEL_3;
LABEL_34:
    result = xxxClientLoadImage(v16, v14, 2, v13, v13, (unsigned int)v7 | 0x40000);
LABEL_37:
    v9 = 0;
    v18 = result;
    if ( result )
    {
      *(_DWORD *)(result + 76) = v13;
      if ( v17 )
      {
        zzzSetSystemImage((struct tagCURSOR *)result);
        result = FixupCursorForMonitor(gpcurLogCurrent);
        if ( result == v17 )
        {
          gpcurPhysCurrent = 0LL;
          gpcurLogCurrent = 0LL;
          result = zzzUpdateCursorImage();
        }
      }
      else
      {
        v19 = gasyscur[v11 + 1];
        if ( (*(_DWORD *)(result + 80) & 0x1000) != 0 && v19 && *(_QWORD *)(result + 48) == result )
        {
          *(_WORD *)(result + 72) = *(_WORD *)(v19 + 72);
          if ( *(_WORD *)(result + 56) )
            Win32FreePool(*(_QWORD *)(result + 64));
          v20 = *(_OWORD *)(v19 + 56);
          *(_QWORD *)(v18 + 48) = v19;
          *(_QWORD *)&v22 = v18 + 40;
          *(_OWORD *)(v18 + 56) = v20;
          v21 = (_QWORD *)(v19 + 40);
          *((_QWORD *)&v22 + 1) = *v21;
          v24[0] = v22;
          HMAssignmentLock(v24);
          *(_QWORD *)&v23 = v21;
          *((_QWORD *)&v23 + 1) = v18;
          v24[0] = v23;
          result = HMAssignmentLock(v24);
        }
        else
        {
          result = DestroyCursor((struct tagCURSOR *)result, 0LL);
        }
      }
      v9 = 0;
    }
    a3 = v26;
    v7 = a2;
LABEL_3:
    ++v5;
  }
  return result;
}
