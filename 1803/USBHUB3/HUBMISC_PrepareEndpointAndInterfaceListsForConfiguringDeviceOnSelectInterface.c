/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C00286B8
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C001E330 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0011F38 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhqccccc @ 0x1C0026CD8 (McTemplateK0phhhqccccc.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1C0026DD4 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002DC68 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r14
  int v14; // ebx
  void **v15; // r12
  int USBDErrorFromNTStatus; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int16 v19; // cx
  size_t v20; // r15
  int v21; // eax
  __int64 v22; // rax
  _DWORD *v23; // rbx
  __int64 v24; // rcx
  unsigned __int8 *v25; // r8
  unsigned int v26; // r14d
  unsigned __int64 v27; // r11
  __int64 v28; // r10
  _BYTE *v29; // rax
  __int64 v30; // rcx
  unsigned __int16 v31; // ax
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  unsigned __int16 v35; // ax
  char v36; // cl
  __int64 v37; // rax
  int v38; // r8d
  unsigned int v39; // r9d
  char *v40; // rdx
  unsigned int v41; // r11d
  int v42; // r10d
  unsigned int *v43; // r8
  unsigned int i; // edx
  __int64 v45; // r10
  char v46; // r12
  _QWORD *v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // r15
  unsigned int v50; // r11d
  unsigned int v51; // r8d
  _QWORD *v52; // r13
  unsigned int v53; // r12d
  unsigned int v54; // edx
  __int64 v55; // r10
  __int64 v56; // r9
  _QWORD *v57; // rbx
  _QWORD *v58; // rax
  unsigned int v59; // esi
  unsigned int v60; // eax
  void *v61; // rcx
  void *v62; // rcx
  void *v63; // rcx
  PVOID PoolWithTag; // rax
  PVOID v65; // rax
  PVOID v66; // rax
  void *v67; // rcx
  void *v68; // rcx
  void *v69; // rcx
  _QWORD *v70; // r9
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  unsigned int v73; // r8d
  int v74; // ecx
  _QWORD *j; // rax
  unsigned int k; // r9d
  __int64 v77; // rax
  _QWORD *v78; // r8
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  int v82; // [rsp+28h] [rbp-E0h]
  __int64 v83; // [rsp+30h] [rbp-D8h]
  __int64 v84; // [rsp+78h] [rbp-90h] BYREF
  void *v85; // [rsp+80h] [rbp-88h] BYREF
  char v86; // [rsp+88h] [rbp-80h]
  unsigned __int8 v87; // [rsp+89h] [rbp-7Fh]
  __int64 v88; // [rsp+90h] [rbp-78h]
  _QWORD *v89; // [rsp+98h] [rbp-70h]
  void **v90; // [rsp+A0h] [rbp-68h]
  __int64 v91; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-58h]
  _DWORD v93[14]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v94[5]; // [rsp+F0h] [rbp-18h] BYREF

  LOBYTE(v84) = 0;
  v85 = 0LL;
  v89 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  memset(v94, 0, sizeof(v94));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v94[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v94);
  v3 = v94[1];
  v4 = (_DWORD *)(v94[1] + 32LL);
  if ( *(_WORD *)(v94[1] + 2LL) == 1 )
  {
    v5 = v94[1] + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = v94[1] + 48LL;
    *(_DWORD *)(a1 + 148) = *v4;
    v6 = 0LL;
    if ( *v4 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  *(_QWORD *)(a1 + 152) = v6;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned __int8 *)(v5 + 3);
  v11 = *(unsigned __int8 *)(v5 + 2);
  v88 = *(_QWORD *)(a1 + 48);
  v8 = v88;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)&v84,
                             *(_QWORD *)(v9 + 1432));
  v13 = v12;
  if ( !v12 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x22u,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
    *(_DWORD *)(a1 + 1564) = -1073725440;
LABEL_7:
    v14 = -1073741823;
    v15 = (void **)(v5 + 8);
    goto LABEL_8;
  }
  v17 = *(_DWORD **)(a1 + 2448);
  if ( v17 )
  {
    v18 = 0;
    if ( *v17 )
    {
      while ( *((_BYTE *)v17 + 2 * v18 + 5) != v12[3] || *((_BYTE *)v17 + 2 * v18 + 4) != v12[2] )
      {
        if ( ++v18 >= *v17 )
          goto LABEL_20;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_20:
  v19 = v12[4] + 1;
  *(_DWORD *)(v5 + 4) = 0;
  v15 = (void **)(v5 + 8);
  *(_QWORD *)(v5 + 8) = 0LL;
  v90 = (void **)(v5 + 8);
  *(_WORD *)v5 = 24 * v19;
  *(_DWORD *)(v5 + 16) = v12[4];
  memset(v93, 0, sizeof(v93));
  v93[6] = 1;
  v93[7] = 1;
  v93[0] = 56;
  v20 = 72LL * *(unsigned int *)(v5 + 16) + 40;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          v93,
          (unsigned int)ExDefaultNonPagedPoolType,
          1681082453LL,
          v20,
          &v91,
          &v85);
  v14 = v21;
  if ( v21 < 0 )
  {
    LODWORD(v83) = v21;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x23u,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v83);
    goto LABEL_158;
  }
  memset(v85, 0, v20);
  *(_QWORD *)v85 = v91;
  *((_QWORD *)v85 + 4) = v13;
  *((_DWORD *)v85 + 6) = v13[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_BYTE)v84 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v85 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v85 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v85;
  }
  *(_BYTE *)(v5 + 4) = v13[5];
  *(_BYTE *)(v5 + 5) = v13[6];
  *(_BYTE *)(v5 + 6) = v13[7];
  v22 = *v13;
  v23 = v85;
  v24 = *(unsigned __int16 *)(v8 + 34) - v22 - (_QWORD)v13;
  v25 = &v13[v22];
  v26 = 0;
  v27 = (unsigned __int64)&v25[v24 + 32 + v8];
  if ( *(_DWORD *)(v5 + 16) )
  {
    while ( (unsigned __int64)v25 < v27 )
    {
      v28 = 9LL * v26;
      v23[2 * v28 + 16] = *(_DWORD *)(v5 + 24LL * v26 + 44);
      v29 = v25 + 1;
      v23[2 * v28 + 12] = 1;
      if ( (unsigned __int64)(v25 + 1) >= v27 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
        v31 = 23;
        goto LABEL_84;
      }
      while ( *v29 != 5 )
      {
        if ( !*v25 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
          v31 = 24;
          goto LABEL_84;
        }
        v25 += *v25;
        if ( (unsigned __int64)v25 >= v27 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
          v31 = 25;
          goto LABEL_84;
        }
        v29 = v25 + 1;
        if ( (unsigned __int64)(v25 + 1) >= v27 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
          v31 = 26;
          goto LABEL_84;
        }
      }
      if ( (unsigned __int64)(v25 + 7) > v27 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
        v31 = 28;
        goto LABEL_84;
      }
      v32 = *(_DWORD *)(v5 + 24LL * v26 + 44);
      if ( (v32 & 1) != 0 )
      {
        *((_WORD *)v25 + 2) = *(_WORD *)(v5 + 24LL * v26 + 24);
        v32 = *(_DWORD *)(v5 + 24LL * v26 + 44);
      }
      v33 = v32 & 0xF0;
      if ( v33 == 16 )
      {
        v23[18 * v26 + 26] = 1;
      }
      else if ( v33 == 32 )
      {
        v23[18 * v26 + 26] = 2;
      }
      else
      {
        v34 = 3;
        if ( v33 != 48 )
          v34 = 0;
        v23[18 * v26 + 26] = v34;
      }
      *(_QWORD *)&v23[18 * v26 + 18] = v25;
      v23[18 * v26 + 20] = v27 - (_DWORD)v25;
      v35 = *((_WORD *)v25 + 2);
      if ( *(_WORD *)(a1 + 1990) < 0x250u )
        v35 = (v35 & 0x7FF) * (((v35 >> 11) & 3) + 1);
      *(_WORD *)(v5 + 24LL * v26 + 24) = v35;
      v36 = 6;
      if ( v25[6] < 6u )
        v36 = v25[6];
      *(_BYTE *)(v5 + 24LL * v26 + 27) = v36;
      *(_BYTE *)(v5 + 24LL * v26 + 26) = v25[2];
      if ( (v25[3] & 3) != 0 )
      {
        switch ( v25[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v5 + 24LL * v26 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v5 + 24LL * v26 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v5 + 24LL * v26 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 24LL * v26 + 28) = 0;
      }
      if ( !*(_WORD *)(v5 + 24LL * v26 + 24) )
        _InterlockedOr(&v23[18 * v26 + 13], 1u);
      if ( !*v25 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
        v31 = 29;
        goto LABEL_84;
      }
      v25 += *v25;
      if ( (unsigned __int64)v25 < v27 && (unsigned __int64)(v25 + 1) < v27 && v25[1] == 48 )
      {
        if ( *v25 )
        {
          if ( (unsigned __int64)(v25 + 6) <= v27 )
          {
            v37 = *(_QWORD *)&v23[18 * v26 + 18];
            *(_QWORD *)&v23[18 * v26 + 22] = v25;
            if ( (*(_BYTE *)(v37 + 3) & 3) == 1 )
            {
              if ( (v23[18 * v26 + 13] & 1) == 0 )
                *(_WORD *)(v5 + 24LL * v26 + 24) = *((_WORD *)v25 + 2);
              if ( (v25[3] & 0x80u) != 0 )
              {
                v25 += *v25;
                if ( (unsigned __int64)v25 < v27
                  && (unsigned __int64)(v25 + 1) < v27
                  && v25[1] == 49
                  && *v25
                  && (unsigned __int64)(v25 + 8) <= v27 )
                {
                  *(_QWORD *)&v23[18 * v26 + 24] = v25;
                }
              }
            }
          }
        }
      }
      if ( ++v26 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_73;
    }
    v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    v31 = 22;
LABEL_84:
    WPP_RECORDER_SF_(v30, 2u, 5u, v31, (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
    v14 = -1073741823;
    *(_DWORD *)(a1 + 1564) = -1073725440;
    goto LABEL_8;
  }
LABEL_73:
  v38 = 0;
  v39 = *((_DWORD *)v85 + 6);
  if ( v39 )
  {
    v40 = (char *)v85 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v40 + 2LL) & 0xF) != 0 )
    {
      v40 += 72;
      if ( ++v38 >= v39 )
        goto LABEL_85;
    }
    goto LABEL_95;
  }
LABEL_85:
  v41 = *(_DWORD *)(a1 + 148);
  v42 = 0;
  v43 = *(unsigned int **)(a1 + 152);
  if ( v41 )
  {
    while ( 1 )
    {
      for ( i = 0; i < v39; ++i )
      {
        if ( *(unsigned __int8 *)(*((_QWORD *)v85 + 9 * i + 9) + 2LL) == *((_WORD *)v43 + 2) )
          break;
      }
      if ( i == v39 )
        break;
      v43 = (unsigned int *)((char *)v43 + *v43);
      if ( ++v42 >= v41 )
        goto LABEL_91;
    }
    LODWORD(v83) = *((unsigned __int16 *)v43 + 2);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x24u,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v83);
LABEL_95:
    *(_DWORD *)(a1 + 1564) = -1072693239;
    goto LABEL_7;
  }
