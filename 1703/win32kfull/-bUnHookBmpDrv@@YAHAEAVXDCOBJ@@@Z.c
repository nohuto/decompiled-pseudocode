/*
 * XREFs of ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A734
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007302C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0137314 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A364 (-bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C027CDD8 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 */

__int64 __fastcall bUnHookBmpDrv(struct XDCOBJ *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  struct SURFACE *v4; // rcx
  signed __int32 v5; // ett
  __int64 v6; // r9
  _OWORD *v7; // rbx
  __int64 v8; // rdx
  _OWORD *v9; // rax
  __int64 v10; // r8
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int128 v14; // xmm0
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 result; // rax
  _OWORD *v19; // [rsp+38h] [rbp+10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  if ( !gpBmpDev )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v2 + 36) & 0x4000) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(struct SURFACE **)(v2 + 512);
  v20 = v3;
  _m_prefetchw((const void *)(v3 + 32));
  do
    v5 = *(_DWORD *)(v3 + 32);
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v5 & 0xFF7FFFFF, v5) );
  *(_QWORD *)(v3 + 3536) = 0LL;
  bBmpUndoMakeOpaque(v4);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v7 = *(_OWORD **)(*(_QWORD *)a1 + 48LL);
  v19 = v7;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v19, (struct PDEVOBJ *)&v20, (struct PDEVOBJ *)&v19);
  v8 = v20;
  v9 = (_OWORD *)((char *)v7 + 72);
  v10 = 11LL;
  v11 = (_OWORD *)(v20 + 72);
  do
  {
    *v9 = *v11;
    v9[1] = v11[1];
    v9[2] = v11[2];
    v9[3] = v11[3];
    v9[4] = v11[4];
    v9[5] = v11[5];
    v9[6] = v11[6];
    v9 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v9 - 1) = v12;
    --v10;
  }
  while ( v10 );
  v13 = 9LL;
  *v9 = *v11;
  v9[1] = v11[1];
  v14 = v11[2];
  v15 = (_OWORD *)(v8 + 1552);
  v9[2] = v14;
  v16 = v7 + 97;
  do
  {
    *v16 = *v15;
    v16[1] = v15[1];
    v16[2] = v15[2];
    v16[3] = v15[3];
    v16[4] = v15[4];
    v16[5] = v15[5];
    v16[6] = v15[6];
    v16 += 8;
    v17 = v15[7];
    v15 += 8;
    *(v16 - 1) = v17;
    --v13;
  }
  while ( v13 );
  memmove((char *)v7 + 3576, (const void *)(v8 + 3576), gdwDirectDrawContext);
  result = 1LL;
  *((_QWORD *)v7 + 9) = v7;
  return result;
}
