/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C0027B00
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C001DA00 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00116A0 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1C00261D8 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002CCF0 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rsi
  int v14; // ebx
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  __int16 v17; // cx
  size_t v18; // r14
  int v19; // eax
  __int64 v20; // rax
  _DWORD *v21; // r11
  __int64 v22; // rcx
  unsigned __int8 *v23; // r8
  unsigned int v24; // esi
  unsigned __int64 v25; // rbx
  __int64 v26; // r10
  _BYTE *v27; // rax
  unsigned __int16 v28; // r9
  int v29; // ecx
  int v30; // eax
  unsigned __int16 v31; // ax
  char v32; // cl
  __int64 v33; // rax
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  char *v36; // rdx
  unsigned int v37; // r11d
  unsigned int v38; // r10d
  unsigned int *v39; // r8
  unsigned int i; // edx
  __int64 v41; // r11
  char v42; // r13
  __int64 *v43; // r14
  __int64 v44; // rcx
  __int64 *v45; // rsi
  unsigned int v46; // r9d
  __int64 v47; // r8
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned int v50; // edx
  __int64 v51; // r10
  unsigned int v52; // esi
  unsigned int v53; // eax
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  PVOID PoolWithTag; // rax
  PVOID v58; // rax
  PVOID v59; // rax
  void *v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  __int64 v63; // r9
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  unsigned int j; // r8d
  int v67; // ecx
  __int64 k; // r8
  unsigned int m; // r10d
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 **v72; // rcx
  __int64 **v73; // rax
  int USBDErrorFromNTStatus; // eax
  int v76; // [rsp+28h] [rbp-A9h]
  __int64 v77; // [rsp+30h] [rbp-A1h]
  char v78[8]; // [rsp+58h] [rbp-79h] BYREF
  void *v79; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int8 v80; // [rsp+68h] [rbp-69h]
  unsigned int v81; // [rsp+6Ch] [rbp-65h]
  __int64 v82; // [rsp+70h] [rbp-61h]
  unsigned int v83; // [rsp+78h] [rbp-59h]
  __int64 v84; // [rsp+80h] [rbp-51h]
  __int64 v85; // [rsp+88h] [rbp-49h] BYREF
  __int64 v86; // [rsp+90h] [rbp-41h]
  _DWORD v87[14]; // [rsp+98h] [rbp-39h] BYREF
  _QWORD v88[5]; // [rsp+D0h] [rbp-1h] BYREF

  v78[0] = 0;
  v79 = 0LL;
  v84 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  memset(v88, 0, sizeof(v88));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v88[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v88);
  v3 = v88[1];
  if ( *(_WORD *)(v88[1] + 2LL) == 1 )
  {
    *(_DWORD *)(a1 + 148) = 0;
    v4 = 32LL;
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(v88[1] + 32LL);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 32) )
      v5 = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(a1 + 152) = v5;
    v4 = 48LL;
  }
  v6 = v4 + v3;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned __int8 *)(v6 + 3);
  v11 = *(unsigned __int8 *)(v6 + 2);
  v82 = *(_QWORD *)(a1 + 48);
  v8 = v82;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)v78,
                             *(_QWORD *)(v9 + 1432));
  v13 = v12;
  if ( !v12 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x22u,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
    *(_DWORD *)(a1 + 1564) = -1073725440;
    v14 = -1073741823;
    goto LABEL_150;
  }
  v15 = *(_DWORD **)(a1 + 2448);
  if ( v15 )
  {
    v16 = 0;
    if ( *v15 )
    {
      while ( *((_BYTE *)v15 + 2 * v16 + 5) != v12[3] || *((_BYTE *)v15 + 2 * v16 + 4) != v12[2] )
      {
        if ( ++v16 >= *v15 )
          goto LABEL_15;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_15:
  v17 = v12[4] + 1;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_WORD *)v6 = 24 * v17;
  *(_DWORD *)(v6 + 16) = v12[4];
  memset(v87, 0, sizeof(v87));
  v87[0] = 56;
  v87[6] = 1;
  v87[7] = 1;
  v18 = 72LL * *(unsigned int *)(v6 + 16) + 40;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *, _QWORD, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          v87,
          (unsigned int)ExDefaultNonPagedPoolType,
          1681082453LL,
          v18,
          &v85,
          &v79);
  v14 = v19;
  if ( v19 < 0 )
  {
    LODWORD(v77) = v19;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x23u,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      v77);
    goto LABEL_148;
  }
  memset(v79, 0, v18);
  *(_QWORD *)v79 = v85;
  *((_QWORD *)v79 + 4) = v13;
  *((_DWORD *)v79 + 6) = v13[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v78[0] == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v79 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v79 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v79;
  }
  *(_BYTE *)(v6 + 4) = v13[5];
  *(_BYTE *)(v6 + 5) = v13[6];
  *(_BYTE *)(v6 + 6) = v13[7];
  v20 = *v13;
  v21 = v79;
  v22 = *(unsigned __int16 *)(v8 + 34) - v20 - (_QWORD)v13;
  v23 = &v13[v20];
  v24 = 0;
  v25 = (unsigned __int64)&v23[v22 + 32 + v8];
  if ( *(_DWORD *)(v6 + 16) )
  {
    while ( (unsigned __int64)v23 < v25 )
    {
      v26 = 9LL * v24;
      v21[2 * v26 + 16] = *(_DWORD *)(v6 + 24LL * v24 + 44);
      v27 = v23 + 1;
      v21[2 * v26 + 12] = 1;
      if ( (unsigned __int64)(v23 + 1) >= v25 )
      {
        v28 = 23;
        goto LABEL_87;
      }
      while ( *v27 != 5 )
      {
        if ( !*v23 )
        {
          v28 = 24;
          goto LABEL_87;
        }
        v23 += *v23;
        if ( (unsigned __int64)v23 >= v25 )
        {
          v28 = 25;
          goto LABEL_87;
        }
        v27 = v23 + 1;
        if ( (unsigned __int64)(v23 + 1) >= v25 )
        {
          v28 = 26;
          goto LABEL_87;
        }
      }
      if ( (unsigned __int64)(v23 + 7) > v25 )
      {
        v28 = 28;
        goto LABEL_87;
      }
      if ( (*(_DWORD *)(v6 + 24LL * v24 + 44) & 1) != 0 )
        *((_WORD *)v23 + 2) = *(_WORD *)(v6 + 24LL * v24 + 24);
      v29 = *(_DWORD *)(v6 + 24LL * v24 + 44) & 0xF0;
      if ( v29 == 16 )
      {
        v21[18 * v24 + 26] = 1;
      }
      else if ( v29 == 32 )
      {
        v21[18 * v24 + 26] = 2;
      }
      else
      {
        v30 = 3;
        if ( v29 != 48 )
          v30 = 0;
        v21[18 * v24 + 26] = v30;
      }
      *(_QWORD *)&v21[18 * v24 + 18] = v23;
      v21[18 * v24 + 20] = v25 - (_DWORD)v23;
      v31 = *((_WORD *)v23 + 2);
      if ( *(_WORD *)(a1 + 1990) < 0x250u )
        v31 = (v31 & 0x7FF) * (((v31 >> 11) & 3) + 1);
      *(_WORD *)(v6 + 24LL * v24 + 24) = v31;
      v32 = 6;
      if ( v23[6] < 6u )
        v32 = v23[6];
      *(_BYTE *)(v6 + 24LL * v24 + 27) = v32;
      *(_BYTE *)(v6 + 24LL * v24 + 26) = v23[2];
      if ( (v23[3] & 3) != 0 )
      {
        switch ( v23[3] & 3 )
        {
          case 1:
            *(_DWORD *)(v6 + 24LL * v24 + 28) = 1;
            break;
          case 2:
            *(_DWORD *)(v6 + 24LL * v24 + 28) = 2;
            break;
          case 3:
            *(_DWORD *)(v6 + 24LL * v24 + 28) = 3;
            break;
        }
      }
      else
      {
        *(_DWORD *)(v6 + 24LL * v24 + 28) = 0;
      }
      if ( !*(_WORD *)(v6 + 24LL * v24 + 24) )
        _InterlockedOr(&v21[18 * v24 + 13], 1u);
      if ( !*v23 )
      {
        v28 = 29;
        goto LABEL_87;
      }
      v23 += *v23;
      if ( (unsigned __int64)v23 < v25 && (unsigned __int64)(v23 + 1) < v25 && v23[1] == 48 )
      {
        if ( *v23 )
        {
          if ( (unsigned __int64)(v23 + 6) <= v25 )
          {
            v33 = *(_QWORD *)&v21[18 * v24 + 18];
            *(_QWORD *)&v21[18 * v24 + 22] = v23;
            if ( (*(_BYTE *)(v33 + 3) & 3) == 1 )
            {
              if ( (v21[18 * v24 + 13] & 1) == 0 )
                *(_WORD *)(v6 + 24LL * v24 + 24) = *((_WORD *)v23 + 2);
              if ( (v23[3] & 0x80u) != 0 )
              {
                v23 += *v23;
                if ( (unsigned __int64)v23 < v25
                  && (unsigned __int64)(v23 + 1) < v25
                  && v23[1] == 49
                  && *v23
                  && (unsigned __int64)(v23 + 8) <= v25 )
                {
                  *(_QWORD *)&v21[18 * v24 + 24] = v23;
                }
              }
            }
          }
        }
      }
      if ( ++v24 >= *(_DWORD *)(v6 + 16) )
        goto LABEL_68;
    }
    v28 = 22;
LABEL_87:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v28,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
    v14 = -1073741823;
    *(_DWORD *)(a1 + 1564) = -1073725440;
    goto LABEL_150;
  }
