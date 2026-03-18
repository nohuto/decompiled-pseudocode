/*
 * XREFs of GrePolyTextOutW @ 0x1C00E3088
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C00E2CE0 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  ERECTL *v10; // rcx
  __int64 v11; // rbx
  DC *v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h]
  int v15[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  char v24; // [rsp+D0h] [rbp-30h] BYREF

  v5 = a3;
  v13 = 0LL;
  v14 = 0LL;
  v7 = 1;
  XDCOBJ::vLock(&v13, a1);
  if ( !v13 || (*((_DWORD *)v13 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    v20 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)&v13, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = a2 + 8;
        while ( 1 )
        {
          v10 = (ERECTL *)&v24;
          if ( ((30 * *(_DWORD *)v9 + 7) & 0xFFFFFFF8) > 0xC0 )
            v10 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)&v13,
                                *(_DWORD *)(v9 - 8),
                                *(_DWORD *)(v9 - 4),
                                *(_DWORD *)(v9 + 16),
                                (struct tagRECT *)(v9 + 20),
                                *(unsigned __int16 **)(v9 + 8),
                                *(_DWORD *)v9,
                                *(int **)(v9 + 40),
                                *(unsigned __int8 *)(*((_QWORD *)v13 + 10) + 73LL),
                                v10,
                                a4) )
            break;
          v9 += 56LL;
          if ( v9 - 8 >= v8 )
            goto LABEL_10;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)&v13);
    }
LABEL_10:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
  }
  if ( v13 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v13);
    v15[0] = 0;
    v11 = *(_QWORD *)v13;
    HmgDecrementExclusiveReferenceCountEx(v13, HIDWORD(v14), v15);
    if ( v15[0] )
      bDeleteDCInternalEx(v11, 0LL);
  }
  return v7;
}
