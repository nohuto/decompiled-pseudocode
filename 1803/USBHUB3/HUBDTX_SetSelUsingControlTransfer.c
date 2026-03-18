/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x1C002660C
 * Callers:
 *     HUBDSM_SettingSEL @ 0x1C001EC40 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetSelUsingControlTransfer(_WORD *a1)
{
  __int64 v1; // r8
  _BYTE *v2; // rsi
  unsigned __int16 v3; // r9
  unsigned __int16 v5; // ax
  int v6; // edi
  char v7; // r10
  unsigned __int16 v8; // dx
  __int16 v9; // dx
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v2 = a1 + 1098;
  v3 = a1[1096];
  v5 = *(_WORD *)(*(_QWORD *)a1 + 2466LL);
  v6 = *(unsigned __int8 *)(*(_QWORD *)a1 + 232LL);
  v7 = v5;
  if ( v3 <= v5 )
    v3 = v5;
  else
    v7 = a1[1096];
  v8 = *(_WORD *)(v1 + 2470) + (1000 * (v6 - *(unsigned __int8 *)(v1 + 2472)) + 500) / 1000;
  if ( v3 <= v8 )
  {
    *((_BYTE *)a1 + 2197) = v8;
  }
  else
  {
    *((_BYTE *)a1 + 2197) = v7;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 1u);
  }
  v9 = v3 + *(_WORD *)(v1 + 2478) + ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 1179LL) + 5) / 0xA;
  v10 = a1[1097];
  a1[1101] = v9;
  if ( v10 <= *(_WORD *)(v1 + 2468) )
    v10 = *(_WORD *)(v1 + 2468);
  v11 = *(_WORD *)(v1 + 2474) + (1000 * (v6 - *(unsigned __int8 *)(v1 + 2476)) + 500) / 1000;
  if ( v10 <= v11 )
  {
    a1[1100] = v11;
  }
  else
  {
    a1[1100] = v10;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 2u);
  }
  v12 = a1[1291];
  a1[1102] = v10 + *(_WORD *)(v1 + 2480) + ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 1179LL) + 5) / 0xA;
  v13 = a1[1290];
  if ( (_BYTE)v6 )
    v14 = (800 * v6 + 2200 + (v6 + 1) * (v12 + (unsigned int)v13)) / 0x3E8;
  else
    LOWORD(v14) = v12 + v13;
  *v2 = v14 + *((_BYTE *)a1 + 2197) + 5;
  a1[1099] = v14 + a1[1100] + 5;
  *((_BYTE *)a1 + 400) &= 0x1Cu;
  *((_BYTE *)a1 + 401) = 48;
  *((_DWORD *)a1 + 101) = 393216;
  a1[201] = 0;
  v15 = HUBMISC_ControlTransfer(
          *(_QWORD *)a1,
          *((_QWORD *)a1 + 3),
          (_DWORD)a1,
          (int)a1 + 248,
          (__int64)HUBDTX_ControlTransferComplete,
          (__int64)v2,
          6,
          1,
          *((_BYTE *)a1 + 1512));
  if ( v15 < 0 )
  {
    LODWORD(v16) = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
      2u,
      5u,
      0x63u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v16);
    HUBSM_AddEvent((__int64)(a1 + 252), 4004);
  }
}
