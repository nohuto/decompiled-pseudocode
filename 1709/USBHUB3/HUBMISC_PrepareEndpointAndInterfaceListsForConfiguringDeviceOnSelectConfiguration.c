/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C0026F80
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C0019670 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00116A0 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C0026304 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002CCF0 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int16 *v3; // r12
  KIRQL v4; // al
  __int64 v5; // r13
  size_t v6; // rsi
  int v7; // eax
  int v8; // ebx
  _QWORD *v9; // r14
  _QWORD *v10; // r13
  unsigned __int16 *v11; // rbx
  _QWORD *v12; // r10
  unsigned __int8 *v13; // rcx
  unsigned __int64 v14; // rax
  bool i; // cf
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int16 *v18; // r14
  int v19; // r9d
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rsi
  _DWORD *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  size_t v25; // r12
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  unsigned __int16 *v29; // r12
  __int64 v30; // rcx
  _DWORD *v31; // rbx
  unsigned __int8 *v32; // r8
  __int64 v33; // r9
  unsigned int v34; // esi
  unsigned __int64 v35; // r9
  __int64 v36; // r11
  _BYTE *v37; // rax
  unsigned __int16 v38; // r9
  int v39; // ecx
  int v40; // eax
  unsigned __int16 v41; // ax
  char v42; // cl
  __int64 v43; // rax
  int USBDErrorFromNTStatus; // eax
  __int64 v45; // r8
  __int64 j; // rax
  __int64 v47; // rax
  unsigned int v48; // ebx
  unsigned int v49; // r10d
  __int64 v50; // r9
  unsigned __int16 v51; // r10
  __int64 k; // rax
  __int64 v53; // rax
  unsigned int v54; // esi
  unsigned int v55; // r12d
  __int64 v56; // r9
  __int64 v57; // rcx
  __int16 *v58; // rdx
  char v59; // bl
  __int64 v60; // rsi
  unsigned int v61; // eax
  void *v62; // rcx
  void *v63; // rcx
  void *v64; // rcx
  PVOID PoolWithTag; // rax
  PVOID v66; // rax
  PVOID v67; // rax
  void *v68; // rcx
  void *v69; // rcx
  void *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int m; // r9d
  int v74; // ecx
  _QWORD *v75; // rsi
  __int64 **v76; // rdi
  __int64 *v77; // rdx
  __int64 *v78; // rax
  PWDF_DRIVER_GLOBALS v79; // rcx
  int v81; // [rsp+28h] [rbp-E0h]
  __int64 v82; // [rsp+30h] [rbp-D8h]
  char v83; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v84; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v85; // [rsp+60h] [rbp-A8h] BYREF
  int v86; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v87; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v88; // [rsp+70h] [rbp-98h]
  unsigned __int16 *v89; // [rsp+78h] [rbp-90h]
  _QWORD *v90; // [rsp+80h] [rbp-88h]
  __int64 v91; // [rsp+88h] [rbp-80h] BYREF
  __int64 v92; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 *v93; // [rsp+98h] [rbp-70h]
  __int64 v94; // [rsp+A0h] [rbp-68h]
  unsigned __int16 *v95; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v96; // [rsp+B0h] [rbp-58h]
  _QWORD *v97; // [rsp+B8h] [rbp-50h]
  _DWORD v98[14]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v99[5]; // [rsp+F8h] [rbp-10h] BYREF

  *(_DWORD *)(a1 + 112) = 0;
  memset(v99, 0, sizeof(v99));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v99[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v99);
  v3 = (unsigned __int16 *)v99[1];
  v89 = (unsigned __int16 *)v99[1];
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v5 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
  memset(v98, 0, sizeof(v98));
  v98[6] = 1;
  v98[7] = 1;
  v98[0] = 56;
  v6 = *(unsigned __int16 *)(*((_QWORD *)v3 + 3) + 2LL);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v98,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v6 + 39,
         &v91,
         a1 + 48);
  v94 = 3LL;
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *(_QWORD **)v5;
    v97 = v9;
    *v9 = v91;
    memmove((void *)(*(_QWORD *)v5 + 32LL), *((const void **)v3 + 3), v6);
    v10 = v9 + 2;
    v11 = v3 + 20;
    v9[3] = v9 + 2;
    v9[2] = v9 + 2;
    LODWORD(v12) = (_DWORD)v9 + 32;
    v13 = (unsigned __int8 *)(v3 + 21);
    v14 = (unsigned __int64)v3 + *v3;
    v90 = v9 + 4;
    v96 = v14;
    LODWORD(v88) = 0;
    for ( i = (unsigned __int64)(v3 + 21) < v14; i; i = (unsigned __int64)(v95 + 1) < v96 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *v13;
      v18 = v11;
      v19 = *((unsigned __int8 *)v11 + 3);
      v83 = 0;
      v20 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                                 (_DWORD)v12,
                                 (_DWORD)v12,
                                 v17,
                                 v19,
                                 -1,
                                 -1,
                                 -1,
                                 (__int64)&v83,
                                 *(_QWORD *)(v16 + 1432));
      v21 = v20;
      if ( !v20 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x20u,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1073737984;
        goto LABEL_76;
      }
      v22 = *(_DWORD **)(a1 + 2448);
      if ( v22 )
      {
        v23 = 0;
        if ( *v22 )
        {
          while ( *((_BYTE *)v22 + 2 * v23 + 5) != v20[3] || *((_BYTE *)v22 + 2 * v23 + 4) != v20[2] )
          {
            if ( ++v23 >= *v22 )
              goto LABEL_13;
          }
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
        }
      }
