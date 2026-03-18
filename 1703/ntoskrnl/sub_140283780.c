/*
 * XREFs of sub_140283780 @ 0x140283780
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x140177544 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     SdbpCheckDll @ 0x140284310 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140284430 (KeGuardCheckICall.c)
 */

unsigned __int64 __fastcall sub_140283780(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v2; // rbp
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // esi
  _QWORD *v11; // r9
  int v12; // r10d
  const char *v13; // rax
  __int64 v14; // r11
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // r11
  int v24; // r12d
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
  int v36; // eax
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // r11
  unsigned __int64 v40; // r15
  int v41; // eax
  _QWORD *v42; // r9
  __int64 v43; // r8
  int v44; // r14d
  const char *v45; // rax
  unsigned __int64 v46; // rsi
  unsigned int v47; // r10d
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rcx
  unsigned int v51; // r8d
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 i; // rax
  unsigned int v55; // esi
  bool v56; // r15
  __int64 v57; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v59; // r8
  unsigned __int64 v60; // r12
  __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned __int64 v63; // r13
  int v64; // eax
  __int64 v65; // r13
  __int64 v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // r12
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 DpcStack; // r14
  unsigned __int64 v72; // r12
  unsigned __int64 v73; // r8
  unsigned int v74; // r10d
  unsigned __int64 v75; // r9
  _QWORD *v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  __int64 v80; // rsi
  _QWORD *v81; // rcx
  char *v82; // r10
  int v83; // r11d
  unsigned __int64 v84; // rbx
  signed __int64 v85; // r10
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  volatile signed __int32 *v91; // rax
  unsigned __int64 v92; // r8
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  _QWORD *v95; // r9
  unsigned __int64 v96; // rax
  unsigned __int128 v97; // rax
  __int64 v98; // rdx
  char *v99; // rdx
  _QWORD *v100; // rcx
  __int64 v101; // r8
  char v102; // al
  unsigned __int64 v103; // rdx
  signed __int32 v105[8]; // [rsp+200h] [rbp+200h] BYREF
  _BYTE v106[512]; // [rsp+2C0h] [rbp+2C0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL);
  v3 = a2;
  if ( (*(_DWORD *)(a2 + 1864) & 0x110000) != 0x110000 )
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
    v7 = *(_OWORD *)(v3 + 1600);
    *(_WORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x30) = 304;
    v8 = *(_OWORD *)(v3 + 1616);
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x32) = ((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL)
                                                                         + 128;
    *(_OWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v7;
    *(_WORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x90) = v3 + 1648;
    v9 = *(_OWORD *)(v3 + 1632);
    *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x98) = (v3 + 1648) >> 32;
    *(_OWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0xA0) = v8;
    *(_WORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x96) = (unsigned int)(v3 + 1648) >> 16;
    *(_OWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x1A0) = v9;
    _disable();
    if ( *(int *)(v3 + 1864) >= 0 )
    {
      __sidt(v2 + 18);
      __lidt(v2 + 12);
      __writedr(7u, 0LL);
      __lidt(v2 + 18);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  *(_DWORD *)(v3 + 1576) += 1400;
  v10 = *(_DWORD *)(v3 + 196);
  v11 = (_QWORD *)v3;
  v12 = *(_DWORD *)(v3 + 1556);
  v13 = (const char *)v3;
  v14 = *(_QWORD *)(v3 + 1560);
  *(_DWORD *)(v3 + 196) = 0;
  if ( v3 < v3 + 1400 )
  {
    do
    {
      _mm_prefetch(v13, 0);
      v13 += 64;
    }
    while ( (unsigned __int64)v13 < v3 + 1400 );
  }
  v15 = v14;
  v16 = 10;
  do
  {
    v17 = 8LL;
    do
    {
      v18 = v15 ^ *v11;
      v19 = v11[1];
      v11 += 2;
      v15 = __ROL8__(__ROL8__(v18, v12) ^ v19, v12);
      --v17;
    }
    while ( v17 );
    v20 = __ROL8__(v14 ^ ((unsigned __int64)v11 - v3), 17) ^ v14 ^ ((unsigned __int64)v11 - v3);
    v21 = (v20 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x58) = v21;
    v12 = ((unsigned __int8)(v21 ^ v20) ^ (unsigned __int8)v12) & 0x3F;
    if ( !v12 )
      LOBYTE(v12) = 1;
    --v16;
  }
  while ( v16 );
  v22 = 120;
  v23 = 15LL;
  v24 = 64;
  do
  {
    v15 = __ROL8__(*v11++ ^ v15, v12);
    v22 -= 8;
    --v23;
  }
  while ( v23 );
  for ( ; v22; --v22 )
  {
    v25 = *(unsigned __int8 *)v11;
    v11 = (_QWORD *)((char *)v11 + 1);
    v15 = __ROL8__(v25 ^ v15, v12);
  }
  v26 = 0xA3A03F5891C8B4E8uLL;
  *(_DWORD *)(v3 + 196) = v10;
  if ( *(_QWORD *)(v3 + 2000) != v15 )
  {
    v27 = *(_QWORD *)(v3 + 1296);
    v28 = *(_DWORD *)(v3 + 1508);
    *(_QWORD *)v27 = v3;
    *(_DWORD *)(v27 + 16) = v28;
    if ( !*(_DWORD *)(v3 + 1728) )
    {
      *(_QWORD *)(*(_QWORD *)(v3 + 1296) + 24LL) = *(_QWORD *)(v3 + 2000) ^ v15;
      if ( !*(_DWORD *)(v3 + 1728) )
      {
        *(_QWORD *)(v3 + 1744) = 0LL;
        *(_QWORD *)(v3 + 1736) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 1752) = 265LL;
        *(_QWORD *)(v3 + 1760) = v15;
        *(_DWORD *)(v3 + 1728) = 1;
      }
    }
  }
  *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 0LL;
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
  while ( v31 < *(_DWORD *)(v3 + 1504) )
  {
    v32 = v3;
    v33 = 0;
    if ( *(_QWORD *)(v3 + 2024) )
      v32 = *(_QWORD *)(v3 + 2024);
    v34 = (int *)(v32 + *(unsigned int *)(v32 + 1544));
    if ( *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 8)
      && *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0xC) <= v31 )
    {
      v33 = *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0xC);
      v34 = (int *)(v32 + *(unsigned int *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x10));
    }
    if ( v33 != v31 )
    {
      v35 = v31 - v33;
      v33 = v31;
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 == 1 )
        {
LABEL_52:
          v26 = (unsigned int)v34[4] / 0xCuLL;
          v37 = (unsigned int)(4 * v26 + 48);
          goto LABEL_53;
        }
        if ( v36 == 7 )
        {
          v37 = (unsigned int)(24 * (v34[6] + 2));
          goto LABEL_53;
        }
        if ( v36 == 8 )
          break;
        if ( v36 != 10 )
        {
          if ( v36 == 12 )
            goto LABEL_52;
          if ( v36 != 28 )
          {
            if ( v36 == 30 )
            {
              v26 = ((v34[9] - 1) / 0xCu + 7) & 0xFFFFFFF8;
              v37 = (unsigned int)v26 + 24 * (*((unsigned __int16 *)v34 + 20) + 2);
            }
            else if ( (unsigned int)(v36 - 33) > 1 )
            {
              v37 = 48LL;
            }
            else
            {
              v26 = ((v34[8] & 0xFFF) + (unsigned __int64)(unsigned int)v34[10] + 4095) >> 12;
              v37 = (unsigned int)(20 * v26 + 48);
            }
            goto LABEL_53;
          }
          v38 = *((unsigned __int16 *)v34 + 20);
          goto LABEL_50;
        }
        v37 = (unsigned int)(16 * (v34[7] + 3));
