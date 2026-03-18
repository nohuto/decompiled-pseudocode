/*
 * XREFs of ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0165CE8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00026C0 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C001B010 (__report_rangecheckfailure.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00266B8 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C01EFA20 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DxgkpQueryRegistry(struct DXGADAPTER *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rcx
  signed int v21; // edx
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 *v26; // rax
  __int64 v27; // r10
  unsigned __int16 *v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  int PnpRegistryKeyName; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int16 v43; // cx
  unsigned __int16 *v44; // r8
  unsigned int v45; // esi
  __int64 v46; // rdx
  unsigned __int16 *v47; // rbx
  unsigned int v48; // eax
  unsigned __int16 *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int16 v54; // r9
  unsigned __int16 *v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  bool v60; // zf
  __int64 v62; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h]
  int (*v64)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v66; // [rsp+50h] [rbp-B0h]
  char *v67; // [rsp+58h] [rbp-A8h]
  unsigned int v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+78h] [rbp-88h]
  int v72; // [rsp+80h] [rbp-80h]
  _BYTE v73[40]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v74[264]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v75[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v3 = (unsigned int)a3;
  LODWORD(v6) = -1073741811;
  if ( (unsigned int)a3 < 0x228 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a1, a3);
    v7[3] = v3;
    v7[4] = -1073741811LL;
    v7[5] = 2232LL;
    WdLogEvent5_WdWarning(v7);
    return (unsigned int)v6;
  }
  v8 = a2[1];
  if ( (unsigned int)v8 >= 4 )
  {
    v9 = WdLogNewEntry5_WdWarning(v8, a1, a3);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = 2240LL;
    WdLogEvent5_WdWarning(v9);
LABEL_62:
    a2[135] = 2;
    return (unsigned int)v6;
  }
  if ( *((int *)a1 + 526) < 0x2000 )
    v10 = 1;
  else
    v10 = *((_DWORD *)a1 + 62);
  v11 = a2[133];
  if ( (unsigned int)v11 >= v10 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, a1, a3);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    *(_QWORD *)(v12 + 32) = 2247LL;
    WdLogEvent5_WdWarning(v12);
    goto LABEL_62;
  }
  v13 = *a2;
  a2[134] = v3 - 544;
  if ( (unsigned int)v13 <= 1 )
  {
    v26 = (__int128 *)(a2 + 2);
    v27 = 4LL;
    v28 = v74;
    do
    {
      v28 += 64;
      v29 = *v26;
      v30 = v26[1];
      v26 += 8;
      *((_OWORD *)v28 - 8) = v29;
      v31 = *(v26 - 6);
      *((_OWORD *)v28 - 7) = v30;
      v32 = *(v26 - 5);
      *((_OWORD *)v28 - 6) = v31;
      v33 = *(v26 - 4);
      *((_OWORD *)v28 - 5) = v32;
      v34 = *(v26 - 3);
      *((_OWORD *)v28 - 4) = v33;
      v35 = *(v26 - 2);
      *((_OWORD *)v28 - 3) = v34;
      v36 = *(v26 - 1);
      *((_OWORD *)v28 - 2) = v35;
      *((_OWORD *)v28 - 1) = v36;
      --v27;
    }
    while ( v27 );
    *(_QWORD *)v28 = *(_QWORD *)v26;
    v37 = *((_QWORD *)a1 + 295);
    v74[259] = 0;
    PnpRegistryKeyName = DpiGetPnpRegistryKeyName(
                           *(_QWORD *)(352 * v11 + v37 + 8),
                           (unsigned int)((_DWORD)v13 != 1) + 2,
                           &v62);
    v6 = PnpRegistryKeyName;
    if ( PnpRegistryKeyName >= 0 )
    {
      v42 = v62;
      v43 = v74[0];
      v44 = v74;
      v45 = 0;
      LODWORD(v46) = 0;
      v47 = *(unsigned __int16 **)(v62 + 8);
      if ( v74[0] )
      {
        do
        {
          v48 = v46;
          if ( v43 != 92 )
            v48 = v45;
          v46 = (unsigned int)(v46 + 1);
          v45 = v48;
          v43 = v74[v46];
        }
        while ( v43 );
        if ( v48 )
        {
          if ( 2 * (unsigned __int64)v48 >= 0x208 )
            _report_rangecheckfailure();
          v74[v48] = 0;
          LODWORD(v6) = RtlStringCbCopyW((char *)v75, 0x208uLL, *(char **)(v42 + 8));
          if ( (int)v6 < 0 )
            goto LABEL_63;
          v50 = 260LL;
          v49 = v75;
          v52 = 260LL;
          do
          {
            if ( !*v49 )
              break;
            ++v49;
            --v52;
          }
          while ( v52 );
          LODWORD(v6) = -1073741811;
          if ( v52 )
          {
            LODWORD(v6) = 0;
            v51 = 260 - v52;
          }
          else
          {
            v51 = 0LL;
          }
          if ( v52 )
          {
            v49 = &v75[v51];
            v50 = 260 - v51;
            if ( 260 != v51 )
            {
              v53 = 2147483646LL;
              v51 = (char *)L"\\" - (char *)v49;
              do
              {
                if ( !v53 )
                  break;
                v54 = *(unsigned __int16 *)((char *)v49 + v51);
                if ( !v54 )
                  break;
                *v49 = v54;
                --v53;
                ++v49;
                --v50;
              }
              while ( v50 );
            }
            v55 = v49 - 1;
            LODWORD(v6) = -2147483643;
            if ( v50 )
            {
              v55 = v49;
              LODWORD(v6) = 0;
            }
            *v55 = 0;
          }
          if ( (int)v6 < 0 || (LODWORD(v6) = RtlStringCbCatW(v75, (__int64)v49, (size_t *)v74), (int)v6 < 0) )
          {
LABEL_63:
            v23 = WdLogNewEntry5_WdWarning(v50, v49, v51);
            *(_QWORD *)(v23 + 24) = (int)v6;
            *(_QWORD *)(v23 + 32) = 2317LL;
            goto LABEL_59;
          }
          v44 = &v74[v45 + 1];
          v47 = v75;
        }
      }
      v66 = v44;
      v64 = DxgkpRegistryQueryRoutine;
      v68 = a2[132] << 24;
      v65 = 276;
      v67 = (char *)(a2 + 136);
      v69 = 0LL;
      v70 = 0;
      v71 = 0LL;
      v72 = 0;
      memset(v73, 0, sizeof(v73));
      v56 = RtlQueryRegistryValuesEx(0LL, v47, &v64, a2, 0LL);
      v6 = v56;
      if ( v56 >= 0 )
        goto LABEL_60;
      v23 = WdLogNewEntry5_WdWarning(v58, v57, v59);
      *(_QWORD *)(v23 + 32) = 2338LL;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v40, v39, v41);
    }
LABEL_58:
    *(_QWORD *)(v23 + 24) = v6;
LABEL_59:
    WdLogEvent5_WdWarning(v23);
    goto LABEL_60;
  }
  if ( (_DWORD)v13 != 2 )
  {
    v25 = WdLogNewEntry5_WdWarning(v8, a1, v13);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    *(_QWORD *)(v25 + 32) = 2387LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_62;
  }
  if ( a2[132] || (v8 & 1) != 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v8, a1, v13);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    *(_QWORD *)(v24 + 32) = 2349LL;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_62;
  }
  v14 = IoQueryFullDriverPath(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(352 * v11 + *((_QWORD *)a1 + 295) + 8) + 64LL) + 40LL) + 32LL),
          &v62);
  v6 = v14;
  if ( v14 < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v23 + 32) = 2381LL;
    goto LABEL_58;
  }
  v18 = (char *)P;
  v19 = (unsigned __int16)v62 >> 1;
  v20 = v19 - 1LL;
  v21 = v19 - 1;
  if ( v20 >= 0 )
  {
    while ( *((_WORD *)P + v20) != 92 )
    {
      --v21;
      if ( --v20 < 0 )
        goto LABEL_20;
    }
    *((_WORD *)P + v21) = 0;
    v19 = v21 + 1;
    v18 = (char *)P;
  }
LABEL_20:
  v22 = 2 * v19;
  if ( 2 * v19 <= a2[134] )
  {
    RtlStringCbCopyW((char *)a2 + 544, a2[134], v18);
    v18 = (char *)P;
  }
  else
  {
    LODWORD(v6) = -2147483643;
  }
  a2[134] = v22;
  ExFreePoolWithTag(v18, 0);
LABEL_60:
  if ( (_DWORD)v6 != -2147483643 )
  {
    if ( !(_DWORD)v6 )
    {
      a2[135] = 0;
      return (unsigned int)v6;
    }
    goto LABEL_62;
  }
  v60 = *a2 == 2;
  LODWORD(v6) = 0;
  a2[135] = 1;
  if ( v60 || (a2[1] & 1) != 0 )
    a2[134] += 16;
  return (unsigned int)v6;
}