LABEL_13:
      *((_DWORD *)v11 + 4) = v20[4];
      LODWORD(v88) = v20[4] + (_DWORD)v88;
      v24 = *v11;
      v93 = v11 + 8;
      v95 = (unsigned __int16 *)((char *)v11 + v24);
      memset(v98, 0, sizeof(v98));
      v98[6] = 1;
      v98[7] = 1;
      v98[0] = 56;
      v25 = 72LL * *((unsigned int *)v11 + 4) + 40;
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
              WdfDriverGlobals,
              v98,
              (unsigned int)ExDefaultNonPagedPoolType,
              1681082453LL,
              v25,
              &v92,
              &v85);
      v8 = v26;
      if ( v26 < 0 )
      {
        LODWORD(v82) = v26;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          2u,
          0x21u,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
          v82);
        v5 = a1 + 48;
LABEL_138:
        v3 = v89;
        goto LABEL_139;
      }
      *((_QWORD *)v18 + 1) = v85;
      memset(v85, 0, v25);
      *(_QWORD *)v85 = v92;
      *((_QWORD *)v85 + 4) = v21;
      *((_DWORD *)v85 + 6) = v21[4];
      if ( v83 == 1 )
      {
        _InterlockedOr((volatile signed __int32 *)v85 + 7, 1u);
        _InterlockedOr((volatile signed __int32 *)v85 + 7, 2u);
      }
      v27 = (_QWORD *)v10[1];
      v28 = (char *)v85 + 8;
      if ( (_QWORD *)*v27 != v10 )
        __fastfail(3u);
      v29 = v93;
      v12 = v90;
      *v28 = v10;
      v28[1] = v27;
      *v27 = v28;
      v10[1] = v28;
      *((_BYTE *)v18 + 4) = v21[5];
      *((_BYTE *)v18 + 5) = v21[6];
      *((_BYTE *)v18 + 6) = v21[7];
      v30 = *v21;
      v31 = v85;
      v32 = &v21[v30];
      v33 = *(unsigned __int16 *)(*((_QWORD *)v89 + 3) + 2LL) - v30 - (_QWORD)v21;
      v34 = 0;
      v35 = (unsigned __int64)&v32[v33 + (_QWORD)v12];
      if ( *(_DWORD *)v29 )
      {
        while ( (unsigned __int64)v32 < v35 )
        {
          v36 = 9LL * v34;
          v31[2 * v36 + 16] = *(_DWORD *)&v18[12 * v34 + 22];
          v31[2 * v36 + 12] = 1;
          v37 = v32 + 1;
          if ( (unsigned __int64)(v32 + 1) >= v35 )
          {
            v38 = 23;
            goto LABEL_74;
          }
          while ( *v37 != 5 )
          {
            if ( !*v32 )
            {
              v38 = 24;
              goto LABEL_74;
            }
            v32 += *v32;
            if ( (unsigned __int64)v32 >= v35 )
            {
              v38 = 25;
              goto LABEL_74;
            }
            v37 = v32 + 1;
            if ( (unsigned __int64)(v32 + 1) >= v35 )
            {
              v38 = 26;
              goto LABEL_74;
            }
          }
          if ( (unsigned __int64)(v32 + 7) > v35 )
          {
            v38 = 28;
            goto LABEL_74;
          }
          if ( (*(_DWORD *)&v18[12 * v34 + 22] & 1) != 0 )
            *((_WORD *)v32 + 2) = v18[12 * v34 + 12];
          v39 = *(_DWORD *)&v18[12 * v34 + 22] & 0xF0;
          if ( v39 == 16 )
          {
            v31[18 * v34 + 26] = 1;
          }
          else if ( v39 == 32 )
          {
            v31[18 * v34 + 26] = 2;
          }
          else
          {
            v40 = 3;
            if ( v39 != 48 )
              v40 = 0;
            v31[18 * v34 + 26] = v40;
          }
          *(_QWORD *)&v31[18 * v34 + 18] = v32;
          v31[18 * v34 + 20] = v35 - (_DWORD)v32;
          v41 = *((_WORD *)v32 + 2);
          if ( *(_WORD *)(a1 + 1990) < 0x250u )
            v41 = (v41 & 0x7FF) * ((v94 & (v41 >> 11)) + 1);
          v18[12 * v34 + 12] = v41;
          v42 = 6;
          if ( v32[6] < 6u )
            v42 = v32[6];
          HIBYTE(v18[12 * v34 + 13]) = v42;
          LOBYTE(v18[12 * v34 + 13]) = v32[2];
          if ( (v32[3] & 3) != 0 )
          {
            switch ( v32[3] & 3 )
            {
              case 1:
                *(_DWORD *)&v18[12 * v34 + 14] = 1;
                break;
              case 2:
                *(_DWORD *)&v18[12 * v34 + 14] = 2;
                break;
              case 3:
                *(_DWORD *)&v18[12 * v34 + 14] = 3;
                break;
            }
          }
          else
          {
            *(_DWORD *)&v18[12 * v34 + 14] = 0;
          }
          if ( !v18[12 * v34 + 12] )
            _InterlockedOr(&v31[18 * v34 + 13], 1u);
          if ( !*v32 )
          {
            v38 = 29;
            goto LABEL_74;
          }
          v32 += *v32;
          if ( (unsigned __int64)v32 < v35 && (unsigned __int64)(v32 + 1) < v35 && v32[1] == 48 )
          {
            if ( *v32 )
            {
              if ( (unsigned __int64)(v32 + 6) <= v35 )
              {
                v43 = *(_QWORD *)&v31[18 * v34 + 18];
                *(_QWORD *)&v31[18 * v34 + 22] = v32;
                if ( (*(_BYTE *)(v43 + 3) & 3) == 1 )
                {
                  if ( (v31[18 * v34 + 13] & 1) == 0 )
                    v18[12 * v34 + 12] = *((_WORD *)v32 + 2);
                  if ( (v32[3] & 0x80u) != 0 )
                  {
                    v32 += *v32;
                    if ( (unsigned __int64)v32 < v35
                      && (unsigned __int64)(v32 + 1) < v35
                      && v32[1] == 49
                      && *v32
                      && (unsigned __int64)(v32 + 8) <= v35 )
                    {
                      *(_QWORD *)&v31[18 * v34 + 24] = v32;
                    }
                  }
                }
              }
            }
          }
          if ( ++v34 >= *(_DWORD *)v29 )
          {
            LODWORD(v12) = (_DWORD)v90;
            goto LABEL_67;
          }
        }
        v38 = 22;
LABEL_74:
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          v38,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
LABEL_75:
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1073737984;
        goto LABEL_76;
      }
