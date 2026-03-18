/*
 * XREFs of GreExtTextOutRect @ 0x1C001CE28
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C001CF20 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 *v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+A0h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v3 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v8, a1);
  v4 = v8;
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 9) & 0x10000) == 0 )
    {
      v14 = 0LL;
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0;
      v13 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v10, (struct XDCOBJ *)&v8, 0) )
        v5 = ExtTextOutRect((struct XDCOBJ *)&v8, a2);
      else
        v5 = XDCOBJ::bFullScreen((XDCOBJ *)&v8);
      v3 = v5;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10);
      v4 = v8;
    }
    if ( v4 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
      v18 = 0;
      v6 = *v8;
      HmgDecrementExclusiveReferenceCountEx(v8, HIDWORD(v9), &v18);
      if ( v18 )
        bDeleteDCInternalEx(v6, 0LL);
    }
  }
  return v3;
}
