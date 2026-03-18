/*
 * XREFs of sub_1402AFF20 @ 0x1402AFF20
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x140176D88 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     SdbpCheckDll @ 0x1402B11C0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402B1480 (KeGuardCheckICall.c)
 */

unsigned __int64 __fastcall sub_1402AFF20(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v2; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // r14d
  _QWORD *v11; // r9
  int v12; // r10d
  const char *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r11
  __int64 v16; // r8
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  int v24; // r13d
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  _BYTE *v29; // rax
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int64 v32; // r9
  unsigned int v33; // r8d
  int *v34; // rbx
  __int64 v35; // r10
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rax
  int v41; // eax
  _QWORD *v42; // r11
  int v43; // r14d
  int v44; // eax
  unsigned __int64 v45; // r15
  _QWORD *v46; // r9
  __int64 v47; // r8
  const char *v48; // rax
  unsigned __int64 v49; // rsi
  unsigned int v50; // r10d
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  bool v57; // zf
  unsigned __int64 i; // rax
  unsigned int v59; // esi
  BOOL v60; // r12d
  __int64 v61; // rcx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v63; // r14
  unsigned __int64 v64; // r13
  int v65; // eax
  __int64 v66; // r13
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // r12
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 DpcStack; // r14
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // r8
  unsigned int v75; // r10d
  unsigned __int64 v76; // r9
  _QWORD *v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // rcx
  unsigned __int64 v80; // rax
  __int64 v81; // rsi
  _QWORD *v82; // rcx
  char *v83; // r10
  int v84; // r11d
  unsigned __int64 v85; // rbx
  signed __int64 v86; // r10
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  volatile signed __int32 *v92; // rax
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  _QWORD *v96; // r9
  unsigned __int64 v97; // rax
  unsigned __int128 v98; // rax
  __int64 v99; // rdx
  char *v100; // rdx
  _QWORD *v101; // rcx
  __int64 v102; // r8
  char v103; // al
  unsigned __int64 v104; // rdx
  signed __int32 v106[8]; // [rsp+200h] [rbp+200h] BYREF
  _BYTE v107[512]; // [rsp+2C0h] [rbp+2C0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL);
  v3 = a2;
  if ( (*(_DWORD *)(a2 + 2008) & 0x110000) != 0x110000 )
  {
    v4 = v2 + 32;
    v5 = 304;
    v6 = 38LL;
    do
    {
      *v4 = 0LL;
      v5 -= 8;
      ++v4;
      --v6;
    }
    while ( v6 );
    for ( ; v5; --v5 )
    {
      *(_BYTE *)v4 = 0;
      v4 = (_QWORD *)((char *)v4 + 1);
    }
    v7 = *(_OWORD *)(v3 + 1704);
    *(_WORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = 304;
    v8 = *(_OWORD *)(v3 + 1720);
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x2A) = ((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL)
                                                                         + 128;
    *(_OWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v7;
    *(_WORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v3 + 1752;
    v9 = *(_OWORD *)(v3 + 1736);
    *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = (v3 + 1752) >> 32;
    *(_OWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v8;
    *(_WORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x96) = (unsigned int)(v3 + 1752) >> 16;
    *(_OWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v9;
    _disable();
    if ( *(int *)(v3 + 2008) >= 0 )
    {
      __sidt(v2 + 18);
      __lidt(v2 + 10);
      __writedr(7u, 0LL);
      __lidt(v2 + 18);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  *(_DWORD *)(v3 + 1672) += 1496;
  v10 = *(_DWORD *)(v3 + 196);
  v11 = (_QWORD *)v3;
  v12 = *(_DWORD *)(v3 + 1652);
  v13 = (const char *)v3;
  v14 = *(_QWORD *)(v3 + 1656);
  *(_DWORD *)(v3 + 196) = 0;
  if ( v3 < v3 + 1496 )
  {
    do
    {
      _mm_prefetch(v13, 0);
      v13 += 64;
    }
    while ( (unsigned __int64)v13 < v3 + 1496 );
  }
  v15 = 11LL;
  v16 = v14;
  v17 = 11;
  do
  {
    v18 = 8LL;
    do
    {
      v19 = v16 ^ *v11;
      v20 = v11[1];
      v11 += 2;
      v16 = __ROL8__(__ROL8__(v19, v12) ^ v20, v12);
      --v18;
    }
    while ( v18 );
    v21 = __ROL8__(v14 ^ ((unsigned __int64)v11 - v3), 17) ^ v14 ^ ((unsigned __int64)v11 - v3);
    v22 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v22;
    v12 = ((unsigned __int8)(v22 ^ v21) ^ (unsigned __int8)v12) & 0x3F;
    if ( !v12 )
      LOBYTE(v12) = 1;
    --v17;
  }
  while ( v17 );
  v23 = 88;
  v24 = 64;
  do
  {
    v16 = __ROL8__(*v11++ ^ v16, v12);
    v23 -= 8;
    --v15;
  }
  while ( v15 );
  for ( ; v23; --v23 )
  {
    v25 = *(unsigned __int8 *)v11;
    v11 = (_QWORD *)((char *)v11 + 1);
    v16 = __ROL8__(v25 ^ v16, v12);
  }
  v26 = 0xA3A03F5891C8B4E8uLL;
  *(_DWORD *)(v3 + 196) = v10;
  if ( *(_QWORD *)(v3 + 2144) != v16 )
  {
    v27 = *(_QWORD *)(v3 + 1352);
    v28 = *(_DWORD *)(v3 + 1604);
    *(_QWORD *)v27 = v3;
    *(_DWORD *)(v27 + 16) = v28;
    if ( !*(_DWORD *)(v3 + 1872) )
    {
      *(_QWORD *)(*(_QWORD *)(v3 + 1352) + 24LL) = *(_QWORD *)(v3 + 2144) ^ v16;
      if ( !*(_DWORD *)(v3 + 1872) )
      {
        *(_QWORD *)(v3 + 1888) = 0LL;
        *(_QWORD *)(v3 + 1880) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 1896) = 265LL;
        *(_QWORD *)(v3 + 1904) = v16;
        *(_DWORD *)(v3 + 1872) = 1;
      }
    }
  }
  *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0LL;
  v29 = v2 + 4;
  v30 = 4;
  do
  {
    *v29++ = 0;
    --v30;
  }
  while ( v30 );
  v31 = 0;
  *v2 = 0;
  while ( v31 < *(_DWORD *)(v3 + 1600) )
  {
    v32 = v3;
    v33 = 0;
    if ( *(_QWORD *)(v3 + 2216) )
      v32 = *(_QWORD *)(v3 + 2216);
    v34 = (int *)(v32 + *(unsigned int *)(v32 + 1640));
    if ( *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 8)
      && *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0xC) <= v31 )
    {
      v33 = *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0xC);
      v34 = (int *)(v32 + *(unsigned int *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x10));
    }
    if ( v33 != v31 )
    {
      v35 = v31 - v33;
      v33 = v31;
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 > 12 )
          break;
        if ( v36 == 12 )
          goto LABEL_50;
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_50;
        v38 = v37 - 6;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( !v39 )
          {
            v41 = *((unsigned __int16 *)v34 + 16);
LABEL_55:
            v40 = (v41 + 55) & 0xFFFFFFF8;
            goto LABEL_56;
          }
          if ( v39 != 2 )
            goto LABEL_52;
          v40 = (unsigned int)(16 * (v34[7] + 3));
        }
        else
        {
          v40 = (unsigned int)(24 * (v34[6] + 2));
        }
LABEL_56:
        v34 = (int *)((char *)v34 + v40);
        if ( !--v35 )
          goto LABEL_57;
      }
      if ( v36 == 28 )
      {
        v41 = *((unsigned __int16 *)v34 + 20);
        goto LABEL_55;
      }
      if ( v36 == 30 )
      {
        v26 = ((v34[9] - 1) / 0xCu + 7) & 0xFFFFFFF8;
        v40 = (unsigned int)v26 + 24 * (*((unsigned __int16 *)v34 + 20) + 2);
        goto LABEL_56;
      }
      if ( v36 <= 32 )
      {
LABEL_52:
        v40 = 48LL;
        goto LABEL_56;
      }
      if ( v36 <= 34 )
      {
        v26 = ((v34[8] & 0xFFF) + (unsigned __int64)(unsigned int)v34[10] + 4095) >> 12;
        v40 = (unsigned int)(20 * v26 + 48);
        goto LABEL_56;
      }
      if ( v36 != 43 )
        goto LABEL_52;
LABEL_50:
      v26 = (unsigned int)v34[4] / 0xCuLL;
      v40 = (unsigned int)(4 * v26 + 48);
      goto LABEL_56;
    }
LABEL_57:
    v42 = (_QWORD *)*((_QWORD *)v34 + 1);
    v43 = *(_DWORD *)(v3 + 1652);
    v44 = (_DWORD)v34 - v32;
    v45 = *(_QWORD *)(v3 + 1656);
    v46 = v42;
    *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0xC) = v33;
    v47 = (unsigned int)v34[4];
    *(_DWORD *)(v3 + 1672) += v47;
    *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v44;
    v48 = (const char *)v42;
    *(_DWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 1;
    if ( v42 < (_QWORD *)((char *)v42 + v47) )
    {
      do
      {
        _mm_prefetch(v48, 0);
        v48 += 64;
      }
      while ( v48 < (const char *)v42 + v47 );
    }
    v49 = v45;
    v50 = (unsigned int)v47 >> 7;
    if ( (unsigned int)v47 >> 7 )
    {
      do
      {
        v51 = 8LL;
        do
        {
          v52 = v46[1] ^ __ROL8__(*v46 ^ v49, v43);
          v46 += 2;
          v49 = __ROL8__(v52, v43);
          --v51;
        }
        while ( v51 );
        v53 = __ROL8__(v45 ^ ((char *)v46 - (char *)v42), 17) ^ v45 ^ ((char *)v46 - (char *)v42);
        v26 = (v53 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v26;
        v43 = ((unsigned __int8)(v26 ^ v53) ^ (unsigned __int8)v43) & 0x3F;
        if ( !v43 )
          LOBYTE(v43) = 1;
        --v50;
      }
      while ( v50 );
      v3 = a2;
    }
    v54 = v47 & 0x7F;
    if ( (unsigned int)v54 >= 8 )
    {
      v55 = (unsigned __int64)(unsigned int)v54 >> 3;
      do
      {
        v49 = __ROL8__(*v46++ ^ v49, v43);
        v54 = (unsigned int)(v54 - 8);
        --v55;
      }
      while ( v55 );
    }
    if ( (_DWORD)v54 )
    {
      do
      {
        v56 = *(unsigned __int8 *)v46;
        v46 = (_QWORD *)((char *)v46 + 1);
        v49 = __ROL8__(v56 ^ v49, v43);
        v57 = (_DWORD)v54 == 1;
        v54 = (unsigned int)(v54 - 1);
      }
      while ( !v57 );
    }
    for ( i = v49; ; LODWORD(v49) = i ^ v49 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v59 = v49 & 0x7FFFFFFF;
    v60 = 0;
    if ( v59 != v34[5] )
    {
      if ( !*v34 )
        v60 = v34[6] != 0;
      v61 = (unsigned int)v34[4];
      v26 = *((_QWORD *)v34 + 1);
      if ( v34[4] && (*(_DWORD *)(v3 + 2012) & 0x40) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v63 = v26 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = (v26 + v61 - 1) | 0xFFF;
        v64 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v65 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v3 + 1104))(
                    v63,
                    0LL,
                    v54,
                    v46);
            if ( v65 == -1073741267 )
              break;
            if ( v65 < 0 )
            {
LABEL_99:
              __writecr8(CurrentIrql);
              goto LABEL_100;
            }
LABEL_85:
            v26 = 4096LL;
            v63 += 4096LL;
            v64 += 4096LL;
            if ( v64 == *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) )
            {
              __writecr8(CurrentIrql);
              goto LABEL_87;
            }
          }
          if ( v60 )
            goto LABEL_99;
          if ( CurrentIrql > 1u )
            goto LABEL_85;
          __writecr8(CurrentIrql);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_100:
      if ( !*(_DWORD *)(v3 + 1872) )
        *(_QWORD *)(*(_QWORD *)(v3 + 1352) + 24LL) = (unsigned int)v34[5] ^ (unsigned __int64)v59;
      v79 = *((_QWORD *)v34 + 1);
      if ( !*(_DWORD *)(v3 + 1872) )
      {
        *(_QWORD *)(v3 + 1880) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 1888) = (char *)v34 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v3 + 1896) = *v34;
        *(_QWORD *)(v3 + 1904) = v79;
        *(_DWORD *)(v3 + 1872) = 1;
      }
    }
