/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x1C0025B1C
 * Callers:
 *     HUBDSM_SettingSEL @ 0x1C001E2E0 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetSelUsingControlTransfer(unsigned __int16 *a1)
{
  __int64 v1; // r10
  unsigned __int16 v3; // r9
  int v4; // edi
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // dx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)a1;
  v3 = *(_WORD *)(*(_QWORD *)a1 + 2466LL);
  v4 = *(unsigned __int8 *)(*(_QWORD *)a1 + 232LL);
  if ( a1[1096] > v3 )
    v3 = a1[1096];
  v5 = *(_WORD *)(v1 + 2470) + (1000 * (v4 - *(unsigned __int8 *)(v1 + 2472)) + 500) / 1000;
  if ( v3 <= v5 )
  {
    *((_BYTE *)a1 + 2197) = v5;
  }
  else
  {
    *((_BYTE *)a1 + 2197) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 1u);
  }
  v6 = a1[1097];
  a1[1101] = v3 + *(_WORD *)(v1 + 2478) + ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 1179LL) + 5) / 0xA;
  v7 = *(_WORD *)(v1 + 2468);
  if ( v6 > v7 )
    v7 = v6;
  v8 = *(_WORD *)(v1 + 2474) + (1000 * (v4 - *(unsigned __int8 *)(v1 + 2476)) + 500) / 1000;
  if ( v7 <= v8 )
  {
    a1[1100] = v8;
  }
  else
  {
    a1[1100] = v7;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 2u);
  }
  a1[1102] = v7 + *(_WORD *)(v1 + 2480) + ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 1179LL) + 5) / 0xA;
  if ( (_BYTE)v4 )
    v9 = (800 * v4 + 2200 + (v4 + 1) * (a1[1286] + (unsigned int)a1[1287])) / 0x3E8;
  else
    LOWORD(v9) = a1[1286] + a1[1287];
  *((_BYTE *)a1 + 2196) = v9 + *((_BYTE *)a1 + 2197) + 5;
  a1[1099] = v9 + a1[1100] + 5;
  *((_BYTE *)a1 + 400) &= 0x1Cu;
  *((_BYTE *)a1 + 401) = 48;
  *((_DWORD *)a1 + 101) = 393216;
  a1[201] = 0;
  v10 = HUBMISC_ControlTransfer(
          *(_QWORD *)a1,
          *((_QWORD *)a1 + 3),
          (_DWORD)a1,
          (int)a1 + 248,
          (__int64)HUBDTX_ControlTransferComplete,
          (__int64)(a1 + 1098),
          6,
          1,
          *((_BYTE *)a1 + 1512));
  if ( v10 < 0 )
  {
    LODWORD(v11) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 1432LL),
      2u,
      5u,
      0x63u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v11);
    HUBSM_AddEvent((__int64)(a1 + 252), 4004);
  }
}
