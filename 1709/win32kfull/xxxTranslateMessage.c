/*
 * XREFs of xxxTranslateMessage @ 0x1C005265C
 * Callers:
 *     NtUserTranslateMessage @ 0x1C00525D0 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C0052854 (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     _PostMessageExtended @ 0x1C00541EC (_PostMessageExtended.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v10; // edi
  int v11; // esi
  BOOL v12; // ebx
  int v14; // r15d
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // ebp
  _WORD *v18; // rbx
  int v19; // r9d
  unsigned __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v25[32]; // [rsp+48h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( v3 < 0x100 )
    return 0LL;
  if ( v3 <= 0x101 )
    goto LABEL_3;
  if ( v3 == 260 )
  {
    v5 = 1;
  }
  else if ( v3 != 261 )
  {
    return 0LL;
  }
LABEL_3:
  v24 = v3;
  LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1196);
  EtwTraceBeginTranslateMessage(v6, v24);
  v7 = *(_QWORD *)(gptiCurrent + 584LL);
  if ( v7 && ((v21 = *(__int64 **)(*(_QWORD *)v7 + 16LL)) != 0LL ? (v22 = *v21) : (v22 = 0LL), v22 == *(_QWORD *)a1) )
    v8 = a2 | 1;
  else
    v8 = a2 & 0xFFFFFFFE;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v9),
          *(_QWORD *)(gptiCurrent + 408LL) + 224LL,
          v25,
          16,
          v8,
          &v23,
          0LL);
  v11 = v23 & 0x4000000 | v9;
  if ( v10 )
  {
    if ( v10 <= 0 )
    {
      v10 = -v10;
      v14 = 4 * v5 + 259;
    }
    else
    {
      v14 = 4 * v5 + 258;
    }
    if ( (v23 & 0x8000) != 0 )
      v15 = v11 | 0x80000000;
    else
      v15 = v11 & 0x7FFFFFFF;
    v16 = ValidateHwnd(*(_QWORD *)a1);
    v17 = v16;
    if ( v16 )
    {
      v18 = v25;
      while ( v10 > 0 )
      {
        v19 = 0x2000000;
        if ( v10 <= 1 )
          v19 = 0;
        v20 = PostMessageExtended(v17, v14, (unsigned __int16)*v18, v15 | v19, 0LL);
        *v18++ = 0;
        if ( v20 >= (unsigned __int64)MmSystemRangeStart
          && *(_DWORD *)(v20 + 24) == 258
          && (*(_DWORD *)(gptiCurrent + 1288LL) & 1) != 0 )
        {
          *(_DWORD *)(v20 + 100) |= 0x4000u;
          if ( (v23 & 0x8000000) != 0 )
            *(_DWORD *)(v20 + 100) |= 0x8000u;
        }
        --v10;
      }
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = (v8 & 2) == 0;
  }
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v24);
  return v12;
}