LABEL_68:
  v34 = 0;
  v35 = *((_DWORD *)v79 + 6);
  if ( v35 )
  {
    v36 = (char *)v79 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v36 + 2LL) & 0xF) != 0 )
    {
      ++v34;
      v36 += 72;
      if ( v34 >= v35 )
        goto LABEL_72;
    }
    goto LABEL_89;
  }
LABEL_72:
  v37 = *(_DWORD *)(a1 + 148);
  v38 = 0;
  v39 = *(unsigned int **)(a1 + 152);
  if ( v37 )
  {
    while ( 1 )
    {
      for ( i = 0; i < v35; ++i )
      {
        if ( *(unsigned __int8 *)(*((_QWORD *)v79 + 9 * i + 9) + 2LL) == *((_WORD *)v39 + 2) )
          break;
      }
      if ( i == v35 )
        break;
      ++v38;
      v39 = (unsigned int *)((char *)v39 + *v39);
      if ( v38 >= v37 )
        goto LABEL_78;
    }
    LODWORD(v77) = *((unsigned __int16 *)v39 + 2);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x24u,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      v77);
LABEL_89:
    v14 = -1073741823;
    *(_DWORD *)(a1 + 1564) = -1072693239;
    goto LABEL_150;
  }
LABEL_78:
  v41 = v82;
  v42 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  v78[0] = 0;
  v43 = (__int64 *)(v41 + 16);
  v44 = *(_QWORD *)(v41 + 16) - 8LL;
  v45 = *(__int64 **)(v41 + 16);
  if ( (__int64 *)(v41 + 16) != v45 )
  {
    do
    {
      v86 = *(_QWORD *)(v44 + 32);
      v80 = *(_BYTE *)(v86 + 2);
      if ( v80 == *(_BYTE *)(v6 + 2) )
      {
        v42 = 1;
        v84 = v44;
        v78[0] = 1;
      }
      else
      {
        v81 = *(_DWORD *)(v44 + 24);
        v14 = 0;
        v46 = 0;
        if ( v81 )
        {
          v47 = v44 + 72;
          v48 = v81;
          v49 = *((_DWORD *)v79 + 6);
          v83 = v49;
          while ( 1 )
          {
            v50 = 0;
            if ( v49 )
              break;
LABEL_98:
            ++v46;
            v47 += 72LL;
            if ( v46 >= v48 )
              goto LABEL_101;
          }
          while ( 1 )
          {
            v51 = *((_QWORD *)v79 + 9 * v50 + 9);
            if ( *(_BYTE *)(*(_QWORD *)v47 + 2LL) == *(_BYTE *)(v51 + 2)
              && *(_WORD *)(*(_QWORD *)v47 + 4LL)
              && *(_WORD *)(v51 + 4) )
            {
              break;
            }
            v49 = v83;
            if ( ++v50 >= v83 )
            {
              v48 = v81;
              goto LABEL_98;
            }
          }
          WPP_RECORDER_SF_Ddddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            *(unsigned __int8 *)(*((_QWORD *)v79 + 4) + 2LL),
            *(unsigned __int8 *)(v86 + 3),
            v80,
            v76);
          v14 = -1073741811;
        }
LABEL_101:
        if ( v14 < 0 )
          goto LABEL_150;
        v42 = v78[0];
      }
      v44 = *v45 - 8;
      v45 = (__int64 *)*v45;
    }
    while ( v43 != v45 );
    v41 = v82;
  }
  v14 = 0;
  v52 = *(_DWORD *)(v41 + 8) + *((_DWORD *)v79 + 6);
  v53 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( !v53 )
  {
LABEL_113:
    if ( !*(_DWORD *)(a1 + 96) && v52 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v52, 0x64334855u);
      *(_QWORD *)(a1 + 104) = PoolWithTag;
      if ( PoolWithTag )
      {
        v58 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v52, 0x64334855u);
        *(_QWORD *)(a1 + 136) = v58;
        if ( v58 )
        {
          v59 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8LL * v52, 0x64334855u);
          *(_QWORD *)(a1 + 120) = v59;
          if ( v59 )
          {
            *(_DWORD *)(a1 + 96) = v52;
            v14 = 0;
LABEL_127:
            v41 = v82;
            goto LABEL_128;
          }
        }
      }
      v60 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v60 )
      {
        ExFreePoolWithTag(v60, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v61 = *(void **)(a1 + 136);
      if ( v61 )
      {
        ExFreePoolWithTag(v61, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v62 = *(void **)(a1 + 120);
      if ( v62 )
      {
        ExFreePoolWithTag(v62, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      v14 = -1073741670;
      LODWORD(v77) = -1073741670;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Eu,
        (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
        v77);
    }
    if ( v14 < 0 )
      goto LABEL_150;
    goto LABEL_127;
  }
  if ( v52 > v53 )
  {
    v54 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v54 )
    {
      ExFreePoolWithTag(v54, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v55 = *(void **)(a1 + 136);
    if ( v55 )
    {
      ExFreePoolWithTag(v55, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v56 = *(void **)(a1 + 120);
    if ( v56 )
    {
      ExFreePoolWithTag(v56, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    goto LABEL_113;
  }
LABEL_128:
  v63 = v84;
  if ( v42 )
    v52 -= *(_DWORD *)(v84 + 24);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  if ( v42 )
  {
    v64 = *(_QWORD *)(v63 + 8);
    if ( *(_QWORD *)(v64 + 8) != v63 + 8 || (v65 = *(_QWORD **)(v63 + 16), *v65 != v63 + 8) )
      __fastfail(3u);
    *v65 = v64;
    *(_QWORD *)(v64 + 8) = v65;
    *(_QWORD *)(a1 + 72) = v63;
    for ( j = 0; j < *(_DWORD *)(v63 + 24); ++j )
    {
      v67 = *(_DWORD *)(v63 + 72LL * j + 48);
      if ( v67 == 4 )
      {
        *(_DWORD *)(v63 + 72LL * j + 48) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v63 + 72LL * j + 40);
      }
      else if ( v67 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v63 + 72LL * j + 40);
      }
    }
  }
  for ( k = *v43; ; k = *(_QWORD *)(v71 + 8) )
  {
    v71 = k - 8;
    if ( v43 == (__int64 *)(v71 + 8) )
      break;
    for ( m = 0; m < *(_DWORD *)(v71 + 24); ++*(_DWORD *)(a1 + 144) )
    {
      v70 = m++;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = *(_QWORD *)(v71 + 72 * v70 + 40);
    }
  }
  v72 = (__int64 **)v43[1];
  v73 = (__int64 **)((char *)v79 + 8);
  if ( *v72 != v43 )
    __fastfail(3u);
  *v73 = v43;
  v73[1] = (__int64 *)v72;
  *v72 = (__int64 *)v73;
  v43[1] = (__int64)v73;
  *(_QWORD *)(a1 + 80) = v79;
  *(_DWORD *)(v41 + 8) = v52;
LABEL_148:
  if ( v14 >= 0 )
  {
    *(_QWORD *)(v6 + 8) = v79;
    return ((v14 >> 31) & 0xFFFFFFF4) + 4077;
  }
LABEL_150:
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(v6 + 8) = -1LL;
  if ( v79 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(_QWORD *)v79);
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
