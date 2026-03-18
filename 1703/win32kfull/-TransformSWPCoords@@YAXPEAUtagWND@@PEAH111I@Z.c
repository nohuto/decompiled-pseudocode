/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01D6618
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00457B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0062D90 (NtUserSetWindowPos.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int16 v20; // ax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+24h] [rbp-24h]
  int v23; // [rsp+28h] [rbp-20h]
  int v24; // [rsp+2Ch] [rbp-1Ch]

  if ( (a6 & 3) == 0 )
  {
    v10 = *a2;
    v11 = *a3;
    v21 = v10;
    v23 = *a4 + v10;
    v12 = v11 + *a5;
    v22 = v11;
    v24 = v12;
    TransformRectBetweenCoordinateSpaces(&v21, &v21, a1, 0LL);
    v13 = v22;
    v14 = v23 - v21;
    *a2 = v21;
    *a3 = v13;
    *a4 = v14;
    v15 = v24 - v13;
LABEL_8:
    *a5 = v15;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    v21 = *a2;
    v22 = *a3;
    TransformPointBetweenCoordinateSpaces(&v21, &v21, a1, 0LL);
    *a2 = v21;
    *a3 = v22;
    return;
  }
  if ( (a6 & 1) == 0 )
  {
    v16 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    v17 = v16;
    if ( v16 )
    {
      v18 = (unsigned __int16)MonitorDpiFromDpiAwarenessContext(v16, *((unsigned int *)a1 + 92));
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v20 = MonitorDpiFromDpiAwarenessContext(v17, CurrentThreadDpiAwarenessContext);
      *a4 = v18 * *a4 / v20;
      v15 = v18 * *a5 / v20;
      goto LABEL_8;
    }
  }
}
