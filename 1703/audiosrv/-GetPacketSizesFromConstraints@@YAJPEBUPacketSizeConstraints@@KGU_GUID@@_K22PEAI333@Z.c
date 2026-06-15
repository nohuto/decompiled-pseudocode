/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800BDABC
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800BCAE4 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned int a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned __int64 v11; // r10
  unsigned int *v12; // rdi
  unsigned __int16 v15; // r12
  unsigned int v16; // esi
  unsigned __int64 v17; // r15
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ebp
  unsigned int v21; // edx
  unsigned int v22; // ebx
  unsigned int v23; // r9d
  unsigned int v24; // eax
  unsigned int v25; // r8d
  unsigned __int64 v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // r9d
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // r11d
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  unsigned __int128 v36; // rtt
  signed int v37; // edx
  unsigned int v38; // r10d
  unsigned int v39; // ebp
  __int64 v40; // rax
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // rax
  unsigned __int128 v43; // rtt
  signed int v44; // edx
  unsigned int v45; // ecx
  unsigned int v46; // r10d
  unsigned int v47; // eax
  unsigned int v48; // r11d
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int128 v51; // rtt
  signed int v52; // edx
  unsigned int v53; // r9d

  v11 = 5000LL;
  v12 = (unsigned int *)*((_QWORD *)a1 + 1);
  v15 = a3;
  v16 = (unsigned __int16)a3;
  v17 = a2;
  if ( *v12 > 0x1388 )
    v11 = *v12;
  a3 = (unsigned __int16)a3;
  v18 = v12[1] + 1;
  v19 = (unsigned __int16)a3;
  v20 = 1;
  if ( (unsigned __int16)a3 >= v18 )
    a3 = v12[1] + 1;
  if ( v16 <= v18 )
    v19 = v12[1] + 1;
  v21 = v19 % a3;
  v22 = 0;
  while ( 1 )
  {
    v23 = v21;
    if ( !v21 )
      break;
    v21 = a3 % v21;
    a3 = v23;
  }
  v24 = v16 / a3;
  v25 = -1;
  v26 = v18 * (unsigned __int64)v24;
  if ( v26 > 0xFFFFFFFF )
    goto LABEL_70;
  v27 = (unsigned int)v26 / v16;
  v28 = (unsigned int)v26 / v16;
  if ( a9 )
    *a9 = v27;
  v29 = 0;
  if ( v12[3] )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)&v12[6 * v29 + 4] - *(_QWORD *)&a4->Data1;
      if ( !v30 )
        v30 = *(_QWORD *)&v12[6 * v29 + 6] - *(_QWORD *)a4->Data4;
      if ( !v30 )
        break;
      if ( ++v29 >= v12[3] )
        goto LABEL_23;
    }
    if ( v11 <= v12[6 * v29 + 9] )
      v11 = v12[6 * v29 + 9];
    if ( v12[6 * v29 + 8] )
      v20 = v12[6 * v29 + 8];
  }
LABEL_23:
  v31 = -1;
  v32 = v11 * (unsigned __int128)v17;
  if ( !is_mul_ok(v11, v17) )
    goto LABEL_70;
  v33 = -1LL;
  if ( !(_QWORD)v32 )
  {
    v31 = 0;
    goto LABEL_32;
  }
  v34 = -1LL;
  *(_QWORD *)&v36 = v32 - 1;
  *((_QWORD *)&v36 + 1) = *((_QWORD *)&v32 + 1);
  v35 = v36 / (10000000 * (unsigned int)v15);
  if ( v35 + 1 >= v35 )
    v34 = v35 + 1;
  v37 = v35 + 1 < v35 ? 0x80070216 : 0;
  if ( v35 + 1 >= v35 )
  {
    if ( v34 <= 0xFFFFFFFF )
    {
      v31 = v34;
LABEL_32:
      v37 = 0;
      goto LABEL_33;
    }
    v37 = -2147024362;
  }
LABEL_33:
  if ( v37 < 0 )
    goto LABEL_70;
  v38 = -1;
  if ( v20 > v31 )
    v31 = v20;
  v39 = v31 - 1 + v28 - (v31 - 1) % v28;
  *a10 = v39;
  v40 = 100000 * v17;
  if ( !is_mul_ok(0x186A0uLL, v17) )
    goto LABEL_70;
  if ( !v40 )
  {
    v38 = 0;
    goto LABEL_45;
  }
  v41 = -1LL;
  *(_QWORD *)&v43 = v40 - 1;
  *((_QWORD *)&v43 + 1) = (0x186A0 * (unsigned __int128)v17) >> 64;
  v42 = v43 / (10000000 * (unsigned int)v15);
  if ( v42 + 1 >= v42 )
    v41 = v42 + 1;
  v44 = v42 + 1 < v42 ? 0x80070216 : 0;
  if ( v42 + 1 < v42 )
    goto LABEL_46;
  if ( v41 <= 0xFFFFFFFF )
  {
    v38 = v41;
LABEL_45:
    v44 = 0;
    goto LABEL_46;
  }
  v44 = -2147024362;
LABEL_46:
  if ( v44 >= 0 )
  {
    v45 = v39;
    if ( v38 > v39 )
      v45 = v38;
    v46 = v45 - 1 + v28 - (v45 - 1) % v28;
    *a8 = v46;
    if ( !*(_BYTE *)a1 )
      goto LABEL_69;
    v47 = v12[2];
    v48 = -1;
    if ( v47 )
      v48 = v28 * (v47 / (v28 * v16));
    v49 = 2000000 * v17;
    if ( is_mul_ok(0x1E8480uLL, v17) )
    {
      if ( v49 )
      {
        *(_QWORD *)&v51 = v49 - 1;
        *((_QWORD *)&v51 + 1) = (0x1E8480 * (unsigned __int128)v17) >> 64;
        v50 = v51 / (10000000 * (unsigned int)v15);
        if ( v50 + 1 >= v50 )
          v33 = v50 + 1;
        v52 = v50 + 1 < v50 ? 0x80070216 : 0;
        if ( v50 + 1 < v50 )
        {
LABEL_62:
          if ( v52 >= 0 )
          {
            if ( v25 > v39 )
              v39 = v25;
            v53 = v39 - 1 + v28 - (v39 - 1) % v28;
            if ( v48 < v53 )
              v53 = v48;
            if ( v53 > v46 )
              v46 = v53;
LABEL_69:
            *a11 = v46;
            return v22;
          }
          goto LABEL_70;
        }
        if ( v33 > 0xFFFFFFFF )
        {
          v52 = -2147024362;
          goto LABEL_62;
        }
        v25 = v33;
      }
      else
      {
        v25 = 0;
      }
      v52 = 0;
      goto LABEL_62;
    }
  }
LABEL_70:
  v22 = -2004287480;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_901a5e9bcaaa38e898dae42cff5cb88c_Traceguids,
      -2004287480);
  }
  return v22;
}
