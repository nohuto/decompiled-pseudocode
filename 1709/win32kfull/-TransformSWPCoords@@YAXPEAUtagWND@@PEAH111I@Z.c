/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01E2EAC
 * Callers:
 *     NtUserSetWindowPos @ 0x1C00665E0 (NtUserSetWindowPos.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C009AA00 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  INT v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  unsigned __int16 v22; // di
  unsigned __int16 v23; // ax
  INT v24; // ebx
  int v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+24h] [rbp-24h]
  int v27; // [rsp+28h] [rbp-20h]
  int v28; // [rsp+2Ch] [rbp-1Ch]

  if ( (a6 & 3) == 0 )
  {
    v10 = *a2;
    v11 = *a3;
    v25 = v10;
    v27 = *a4 + v10;
    v12 = v11 + *a5;
    v26 = v11;
    v28 = v12;
    TransformRectBetweenCoordinateSpaces(&v25, &v25, a1, 0LL);
    v13 = v26;
    v14 = v27 - v25;
    *a2 = v25;
    *a3 = v13;
    *a4 = v14;
    v15 = v28 - v13;
LABEL_12:
    *a5 = v15;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    v25 = *a2;
    v26 = *a3;
    TransformPointBetweenCoordinateSpaces(&v25, &v25, a1, 0LL);
    *a2 = v25;
    *a3 = v26;
    return;
  }
  if ( (a6 & 1) == 0 )
  {
    v16 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    v21 = v16;
    if ( v16 )
    {
      v22 = (*((_DWORD *)a1 + 92) >> 8) & 0x1FF;
      if ( !v22 )
      {
        v18 = *(_QWORD *)(v16 + 40);
        v22 = *(_WORD *)(v18 + 64);
      }
      v23 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) >> 8) & 0x1FF;
      if ( !v23 )
        v23 = *(_WORD *)(*(_QWORD *)(v21 + 40) + 64LL);
      v24 = v23;
      *a4 = EngMulDiv(*a4, v22, v23);
      v15 = EngMulDiv(*a5, v22, v24);
      goto LABEL_12;
    }
  }
}