LABEL_53:
        v34 = (int *)((char *)v34 + v37);
        if ( !--v35 )
        {
          v3 = a2;
          goto LABEL_55;
        }
      }
      v38 = *((unsigned __int16 *)v34 + 16);
LABEL_50:
      v37 = (v38 + 55) & 0xFFFFFFF8;
      goto LABEL_53;
    }
LABEL_55:
    v39 = (_QWORD *)*((_QWORD *)v34 + 1);
    v40 = *(_QWORD *)(v3 + 1560);
    v41 = (_DWORD)v34 - v32;
    *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0xC) = v33;
    v42 = v39;
    v43 = (unsigned int)v34[4];
    *(_DWORD *)(v3 + 1576) += v43;
    *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 8) = 1;
    v44 = *(_DWORD *)(v3 + 1556);
    *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = v41;
    v45 = (const char *)v39;
    if ( v39 < (_QWORD *)((char *)v39 + v43) )
    {
      do
      {
        _mm_prefetch(v45, 0);
        v45 += 64;
      }
      while ( v45 < (const char *)v39 + v43 );
    }
    v46 = v40;
    v47 = (unsigned int)v43 >> 7;
    if ( (unsigned int)v43 >> 7 )
    {
      do
      {
        v48 = 8LL;
        do
        {
          v49 = v42[1] ^ __ROL8__(*v42 ^ v46, v44);
          v42 += 2;
          v46 = __ROL8__(v49, v44);
          --v48;
        }
        while ( v48 );
        v50 = __ROL8__(v40 ^ ((char *)v42 - (char *)v39), 17) ^ v40 ^ ((char *)v42 - (char *)v39);
        v26 = (v50 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x60) = v26;
        v44 = ((unsigned __int8)(v26 ^ v50) ^ (unsigned __int8)v44) & 0x3F;
        if ( !v44 )
          LOBYTE(v44) = 1;
        --v47;
      }
      while ( v47 );
      v3 = a2;
      LOBYTE(v24) = 64;
    }
    v51 = v43 & 0x7F;
    if ( v51 >= 8 )
    {
      v52 = (unsigned __int64)v51 >> 3;
      do
      {
        v46 = __ROL8__(*v42++ ^ v46, v44);
        v51 -= 8;
        --v52;
      }
      while ( v52 );
    }
    for ( ; v51; --v51 )
    {
      v53 = *(unsigned __int8 *)v42;
      v42 = (_QWORD *)((char *)v42 + 1);
      v46 = __ROL8__(v53 ^ v46, v44);
    }
    for ( i = v46; ; LODWORD(v46) = i ^ v46 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v55 = v46 & 0x7FFFFFFF;
    v56 = 0;
    if ( v55 != v34[5] )
    {
      if ( !*v34 )
        v56 = v34[6] != 0;
      v57 = (unsigned int)v34[4];
      v26 = *((_QWORD *)v34 + 1);
      if ( v34[4] && ((unsigned __int8)*(_DWORD *)(v3 + 1868) & (unsigned __int8)v24) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v59 = 2LL;
        __writecr8(2uLL);
        v60 = v26 & 0xFFFFFFFFFFFFF000uLL;
        v61 = (v26 + v57 - 1) | 0xFFF;
        v62 = 0;
        *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v61;
        v63 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 1;
        for ( *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0;
              ;
              v62 = *(_DWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) )
        {
          v64 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v3 + 1080))(v60, v62, v59, v42);
          if ( v64 == -1073741267 )
          {
            if ( v56 )
              goto LABEL_98;
            if ( CurrentIrql <= 1u )
            {
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              continue;
            }
          }
          else if ( v64 < 0 )
          {
LABEL_98:
            __writecr8(CurrentIrql);
            break;
          }
          v26 = 4096LL;
          v60 += 4096LL;
          v63 += 4096LL;
          if ( v63 == *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) )
          {
            __writecr8(CurrentIrql);
            goto LABEL_86;
          }
        }
      }
      if ( !*(_DWORD *)(v3 + 1728) )
        *(_QWORD *)(*(_QWORD *)(v3 + 1296) + 24LL) = (unsigned int)v34[5] ^ (unsigned __int64)v55;
      v78 = *((_QWORD *)v34 + 1);
      if ( !*(_DWORD *)(v3 + 1728) )
      {
        *(_QWORD *)(v3 + 1736) = v3 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v3 + 1744) = (char *)v34 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v3 + 1752) = *v34;
        *(_QWORD *)(v3 + 1760) = v78;
        *(_DWORD *)(v3 + 1728) = 1;
      }
    }
