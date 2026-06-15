/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800B5BD8
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800B337C (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v12; // r14
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  unsigned __int64 v15; // r8
  unsigned int v16; // r10d
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rsi
  unsigned int v22; // edx
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ebp
  int v27; // ecx
  __int64 v28; // rax
  unsigned int v29; // r11d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rax
  unsigned __int128 v33; // rtt
  unsigned __int64 v34; // r8
  signed int v35; // edx
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int128 v40; // rtt
  unsigned __int64 v41; // r8
  signed int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // ebx
  unsigned int v45; // eax
  unsigned int v46; // edi
  __int64 v47; // rax
  unsigned int v48; // r10d
  unsigned __int64 v49; // rax
  unsigned __int128 v50; // rtt
  signed int v51; // edx
  unsigned int v52; // ecx

  v12 = (unsigned int *)*((_QWORD *)a1 + 1);
  v13 = 1;
  v14 = a3;
  v15 = 5000LL;
  v16 = v14;
  v17 = *v12;
  if ( v17 > 0x1388 )
    v15 = (unsigned int)v17;
  v18 = v12[1] + 1;
  v19 = v14;
  v20 = (unsigned int)v15;
  v21 = (unsigned int)v15;
  if ( v14 >= v18 )
    v16 = v12[1] + 1;
  if ( v14 <= v18 )
    v19 = v12[1] + 1;
  v22 = v19 % v16;
  v23 = 0;
  while ( 1 )
  {
    v24 = v22;
    if ( !v22 )
      break;
    v22 = v16 % v22;
    v16 = v24;
  }
  v25 = v18 * (unsigned __int64)(v14 / v16);
  if ( v25 <= 0xFFFFFFFF )
  {
    v26 = (unsigned int)v25 / v14;
    if ( a9 )
      *a9 = (unsigned int)v25 / v14;
    v27 = 0;
    if ( v12[3] )
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)&v12[6 * v27 + 4] - *(_QWORD *)&a4->Data1;
        if ( !v28 )
          v28 = *(_QWORD *)&v12[6 * v27 + 6] - *(_QWORD *)a4->Data4;
        if ( !v28 )
          break;
        if ( ++v27 >= v12[3] )
          goto LABEL_23;
      }
      v15 = v12[6 * v27 + 9];
      if ( v21 > v15 )
        v15 = v20;
      if ( v12[6 * v27 + 8] )
        v13 = v12[6 * v27 + 8];
    }
LABEL_23:
    v29 = -1;
    v30 = v15 * a2;
    if ( is_mul_ok(v15, a2) )
    {
      v31 = -1LL;
      if ( v30 )
      {
        *(_QWORD *)&v33 = v30 - 1;
        *((_QWORD *)&v33 + 1) = (v15 * (unsigned __int128)a2) >> 64;
        v32 = v33 / (10000000 * v14);
        v34 = -1LL;
        if ( v32 + 1 >= v32 )
          v34 = v32 + 1;
        v35 = v32 + 1 < v32 ? 0x80070216 : 0;
        if ( v32 + 1 >= v32 )
        {
          if ( v34 <= 0xFFFFFFFF )
            v29 = v34;
          v35 = v34 > 0xFFFFFFFF ? 0x80070216 : 0;
        }
      }
      else
      {
        v29 = 0;
        v35 = 0;
      }
      if ( v35 >= 0 )
      {
        v36 = -1;
        if ( v13 > v29 )
          v29 = v13;
        v37 = v26 + v29 - 1 - (v29 - 1) % v26;
        *a10 = v37;
        v38 = 100000LL * a2;
        if ( is_mul_ok(0x186A0uLL, a2) )
        {
          if ( v38 )
          {
            *(_QWORD *)&v40 = v38 - 1;
            *((_QWORD *)&v40 + 1) = (0x186A0 * (unsigned __int128)a2) >> 64;
            v39 = v40 / (10000000 * v14);
            v41 = -1LL;
            if ( v39 + 1 >= v39 )
              v41 = v39 + 1;
            v42 = v39 + 1 < v39 ? 0x80070216 : 0;
            if ( v39 + 1 >= v39 )
            {
              if ( v41 <= 0xFFFFFFFF )
                v36 = v41;
              v42 = v41 > 0xFFFFFFFF ? 0x80070216 : 0;
            }
          }
          else
          {
            v36 = 0;
            v42 = 0;
          }
          if ( v42 >= 0 )
          {
            v43 = v37;
            if ( v36 > v37 )
              v43 = v36;
            v44 = v43 - 1 - (v43 - 1) % v26 + v26;
            *a8 = v44;
            if ( !*(_BYTE *)a1 )
              goto LABEL_66;
            v45 = v12[2];
            v46 = -1;
            if ( v45 )
              v46 = v26 * (v45 / (v26 * v14));
            v47 = 2000000LL * a2;
            v48 = -1;
            if ( is_mul_ok(0x1E8480uLL, a2) )
            {
              if ( v47 )
              {
                *(_QWORD *)&v50 = v47 - 1;
                *((_QWORD *)&v50 + 1) = (0x1E8480 * (unsigned __int128)a2) >> 64;
                v49 = v50 / (10000000 * v14);
                if ( v49 + 1 >= v49 )
                  v31 = v49 + 1;
                v51 = v49 + 1 < v49 ? 0x80070216 : 0;
                if ( v49 + 1 >= v49 )
                {
                  if ( v31 <= 0xFFFFFFFF )
                    v48 = v31;
                  v51 = v31 > 0xFFFFFFFF ? 0x80070216 : 0;
                }
              }
              else
              {
                v48 = 0;
                v51 = 0;
              }
              if ( v51 >= 0 )
              {
                if ( v48 > v37 )
                  v37 = v48;
                v52 = v26 + v37 - 1 - (v37 - 1) % v26;
                if ( v46 < v52 )
                  v52 = v46;
                if ( v52 > v44 )
                  v44 = v52;
LABEL_66:
                *a11 = v44;
                return v23;
              }
            }
          }
        }
      }
    }
  }
  v23 = -2004287480;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_54c4c8304625380a2e88923c85321bf5_Traceguids,
      -2004287480);
    return (unsigned int)-2004287480;
  }
  return v23;
}
