/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C000B0C4
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C000AE44 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // r14d
  _BYTE *v6; // rsi
  unsigned __int8 v7; // al
  char v8; // r12
  _BYTE *v9; // r15
  int v11; // r13d
  _BYTE *v12; // rbx
  char v13; // al
  unsigned __int8 v14; // di
  char v15; // r9
  char v16; // al
  __int64 v17; // r8
  union _LARGE_INTEGER v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 result; // rax
  union _LARGE_INTEGER v22; // r8
  bool v23; // zf
  LARGE_INTEGER v24; // rax
  LARGE_INTEGER v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // r10
  unsigned int v29; // r11d
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // ecx
  _BYTE *v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rax
  char v39; // [rsp+20h] [rbp-28h]
  int v40; // [rsp+24h] [rbp-24h]
  __int64 v41; // [rsp+28h] [rbp-20h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int8 v45; // [rsp+A8h] [rbp+60h]

  PerformanceFrequency = a3;
  v5 = 0;
  v39 = *(_BYTE *)(a4 + 3);
  v40 = 0;
  v45 = 0;
  v6 = 0LL;
  v7 = *(_BYTE *)(a4 + 2);
  v8 = 0;
  v9 = 0LL;
  if ( v7 == 40 )
    v11 = *(_DWORD *)(a4 + 20);
  else
    v11 = v7;
  v12 = a5;
  memset(a5, 0, 0x28uLL);
  v13 = *(_BYTE *)(a4 + 2);
  if ( v13 != 40 )
  {
    if ( v13 )
      goto LABEL_66;
    v5 = *(unsigned __int8 *)(a4 + 10);
    if ( *(_BYTE *)(a4 + 10) )
      v6 = (_BYTE *)(a4 + 72);
    v8 = *(_BYTE *)(a4 + 4);
    v9 = *(_BYTE **)(a4 + 32);
    v14 = *(_BYTE *)(a4 + 11);
    goto LABEL_8;
  }
  v28 = 0;
  if ( *(_DWORD *)(a4 + 20) )
  {
    v8 = 0;
    v45 = 0;
    goto LABEL_66;
  }
  v29 = *(_DWORD *)(a4 + 56);
  v30 = 0LL;
  if ( !v29 )
    goto LABEL_66;
  while ( 1 )
  {
    v31 = *(unsigned int *)(a4 + 4 * v30 + 120);
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_63:
    v30 = (unsigned int)(v30 + 1);
    if ( (unsigned int)v30 >= v29 )
    {
LABEL_64:
      v5 = v40;
      goto LABEL_66;
    }
  }
  v33 = (unsigned int)v31;
  v34 = *(_DWORD *)(v31 + a4) - 64;
  if ( !v34 )
  {
    if ( v33 + 40 > v32 )
      goto LABEL_62;
    v45 = *(_BYTE *)(v33 + a4 + 9);
    goto LABEL_59;
  }
  v35 = v34 - 1;
  if ( !v35 )
  {
    if ( v33 + 56 > v32 )
      goto LABEL_62;
    v45 = *(_BYTE *)(v33 + a4 + 9);
LABEL_59:
    v9 = *(_BYTE **)(v33 + a4 + 16);
    v37 = (_BYTE *)(v33 + a4 + 24);
    v8 = *(_BYTE *)(v33 + a4 + 8);
    LOBYTE(v40) = *(_BYTE *)(v33 + a4 + 10);
    v28 = 1;
    if ( !(_BYTE)v40 )
      v37 = v6;
    v6 = v37;
LABEL_62:
    if ( v28 )
      goto LABEL_64;
    goto LABEL_63;
  }
  if ( v35 != 1 || v33 + 40 > v32 )
    goto LABEL_62;
  v5 = *(_DWORD *)(v33 + a4 + 12);
  v36 = (_BYTE *)(v33 + a4 + 32);
  v8 = *(_BYTE *)(v33 + a4 + 8);
  v9 = *(_BYTE **)(v33 + a4 + 24);
  if ( !v5 )
    v36 = v6;
  v45 = *(_BYTE *)(v33 + a4 + 9);
  v6 = v36;
