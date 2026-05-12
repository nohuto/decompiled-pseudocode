/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C000D5B4
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C000D328 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  int v5; // r14d
  unsigned __int8 v6; // r15
  _BYTE *v7; // rsi
  char v8; // r13
  _BYTE *v9; // r12
  int v11; // eax
  _BYTE *v12; // rbx
  unsigned __int8 v13; // r15
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
  _BYTE *v34; // rax
  int v35; // ecx
  _BYTE *v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+20h] [rbp-28h]
  int v39; // [rsp+24h] [rbp-24h]
  int v40; // [rsp+28h] [rbp-20h]
  unsigned __int64 v41; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int8 v45; // [rsp+A8h] [rbp+60h]

  PerformanceFrequency = a3;
  v5 = 0;
  v6 = *(_BYTE *)(a4 + 2);
  v38 = *(_BYTE *)(a4 + 3);
  v7 = 0LL;
  v39 = 0;
  v8 = 0;
  v45 = 0;
  v9 = 0LL;
  if ( v6 == 40 )
    v11 = *(_DWORD *)(a4 + 20);
  else
    v11 = v6;
  v12 = a5;
  v40 = v11;
  memset(a5, 0, 0x28uLL);
  if ( v6 != 40 )
  {
    if ( v6 )
      goto LABEL_48;
    v5 = *(unsigned __int8 *)(a4 + 10);
    v7 = (_BYTE *)(a4 + 72);
    v8 = *(_BYTE *)(a4 + 4);
    v9 = *(_BYTE **)(a4 + 32);
    v13 = *(_BYTE *)(a4 + 11);
    if ( !*(_BYTE *)(a4 + 10) )
      v7 = 0LL;
    goto LABEL_7;
  }
  v27 = 0;
  if ( *(_DWORD *)(a4 + 20) )
  {
    v8 = 0;
    v45 = 0;
    goto LABEL_48;
  }
  v28 = 0;
  v29 = *(_DWORD *)(a4 + 56);
  if ( !v29 )
    goto LABEL_48;
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
LABEL_47:
      v5 = v39;
      goto LABEL_48;
    }
  }
  v32 = (unsigned int)v30;
  v33 = *(_DWORD *)(v30 + a4) - 64;
  if ( !v33 )
  {
    if ( v32 + 40 > v31 )
      goto LABEL_46;
    v45 = *(_BYTE *)(v32 + a4 + 9);
LABEL_43:
    v9 = *(_BYTE **)(v32 + a4 + 16);
    v34 = (_BYTE *)(v32 + a4 + 24);
    v8 = *(_BYTE *)(v32 + a4 + 8);
    LOBYTE(v39) = *(_BYTE *)(v32 + a4 + 10);
    v27 = 1;
    if ( !(_BYTE)v39 )
      v34 = v7;
    v7 = v34;
LABEL_46:
    if ( v27 )
      goto LABEL_47;
    goto LABEL_63;
  }
  v35 = v33 - 1;
  if ( !v35 )
  {
    if ( v32 + 56 > v31 )
      goto LABEL_46;
    v45 = *(_BYTE *)(v32 + a4 + 9);
    goto LABEL_43;
  }
  if ( v35 != 1 || v32 + 40 > v31 )
    goto LABEL_46;
  v5 = *(_DWORD *)(v32 + a4 + 12);
  v36 = (_BYTE *)(v32 + a4 + 32);
  v8 = *(_BYTE *)(v32 + a4 + 8);
  v9 = *(_BYTE **)(v32 + a4 + 24);
  v45 = *(_BYTE *)(v32 + a4 + 9);
  if ( !v5 )
    v36 = v7;
  v7 = v36;
LABEL_48:
  v13 = v45;
LABEL_7:
  v14 = v38;
  v12[1] = v8;
  v12[5] = -1;
  *v12 = v38 & 0x3F;
  if ( v7 )
  {
    v15 = *v7;
    v12[5] = *v7;
    if ( !v40 && ((v15 - 8) & 0x5D) == 0 )
    {
      if ( v5 == 16 )
      {
        HIBYTE(v41) = v7[2];
        BYTE6(v41) = v7[3];
        BYTE5(v41) = v7[4];
        BYTE4(v41) = v7[5];
        BYTE3(v41) = v7[6];
        BYTE2(v41) = v7[7];
        BYTE1(v41) = v7[8];
        LOBYTE(v41) = v7[9];
      }
      else
      {
        v41 = (unsigned __int8)v7[5] | (unsigned __int64)(((unsigned __int8)v7[4] | ((((unsigned __int8)v7[2] << 8) | (unsigned int)(unsigned __int8)v7[3]) << 8)) << 8);
      }
      *((_QWORD *)v12 + 3) = v41;
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
        goto LABEL_24;
      }
      if ( !UseQPCTime )
        goto LABEL_75;
      v22 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v22 )
    {
      v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_23:
      v21 = PerformanceFrequency;
      v24 = v23;
      v14 = v38;
LABEL_24:
      v25 = v24.QuadPart - *(_QWORD *)(v17.QuadPart + 696);
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_31;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v21.QuadPart )
            goto LABEL_35;
          v25 = 10000000 * v25 / v21.QuadPart;
        }
      }
      if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
LABEL_31:
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
        goto LABEL_35;
      }
      if ( v21.QuadPart )
      {
        v25 = 10000000 * v25 / v21.QuadPart;
        goto LABEL_31;
      }
LABEL_35:
      v16 = a1;
      goto LABEL_11;
    }
LABEL_75:
    v23.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_23;
  }
LABEL_11:
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
    goto LABEL_16;
  }
LABEL_82:
  if ( *(_BYTE *)(v16 + 2624) == 1 && *v12 == 9 )
    *((_DWORD *)v12 + 4) = 5000000 * *(_DWORD *)(v16 + 2648);
LABEL_16:
  *((_DWORD *)v12 + 5) = *(_DWORD *)(v16 + 416);
  if ( v14 < 0 && v9 && v13 >= 8u && (unsigned __int8)((*v9 & 0x7F) - 112) <= 1u )
  {
    v12[2] = v9[2] & 0xF;
    v12[3] = v9[12];
    v12[4] = v9[13];
  }
  result = *(unsigned int *)(v16 + 1936);
  *((_DWORD *)v12 + 8) = result;
  return result;
}
