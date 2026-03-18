/*
 * XREFs of PopAccountBatteryEnergyChange @ 0x14076347C
 * Callers:
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

int __fastcall PopAccountBatteryEnergyChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int128 v2; // xmm0
  __int64 v3; // rdi
  bool v4; // zf
  unsigned __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // ecx
  const CHAR *v12; // rsi
  int v13; // eax
  const CHAR *v14; // r14
  const CHAR *v15; // r15
  const CHAR *v16; // rbx
  const CHAR *v17; // r12
  const CHAR *v18; // rdi
  const CHAR *v19; // r13
  unsigned __int64 v20; // rax
  LPCSTR v21; // r11
  LPCGUID v22; // r9
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-B4h] BYREF
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  __int64 v38; // [rsp+A8h] [rbp-60h]
  _DWORD v39[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+F8h] [rbp-10h] BYREF
  __int128 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  int *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  int *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+188h] [rbp+80h] BYREF
  int *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  int *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  int *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  int *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  int *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+220h] [rbp+118h] BYREF

  v1 = &retaddr;
  v2 = *(_OWORD *)(a1 + 192);
  v3 = *(unsigned int *)(a1 + 208);
  v4 = (*(_DWORD *)(a1 + 112) & 0x40000000) == 0;
  v6 = *(unsigned int *)(a1 + 212);
  v7 = 0LL;
  v8 = *(unsigned int *)(a1 + 152);
  LODWORD(v9) = *(_DWORD *)(a1 + 208);
  v10 = *(unsigned int *)(a1 + 128);
  *(_DWORD *)(a1 + 192) = 0;
  v33 = v2;
  if ( v4 )
  {
    LODWORD(v1) = v10 - 1;
    if ( (unsigned int)(v10 - 1) > 0xFFFFFFFD )
    {
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_DWORD *)(a1 + 192) = 4;
      v11 = 4;
    }
    else if ( (_DWORD)v8 == -1 )
    {
      *(_DWORD *)(a1 + 192) = 8;
      v11 = 8;
    }
    else if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != (_DWORD)v10 )
      {
        *(_DWORD *)(a1 + 212) = v10;
        v9 = (__int64)(v10 * (unsigned int)(100000 * v3 / v6)) / 100000;
      }
      LODWORD(v1) = v9;
      v7 = v8 - (unsigned int)v9;
      *(_DWORD *)(a1 + 208) = v8;
      *(_QWORD *)(a1 + 200) += v7;
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 212) = v10;
      *(_DWORD *)(a1 + 208) = v8;
      *(_DWORD *)(a1 + 192) = 1;
      v11 = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 192) = 2;
    v11 = 2;
  }
  if ( v11 != (_DWORD)v33 || (LODWORD(v1) = DWORD2(v33), *(_QWORD *)(a1 + 200) != *((_QWORD *)&v33 + 1)) )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v12 = "Energy Counter Unavailable";
      v34 = *(_QWORD *)(a1 + 200);
      if ( (v11 & 1) == 0 )
        v12 = "-";
      v27 = dword_1403AA274;
      v13 = *(_DWORD *)(a1 + 148);
      *(_QWORD *)&v33 = v7;
      v14 = "Relative Capacity Unit";
      if ( (v11 & 2) == 0 )
        v14 = "-";
      v26 = v6;
      v24 = v3;
      v15 = "FCC Unavailable";
      v25 = v9;
      if ( (v11 & 4) == 0 )
        v15 = "-";
      v16 = "Battery Discharging";
      v17 = "Capacity Unavailable";
      if ( (v11 & 8) == 0 )
        v17 = "-";
      v18 = "Battery Charging";
      if ( (v13 & 2) == 0 )
        v16 = "-";
      if ( (v13 & 4) == 0 )
        v18 = "-";
      v19 = "Battery Critical";
      if ( (v13 & 8) == 0 )
        v19 = "-";
      if ( (_DWORD)v10 )
        v20 = 100000 * v8 / v10;
      else
        LODWORD(v20) = 0;
      v28 = v20;
      v31 = *(_DWORD *)(a1 + 156);
      v32 = *(_DWORD *)(a1 + 160);
      v36 = v39;
      v38 = *(_QWORD *)(a1 + 40);
      v39[0] = *(unsigned __int16 *)(a1 + 32);
      v30 = v10;
      v40 = &v34;
      v29 = v8;
      v37 = 2LL;
      v39[1] = 0;
      v41 = 8LL;
      TlgCreateSz(&pDesc, v12);
      TlgCreateSz(&v43, v14);
      TlgCreateSz(&v44, v15);
      TlgCreateSz(&v45, v17);
      v47 = 8LL;
      v48 = &v24;
      v46 = &v33;
      v50 = &v25;
      v49 = 4LL;
      v52 = &v26;
      v51 = 4LL;
      v54 = &v27;
      v53 = 4LL;
      v55 = 4LL;
      TlgCreateSz(&v56, v21);
      TlgCreateSz(&v57, v16);
      TlgCreateSz(&v58, v18);
      TlgCreateSz(&v59, v19);
      v61 = 4LL;
      v62 = &v29;
      v60 = &v28;
      v64 = &v30;
      v66 = &v31;
      v68 = &v32;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      LODWORD(v1) = TlgWrite(&pCallbackContext, &unk_14030AA12, 0LL, v22, 0x17u, &pData);
    }
  }
  return (int)v1;
}