LABEL_91:
  v45 = v88;
  v46 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  LOBYTE(v84) = 0;
  v47 = (_QWORD *)(v45 + 16);
  v48 = *(_QWORD *)(v45 + 16);
  v49 = (_QWORD *)(v48 - 8);
  if ( v45 + 16 != v48 )
  {
    do
    {
      v92 = v49[4];
      v87 = *(_BYTE *)(v92 + 2);
      if ( v87 == *(_BYTE *)(v5 + 2) )
      {
        v89 = v49;
        v46 = 1;
        LOBYTE(v84) = 1;
      }
      else
      {
        v50 = *((_DWORD *)v49 + 6);
        v14 = 0;
        v51 = 0;
        if ( v50 )
        {
          v52 = v49 + 5;
          v53 = *((_DWORD *)v85 + 6);
          while ( 1 )
          {
            v54 = 0;
            if ( v53 )
              break;
LABEL_104:
            ++v51;
            v52 += 9;
            if ( v51 >= v50 )
              goto LABEL_109;
          }
          v55 = v52[4];
          v86 = *(_BYTE *)(v55 + 2);
          while ( 1 )
          {
            v56 = *((_QWORD *)v85 + 9 * v54 + 9);
            if ( v86 == *(_BYTE *)(v56 + 2) && *(_WORD *)(v55 + 4) && *(_WORD *)(v56 + 4) )
              break;
            if ( ++v54 >= v53 )
              goto LABEL_104;
          }
          v57 = v85;
          WPP_RECORDER_SF_Ddddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            *(unsigned __int8 *)(*((_QWORD *)v85 + 4) + 3LL),
            *(unsigned __int8 *)(*((_QWORD *)v85 + 4) + 2LL),
            v87,
            v82);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10000000) != 0 )
          {
            LOWORD(v82) = *(_WORD *)(a1 + 1996);
            McTemplateK0phhhqccccc(v57[4], v49[4], (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
          }
          v14 = -1073741811;
        }
LABEL_109:
        if ( v14 < 0 )
          goto LABEL_157;
        v46 = v84;
      }
      v58 = (_QWORD *)v49[1];
      v49 = v58 - 1;
    }
    while ( v47 != v58 );
    v45 = v88;
  }
  v14 = 0;
  v59 = *(_DWORD *)(v45 + 8) + *((_DWORD *)v85 + 6);
  v60 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( v60 )
  {
    if ( v59 <= v60 )
    {
LABEL_136:
      v70 = v89;
      if ( v46 )
        v59 -= *((_DWORD *)v89 + 6);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      if ( v46 )
      {
        v71 = v70[1];
        if ( *(_QWORD **)(v71 + 8) != v70 + 1 || (v72 = (_QWORD *)v70[2], (_QWORD *)*v72 != v70 + 1) )
          __fastfail(3u);
        *v72 = v71;
        v73 = 0;
        *(_QWORD *)(v71 + 8) = v72;
        for ( *(_QWORD *)(a1 + 72) = v70; v73 < *((_DWORD *)v70 + 6); ++v73 )
        {
          v74 = v70[9 * v73 + 6];
          if ( v74 == 4 )
          {
            LODWORD(v70[9 * v73 + 6]) = 5;
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v70[9 * v73 + 5];
          }
          else if ( v74 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v70[9 * v73 + 5];
          }
        }
      }
      for ( j = (_QWORD *)*v47; ; j = (_QWORD *)v78[1] )
      {
        v78 = j - 1;
        if ( v47 == j )
          break;
        for ( k = 0; k < *((_DWORD *)v78 + 6); ++*(_DWORD *)(a1 + 144) )
        {
          v77 = k++;
          *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = v78[9 * v77 + 5];
        }
      }
      v79 = (_QWORD *)v47[1];
      v80 = (char *)v85 + 8;
      if ( (_QWORD *)*v79 != v47 )
        __fastfail(3u);
      *v80 = v47;
      v80[1] = v79;
      *v79 = v80;
      v47[1] = v80;
      *(_QWORD *)(a1 + 80) = v85;
      *(_DWORD *)(v45 + 8) = v59;
      goto LABEL_157;
    }
    v61 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v61 )
    {
      ExFreePoolWithTag(v61, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v62 = *(void **)(a1 + 136);
    if ( v62 )
    {
      ExFreePoolWithTag(v62, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v63 = *(void **)(a1 + 120);
    if ( v63 )
    {
      ExFreePoolWithTag(v63, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
  if ( !*(_DWORD *)(a1 + 96) && v59 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v59, 0x64334855u);
    *(_QWORD *)(a1 + 104) = PoolWithTag;
    if ( PoolWithTag )
    {
      v65 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v59, 0x64334855u);
      *(_QWORD *)(a1 + 136) = v65;
      if ( v65 )
      {
        v66 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v59, 0x64334855u);
        *(_QWORD *)(a1 + 120) = v66;
        if ( v66 )
        {
          *(_DWORD *)(a1 + 96) = v59;
          v14 = 0;
LABEL_135:
          v45 = v88;
          goto LABEL_136;
        }
      }
    }
    v67 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v67 )
    {
      ExFreePoolWithTag(v67, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v68 = *(void **)(a1 + 136);
    if ( v68 )
    {
      ExFreePoolWithTag(v68, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v69 = *(void **)(a1 + 120);
    if ( v69 )
    {
      ExFreePoolWithTag(v69, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v14 = -1073741670;
    LODWORD(v83) = -1073741670;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Eu,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v83);
  }
  if ( v14 >= 0 )
    goto LABEL_135;
LABEL_157:
  v15 = v90;
LABEL_158:
  if ( v14 >= 0 )
  {
    *v15 = v85;
    return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
  }
LABEL_8:
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *v15 = (void *)-1LL;
  if ( v85 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(_QWORD *)v85);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 1560) = v14;
  if ( !*(_DWORD *)(a1 + 1564) )
  {
    if ( v14 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v14);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
}
