/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x1404DD4C8
 * Callers:
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     PsGetProcessStartKey @ 0x1400AE9D0 (PsGetProcessStartKey.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChangeWithStats()
{
  __int64 v0; // r9
  unsigned __int64 ProcessStartKey; // rax
  __int64 v2; // r9
  unsigned __int8 v3; // cl
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  bool v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  int *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  int *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  bool *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  char *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  char *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  int *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  __int64 *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]

  if ( stru_140354B50.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140354B50, 0x200000000003uLL) )
    {
      v10 = *(_DWORD *)(v0 + 736);
      ProcessStartKey = PsGetProcessStartKey(v0);
      v3 = *(_BYTE *)(v2 + 1739);
      v13 = ProcessStartKey;
      v11 = *(_DWORD *)(v2 + 1572);
      v7 = (*(_BYTE *)(v2 + 1740) & 4) != 0;
      v8 = v3 & 0xF;
      v12 = *(_DWORD *)(v2 + 1448);
      v4 = *(_QWORD *)(v2 + 1920);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v14 = v4 << 12;
      v19 = &v10;
      v22 = &v13;
      v25 = &v11;
      v28 = &v7;
      v31 = &v8;
      v34 = &v9;
      v40 = &v12;
      v43 = &v14;
      v9 = v3 >> 4;
      v16 = v5;
      v17 = 98;
      v20 = 4;
      v23 = 8;
      v26 = 4;
      v29 = 1;
      v32 = 1;
      v35 = 1;
      v37 = v6;
      v38 = 44;
      v41 = 4;
      v44 = 8;
      TlgWrite(&stru_140354B50, &unk_1402D447D, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
