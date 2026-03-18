/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0027B70
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C001A1A0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0011F38 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C0026F00 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002DC68 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // r14
  KIRQL v5; // al
  __int64 v6; // r12
  size_t v7; // r14
  int v8; // eax
  int v9; // ebx
  _QWORD *v10; // r15
  size_t v11; // r8
  unsigned __int16 *v12; // r14
  unsigned __int64 v13; // r9
  _QWORD *v14; // r13
  unsigned __int16 *v15; // rbx
  unsigned __int8 *v16; // rcx
  _QWORD *v17; // r10
  unsigned __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int16 *v22; // r15
  int v23; // r9d
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // r14
  _DWORD *v26; // rcx
  unsigned int v27; // edx
  int v28; // r12d
  __int64 v29; // rax
  size_t v30; // r12
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  unsigned __int16 *v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rbx
  unsigned __int8 *v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r14d
  __int64 v40; // r11
  _BYTE *v41; // rax
  __int16 v42; // dx
  int v43; // ecx
  int v44; // ecx
  int v45; // eax
  unsigned __int16 v46; // ax
  char v47; // cl
  __int64 v48; // rax
  unsigned __int16 v49; // r9
  __int64 v50; // rcx
  int USBDErrorFromNTStatus; // eax
  __int64 v52; // r8
  _QWORD *i; // rax
  _QWORD *v54; // rdx
  unsigned int v55; // ebx
  unsigned int v56; // r10d
  unsigned __int16 v57; // r10
  __int64 v58; // rax
  __int64 v59; // rbx
  unsigned int v60; // r12d
  unsigned int v61; // r14d
  __int64 v62; // r11
  __int64 v63; // rcx
  __int16 *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r14
  unsigned int v67; // eax
  void *v68; // rcx
  void *v69; // rcx
  void *v70; // rcx
  PVOID PoolWithTag; // rax
  PVOID v72; // rax
  PVOID v73; // rax
  void *v74; // rcx
  void *v75; // rcx
  void *v76; // rcx
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  __int64 v79; // r8
  unsigned int j; // r9d
  int v81; // ecx
  __int64 v82; // rcx
  _QWORD *v83; // r14
  _QWORD **v84; // rdi
  _QWORD *v85; // rax
  _QWORD *v86; // rcx
  int v88; // [rsp+28h] [rbp-E0h]
  __int64 v89; // [rsp+30h] [rbp-D8h]
  char v90; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v91; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v92; // [rsp+60h] [rbp-A8h] BYREF
  int v93; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v94; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v95; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v96; // [rsp+78h] [rbp-90h]
  unsigned __int16 *v97; // [rsp+80h] [rbp-88h]
  _QWORD *v98; // [rsp+88h] [rbp-80h]
  __int64 v99; // [rsp+90h] [rbp-78h] BYREF
  __int64 v100; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v101; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v102; // [rsp+A8h] [rbp-60h]
  _QWORD *v103; // [rsp+B0h] [rbp-58h]
  _DWORD v104[14]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v105[5]; // [rsp+F0h] [rbp-18h] BYREF

  v1 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v105, 0, sizeof(v105));
  v3 = *(_QWORD *)(a1 + 456);
  LOWORD(v105[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v105);
  v4 = v105[1];
  v97 = (unsigned __int16 *)v105[1];
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v6 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  memset(v104, 0, sizeof(v104));
  v104[6] = 1;
  v104[7] = 1;
  v104[0] = 56;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 24) + 2LL);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v104,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v7 + 39,
         &v99,
         a1 + 48);
  v9 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v89) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      v89);
