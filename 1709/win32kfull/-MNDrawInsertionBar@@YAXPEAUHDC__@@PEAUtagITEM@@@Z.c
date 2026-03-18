/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C007FCA8
 * Callers:
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  unsigned int v2; // r11d
  int v3; // r14d
  int v4; // r10d
  int v5; // edi
  int v6; // esi
  int v7; // r8d
  __int64 v8; // r15
  int v9; // ebx
  int v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h]
  int v12; // [rsp+40h] [rbp-21h]
  int v13; // [rsp+44h] [rbp-1Dh]
  __int64 v14; // [rsp+48h] [rbp-19h]
  int v15; // [rsp+50h] [rbp-11h]
  int v16; // [rsp+54h] [rbp-Dh]
  int v17; // [rsp+58h] [rbp-9h]
  int v18; // [rsp+5Ch] [rbp-5h]
  __int64 v19; // [rsp+60h] [rbp-1h]
  int v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+6Ch] [rbp+Bh]
  int v22; // [rsp+70h] [rbp+Fh]
  int v23; // [rsp+74h] [rbp+13h]
  __int64 v24; // [rsp+78h] [rbp+17h]

  v2 = *((_DWORD *)a2 + 1) & 0x80000000;
  if ( *((int *)a2 + 1) < 0 || (*((_DWORD *)a2 + 1) & 0x40000000) != 0 )
  {
    v3 = *((_DWORD *)a2 + 18);
    v4 = *((_DWORD *)a2 + 19);
    v5 = *(_DWORD *)(gpsi + 2152LL);
    v6 = *(_DWORD *)(gpsi + 2156LL);
    v12 = v5;
    v13 = v6;
    v10 = v3 + v5;
    if ( v2 )
    {
      v7 = v4;
      v11 = v4;
    }
    else
    {
      v7 = v4 + *((_DWORD *)a2 + 21) - v6;
      v11 = v7;
    }
    v8 = *(_QWORD *)(gpsi + 4784LL);
    v9 = *((_DWORD *)a2 + 20);
    v15 = v3 + 2 * v5;
    v14 = v8;
    v17 = v9 - 4 * v5;
    v18 = v6 / 2;
    if ( v2 )
      v16 = v4;
    else
      v16 = v4 + *((_DWORD *)a2 + 21) - v6 / 2;
    v21 = v7;
    v19 = v8;
    v20 = v3 + v9 - 2 * v5;
    v22 = v5;
    v23 = v6;
    v24 = v8;
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)&v10, 3);
  }
}
