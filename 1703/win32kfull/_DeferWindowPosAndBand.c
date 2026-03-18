/*
 * XREFs of _DeferWindowPosAndBand @ 0x1C00455E4
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00457B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowBand @ 0x1C00F1550 (NtUserSetWindowBand.c)
 * Callees:
 *     IsValidBandForProcess @ 0x1C0018B24 (IsValidBandForProcess.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     _DeferWindowPos @ 0x1C00632C8 (_DeferWindowPos.c)
 *     IsValidBand @ 0x1C0100EE0 (IsValidBand.c)
 */

__int64 __fastcall DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  int v10; // ebx
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // r8d
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax

  v10 = 0;
  if ( a10 )
  {
    v16 = a9;
    if ( a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
    {
      v24 = *(_DWORD *)(a3 + 320);
      if ( v24 != a9 && *(_DWORD *)(a2 + 320) != v24 )
        goto LABEL_33;
    }
    if ( !IAMThreadAccessGranted(gptiCurrent) )
      goto LABEL_33;
    if ( !(unsigned int)IsValidBand(a9) )
      goto LABEL_37;
    if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v21 + 376), a9, 0LL)
      || a9 == 15
      || *(_DWORD *)(a2 + 320) == 15 )
    {
LABEL_33:
      v23 = 5LL;
LABEL_38:
      UserSetLastError(v23);
      return 0LL;
    }
    if ( *(_QWORD *)(a2 + 104) != GetDesktopWindow(a2, v22) || *(char *)(a2 + 60) < 0 )
      goto LABEL_37;
    if ( a3 > 1 )
    {
      if ( a3 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_DWORD *)(a3 + 320) != a9 )
        {
          v25 = *(_DWORD *)(a1 + 28) - 1;
          if ( v25 >= 0 )
          {
            v26 = *(_QWORD *)(a1 + 40);
            v27 = v25;
            v28 = (_QWORD *)(v26 + 168LL * v25);
            while ( *v28 != *(_QWORD *)a3 )
            {
              --v25;
              v28 -= 21;
              if ( --v27 < 0 )
                goto LABEL_49;
            }
            if ( *(_DWORD *)(168LL * v25 + v26 + 152) != a9 )
              goto LABEL_37;
          }
LABEL_49:
          if ( v25 == -1 )
          {
LABEL_37:
            v23 = 87LL;
            goto LABEL_38;
          }
        }
      }
      else if ( a9 != 1 )
      {
        goto LABEL_37;
      }
    }
    v15 = a8 & 0xFFF9FBFF | 0x60000;
  }
  else
  {
    v15 = a8;
    v16 = 0;
  }
  if ( ((a10 != 0 ? -459776 : -66560) & v15) != 0 )
    goto LABEL_37;
  if ( (v15 & 2) != 0 )
  {
    v17 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      a4 = -32768;
    }
    v17 = a5;
    if ( a5 > 0x7FFF )
    {
      v17 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v17 = -32768;
    }
  }
  v18 = a6;
  if ( (v15 & 1) != 0 )
  {
    v10 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v18 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v18 = 0x7FFF;
    }
    v19 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v19 = 0x7FFF;
      v10 = v19;
    }
  }
  return DeferWindowPos(a1, a2, a3, a4, v17, v18, v10, v15, v16);
}
