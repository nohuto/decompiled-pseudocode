/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F997C
 * Callers:
 *     GreRectangle @ 0x1C00F9578 (GreRectangle.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0072C4C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0074B50 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009559C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r8d
  __int128 v14; // xmm0
  HDC v16[6]; // [rsp+40h] [rbp-C0h] BYREF
  char v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+74h] [rbp-8Ch]
  char v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  _BYTE v24[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  __int64 v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+140h] [rbp+40h]
  __int64 v29; // [rsp+150h] [rbp+50h]
  __int128 v30; // [rsp+188h] [rbp+88h]
  __int64 v31; // [rsp+1C0h] [rbp+C0h]
  int v32; // [rsp+1C8h] [rbp+C8h]
  int v33; // [rsp+1CCh] [rbp+CCh]

  v2 = *(_QWORD *)a1;
  v28 = 0LL;
  v33 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 80) + 72LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v16[5] = 0LL;
  v17 = 0;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v16, (DC **)a1);
  v7 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v19 & 1) != 0 )
    {
      v8 = *(_QWORD *)a1;
      v27 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      v25 = *(_QWORD *)(v27 + 128);
      v26 = *(_QWORD *)(v8 + 96);
      if ( (v6 & 0xE8) == 0 )
      {
        v29 = 0LL;
        goto LABEL_12;
      }
      v29 = v8 + 1600;
      v9 = *(_QWORD *)(v8 + 80);
      if ( (*(_DWORD *)(v9 + 8) & 0x1000) != 0 )
        GreDCSelectBrush(v8, *(_QWORD *)(v9 + 16));
      v10 = *(_QWORD *)a1;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) & 1) != 0 || (*(_DWORD *)(v10 + 332) & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v10 + 80) + 8LL) &= ~1u;
        *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v29, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 144LL), v26, v25, v27, 1);
      }
      if ( (*(_DWORD *)(v29 + 128) & 0x100) == 0 )
      {
        v11 = *(_QWORD *)a1;
        v31 = *(_QWORD *)(*(_QWORD *)a1 + 1592LL);
        if ( (*(_DWORD *)(v29 + 128) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v11 + 80) + 73LL) == 1 )
        {
          v12 = 43520;
          goto LABEL_13;
        }
LABEL_12:
        v12 = (_DWORD)v5 << 8;
LABEL_13:
        v13 = v5 | v12;
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v14 = *(_OWORD *)a2;
        v32 = v13;
        v28 = 0LL;
        v30 = v14;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v24, (DC **)a1, a1, v6);
        goto LABEL_16;
      }
    }
    v7 = 0;
  }
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v16);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v24);
  return v7;
}
