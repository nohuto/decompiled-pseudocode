/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C000BF30
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C000BC90 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  _BYTE *v5; // rsi
  unsigned __int8 v6; // al
  int v7; // r14d
  char v8; // r12
  _BYTE *v9; // r15
  int v11; // r13d
  _BYTE *v12; // rbx
  char v13; // al
  char v14; // r9
  char v15; // al
  __int64 v16; // r8
  union _LARGE_INTEGER v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  union _LARGE_INTEGER v21; // r8
  bool v22; // zf
  LARGE_INTEGER v23; // rax
  LARGE_INTEGER v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // r10
  unsigned int v28; // r9d
  unsigned int v29; // r11d
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+20h] [rbp-18h]
  int v39; // [rsp+24h] [rbp-14h]
  __int64 v40; // [rsp+28h] [rbp-10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+58h] BYREF
  unsigned __int8 v44; // [rsp+98h] [rbp+60h]

  PerformanceFrequency = a3;
  v5 = 0LL;
  v6 = *(_BYTE *)(a4 + 2);
  v7 = 0;
  v38 = *(_BYTE *)(a4 + 3);
  v8 = 0;
  v39 = 0;
  v9 = 0LL;
  v44 = 0;
  if ( v6 == 40 )
    v11 = *(_DWORD *)(a4 + 20);
  else
    v11 = v6;
  v12 = a5;
  memset(a5, 0, 0x28uLL);
  v13 = *(_BYTE *)(a4 + 2);
  if ( v13 != 40 )
  {
    if ( !v13 )
    {
      v7 = *(unsigned __int8 *)(a4 + 10);
      v5 = (_BYTE *)(a4 + 72);
      v8 = *(_BYTE *)(a4 + 4);
      v9 = *(_BYTE **)(a4 + 32);
      if ( !*(_BYTE *)(a4 + 10) )
        v5 = 0LL;
      v44 = *(_BYTE *)(a4 + 11);
    }
    goto LABEL_8;
  }
  v27 = 0;
  if ( *(_DWORD *)(a4 + 20) )
  {
    v8 = 0;
    v44 = 0;
    goto LABEL_8;
  }
  v28 = 0;
  v29 = *(_DWORD *)(a4 + 56);
  if ( v29 )
  {
    while ( 1 )
    {
      v30 = *(unsigned int *)(a4 + 4LL * v28 + 120);
      if ( (unsigned int)v30 >= 0x80 )
      {
        v31 = *(unsigned int *)(a4 + 16);
        if ( (unsigned int)v30 < (unsigned int)v31 )
          break;
      }
LABEL_63:
      if ( ++v28 >= v29 )
      {
LABEL_64:
        v7 = v39;
        goto LABEL_8;
      }
    }
    v32 = (unsigned int)v30;
    v33 = *(_DWORD *)(v30 + a4) - 64;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        if ( v34 == 1 && v32 + 40 <= v31 )
        {
          v7 = *(_DWORD *)(v32 + a4 + 12);
          v35 = (_BYTE *)(v32 + a4 + 32);
          v8 = *(_BYTE *)(v32 + a4 + 8);
          v9 = *(_BYTE **)(v32 + a4 + 24);
          v44 = *(_BYTE *)(v32 + a4 + 9);
          if ( !v7 )
            v35 = v5;
          v5 = v35;
          goto LABEL_8;
        }
        goto LABEL_62;
      }
      if ( v32 + 56 > v31 )
      {
LABEL_62:
        if ( v27 )
          goto LABEL_64;
        goto LABEL_63;
      }
      v44 = *(_BYTE *)(v32 + a4 + 9);
    }
    else
    {
      if ( v32 + 40 > v31 )
        goto LABEL_62;
      v44 = *(_BYTE *)(v32 + a4 + 9);
    }
    v9 = *(_BYTE **)(v32 + a4 + 16);
    v36 = (_BYTE *)(v32 + a4 + 24);
    v8 = *(_BYTE *)(v32 + a4 + 8);
    LOBYTE(v39) = *(_BYTE *)(v32 + a4 + 10);
    v27 = 1;
    if ( !(_BYTE)v39 )
      v36 = v5;
    v5 = v36;
    goto LABEL_62;
  }
