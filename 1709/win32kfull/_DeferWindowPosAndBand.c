/*
 * XREFs of _DeferWindowPosAndBand @ 0x1C009ABD8
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C009AA00 (NtUserDeferWindowPosAndBand.c)
 *     _lambda_83d541044935d6b78d321269d1803f89_::operator() @ 0x1C010F404 (_lambda_83d541044935d6b78d321269d1803f89_--operator().c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _DeferWindowPos @ 0x1C0066DC0 (_DeferWindowPos.c)
 *     IsValidBandForProcess @ 0x1C0073288 (IsValidBandForProcess.c)
 *     IsValidBand @ 0x1C010D27C (IsValidBand.c)
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
  __int64 v13; // r14
  unsigned int v15; // ecx
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // r8d
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax

  v10 = 0;
  v13 = a2;
  if ( a10 )
  {
    v16 = a9;
    if ( a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
    {
      v21 = *(_DWORD *)(a3 + 320);
      if ( v21 != a9 && *(_DWORD *)(a2 + 320) != v21 )
        goto LABEL_40;
    }
    if ( !IAMThreadAccessGranted(gptiCurrent) )
      goto LABEL_40;
    if ( !(unsigned int)IsValidBand(a9, a2, v22, v23) )
      goto LABEL_41;
    if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v24 + 400), a9, 0LL)
      || a9 == 15
      || *(_DWORD *)(v13 + 320) == 15 )
    {
LABEL_40:
      v25 = 5LL;
LABEL_42:
      UserSetLastError(v25, a2);
      return 0LL;
    }
    if ( *(_QWORD *)(v13 + 104) != GetDesktopWindow(v13) || *(char *)(v13 + 60) < 0 )
      goto LABEL_41;
    if ( a3 > 1 )
    {
      if ( a3 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_DWORD *)(a3 + 320) != a9 )
        {
          a2 = (unsigned int)(*(_DWORD *)(a1 + 28) - 1);
          if ( (int)a2 >= 0 )
          {
            v26 = *(_QWORD *)(a1 + 40);
            v27 = (int)a2;
            v28 = (_QWORD *)(v26 + 168LL * (int)a2);
            while ( *v28 != *(_QWORD *)a3 )
            {
              a2 = (unsigned int)(a2 - 1);
              v28 -= 21;
              if ( --v27 < 0 )
                goto LABEL_49;
            }
            if ( *(_DWORD *)(168LL * (int)a2 + v26 + 152) != a9 )
              goto LABEL_41;
          }
LABEL_49:
          if ( (_DWORD)a2 == -1 )
          {
LABEL_41:
            v25 = 87LL;
            goto LABEL_42;
          }
        }
      }
      else if ( a9 != 1 )
      {
        goto LABEL_41;
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
    goto LABEL_41;
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
  return DeferWindowPos(a1, v13, (__int64 *)a3, a4, v17, v18, v10, v15, v16);
}