LABEL_67:
      v11 = v95;
      v13 = (unsigned __int8 *)(v95 + 1);
    }
    v5 = a1 + 48;
    v45 = *(_QWORD *)(a1 + 48);
    if ( v45 )
    {
      for ( j = *(_QWORD *)(v45 + 16); ; j = *(_QWORD *)(v47 + 8) )
      {
        v47 = j - 8;
        if ( v45 + 16 == v47 + 8 )
          break;
        v48 = *(_DWORD *)(v47 + 24);
        v49 = 0;
        if ( v48 )
        {
          v50 = v47 + 72;
          while ( (*(_BYTE *)(*(_QWORD *)v50 + 2LL) & 0xF) != 0 )
          {
            ++v49;
            v50 += 72LL;
            if ( v49 >= v48 )
              goto LABEL_89;
          }
          v8 = -1073741823;
          *(_DWORD *)(a1 + 1564) = -1072693239;
          goto LABEL_76;
        }
LABEL_89:
        ;
      }
    }
    LOWORD(v86) = 0;
    v51 = 0;
    v87 = 0;
    v84 = 0;
    if ( v45 )
    {
      for ( k = *(_QWORD *)(v45 + 16); ; k = *(_QWORD *)(v53 + 8) )
      {
        v53 = k - 8;
        if ( v45 + 16 == v53 + 8 )
          break;
        v54 = 0;
        v55 = *(_DWORD *)(v53 + 24);
        if ( v55 )
        {
          v56 = v53 + 52;
          do
          {
            v57 = *(_QWORD *)(v56 + 20);
            if ( (*(_DWORD *)v56 & 1) == 0 )
            {
              if ( (*(_BYTE *)(v57 + 3) & 3) != 0 )
              {
                v58 = (__int16 *)&v86;
                if ( *(char *)(v57 + 2) >= 0 )
                  v58 = &v87;
              }
              else
              {
                v58 = (__int16 *)&v84;
              }
              v59 = *(_BYTE *)(v57 + 2);
              if ( ((v51 >> (v59 & 0xF)) & 1) != 0 || (((unsigned __int16)*v58 >> (v59 & 0xF)) & 1) != 0 )
              {
                WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), (__int64)v58, v45, v56, v81);
                goto LABEL_75;
              }
              *v58 |= 1 << (v59 & 0xF);
              v51 = v84;
            }
            ++v54;
            v56 += 72LL;
          }
          while ( v54 < v55 );
        }
      }
    }
    v8 = 0;
    v60 = (unsigned int)v88;
    *((_DWORD *)v97 + 2) = v88;
    v61 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v61 )
    {
      if ( (unsigned int)v60 <= v61 )
      {
LABEL_129:
        v71 = *(_QWORD *)(a1 + 56);
        if ( v71 )
        {
          *(_DWORD *)(a1 + 144) = 0;
          *(_DWORD *)(a1 + 128) = 0;
          v72 = *(_QWORD *)(v71 + 16) - 8LL;
          if ( v71 != *(_QWORD *)(v71 + 16) - 16LL )
          {
            do
            {
              for ( m = 0; m < *(_DWORD *)(v72 + 24); ++m )
              {
                v74 = *(_DWORD *)(v72 + 72LL * m + 48);
                if ( v74 == 4 )
                {
                  *(_DWORD *)(v72 + 72LL * m + 48) = 5;
                  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v72 + 72LL * m + 40);
                }
                else if ( v74 == 6 )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v72 + 72LL * m + 40);
                }
              }
              v72 = *(_QWORD *)(v72 + 8) - 8LL;
            }
            while ( *(_QWORD *)(a1 + 56) != v72 - 8 );
          }
        }
        goto LABEL_138;
      }
      v62 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v62 )
      {
        ExFreePoolWithTag(v62, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v63 = *(void **)(a1 + 136);
      if ( v63 )
      {
        ExFreePoolWithTag(v63, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v64 = *(void **)(a1 + 120);
      if ( v64 )
      {
        ExFreePoolWithTag(v64, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( !*(_DWORD *)(a1 + 96) && (_DWORD)v60 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v60, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v66 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v60, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v66;
        if ( v66 )
        {
          v67 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8 * v60, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v67;
          if ( v67 )
          {
            *(_DWORD *)(a1 + 96) = v60;
            v8 = 0;
            goto LABEL_129;
          }
        }
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
      v8 = -1073741670;
      LODWORD(v82) = -1073741670;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
        v82);
    }
    if ( v8 < 0 )
      goto LABEL_76;
    goto LABEL_129;
  }
  LODWORD(v82) = v7;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x1Fu,
    (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
    v82);
LABEL_139:
  if ( v8 < 0 )
  {
LABEL_76:
    *(_DWORD *)(a1 + 1560) = v8;
    if ( !*(_DWORD *)(a1 + 1564) )
    {
      if ( v8 == -1073741667 )
        USBDErrorFromNTStatus = -1073713152;
      else
        USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v8);
      *(_DWORD *)(a1 + 1564) = USBDErrorFromNTStatus;
    }
    v75 = *(_QWORD **)(a1 + 48);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
    if ( v75 )
    {
      v76 = (__int64 **)(v75 + 2);
      while ( *v76 != (__int64 *)v76 )
      {
        v77 = *v76;
        if ( (__int64 **)(*v76)[1] != v76 || (v78 = (__int64 *)*v77, *(__int64 **)(*v77 + 8) != v77) )
          __fastfail(3u);
        v79 = WdfDriverGlobals;
        *v76 = v78;
        v78[1] = (__int64)v76;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(v79, *(v77 - 1));
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v75);
    }
    *((_QWORD *)v89 + 4) = 0LL;
  }
  else
  {
    *((_QWORD *)v3 + 4) = *(_QWORD *)v5;
  }
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
