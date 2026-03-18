/*
 * XREFs of EtwpWriteProcessStarted @ 0x1404FDFA0
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     PsGetProcessStartKey @ 0x1400AE9D0 (PsGetProcessStartKey.c)
 *     PsGetProcessSessionId @ 0x1400AE9F0 (PsGetProcessSessionId.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400BA358 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmGetSessionCreateTime @ 0x140573A2C (MmGetSessionCreateTime.c)
 */

char __fastcall EtwpWriteProcessStarted(__int64 a1, int *a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rdi
  __int64 v10; // r10
  unsigned __int8 v11; // cl
  int v12; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int ProcessSessionId; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *p_ProcessSessionId; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  _DWORD *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+E0h] [rbp-20h]
  _DWORD v36[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int64 *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int64 *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  __int64 *p_Time; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+160h] [rbp+60h] BYREF
  __int64 v51; // [rsp+170h] [rbp+70h]
  int v52; // [rsp+178h] [rbp+78h]
  int v53; // [rsp+17Ch] [rbp+7Ch]
  _DWORD *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  __int64 v56; // [rsp+190h] [rbp+90h]
  _DWORD v57[2]; // [rsp+198h] [rbp+98h] BYREF

  v4 = *(_QWORD *)(a1 + 1128);
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( v4 )
    v5 = *(unsigned __int16 **)(a1 + 1128);
  if ( stru_140354B50.LevelPlus1 > 5 )
  {
    LOBYTE(v4) = TlgKeywordOn(&stru_140354B50, 3uLL);
    if ( (_BYTE)v4 )
    {
      v19 = *(_QWORD *)(a1 + 776);
      v14 = *(_DWORD *)(a1 + 736);
      v15 = *(_DWORD *)(a1 + 992);
      ProcessSessionId = PsGetProcessSessionId(a1);
      ProcessStartKey = PsGetProcessStartKey(a1);
      v21 = *(_QWORD *)(a1 + 1872);
      v22 = *(_QWORD *)(a1 + 1880);
      Time = MmGetSessionCreateTime();
      v17 = *a2;
      v18 = a2[1];
      v26 = 8LL;
      v25 = &v19;
      v28 = 4LL;
      v27 = &v14;
      v29 = &v15;
      p_ProcessSessionId = &ProcessSessionId;
      v33 = v36;
      v35 = *((_QWORD *)v5 + 1);
      v36[0] = *v5;
      p_ProcessStartKey = &ProcessStartKey;
      v39 = &v21;
      v41 = &v22;
      p_Time = &Time;
      v45 = &v17;
      v47 = &v18;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 2LL;
      v36[1] = 0;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 4LL;
      v48 = 4LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a3 + 16));
      TlgCreateWsz(&v50, (LPCWSTR)(a3 + 272));
      v11 = *(_BYTE *)(v10 + 1);
      v12 = 15;
      if ( v11 <= 0xFu )
        v12 = v11;
      v51 = v10;
      v52 = 4 * v12 + 8;
      v54 = v57;
      v56 = *((_QWORD *)a4 + 1);
      v57[0] = *a4;
      v53 = 0;
      v55 = 2LL;
      v57[1] = 0;
      LOBYTE(v4) = TlgWrite(&stru_140354B50, &unk_1402D4383, 0LL, 0LL, 0x13u, &pData);
    }
  }
  return v4;
}
