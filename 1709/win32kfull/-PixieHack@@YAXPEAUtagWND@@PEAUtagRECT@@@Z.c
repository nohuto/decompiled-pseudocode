/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0204518
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0069EC4 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL, (int)a2) && (*((_BYTE *)a1 + 71) & 0x22) == 2 )
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
