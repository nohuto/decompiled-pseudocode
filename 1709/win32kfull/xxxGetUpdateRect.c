/*
 * XREFs of xxxGetUpdateRect @ 0x1C010ACF0
 * Callers:
 *     NtUserGetUpdateRect @ 0x1C010AB90 (NtUserGetUpdateRect.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IntersectWithParents @ 0x1C006A4F4 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     GreTransformPoints @ 0x1C00F5EFC (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRect(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  int *v6; // rsi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 **v11; // rcx
  int v12; // r8d
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF

  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, (_DWORD *)a1, 0x120u, 1);
  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v6 = (int *)(a1 + 144);
      v13 = *(_OWORD *)(a1 + 144);
    }
    else
    {
      if ( (unsigned int)GreGetRgnBox(v5, &v13) <= 1 )
        v13 = 0uLL;
      v6 = (int *)(a1 + 144);
      IntersectRect(&v13, (int *)&v13, (int *)(a1 + 144));
    }
    if ( (unsigned int)IntersectWithParents(a1, &v13) )
    {
      if ( a1 != GetDesktopWindow(a1) )
      {
        v7 = *v6;
        v8 = -*(_DWORD *)(a1 + 148);
        HIDWORD(v13) -= *(_DWORD *)(a1 + 148);
        v9 = -v7;
        LODWORD(v13) = v9 + v13;
        DWORD2(v13) += v9;
        DWORD1(v13) += v8;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 168) + 100LL) & 0x20) != 0
        && ((*(_BYTE *)(a1 + 61) & 1) != 0 || *(_QWORD *)(a1 + 176) != 1LL) )
      {
        GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
        v11 = *(__int64 ***)(gpDispInfo + 16LL);
        if ( v11 )
        {
          while ( v11[2] != (__int64 *)a1 || ((_DWORD)v11[8] & 2) != 0 )
          {
            v11 = (__int64 **)*v11;
            if ( !v11 )
              goto LABEL_25;
          }
          GreTransformPoints((HDC)v11[1], (struct _POINTL *)&v13, (struct _POINTL *)&v13, 2, 0);
        }
LABEL_25:
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      }
    }
    else
    {
      v13 = 0uLL;
    }
    if ( a2 )
    {
      if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 152) - *v6 - v13;
        LODWORD(v13) = *(_DWORD *)(a1 + 152) - *v6 - DWORD2(v13);
        DWORD2(v13) = v12;
      }
      *(_OWORD *)a2 = v13;
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
