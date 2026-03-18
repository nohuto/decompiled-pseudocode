/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020E20C
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020E2F0 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C027A0D8 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  int v14[4]; // [rsp+30h] [rbp-38h] BYREF

  v9 = *((_WORD *)a1 + 41) & 0x3FFF;
  if ( v9 == 669 )
    v10 = 0;
  else
    v10 = *((_DWORD *)a1 + 32);
  v14[0] = a4 + v10;
  v14[2] = a4 + a6;
  if ( v9 == 669 )
    v11 = 0;
  else
    v11 = *((_DWORD *)a1 + 33);
  v14[3] = a7 + a5;
  v14[1] = a5 + v11;
  v13 = *GetScreenRect(&v13, (__int64)a1);
  if ( (unsigned int)IntersectRect(v14, v14, (int *)&v13) )
    return GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 32LL), a2, a3, v14);
  else
    return 0LL;
}
