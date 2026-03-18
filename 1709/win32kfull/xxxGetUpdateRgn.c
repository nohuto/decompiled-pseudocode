/*
 * XREFs of xxxGetUpdateRgn @ 0x1C0107368
 * Callers:
 *     NtUserGetUpdateRgn @ 0x1C01072D0 (NtUserGetUpdateRgn.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IntersectWithParents @ 0x1C006A4F4 (IntersectWithParents.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     MirrorRegion @ 0x1C0107644 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxGetUpdateRgn(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF

  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
  SetOrClrWF(0, (_DWORD *)a1, 0x120u, 1);
  if ( *(_QWORD *)(a1 + 176) )
  {
    v11 = *(_OWORD *)(a1 + 144);
    v5 = IntersectWithParents(a1, &v11);
    if ( *(_QWORD *)(a1 + 176) == 1LL )
    {
      if ( v5 )
      {
        v6 = 2;
        if ( a1 != GetDesktopWindow(a1) )
        {
          v7 = *(_DWORD *)(a1 + 144);
          v8 = -*(_DWORD *)(a1 + 148);
          HIDWORD(v11) -= *(_DWORD *)(a1 + 148);
          v9 = -v7;
          LODWORD(v11) = v9 + v11;
          DWORD2(v11) += v9;
          DWORD1(v11) += v8;
        }
        SetRectRgnIndirect(a2, &v11);
LABEL_9:
        MirrorRegion(a1, a2, 1LL);
        return v6;
      }
    }
    else
    {
      SetRectRgnIndirect(ghrgnInv2, &v11);
      v6 = GreCombineRgn(a2, ghrgnInv2, *(_QWORD *)(a1 + 176), 1LL);
      if ( v6 > 1 )
      {
        if ( a1 != GetDesktopWindow(a1) )
          GreOffsetRgn(a2, (unsigned int)-*(_DWORD *)(a1 + 144), (unsigned int)-*(_DWORD *)(a1 + 148));
        goto LABEL_9;
      }
    }
  }
  SetEmptyRgn(a2);
  return 1LL;
}