LABEL_66:
  v14 = v45;
LABEL_8:
  v15 = v39;
  v12[1] = v8;
  v12[5] = -1;
  *v12 = v39 & 0x3F;
  if ( v6 )
  {
    v16 = *v6;
    v12[5] = *v6;
    if ( !v11 && ((v16 - 8) & 0x5D) == 0 )
    {
      if ( v5 == 16 )
      {
        HIBYTE(v41) = v6[2];
        BYTE6(v41) = v6[3];
        BYTE5(v41) = v6[4];
        BYTE4(v41) = v6[5];
        BYTE3(v41) = v6[6];
        BYTE2(v41) = v6[7];
        BYTE1(v41) = v6[8];
        LOBYTE(v41) = v6[9];
      }
      else
      {
        v41 = (unsigned __int8)v6[5] | (((unsigned __int8)v6[4] | (((unsigned __int8)v6[3] | ((unsigned __int8)v6[2] << 8)) << 8)) << 8);
      }
      *((_QWORD *)v12 + 3) = v41;
      if ( a2 )
      {
        v38 = *(_QWORD *)(a2 + 8);
        if ( v38 )
          *((_DWORD *)v12 + 2) = *(_DWORD *)(v38 + 40);
      }
    }
  }
  v17 = a1;
  v18 = PerformanceFrequency;
  if ( *(_DWORD *)(a1 + 1844) == 1 )
  {
    if ( !PerformanceFrequency.QuadPart )
      goto LABEL_82;
    v22.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled )
    {
      v23 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v25.QuadPart = 0LL;
        goto LABEL_25;
      }
      if ( !UseQPCTime )
        goto LABEL_76;
      v23 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v23 )
    {
      v24 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_24:
      v22 = PerformanceFrequency;
      v25 = v24;
LABEL_25:
      v26 = v25.QuadPart - *(_QWORD *)(v18.QuadPart + 696);
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_32;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v22.QuadPart )
            goto LABEL_36;
          v26 = 10000000 * v26 / v22.QuadPart;
        }
      }
      if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
LABEL_32:
        v27 = v26 / 10000;
        if ( (unsigned __int64)(v26 / 10000) > 0xFFFFFFFF )
        {
          *((_DWORD *)v12 + 3) = -1;
        }
        else if ( v27 || !v26 )
        {
          *((_DWORD *)v12 + 3) = v27;
        }
        else
        {
          *((_DWORD *)v12 + 3) = 1;
        }
        goto LABEL_36;
      }
      if ( v22.QuadPart )
      {
        v26 = 10000000 * v26 / v22.QuadPart;
        goto LABEL_32;
      }
LABEL_36:
      v15 = v39;
      v17 = a1;
      goto LABEL_12;
    }
LABEL_76:
    v24.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_24;
  }
LABEL_12:
  if ( v18.QuadPart )
  {
    v19 = *(_QWORD *)(v18.QuadPart + 688);
    v20 = v19 / 0x2710;
    if ( v19 / 0x2710 > 0xFFFFFFFF )
    {
      *((_DWORD *)v12 + 4) = -1;
    }
    else if ( !v20 && v19 )
    {
      *((_DWORD *)v12 + 4) = 1;
    }
    else
    {
      *((_DWORD *)v12 + 4) = v20;
    }
    goto LABEL_17;
  }
LABEL_82:
  if ( *(_BYTE *)(v17 + 2576) == 1 && *v12 == 9 )
    *((_DWORD *)v12 + 4) = 5000000 * *(_DWORD *)(v17 + 2600);
LABEL_17:
  *((_DWORD *)v12 + 5) = *(_DWORD *)(v17 + 416);
  if ( v15 < 0 && v9 && v14 >= 8u && (unsigned __int8)((*v9 & 0x7F) - 112) <= 1u )
  {
    v12[2] = v9[2] & 0xF;
    v12[3] = v9[12];
    v12[4] = v9[13];
  }
  result = *(unsigned int *)(v17 + 1904);
  *((_DWORD *)v12 + 8) = result;
  return result;
}