LABEL_139:
    if ( v9 < 0 )
      goto LABEL_80;
    v1 = *(_QWORD **)v6;
    goto LABEL_150;
  }
  v10 = *(_QWORD **)v6;
  v11 = v7;
  v12 = v97;
  v103 = v10;
  *v10 = v99;
  memmove((void *)(*(_QWORD *)v6 + 32LL), *((const void **)v12 + 3), v11);
  v14 = v10 + 2;
  LODWORD(v95) = 0;
  v10[3] = v10 + 2;
  v15 = v12 + 20;
  v10[2] = v10 + 2;
  v16 = (unsigned __int8 *)(v12 + 21);
  LODWORD(v17) = (_DWORD)v10 + 32;
  v18 = (unsigned __int64)v12 + *v12;
  v98 = v10 + 4;
  v102 = v18;
  v19 = 0;
  if ( (unsigned __int64)(v12 + 21) < v18 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *v16;
      v22 = v15;
      v23 = *((unsigned __int8 *)v15 + 3);
      v90 = 0;
      v24 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v17,
                                 (_DWORD)v17,
                                 v21,
                                 v23,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v90,
                                 *(_QWORD *)(v20 + 1432));
      v25 = v24;
      if ( !v24 )
        break;
      v26 = *(_DWORD **)(a1 + 2448);
      if ( v26 )
      {
        v27 = 0;
        if ( *v26 )
        {
          while ( *((_BYTE *)v26 + 2 * v27 + 5) != v24[3] || *((_BYTE *)v26 + 2 * v27 + 4) != v24[2] )
          {
            if ( ++v27 >= *v26 )
              goto LABEL_12;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
        }
      }
LABEL_12:
      *((_DWORD *)v15 + 4) = v24[4];
      v28 = v24[4] + v19;
      v96 = v15 + 8;
      v29 = *v15;
      LODWORD(v95) = v28;
      v101 = (unsigned __int16 *)((char *)v15 + v29);
      memset(v104, 0, sizeof(v104));
      v104[6] = 1;
      v104[7] = 1;
      v104[0] = 56;
      v30 = 72LL * *((unsigned int *)v15 + 4) + 40;
      v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
              WdfDriverGlobals,
              v104,
              (unsigned int)ExDefaultNonPagedPoolType,
              1681082453LL,
              v30,
              &v100,
              &v92);
      v9 = v31;
      if ( v31 < 0 )
      {
        LODWORD(v89) = v31;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          2u,
          0x21u,
          (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
          v89);
        v6 = a1 + 48;
        goto LABEL_139;
      }
      *((_QWORD *)v22 + 1) = v92;
      memset(v92, 0, v30);
      *(_QWORD *)v92 = v100;
      *((_QWORD *)v92 + 4) = v25;
      *((_DWORD *)v92 + 6) = v25[4];
      if ( v90 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v92 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v92 + 7, 2u);
      }
      v32 = (_QWORD *)v14[1];
      v33 = (char *)v92 + 8;
      if ( (_QWORD *)*v32 != v14 )
        __fastfail(3u);
      v34 = v96;
      v17 = v98;
      *v33 = v14;
      v33[1] = v32;
      *v32 = v33;
      v14[1] = v33;
      *((_BYTE *)v22 + 4) = v25[5];
      *((_BYTE *)v22 + 5) = v25[6];
      *((_BYTE *)v22 + 6) = v25[7];
      v35 = *v25;
      v36 = v92;
      v37 = &v25[v35];
      v38 = *(unsigned __int16 *)(*((_QWORD *)v97 + 3) + 2LL) - v35 - (_QWORD)v25;
      v39 = 0;
      v13 = (unsigned __int64)&v37[v38 + (_QWORD)v17];
      if ( *(_DWORD *)v34 )
      {
        while ( (unsigned __int64)v37 < v13 )
        {
          v40 = 9LL * v39;
          v36[2 * v40 + 16] = *(_DWORD *)&v22[12 * v39 + 22];
          v41 = v37 + 1;
          v36[2 * v40 + 12] = 1;
          if ( (unsigned __int64)(v37 + 1) >= v13 )
          {
            v42 = 23;
            goto LABEL_74;
          }
          while ( *v41 != 5 )
          {
            if ( !*v37 )
            {
              v42 = 24;
              goto LABEL_74;
            }
            v37 += *v37;
            if ( (unsigned __int64)v37 >= v13 )
            {
              v42 = 25;
              goto LABEL_74;
            }
            v41 = v37 + 1;
            if ( (unsigned __int64)(v37 + 1) >= v13 )
            {
              v42 = 26;
              goto LABEL_74;
            }
          }
          if ( (unsigned __int64)(v37 + 7) > v13 )
          {
            v42 = 28;
            goto LABEL_74;
          }
          v43 = *(_DWORD *)&v22[12 * v39 + 22];
          if ( (v43 & 1) != 0 )
          {
            *((_WORD *)v37 + 2) = v22[12 * v39 + 12];
            v43 = *(_DWORD *)&v22[12 * v39 + 22];
          }
          v44 = v43 & 0xF0;
          if ( v44 == 16 )
          {
            v36[18 * v39 + 26] = 1;
          }
          else if ( v44 == 32 )
          {
            v36[18 * v39 + 26] = 2;
          }
          else
          {
            v45 = 3;
            if ( v44 != 48 )
              v45 = 0;
            v36[18 * v39 + 26] = v45;
          }
          *(_QWORD *)&v36[18 * v39 + 18] = v37;
          v36[18 * v39 + 20] = v13 - (_DWORD)v37;
          v46 = *((_WORD *)v37 + 2);
          if ( *(_WORD *)(a1 + 1990) < 0x250u )
          {
            v34 = v96;
            v46 = (v46 & 0x7FF) * (((v46 >> 11) & 3) + 1);
          }
          v22[12 * v39 + 12] = v46;
          v47 = 6;
          if ( v37[6] < 6u )
            v47 = v37[6];
          HIBYTE(v22[12 * v39 + 13]) = v47;
          LOBYTE(v22[12 * v39 + 13]) = v37[2];
          if ( (v37[3] & 3) != 0 )
          {
            switch ( v37[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v22[12 * v39 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v22[12 * v39 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v22[12 * v39 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v22[12 * v39 + 14] = 0;
          }
          if ( !v22[12 * v39 + 12] )
            _InterlockedOr(&v36[18 * v39 + 13], 1u);
          if ( !*v37 )
          {
            v42 = 29;
            goto LABEL_74;
          }
          v37 += *v37;
          if ( (unsigned __int64)v37 < v13 && (unsigned __int64)(v37 + 1) < v13 && v37[1] == 48 )
          {
            if ( *v37 )
            {
              if ( (unsigned __int64)(v37 + 6) <= v13 )
              {
                v48 = *(_QWORD *)&v36[18 * v39 + 18];
                *(_QWORD *)&v36[18 * v39 + 22] = v37;
                if ( (*(_BYTE *)(v48 + 3) & 3) == 1 )
                {
                  if ( (v36[18 * v39 + 13] & 1) == 0 )
                    v22[12 * v39 + 12] = *((_WORD *)v37 + 2);
                  if ( (v37[3] & 0x80u) != 0 )
                  {
                    v37 += *v37;
                    if ( (unsigned __int64)v37 < v13
                      && (unsigned __int64)(v37 + 1) < v13
                      && v37[1] == 49
                      && *v37
                      && (unsigned __int64)(v37 + 8) <= v13 )
                    {
                      *(_QWORD *)&v36[18 * v39 + 24] = v37;
                    }
                  }
                }
              }
            }
          }
          if ( ++v39 >= *(_DWORD *)v34 )
          {
            LODWORD(v17) = (_DWORD)v98;
            goto LABEL_66;
          }
        }
        v42 = 22;
LABEL_74:
        v49 = v42;
        v50 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
LABEL_78:
        WPP_RECORDER_SF_(v50, 2u, 5u, v49, (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
        goto LABEL_79;
      }
LABEL_66:
      v15 = v101;
      v16 = (unsigned __int8 *)(v101 + 1);
      if ( (unsigned __int64)(v101 + 1) >= v102 )
        goto LABEL_83;
      v19 = v95;
    }
    v49 = 32;
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
    goto LABEL_78;
  }
LABEL_83:
  v6 = a1 + 48;
  v52 = *(_QWORD *)(a1 + 48);
  if ( v52 )
  {
    for ( i = *(_QWORD **)(v52 + 16); ; i = (_QWORD *)*i )
    {
      v54 = i - 1;
      if ( (_QWORD *)(v52 + 16) == i )
        break;
      v55 = *((_DWORD *)v54 + 6);
      v56 = 0;
      if ( v55 )
      {
        v13 = (unsigned __int64)(v54 + 9);
        while ( (*(_BYTE *)(*(_QWORD *)v13 + 2LL) & 0xF) != 0 )
        {
          ++v56;
          v13 += 72LL;
          if ( v56 >= v55 )
            goto LABEL_90;
        }
        v9 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1072693239;
        goto LABEL_80;
      }
LABEL_90:
      ;
    }
  }
  LOWORD(v93) = 0;
  v57 = 0;
  v94 = 0;
  v91 = 0;
  if ( !v52 || (v58 = *(_QWORD *)(v52 + 16), v59 = v58 - 8, v52 + 16 == v58) )
  {
LABEL_107:
    v9 = 0;
    v66 = (unsigned int)v95;
    *((_DWORD *)v103 + 2) = v95;
    v67 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v67 )
    {
      if ( (unsigned int)v66 <= v67 )
      {
LABEL_130:
        v77 = *(_QWORD *)(a1 + 56);
        if ( v77 )
        {
          v78 = (_QWORD *)(v77 + 16);
          *(_DWORD *)(a1 + 144) = 0;
          *(_DWORD *)(a1 + 128) = 0;
          v79 = *v78 - 8LL;
          if ( v78 != (_QWORD *)*v78 )
          {
            do
            {
              for ( j = 0; j < *(_DWORD *)(v79 + 24); ++j )
              {
                v81 = *(_DWORD *)(v79 + 72LL * j + 48);
                if ( v81 == 4 )
                {
                  *(_DWORD *)(v79 + 72LL * j + 48) = 5;
                  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v79 + 72LL * j + 40);
                }
                else if ( v81 == 6 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v79 + 72LL * j + 40);
                }
              }
              v82 = *(_QWORD *)(v79 + 8);
              v79 = v82 - 8;
            }
            while ( *(_QWORD *)(a1 + 56) + 16LL != v82 );
          }
        }
        goto LABEL_139;
      }
      v68 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v69 = *(void **)(a1 + 136);
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v70 = *(void **)(a1 + 120);
      if ( v70 )
      {
        ExFreePoolWithTag(v70, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v66 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v66, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v72 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v66, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v72;
        if ( v72 )
        {
          v73 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v66, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v73;
          if ( v73 )
          {
            *(_DWORD *)(a1 + 96) = v66;
            v9 = 0;
            goto LABEL_130;
          }
        }
      }
      v74 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v74 )
      {
        ExFreePoolWithTag(v74, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v75 = *(void **)(a1 + 136);
      if ( v75 )
      {
        ExFreePoolWithTag(v75, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v76 = *(void **)(a1 + 120);
      if ( v76 )
      {
        ExFreePoolWithTag(v76, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v9 = -1073741670;
      LODWORD(v89) = -1073741670;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
        v89);
    }
    if ( v9 < 0 )
      goto LABEL_80;
    goto LABEL_130;
  }
  while ( 1 )
  {
    v60 = *(_DWORD *)(v59 + 24);
    v61 = 0;
    if ( v60 )
      break;
LABEL_105:
    v65 = *(_QWORD *)(v59 + 8);
    v59 = v65 - 8;
    if ( v52 + 16 == v65 )
    {
      v6 = a1 + 48;
      goto LABEL_107;
    }
  }
  v62 = v59 + 52;
  while ( 1 )
  {
    v63 = *(_QWORD *)(v62 + 20);
    if ( (*(_DWORD *)v62 & 1) == 0 )
      break;
LABEL_104:
    ++v61;
    v62 += 72LL;
    if ( v61 >= v60 )
      goto LABEL_105;
  }
  LOBYTE(v13) = *(_BYTE *)(v63 + 2);
  if ( (*(_BYTE *)(v63 + 3) & 3) != 0 )
  {
    v64 = (__int16 *)&v93;
    if ( (v13 & 0x80u) == 0LL )
      v64 = &v94;
  }
  else
  {
    v64 = (__int16 *)&v91;
  }
  if ( ((v57 >> (v13 & 0xF)) & 1) == 0 && (((unsigned __int16)*v64 >> (v13 & 0xF)) & 1) == 0 )
  {
    *v64 |= 1 << (v13 & 0xF);
    v57 = v91;
    goto LABEL_104;
  }
  WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), (__int64)v64, v52, v13, v88);
LABEL_79:
  v9 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073737984;
LABEL_80:
  *(_DWORD *)(a1 + 1560) = v9;
  if ( !*(_DWORD *)(a1 + 1564) )
  {
    if ( v9 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v9);
    *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
  }
  v83 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
  if ( v83 )
  {
    v84 = (_QWORD **)(v83 + 2);
    while ( 1 )
    {
      v86 = *v84;
      if ( *v84 == v84 )
        break;
      if ( (_QWORD **)v86[1] != v84 || (v85 = (_QWORD *)*v86, *(_QWORD **)(*v86 + 8LL) != v86) )
        __fastfail(3u);
      *v84 = v85;
      v85[1] = v84;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v86 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v83);
  }
LABEL_150:
  *((_QWORD *)v97 + 4) = v1;
  return ((v9 >> 31) & 0xFFFFFFF4) + 4077;
}
