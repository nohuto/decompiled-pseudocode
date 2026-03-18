/*
 * XREFs of OffsetChildren @ 0x1C009E97C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C009D1C0 (DwmAsyncChildClipRgnChange.c)
 *     FindSpb @ 0x1C01E3B40 (FindSpb.c)
 */

void __fastcall OffsetChildren(__int64 a1, unsigned int a2, __int64 a3, int *a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v7; // edi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *Spb; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  int v19[4]; // [rsp+60h] [rbp-28h] BYREF
  struct tagPOINT v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 112);
  v7 = a3;
  if ( v5 )
  {
LABEL_2:
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v19, a4, (int *)(v5 + 128)) )
        goto LABEL_26;
      *(_DWORD *)(v5 + 128) += a2;
      *(_DWORD *)(v5 + 136) += a2;
      *(_DWORD *)(v5 + 132) += v7;
      *(_DWORD *)(v5 + 140) += v7;
      *(_DWORD *)(v5 + 144) += a2;
      *(_DWORD *)(v5 + 152) += a2;
      *(_DWORD *)(v5 + 148) += v7;
      *(_DWORD *)(v5 + 156) += v7;
      v10 = *(_QWORD *)(v5 + 176);
      if ( v10 > 1 && (*(_BYTE *)(v5 + 61) & 8) == 0 )
        GreOffsetRgn(v10, a2, v7);
      v11 = *(_QWORD *)(v5 + 216);
      if ( v11 )
        GreOffsetRgn(v11, a2, v7);
      if ( *(char *)(v5 + 56) < 0 )
      {
        Spb = (_DWORD *)FindSpb(v5);
        Spb[6] += a2;
        Spb[8] += a2;
        Spb[9] += v7;
        Spb[7] += v7;
      }
      if ( a5 && (unsigned int)IsWindowDesktopComposed(v5) )
      {
        DwmChildRectChange(v5);
        v18 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
        DwmAsyncChildClipRgnChange(v18, *(_QWORD *)v5);
      }
      if ( (*(_BYTE *)(v5 + 66) & 8) != 0 )
      {
        v20 = *(struct tagPOINT *)(v5 + 128);
        UpdateSprite(*(HDEV *)(gpDispInfo + 32LL), (struct tagWND *)v5, a3, 0LL, &v20, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
      }
      v12 = *(_QWORD *)(v5 + 112);
      if ( !v12 )
      {
LABEL_26:
        v12 = *(_QWORD *)(v5 + 88);
        if ( !v12 )
          break;
      }
      v5 = v12;
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)(v5 + 104);
      if ( v5 == a1 )
        break;
      if ( *(_QWORD *)(v5 + 88) )
      {
        v5 = *(_QWORD *)(v5 + 88);
        goto LABEL_2;
      }
    }
  }
}
