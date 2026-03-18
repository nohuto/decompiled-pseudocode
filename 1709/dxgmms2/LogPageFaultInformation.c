/*
 * XREFs of LogPageFaultInformation @ 0x1C0025C54
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00240A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00240D4 (_TlgWrite.c)
 */

TLG_STATUS __fastcall LogPageFaultInformation(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  TLG_STATUS result; // eax
  __int64 v6; // rcx
  const CHAR *v7; // rdx
  unsigned __int16 *v8; // rax
  LPCGUID v9; // r9
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  _DWORD *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  _DWORD v23[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  __int64 v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  __int64 v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  __int64 v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  __int64 v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  __int64 *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF

  v4 = *(_QWORD *)(a3 + 64);
  if ( hProvider > 5u && (qword_1C0040060 & 0x400000000010LL) != 0 )
  {
    result = qword_1C0040068 & 0x10;
    if ( (qword_1C0040068 & 0x400000000010LL) == qword_1C0040068 )
    {
      v6 = *(_QWORD *)(a2 + 16);
      v7 = 0LL;
      v16 = *(_QWORD *)(v6 + 268);
      v18 = &v16;
      v19 = 8LL;
      v8 = *(unsigned __int16 **)(v6 + 1248);
      v20 = v23;
      v21 = 2LL;
      LODWORD(v6) = *v8;
      v22 = *((_QWORD *)v8 + 1);
      v24 = &v10;
      v26 = a3 + 8;
      v28 = a3 + 16;
      v11 = *(_DWORD *)(a3 + 24);
      v30 = &v11;
      v32 = a3 + 28;
      v12 = *(_DWORD *)(a3 + 32);
      v34 = &v12;
      v36 = a3 + 40;
      v38 = a3 + 48;
      v40 = a3 + 52;
      v42 = a3 + 56;
      v23[0] = v6;
      LODWORD(v6) = *(_DWORD *)(a3 + 60) & 1;
      v13 = *(int *)(a3 + 60) >> 1;
      v44 = &v13;
      v46 = &v14;
      v23[1] = 0;
      v10 = a1;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 8LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 8LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v14 = v6;
      v47 = 4LL;
      if ( v4 )
        v15 = *(_QWORD *)(v4 + 72);
      else
        v15 = 0LL;
      v49 = 8LL;
      v48 = &v15;
      if ( v4 )
        v7 = *(const CHAR **)(v4 + 80);
      TlgCreateSz(&pDesc, v7);
      return TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033A91, 0LL, v9, 0x13u, &pData);
    }
  }
  return result;
}