LABEL_87:
    v24 = 64;
    v31 = *v2 + 1;
    *v2 = v31;
  }
  if ( *(_DWORD *)(v3 + 1872) )
  {
    v66 = *(_QWORD *)(v3 + 1896);
    v67 = *(_QWORD *)(v3 + 1904);
    v68 = *(_QWORD *)(v3 + 1888);
    v69 = *(_QWORD *)(v3 + 1880);
    *(_QWORD *)v2 = v66;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v67;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x38) = v68;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v69;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v3;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive
      || (unsigned __int64)(v2 + 8) > DpcStack
      || (unsigned __int64)(v2 + 8) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)CurrentThread->InitialStack;
    }
    if ( (*(_DWORD *)(v3 + 2008) & 0x8000000) == 0 )
    {
      v73 = __readcr0();
      __writecr0(v73 & 0xFFFFFFFFFFFEFFFFuLL);
      v74 = v3 + 2264;
      v75 = 0;
      v76 = v3 + 2264 + 16LL * *(unsigned int *)(v3 + 2256);
      v77 = (_QWORD *)v76;
      if ( *(_DWORD *)(v3 + 2260) )
      {
        do
        {
          *(_QWORD *)*v77 = v77[1];
          v78 = __readcr4();
          if ( (v78 & 0x20080) != 0 )
          {
            __writecr4(v78 ^ 0x80);
            __writecr4(v78);
          }
          else
          {
            v80 = __readcr3();
            __writecr3(v80);
          }
          v77 += 2;
          ++v75;
        }
        while ( v75 < *(_DWORD *)(v3 + 2260) );
        v66 = *(_QWORD *)v2;
      }
      if ( v74 < v76 )
      {
        do
        {
          v81 = *(unsigned int *)(v74 + 8);
          v82 = v77;
          v83 = *(char **)v74;
          v84 = v81;
          if ( (unsigned int)v81 >= 8 )
          {
            v85 = (unsigned __int64)(unsigned int)v81 >> 3;
            do
            {
              v84 -= 8;
              *(_QWORD *)v83 = *v82++;
              v83 += 8;
              --v85;
            }
            while ( v85 );
          }
          if ( v84 )
          {
            v86 = v83 - (char *)v82;
            do
            {
              *((_BYTE *)v82 + v86) = *(_BYTE *)v82;
              v82 = (_QWORD *)((char *)v82 + 1);
              --v84;
            }
            while ( v84 );
          }
          v77 = (_QWORD *)((char *)v77 + v81);
          v74 += 16LL;
        }
        while ( v74 < v76 );
        v66 = *(_QWORD *)v2;
        v67 = *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
        v68 = *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x38);
      }
      **(_BYTE **)(v3 + 520) = -61;
      __writecr0(v73);
      v69 = *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
    }
    if ( *(_DWORD *)(v3 + 1920) && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v87 = *(_DWORD *)(v3 + 1920);
    if ( v87 )
    {
      v88 = v87 - 1;
      if ( v88 )
      {
        v89 = v88 - 1;
        if ( v89 )
        {
          v90 = v89 - 1;
          if ( v90 )
          {
            v91 = v90 - 1;
            if ( v91 )
            {
              if ( v91 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(v3 + 2008) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v3 + 1392) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(v3 + 2008) >> 10) & 0x1F);
            }
            goto LABEL_149;
          }
          v92 = *(volatile signed __int32 **)(v3 + 1304);
        }
        else
        {
          v92 = *(volatile signed __int32 **)(v3 + 1296);
        }
      }
      else
      {
        v92 = *(volatile signed __int32 **)(v3 + 1280);
      }
      _interlockedbittestandset64(v92, 0LL);
    }
