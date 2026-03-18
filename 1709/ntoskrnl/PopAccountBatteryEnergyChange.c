/*
 * XREFs of PopAccountBatteryEnergyChange @ 0x1406FDC00
 * Callers:
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

int __fastcall PopAccountBatteryEnergyChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rdi
  unsigned __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  int v10; // ebx
  const CHAR *v11; // rsi
  int v12; // eax
  const CHAR *v13; // r14
  const CHAR *v14; // r15
  const CHAR *v15; // rdi
  const CHAR *v16; // rbx
  const CHAR *v17; // r12
  const CHAR *v18; // r13
  LPCSTR v19; // r11
  LPCGUID v20; // r9
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  _DWORD v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+F8h] [rbp-10h] BYREF
  __int128 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  int *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  int *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  int *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  int *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+188h] [rbp+80h] BYREF
  int *v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  int *v60; // [rsp+1A8h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  int *v62; // [rsp+1B8h] [rbp+B0h]
  __int64 v63; // [rsp+1C0h] [rbp+B8h]
  int *v64; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]
  int *v66; // [rsp+1D8h] [rbp+D0h]
  __int64 v67; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+220h] [rbp+118h] BYREF

  v1 = &retaddr;
  v3 = 0LL;
  v4 = (*(_DWORD *)(a1 + 112) & 0x40000000) == 0;
  v5 = *(unsigned int *)(a1 + 208);
  v6 = *(unsigned int *)(a1 + 212);
  LODWORD(v7) = *(_DWORD *)(a1 + 208);
  v8 = *(unsigned int *)(a1 + 152);
  v9 = *(unsigned int *)(a1 + 128);
  v31 = *(_OWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 192) = 0;
  if ( v4 )
  {
    LODWORD(v1) = v9 - 1;
    if ( (unsigned int)(v9 - 1) > 0xFFFFFFFD )
    {
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_DWORD *)(a1 + 192) = 4;
    }
    else if ( (_DWORD)v8 == -1 )
    {
      *(_DWORD *)(a1 + 192) = 8;
    }
    else if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != (_DWORD)v9 )
      {
        *(_DWORD *)(a1 + 212) = v9;
        v7 = (__int64)(v9 * (unsigned int)(100000 * v5 / v6)) / 100000;
      }
      LODWORD(v1) = v7;
      v3 = v8 - (unsigned int)v7;
      *(_DWORD *)(a1 + 208) = v8;
      *(_QWORD *)(a1 + 200) += v3;
    }
    else
    {
      *(_DWORD *)(a1 + 212) = v9;
      *(_DWORD *)(a1 + 208) = v8;
      *(_DWORD *)(a1 + 192) = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 192) = 2;
  }
  v10 = *(_DWORD *)(a1 + 192);
  if ( v10 != (_DWORD)v31 || (LODWORD(v1) = DWORD2(v31), *(_QWORD *)(a1 + 200) != *((_QWORD *)&v31 + 1)) )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v32 = *(_QWORD *)(a1 + 200);
      v11 = "Energy Counter Unavailable";
      if ( (v10 & 1) == 0 )
        v11 = "-";
      v26 = dword_140365914;
      v12 = *(_DWORD *)(a1 + 148);
      v13 = "Relative Capacity Unit";
      v25 = v6;
      v23 = v5;
      v14 = "FCC Unavailable";
      if ( (v10 & 2) == 0 )
        v13 = "-";
      *(_QWORD *)&v31 = v3;
      v24 = v7;
      if ( (v10 & 4) == 0 )
        v14 = "-";
      v4 = (v10 & 8) == 0;
      v15 = "Battery Discharging";
      v16 = "Capacity Unavailable";
      if ( v4 )
        v16 = "-";
      v17 = "Battery Charging";
      if ( (v12 & 2) == 0 )
        v15 = "-";
      if ( (v12 & 4) == 0 )
        v17 = "-";
      v18 = "Battery Critical";
      if ( (v12 & 8) == 0 )
        v18 = "-";
      if ( (_DWORD)v9 )
        v22 = 100000 * v8 / v9;
      else
        v22 = 0;
      v29 = *(_DWORD *)(a1 + 156);
      v30 = *(_DWORD *)(a1 + 160);
      v34 = v37;
      v36 = *(_QWORD *)(a1 + 40);
      v37[0] = *(unsigned __int16 *)(a1 + 32);
      v28 = v9;
      v38 = &v32;
      v27 = v8;
      v35 = 2LL;
      v37[1] = 0;
      v39 = 8LL;
      TlgCreateSz(&pDesc, v11);
      TlgCreateSz(&v41, v13);
      TlgCreateSz(&v42, v14);
      TlgCreateSz(&v43, v16);
      v45 = 8LL;
      v46 = &v23;
      v44 = &v31;
      v48 = &v24;
      v47 = 4LL;
      v50 = &v25;
      v49 = 4LL;
      v52 = &v26;
      v51 = 4LL;
      v53 = 4LL;
      TlgCreateSz(&v54, v19);
      TlgCreateSz(&v55, v15);
      TlgCreateSz(&v56, v17);
      TlgCreateSz(&v57, v18);
      v59 = 4LL;
      v60 = &v27;
      v58 = &v22;
      v62 = &v28;
      v64 = &v29;
      v66 = &v30;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_1402D1273, 0LL, v20, 0x17u, &pData);
    }
  }
  return (int)v1;
}
