/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x14045118C
 * Callers:
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     PsGetProcessStartKey @ 0x1400853A0 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChangeWithStats()
{
  __int64 v0; // r9
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r11
  __int64 v4; // r10
  bool v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  int v15; // [rsp+8Ch] [rbp-74h]
  int *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  int v18; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *p_ProcessStartKey; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+ACh] [rbp-54h]
  int *v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+BCh] [rbp-44h]
  bool *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+CCh] [rbp-34h]
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  int *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+10Ch] [rbp+Ch]

  if ( stru_14033C520.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C520, 0x200000000003uLL) )
    {
      v6 = *(_DWORD *)(v0 + 736);
      ProcessStartKey = PsGetProcessStartKey(v0);
      v7 = *(_DWORD *)(v1 + 1572);
      v5 = (*(_BYTE *)(v1 + 1740) & 0x10) != 0;
      v8 = *(unsigned __int8 *)(v1 + 1739);
      v9 = *(_DWORD *)(v1 + 1448);
      v2 = *(_QWORD *)(v1 + 1896);
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v11 = v2 << 12;
      v16 = &v6;
      p_ProcessStartKey = &ProcessStartKey;
      v22 = &v7;
      v25 = &v5;
      v28 = &v8;
      v34 = &v9;
      v37 = &v11;
      v13 = v3;
      v14 = 98;
      v17 = 4;
      v20 = 8;
      v23 = 4;
      v26 = 1;
      v29 = 4;
      v31 = v4;
      v32 = 44;
      v35 = 4;
      v38 = 8;
      TlgWrite(&stru_14033C520, &unk_1402AF5E9, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