LABEL_86:
    v24 = 64;
    v31 = *v2 + 1;
    *v2 = v31;
  }
  if ( *(_DWORD *)(v3 + 1728) )
  {
    v65 = *(_QWORD *)(v3 + 1752);
    v66 = *(_QWORD *)(v3 + 1760);
    v67 = *(_QWORD *)(v3 + 1744);
    v68 = *(_QWORD *)(v3 + 1736);
    *(_QWORD *)v2 = v65;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x20) = v66;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = v67;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x40) = v68;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x28) = v3;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = KeGetCurrentThread();
    DpcStack = (unsigned __int64)CurrentPrcb->DpcStack;
    if ( !CurrentPrcb->DpcRoutineActive
      || (unsigned __int64)(v2 + 10) > DpcStack
      || (unsigned __int64)(v2 + 10) < DpcStack - 24576 )
    {
      DpcStack = (unsigned __int64)CurrentThread->InitialStack;
    }
    if ( (*(_DWORD *)(v3 + 1864) & 0x8000000) == 0 )
    {
      v72 = __readcr0();
      __writecr0(v72 & 0xFFFFFFFFFFFEFFFFuLL);
      v73 = v3 + 2072;
      v74 = 0;
      v75 = v3 + 2072 + 16LL * *(unsigned int *)(v3 + 2064);
      v76 = (_QWORD *)v75;
      if ( *(_DWORD *)(v3 + 2068) )
      {
        do
        {
          *(_QWORD *)*v76 = v76[1];
          v77 = __readcr4();
          if ( (v77 & 0x20080) != 0 )
          {
            __writecr4(v77 ^ 0x80);
            __writecr4(v77);
          }
          else
          {
            v79 = __readcr3();
            __writecr3(v79);
          }
          v76 += 2;
          ++v74;
        }
        while ( v74 < *(_DWORD *)(v3 + 2068) );
        v65 = *(_QWORD *)v2;
      }
      if ( v73 < v75 )
      {
        do
        {
          v80 = *(unsigned int *)(v73 + 8);
          v81 = v76;
          v82 = *(char **)v73;
          v83 = v80;
          if ( (unsigned int)v80 >= 8 )
          {
            v84 = (unsigned __int64)(unsigned int)v80 >> 3;
            do
            {
              v83 -= 8;
              *(_QWORD *)v82 = *v81++;
              v82 += 8;
              --v84;
            }
            while ( v84 );
          }
          if ( v83 )
          {
            v85 = v82 - (char *)v81;
            do
            {
              *((_BYTE *)v81 + v85) = *(_BYTE *)v81;
              v81 = (_QWORD *)((char *)v81 + 1);
              --v83;
            }
            while ( v83 );
          }
          v76 = (_QWORD *)((char *)v76 + v80);
          v73 += 16LL;
        }
        while ( v73 < v75 );
        v65 = *(_QWORD *)v2;
        v66 = *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x20);
        v67 = *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x18);
      }
      **(_BYTE **)(v3 + 536) = -61;
      __writecr0(v72);
      v68 = *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x40);
    }
    if ( *(_DWORD *)(v3 + 1776) && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v86 = *(_DWORD *)(v3 + 1776);
    if ( v86 )
    {
      v87 = v86 - 1;
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
              if ( v90 == 1 )
                _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*(_DWORD *)(v3 + 1864) >> 10) & 0x1F);
              else
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v3 + 1336) + 832LL), 1uLL);
            }
            else
            {
              _interlockedbittestandset(
                &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                (*(_DWORD *)(v3 + 1864) >> 10) & 0x1F);
            }
            goto LABEL_148;
          }
          v91 = *(volatile signed __int32 **)(v3 + 1248);
        }
        else
        {
          v91 = *(volatile signed __int32 **)(v3 + 1240);
        }
      }
      else
      {
        v91 = *(volatile signed __int32 **)(v3 + 1224);
      }
      _interlockedbittestandset64(v91, 0LL);
    }
