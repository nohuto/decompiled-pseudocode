/*
 * XREFs of xxxTranslateMessage @ 0x1C00F8AB8
 * Callers:
 *     NtUserTranslateMessage @ 0x1C00F8A30 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C020E870 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C00F8CC4 (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  int v10; // edi
  unsigned __int64 v11; // rsi
  BOOL v12; // ebx
  unsigned int v14; // r15d
  __int64 v15; // rbp
  _WORD *v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v23[32]; // [rsp+48h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( v3 < 0x100 )
    return 0LL;
  if ( v3 > 0x101 && v3 != 261 )
  {
    if ( v3 == 260 )
    {
      v5 = 1;
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  v22 = v3;
  LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
  EtwTraceBeginTranslateMessage(v6, v22);
  v7 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v7 && ((v19 = *(__int64 **)(*(_QWORD *)v7 + 16LL)) != 0LL ? (v20 = *v19) : (v20 = 0LL), v20 == *(_QWORD *)a1) )
    v8 = a2 | 1;
  else
    v8 = a2 & 0xFFFFFFFE;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v9),
          *(_QWORD *)(gptiCurrent + 384LL) + 192LL,
          v23,
          16,
          v8,
          &v21,
          0LL);
  v11 = v21 & 0x4000000 | v9;
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
    if ( (v21 & 0x8000) != 0 )
      v11 |= 0x80000000uLL;
    else
      LODWORD(v11) = v11 & 0x7FFFFFFF;
    v15 = ValidateHwnd(*(_QWORD *)a1);
    if ( v15 )
    {
      v16 = v23;
      while ( v10 > 0 )
      {
        v17 = 0x2000000LL;
        if ( v10 <= 1 )
          v17 = 0LL;
        v18 = _PostTransformableMessageExtended(
                v15,
                v14,
                (unsigned __int16)*v16,
                (struct _LARGE_STRING *)(v11 | v17),
                0LL,
                1);
        *v16++ = 0;
        if ( v18 >= (unsigned __int64)MmSystemRangeStart
          && *(_DWORD *)(v18 + 24) == 258
          && (*(_DWORD *)(gptiCurrent + 1200LL) & 1) != 0 )
        {
          *(_DWORD *)(v18 + 100) |= 0x4000u;
          if ( (v21 & 0x8000000) != 0 )
            *(_DWORD *)(v18 + 100) |= 0x8000u;
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
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v22);
  return v12;
}
