/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0202A04
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL) && (*((_BYTE *)a1 + 71) & 0x22) == 2 )
  {
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (*(_BYTE *)(i + 57) & 8) == 0 && (*(_BYTE *)(i + 70) & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)IntersectRect(v5, &a2->left, (int *)(i + 128)) )
        {
          SetOrClrWF(1, (_DWORD *)i, 0x108u, 1);
          SetOrClrWF(1, (_DWORD *)i, 0x680u, 1);
        }
      }
    }
  }
}
