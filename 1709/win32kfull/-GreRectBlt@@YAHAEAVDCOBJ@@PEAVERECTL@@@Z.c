/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0105D00
 * Callers:
 *     GreRectangle @ 0x1C01057D0 (GreRectangle.c)
 * Callees:
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001B97C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0021E50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C454 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r8d
  __int128 v15; // xmm0
  HDC v17[6]; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+74h] [rbp-8Ch]
  char v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _BYTE v25[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+150h] [rbp+50h]
  __int128 v31; // [rsp+188h] [rbp+88h]
  __int64 v32; // [rsp+1C0h] [rbp+C0h]
  int v33; // [rsp+1C8h] [rbp+C8h]
  int v34; // [rsp+1CCh] [rbp+CCh]

  v2 = *(_QWORD *)a1;
  v29 = 0LL;
  v34 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 80) + 72LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v17[5] = 0LL;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v17, a1);
  v7 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v20 & 1) != 0 )
    {
      v8 = *(_QWORD *)a1;
      v28 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      v26 = *(_QWORD *)(v28 + 128);
      v27 = *(_QWORD *)(v8 + 96);
      if ( (v6 & 0xE8) == 0 )
      {
        v30 = 0LL;
        goto LABEL_12;
      }
      v30 = v8 + 1600;
      v9 = *(_QWORD *)(v8 + 80);
      if ( (*(_DWORD *)(v9 + 8) & 0x1000) != 0 )
        GreDCSelectBrush(v8, *(_QWORD *)(v9 + 16));
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      v11 = *(_DWORD *)(v10 + 8);
      if ( (v11 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)a1 + 332LL) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 8) = v11 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v30, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 144LL), v27, v26, v28, 1);
      }
      if ( (*(_DWORD *)(v30 + 128) & 0x100) == 0 )
      {
        v12 = *(_QWORD *)a1;
        v32 = *(_QWORD *)(*(_QWORD *)a1 + 1592LL);
        if ( (*(_DWORD *)(v30 + 128) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v12 + 80) + 73LL) == 1 )
        {
          v13 = 43520;
          goto LABEL_13;
        }
LABEL_12:
        v13 = (_DWORD)v5 << 8;
LABEL_13:
        v14 = v5 | v13;
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v15 = *(_OWORD *)a2;
        v33 = v14;
        v29 = 0LL;
        v31 = v15;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v25, (DC **)a1, a1, v6);
        goto LABEL_16;
      }
    }
    v7 = 0;
  }
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v17);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v25);
  return v7;
}