LABEL_8:
  v14 = v38;
  v12[1] = v8;
  v12[5] = -1;
  *v12 = v38 & 0x3F;
  if ( v5 )
  {
    v15 = *v5;
    v12[5] = *v5;
    if ( !v11 && ((v15 - 8) & 0x5D) == 0 )
    {
      if ( v7 == 16 )
      {
        HIBYTE(v40) = v5[2];
        BYTE6(v40) = v5[3];
        BYTE5(v40) = v5[4];
        BYTE4(v40) = v5[5];
        BYTE3(v40) = v5[6];
        BYTE2(v40) = v5[7];
        BYTE1(v40) = v5[8];
        LOBYTE(v40) = v5[9];
      }
      else
      {
        v40 = (unsigned __int8)v5[5] | (((unsigned __int8)v5[4] | (((unsigned __int8)v5[3] | ((unsigned __int8)v5[2] << 8)) << 8)) << 8);
      }
      *((_QWORD *)v12 + 3) = v40;
      if ( a2 )
      {
        v37 = *(_QWORD *)(a2 + 8);
        if ( v37 )
          *((_DWORD *)v12 + 2) = *(_DWORD *)(v37 + 40);
      }
    }
  }
  v16 = a1;
  v17 = PerformanceFrequency;
  if ( *(_DWORD *)(a1 + 1876) == 1 )
  {
    if ( !PerformanceFrequency.QuadPart )
      goto LABEL_82;
    v21.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled )
    {
      v22 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v24.QuadPart = 0LL;
        goto LABEL_25;
      }
      if ( !UseQPCTime )
        goto LABEL_76;
      v22 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v22 )
    {
      v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_24:
      v21 = PerformanceFrequency;
      v24 = v23;
      v14 = v38;
LABEL_25:
      v25 = v24.QuadPart - *(_QWORD *)(v17.QuadPart + 696);
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_32;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v21.QuadPart )
            goto LABEL_36;
          v25 = 10000000 * v25 / v21.QuadPart;
        }
      }
      if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
LABEL_32:
        v26 = v25 / 10000;
        if ( (unsigned __int64)(v25 / 10000) > 0xFFFFFFFF )
        {
          *((_DWORD *)v12 + 3) = -1;
        }
        else if ( v26 || !v25 )
        {
          *((_DWORD *)v12 + 3) = v26;
        }
        else
        {
          *((_DWORD *)v12 + 3) = 1;
        }
        goto LABEL_36;
      }
      if ( v21.QuadPart )
      {
        v25 = 10000000 * v25 / v21.QuadPart;
        goto LABEL_32;
      }
LABEL_36:
      v16 = a1;
      goto LABEL_12;
    }
LABEL_76:
    v23.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_24;
  }
LABEL_12:
  if ( v17.QuadPart )
  {
    v18 = *(_QWORD *)(v17.QuadPart + 688);
    v19 = v18 / 0x2710;
    if ( v18 / 0x2710 > 0xFFFFFFFF )
    {
      *((_DWORD *)v12 + 4) = -1;
    }
    else if ( !v19 && v18 )
    {
      *((_DWORD *)v12 + 4) = 1;
    }
    else
    {
      *((_DWORD *)v12 + 4) = v19;
    }
    goto LABEL_17;
  }
LABEL_82:
  if ( *(_BYTE *)(v16 + 2624) == 1 && *v12 == 9 )
    *((_DWORD *)v12 + 4) = 5000000 * *(_DWORD *)(v16 + 2648);
LABEL_17:
  *((_DWORD *)v12 + 5) = *(_DWORD *)(v16 + 416);
  if ( v14 < 0 && v9 && v44 >= 8u && (unsigned __int8)((*v9 & 0x7F) - 112) <= 1u )
  {
    v12[2] = v9[2] & 0xF;
    v12[3] = v9[12];
    v12[4] = v9[13];
  }
  result = *(unsigned int *)(v16 + 1936);
  *((_DWORD *)v12 + 8) = result;
  return result;
}