LABEL_148:
    CurrentThread[1].InitialStack = 0LL;
    CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
    SdbpCheckDll(265, v68, v67, v66, v65, *(_QWORD *)(v3 + 344), DpcStack);
    JUMPOUT(0x140284251LL);
  }
  v92 = v3 + *(unsigned int *)(v3 + 1520);
  if ( (*(_DWORD *)(v3 + 1864) & 0x10000000) != 0 )
  {
    v93 = __rdtsc();
    v94 = __ROR8__(v93, 3) ^ v93;
    v26 = (v94 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x68) = v26;
    v92 = (unsigned __int64)KiMachineCheckControl + 16 * (((unsigned __int8)v94 ^ (unsigned __int8)v26) & 0xF);
  }
  v95 = *(_QWORD **)(v3 + 1976);
  if ( v95 )
  {
    v96 = __rdtsc();
    v97 = (__ROR8__(v96, 3) ^ v96) * (unsigned __int128)0x7010008004002001uLL;
    *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFFF80uLL) + 0x70) = *((_QWORD *)&v97 + 1);
    *((_QWORD *)&v97 + 1) ^= v97;
    v95[3] = *((_QWORD *)&v97 + 1);
    *(_QWORD *)&v97 = v92 ^ *((_QWORD *)&v97 + 1);
    v26 = v3 ^ *((_QWORD *)&v97 + 1);
    v95[4] = v97;
    v95[2] = v26;
    _InterlockedOr(v105, 0);
    *(_QWORD *)(v3 + 1448) = *(_QWORD *)(v3 + 744);
    *(_QWORD *)(v3 + 1456) = v95;
  }
  else
  {
    *(_QWORD *)(v3 + 1448) = v92;
    *(_QWORD *)(v3 + 1456) = v3;
  }
  *(_QWORD *)(v3 + 1432) = 0LL;
  LOBYTE(v98) = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(v3 + 608))(v3 + 1536, v26);
  (*(void (__fastcall **)(unsigned __int64, __int64))(v3 + 616))(v3 + 1536, v98);
  switch ( *(_DWORD *)(v3 + 1592) )
  {
    case 3:
      *(_QWORD *)(v3 + 1872) = KeGetCurrentThread();
      break;
    case 4:
      v103 = *(_QWORD *)(v3 + 1944);
      *(_QWORD *)(*(_QWORD *)(v103 + 56) ^ *(_QWORD *)(v103 + 64)) = *(_QWORD *)(v103 + 72) ^ v103 ^ *(_QWORD *)(v103 + 64);
      *(_QWORD *)(v103 + 72) = 0LL;
      *(_QWORD *)(v103 + 56) = 0LL;
      break;
    case 5:
      v99 = (char *)(v3 + 1880);
      v100 = (_QWORD *)(*(_QWORD *)(v3 + 1872) + 8LL);
      v101 = 8LL;
      do
      {
        v24 -= 8;
        *v100 = *(_QWORD *)v99;
        v99 += 8;
        ++v100;
        --v101;
      }
      while ( v101 );
      for ( ; v24; --v24 )
      {
        v102 = *v99++;
        *(_BYTE *)v100 = v102;
        v100 = (_QWORD *)((char *)v100 + 1);
      }
      break;
  }
  _InterlockedOr(v105, 0);
  return v3;
}