LABEL_149:
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    SdbpCheckDll(265, v69, v68, v67, v66, *(_QWORD *)(v3 + 328), DpcStack);
    JUMPOUT(0x1402B09D6LL);
  }
  v93 = v3 + *(unsigned int *)(v3 + 1616);
  if ( (*(_DWORD *)(v3 + 2008) & 0x10000000) != 0 )
  {
    v94 = __rdtsc();
    v95 = __ROR8__(v94, 3) ^ v94;
    v26 = (v95 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v26;
    v93 = (unsigned __int64)KiMachineCheckControl + 16 * (((unsigned __int8)v95 ^ (unsigned __int8)v26) & 0xF);
  }
  v96 = *(_QWORD **)(v3 + 2120);
  if ( v96 )
  {
    v97 = __rdtsc();
    v98 = (__ROR8__(v97, 3) ^ v97) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v107 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *((_QWORD *)&v98 + 1);
    *((_QWORD *)&v98 + 1) ^= v98;
    v96[3] = *((_QWORD *)&v98 + 1);
    *(_QWORD *)&v98 = v93 ^ *((_QWORD *)&v98 + 1);
    v26 = v3 ^ *((_QWORD *)&v98 + 1);
    v96[4] = v98;
    v96[2] = v26;
    _InterlockedOr(v106, 0);
    *(_QWORD *)(v3 + 1544) = *(_QWORD *)(v3 + 736);
    *(_QWORD *)(v3 + 1552) = v96;
  }
  else
  {
    *(_QWORD *)(v3 + 1544) = v93;
    *(_QWORD *)(v3 + 1552) = v3;
  }
  *(_QWORD *)(v3 + 1528) = 0LL;
  LOBYTE(v99) = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v3 + 600))(v3 + 1632, v26);
  (*(void (__fastcall **)(unsigned __int64, __int64))(v3 + 608))(v3 + 1632, v99);
  switch ( *(_DWORD *)(v3 + 1688) )
  {
    case 3:
      *(_QWORD *)(v3 + 2016) = KeGetCurrentThread();
      break;
    case 4:
      v104 = *(_QWORD *)(v3 + 2088);
      *(_QWORD *)(*(_QWORD *)(v104 + 56) ^ *(_QWORD *)(v104 + 64)) = *(_QWORD *)(v104 + 72) ^ v104 ^ *(_QWORD *)(v104 + 64);
      *(_QWORD *)(v104 + 72) = 0LL;
      *(_QWORD *)(v104 + 56) = 0LL;
      break;
    case 5:
      v100 = (char *)(v3 + 2024);
      v101 = (_QWORD *)(*(_QWORD *)(v3 + 2016) + 8LL);
      v102 = 8LL;
      do
      {
        v24 -= 8;
        *v101 = *(_QWORD *)v100;
        v100 += 8;
        ++v101;
        --v102;
      }
      while ( v102 );
      for ( ; v24; --v24 )
      {
        v103 = *v100++;
        *(_BYTE *)v101 = v103;
        v101 = (_QWORD *)((char *)v101 + 1);
      }
      break;
  }
  _InterlockedOr(v106, 0);
  return v3;
}
