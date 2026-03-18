/*
 * XREFs of xxxGetUpdateRect @ 0x1C0102B2C
 * Callers:
 *     NtUserGetUpdateRect @ 0x1C01029E0 (NtUserGetUpdateRect.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     IntersectWithParents @ 0x1C0066098 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 *     GreTransformPoints @ 0x1C00E53AC (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  int *v6; // rsi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 v11; // rdx
  __int64 **v12; // rcx
  int v13; // r8d
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, (_DWORD *)a1, 0x120u, 1);
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = (int *)(a1 + 144);
      v14 = *(_OWORD *)(a1 + 144);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v5, &v14) <= 1 )
        v14 = 0uLL;
      v6 = (int *)(a1 + 144);
      IntersectRect((int *)&v14, (int *)&v14, (int *)(a1 + 144));
    }
    if ( (unsigned int)IntersectWithParents(a1, &v14) )
    {
      if ( a1 != GetDesktopWindow(a1) )
      {
        v7 = *v6;
        v8 = -*(_DWORD *)(a1 + 148);
        HIDWORD(v14) -= *(_DWORD *)(a1 + 148);
        v9 = -v7;
        LODWORD(v14) = v9 + v14;
        DWORD2(v14) += v9;
        DWORD1(v14) += v8;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 168) + 92LL) & 0x20) != 0
        && ((*(_BYTE *)(a1 + 61) & 1) != 0 || *(_QWORD *)(a1 + 176) != 1LL) )
      {
        GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
        v11 = gpDispInfo;
        v12 = *(__int64 ***)(gpDispInfo + 16LL);
        if ( v12 )
        {
          while ( v12[2] != (__int64 *)a1 || ((_DWORD)v12[8] & 2) != 0 )
          {
            v12 = (__int64 **)*v12;
            if ( !v12 )
              goto LABEL_23;
          }
          GreTransformPoints((HDC)v12[1], (struct _POINTL *)&v14, (struct _POINTL *)&v14, 2, 0);
          v11 = gpDispInfo;
        }
LABEL_23:
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v11 + 32LL));
      }
    }
    else
    {
      v14 = 0uLL;
    }
    if ( a2 )
    {
      if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      {
        v13 = *(_DWORD *)(a1 + 152) - *v6 - v14;
        LODWORD(v14) = *(_DWORD *)(a1 + 152) - *v6 - DWORD2(v14);
        DWORD2(v14) = v13;
      }
      *(_OWORD *)a2 = v14;
    }
    return 1LL;
  }
  else
  {
    if ( a2 )
    {
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    return 0LL;
  }
}
