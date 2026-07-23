/*
 * XREFs of sub_18001AC70 @ 0x18001AC70
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_180104C98 @ 0x180104C98 (sub_180104C98.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     sub_180012010 @ 0x180012010 (sub_180012010.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800286DC @ 0x1800286DC (sub_1800286DC.c)
 *     sub_1800289C0 @ 0x1800289C0 (sub_1800289C0.c)
 *     sub_18005FE60 @ 0x18005FE60 (sub_18005FE60.c)
 *     sub_180060A50 @ 0x180060A50 (sub_180060A50.c)
 *     sub_180070A54 @ 0x180070A54 (sub_180070A54.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     sub_180073AFC @ 0x180073AFC (sub_180073AFC.c)
 *     sub_18007E9DC @ 0x18007E9DC (sub_18007E9DC.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_180104F5C @ 0x180104F5C (sub_180104F5C.c)
 */

__int64 __fastcall sub_18001AC70(
        unsigned __int64 UniqueThread,
        _RTL_SRWLOCK *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  unsigned int v7; // ebp
  _RTL_SRWLOCK *v8; // r13
  int i; // r15d
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r11
  unsigned __int16 v16; // r10
  unsigned int v17; // r9d
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r8
  unsigned int v20; // r8d
  signed __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  struct _TEB *v25; // r14
  unsigned int v26; // r15d
  __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned __int16 HeapData_high; // ax
  __int64 v30; // rcx
  unsigned __int16 v31; // bp
  __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // rbp
  unsigned int v35; // r8d
  volatile signed __int64 *v36; // r14
  volatile signed __int64 *v37; // r11
  signed __int64 v38; // r10
  signed __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // ecx
  bool v43; // zf
  signed __int64 v44; // rax
  __int64 v45; // r14
  unsigned int v46; // ebp
  char v47; // cl
  int v48; // r9d
  __int64 v49; // r8
  __int64 v50; // r13
  signed __int16 *v51; // r15
  unsigned int v52; // r12d
  int v53; // edx
  int v54; // ebx
  signed __int16 v55; // dx
  signed __int16 v56; // ax
  unsigned int v57; // r13d
  int v58; // eax
  int v59; // r15d
  int v60; // edx
  unsigned int v61; // ebx
  unsigned __int64 v62; // rcx
  __int16 v63; // dx
  __int64 v64; // rbx
  volatile signed __int64 *v66; // rax
  unsigned __int64 v67; // rdx
  signed __int64 v68; // rax
  __int64 v69; // rdx
  signed __int64 v70; // rcx
  signed __int64 v71; // rdx
  signed __int64 v72; // rtt
  volatile signed __int64 *v73; // rcx
  signed __int64 v74; // rax
  __int64 v75; // rdx
  signed __int64 v76; // r8
  signed __int64 v77; // rdx
  signed __int64 v78; // rtt
  _RTL_SRWLOCK *v79; // rcx
  _RTL_SRWLOCK *v80; // rax
  _RTL_SRWLOCK *v81; // rbx
  int v82; // ecx
  _QWORD *v83; // rdx
  __int64 *v84; // rax
  __int64 v85; // r10
  _QWORD *v86; // r9
  __int64 v87; // rax
  __int64 v88; // r8
  _QWORD *v89; // rdx
  __int64 *v90; // rdx
  unsigned int v91; // eax
  char v92; // cl
  __int64 (__fastcall *v93)(__int64, __int64, unsigned int); // rax
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // eax
  _WORD *v98; // r8
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rdx
  __int16 v101; // ax
  __int64 v102; // r12
  signed __int64 v103; // rcx
  signed __int64 v104; // r8
  signed __int64 v105; // rtt
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  signed __int64 v109; // rtt
  unsigned __int64 v110; // rax
  signed __int64 v111; // rax
  volatile signed __int64 *v112; // rax
  _QWORD *v114; // rcx
  __int64 j; // rdx
  signed __int64 v116; // rbx
  signed __int64 v117; // rax
  unsigned __int64 v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // [rsp+20h] [rbp-C8h]
  int v122; // [rsp+30h] [rbp-B8h]
  int v123; // [rsp+34h] [rbp-B4h]
  int v124; // [rsp+38h] [rbp-B0h]
  unsigned __int16 v125; // [rsp+3Ah] [rbp-AEh]
  __int64 v126; // [rsp+40h] [rbp-A8h]
  int v127; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v128; // [rsp+4Ch] [rbp-9Ch]
  __int64 v129; // [rsp+50h] [rbp-98h]
  unsigned int v130; // [rsp+58h] [rbp-90h]
  int v131; // [rsp+5Ch] [rbp-8Ch]
  int v132; // [rsp+60h] [rbp-88h]
  __int64 v133; // [rsp+68h] [rbp-80h]
  unsigned __int64 v134; // [rsp+70h] [rbp-78h]
  unsigned __int64 v135; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 *v136; // [rsp+88h] [rbp-60h]
  __int64 v137; // [rsp+90h] [rbp-58h]
  unsigned __int64 v138; // [rsp+98h] [rbp-50h]
  int v139; // [rsp+A0h] [rbp-48h]
  signed __int32 v140[17]; // [rsp+A4h] [rbp-44h] BYREF
  unsigned __int64 v141; // [rsp+F0h] [rbp+8h]
  unsigned int v143; // [rsp+108h] [rbp+20h]

  v143 = a4;
  v141 = UniqueThread;
  v5 = 0LL;
  v7 = ((unsigned int)dword_18015A43C >> 2) & 1;
  v123 = 0;
  v8 = (_RTL_SRWLOCK *)UniqueThread;
  v126 = 0LL;
  for ( i = 0; ; i = 2 )
  {
    while ( 1 )
    {
      v10 = 1LL;
      v11 = 17LL;
      if ( v7 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(a3 + 56));
          v116 = *(_QWORD *)(a3 + 56);
          if ( (v116 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v117 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v116 - 1, v116);
              if ( v116 == v117 )
                break;
              v123 = 1;
              v116 = v117;
              if ( (v117 & 0xFFF) == 0 )
                goto LABEL_208;
            }
            v118 = v116 & 0xFFFFFFFFFFFFF000uLL;
            if ( v118 )
              break;
          }
LABEL_208:
          if ( i == 2 )
            goto LABEL_5;
          i = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
        }
        v5 = sub_180104F5C(v8, a3, v118, v143);
        if ( !v5 )
          sub_180018770(v8, v118, 0LL, a5);
        if ( i )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
        goto LABEL_59;
      }
      if ( !i )
      {
        i = 1;
        v127 = 0;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), 17LL, 0LL);
        if ( v12 )
        {
          while ( 1 )
          {
            v102 = (v12 >> 1) & 1;
            if ( (v12 & 1) != 0 && (v102 || (v12 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
            {
              if ( (unsigned __int8)sub_1800286DC(UniqueThread, v11, v10, a4, v121) )
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
              UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
              v138 = UniqueThread;
              LOBYTE(UniqueThread) = 0;
              v140[0] = 2;
              v137 = 0LL;
              if ( v102 )
              {
                v136 = 0LL;
                v139 = -1;
                UniqueThread = (unsigned __int8)v12;
                v135 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
                v11 = (unsigned __int64)&v135 | v12 & 8 | 7;
                LOBYTE(UniqueThread) = (v12 & 4) == 0;
              }
              else
              {
                v139 = -2;
                v136 = &v135;
                v11 = (unsigned __int64)&v135 + 3;
              }
              v111 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v11, v12);
              v43 = v12 == v111;
              v12 = v111;
              if ( !v43 )
                goto LABEL_178;
              if ( (_BYTE)UniqueThread )
                sub_180070A54(a3 + 16);
              if ( MEMORY[0x7FFE036A] > 1u )
              {
                UniqueThread = (unsigned int)dword_18015ADA0;
                if ( dword_18015ADA0 )
                {
                  do
                  {
                    if ( (v140[0] & 2) == 0 )
                      break;
                    _mm_pause();
                    v43 = (_DWORD)UniqueThread == 1;
                    UniqueThread = (unsigned int)(UniqueThread - 1);
                  }
                  while ( !v43 );
                }
              }
              if ( _interlockedbittestandreset(v140, 1u) )
              {
                do
                  ZwWaitForAlertByThreadId((PVOID)(a3 + 16), 0LL);
                while ( (v140[0] & 4) == 0 );
              }
            }
            else
            {
              v103 = (v12 | 1) + 16;
              if ( v102 )
                v103 = v12 | 1;
              v134 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v103, v12);
              if ( v12 == v134 )
              {
                v8 = (_RTL_SRWLOCK *)v141;
                break;
              }
LABEL_178:
              sub_1800289C0(&v127);
              _m_prefetchw((const void *)(a3 + 16));
              v12 = *(_QWORD *)(a3 + 16);
            }
          }
        }
      }
LABEL_5:
      v13 = (_QWORD *)(a3 + 8);
      if ( *(_QWORD *)(a3 + 8) )
        break;
      v79 = (_RTL_SRWLOCK *)(a3 + 16);
      if ( i == 2 )
        RtlReleaseSRWLockExclusive(v79);
      else
        RtlReleaseSRWLockShared(v79);
      v80 = a2;
      v81 = a2 + 3;
      if ( v81->Ptr == v81 )
        goto LABEL_98;
      RtlAcquireSRWLockExclusive(a2 + 2);
      if ( v81->Ptr == v81 )
        v64 = 0LL;
      else
        v64 = sub_180073AFC(a2, v81->Ptr, 2LL);
      RtlReleaseSRWLockExclusive(a2 + 2);
      if ( !v64 )
      {
        v80 = a2;
LABEL_98:
        v64 = sub_18001E320(v8, v80, a5);
        if ( !v64 )
          goto LABEL_60;
      }
      i = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
      UniqueThread = *(unsigned __int16 *)(v64 + 34);
      if ( *(_WORD *)(v64 + 32) == (_WORD)UniqueThread )
      {
        *(_QWORD *)(v64 + 16) = a3;
      }
      else
      {
        v110 = _InterlockedExchange64((volatile __int64 *)(v64 + 16), a3);
        if ( (v110 & 1) != 0 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 32), v110 >> 1);
      }
      if ( *v13 && *(_WORD *)(v64 + 32) == *(_WORD *)(v64 + 34) )
      {
        *(_QWORD *)(v64 + 16) = 0LL;
        v126 = v64;
      }
      else
      {
        v82 = *(unsigned __int8 *)(v64 + 38);
        if ( v82 == 2 )
        {
          UniqueThread = 0LL;
        }
        else
        {
          if ( !*(_BYTE *)(v64 + 38) )
          {
            UniqueThread = a3 + 24;
            v83 = (_QWORD *)(a3 + 8);
            goto LABEL_105;
          }
          UniqueThread = (unsigned int)(v82 - 1);
          if ( (_DWORD)UniqueThread )
            goto LABEL_114;
          UniqueThread = a3 + 40;
        }
        v83 = 0LL;
LABEL_105:
        v84 = (__int64 *)(a3 + 24);
        if ( UniqueThread )
        {
          v120 = *(_QWORD *)v64;
          if ( *(_QWORD *)(*(_QWORD *)v64 + 8LL) != v64
            || (UniqueThread = *(_QWORD *)(v64 + 8), *(_QWORD *)UniqueThread != v64) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)UniqueThread = v120;
          *(_QWORD *)(v120 + 8) = UniqueThread;
          if ( v83 )
            --*v83;
        }
        *(_BYTE *)(v64 + 38) = 0;
        if ( a3 != -24 )
        {
          UniqueThread = *(_QWORD *)(a3 + 32);
          if ( *(__int64 **)UniqueThread != v84 )
            __fastfail(3u);
          *(_QWORD *)v64 = v84;
          *(_QWORD *)(v64 + 8) = UniqueThread;
          *(_QWORD *)UniqueThread = v64;
          *(_QWORD *)(a3 + 32) = v64;
          if ( a3 != -8 )
            ++*v13;
          v64 = 0LL;
        }
        if ( (*(_BYTE *)a3 & 1) == 0 && *v13 > 8uLL )
        {
          v64 = *v84;
          if ( *(__int64 **)(*v84 + 8) != v84
            || (UniqueThread = *(_QWORD *)v64, *(_QWORD *)(*(_QWORD *)v64 + 8LL) != v64) )
          {
            __fastfail(3u);
          }
          *v84 = UniqueThread;
          *(_QWORD *)(UniqueThread + 8) = v84;
          --*v13;
          *(_BYTE *)(v64 + 38) = 2;
        }
        if ( v64 && *(_BYTE *)(v64 + 38) == 2 )
          *(_QWORD *)(v64 + 16) = 0LL;
LABEL_114:
        v126 = v64;
      }
    }
    v14 = *(_QWORD *)(a3 + 24);
    v15 = a3 + 24;
    v16 = 1;
    if ( v7 )
      v16 = 4096;
    if ( v14 != v15 )
    {
      while ( 2 )
      {
        LOWORD(v17) = *(_WORD *)(v14 + 32);
        v123 = 0;
        while ( 1 )
        {
          v18 = v16;
          if ( v16 >= (unsigned __int16)v17 )
            v18 = v17;
          if ( (unsigned __int16)v17 <= v18 && i == 1 )
            break;
          v19 = v17 - v18;
          v17 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v14 + 32), v17 - v18, v17);
          v20 = v18 + v19;
          if ( (unsigned __int16)v17 == v20 )
          {
            if ( *(_WORD *)(v14 + 32) )
              goto LABEL_15;
            v85 = v14;
            if ( *(_BYTE *)(v14 + 38) )
            {
              if ( *(_BYTE *)(v14 + 38) == 1 )
              {
                v15 = a3 + 40;
                v86 = 0LL;
              }
              else
              {
                if ( *(_BYTE *)(v14 + 38) != 2 )
                {
LABEL_15:
                  if ( v18 > 1u )
                    *(_QWORD *)(a3 + 56) = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v18 - 1)) & 0xFFF;
                  goto LABEL_17;
                }
                v15 = 0LL;
                v86 = 0LL;
              }
            }
            else
            {
              v86 = (_QWORD *)(a3 + 8);
            }
            v87 = a3 + 40;
            if ( v15 )
            {
              v88 = *(_QWORD *)v14;
              if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || (v89 = *(_QWORD **)(v14 + 8), *v89 != v14) )
                __fastfail(3u);
              *v89 = v88;
              *(_QWORD *)(v88 + 8) = v89;
              if ( v86 )
                --*v86;
            }
            *(_BYTE *)(v14 + 38) = 1;
            if ( a3 != -40 )
            {
              v90 = *(__int64 **)(a3 + 48);
              if ( *v90 != v87 )
                __fastfail(3u);
              *(_QWORD *)v14 = v87;
              v85 = 0LL;
              *(_QWORD *)(v14 + 8) = v90;
              *v90 = v14;
              *(_QWORD *)(a3 + 48) = v14;
            }
            if ( (*(_BYTE *)a3 & 1) == 0 && *v13 > 8uLL )
            {
              v85 = *(_QWORD *)v87;
              if ( *(_QWORD *)(*(_QWORD *)v87 + 8LL) != v87
                || (v119 = *(_QWORD *)v85, *(_QWORD *)(*(_QWORD *)v85 + 8LL) != v85) )
              {
                __fastfail(3u);
              }
              *(_QWORD *)v87 = v119;
              *(_QWORD *)(v119 + 8) = v87;
              --MEMORY[0];
              *(_BYTE *)(v85 + 38) = 2;
            }
            if ( v85 && *(_BYTE *)(v85 + 38) == 2 )
              *(_QWORD *)(v85 + 16) = 0LL;
            goto LABEL_15;
          }
          if ( v17 < v20 )
            v123 = 1;
        }
        v14 = *(_QWORD *)v14;
        if ( v14 != v15 )
          continue;
        break;
      }
    }
    v14 = 0LL;
LABEL_17:
    if ( i == 2 )
    {
      v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), 0LL, 1LL);
      if ( v68 == 1 )
        goto LABEL_19;
      do
      {
        v69 = 3LL;
        v70 = v68 & 6;
        if ( v70 != 2 )
          v69 = -1LL;
        v71 = v68 + v69;
        v72 = v68;
        v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v71, v68);
      }
      while ( v72 != v68 );
      goto LABEL_86;
    }
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), 0LL, 17LL);
    if ( v21 == 17 )
      goto LABEL_19;
    if ( (v21 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( (v21 & 2) != 0 )
    {
LABEL_161:
      if ( (v21 & 8) != 0 )
      {
        v114 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( j = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v114[1] )
          v114 = (_QWORD *)*v114;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
          goto LABEL_19;
        v106 = -9LL;
        v107 = -5LL;
      }
      else
      {
        v106 = -1LL;
        v107 = 3LL;
      }
      do
      {
        v108 = v107;
        v70 = v21 & 6;
        if ( v70 != 2 )
          v108 = v106;
        v71 = v21 + v108;
        v109 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v71, v21);
      }
      while ( v109 != v21 );
LABEL_86:
      if ( v70 == 2 )
        sub_180070AAC(a3 + 16, v71, 0LL);
      goto LABEL_19;
    }
    while ( 1 )
    {
      v104 = 0LL;
      if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v104 = v21 - 16;
      v105 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v104, v21);
      if ( v105 == v21 )
        break;
      if ( (v21 & 2) != 0 )
        goto LABEL_161;
    }
LABEL_19:
    if ( v14 )
      break;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
  }
  v22 = v14 + 48;
  v23 = 2 * (unsigned int)*(unsigned __int16 *)(v14 + 34);
  v24 = *(unsigned __int8 *)(a3 + 1);
  v25 = NtCurrentTeb();
  v26 = byte_180123370[v24];
  v27 = 3LL;
  v128 = (unsigned int)v14 >> 12;
  v28 = qword_18015A448 ^ *(_DWORD *)(v14 + 40) ^ ((unsigned int)v14 >> 12);
  v125 = HIWORD(v28);
  if ( v143 >= (unsigned __int16)(qword_18015A448 ^ *(_WORD *)(v14 + 40) ^ ((unsigned int)v14 >> 12)) )
    v27 = 1LL;
  HeapData_high = HIWORD(v25->HeapData);
  v129 = v27;
  v30 = HeapData_high;
  v31 = (unsigned __int8)HeapData_high;
  if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
  {
    LOWORD(v30) = HIBYTE(HeapData_high);
    v101 = sub_18001EBF0(v30, 255LL);
    v32 = (v101 << 8) | (unsigned __int8)(v101 + 1);
  }
  else
  {
    v32 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
  }
  HIWORD(v25->HeapData) = v32;
  v33 = v31;
  v34 = v129;
  v35 = byte_18015A460[v33];
  v36 = (volatile signed __int64 *)(v22
                                  + 8 * ((unsigned __int64)(2 * (unsigned int)*(unsigned __int16 *)(v14 + 36)) >> 6));
  v37 = (volatile signed __int64 *)(v22 + 8 * ((v23 - 1) >> 6));
LABEL_25:
  if ( v23 < 0x40 )
  {
    v38 = *v36;
    if ( (unsigned int)v23 < v26 )
      v26 = v23;
  }
  else
  {
    while ( 1 )
    {
      v38 = *v36;
      if ( (*v36 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v66 = v36++;
      if ( v66 == v37 )
        v36 = (volatile signed __int64 *)(v14 + 48);
    }
    if ( v36 == v37 && (v23 & 0x3F) != 0 && (v23 & 0x3F) < v26 )
      v26 = v23 & 0x3F;
  }
  v35 = ((v26 * v35) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v39 = ~v38;
    if ( v26 < 0x40 )
    {
      _BitScanForward64(&v67, v39 & 0x5555555555555555LL);
      v35 += v67;
      v40 = (((1LL << v26) - 1) << v67) & 0x5555555555555555LL;
    }
    else
    {
      v40 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v41, __ROR8__(v40 & v39, v35));
    v42 = ((_BYTE)v35 + (_BYTE)v41) & 0x3F;
    v132 = v42;
    v44 = _InterlockedCompareExchange64(v36, v38 | (v34 << v42), v38);
    v43 = v38 == v44;
    v38 = v44;
    if ( v43 )
      break;
    if ( (v44 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v112 = v36 + 1;
      v36 = (volatile signed __int64 *)(v14 + 48);
      if ( v112 <= v37 )
        v36 = v112;
      goto LABEL_25;
    }
  }
  v28 = (unsigned __int16)v28;
  v45 = (v42 + ((unsigned int)(((__int64)v36 - v22) >> 3) << 6)) >> 1;
  v129 = v45;
  *(_WORD *)(v14 + 36) = v45;
  v130 = (unsigned __int16)v28;
  v46 = v125 + v45 * (unsigned __int16)v28;
  if ( *(_BYTE *)(v14 + 45) <= 1u )
    goto LABEL_54;
  v47 = *(_BYTE *)(v14 + 44);
  v48 = 0;
  v49 = v46 >> v47;
  v124 = 0;
  v50 = 2 * v49;
  v51 = (signed __int16 *)(2 * v49 + v14 + *(unsigned __int16 *)(v14 + 46));
  _m_prefetchw(v51);
  v52 = -1;
  v53 = *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int16)v128;
  LODWORD(v133) = 0;
  v122 = 0;
  v131 = (unsigned __int16)qword_18015A448 ^ v53;
  v134 = (unsigned __int64)&v51[((v131 + v46 - 1) >> v47) - (unsigned int)v49 + 1];
  if ( (unsigned __int64)v51 < v134 )
  {
    v54 = 0;
    do
    {
      while ( 1 )
      {
        v55 = *v51;
        while ( v55 > 0 )
        {
          v56 = _InterlockedCompareExchange16(v51, v55 + 1, v55);
          v43 = v55 == v56;
          v55 = v56;
          if ( v43 )
            goto LABEL_38;
        }
        if ( v48 )
          break;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v14 + 24));
        v48 = 1;
      }
      if ( v55 == -1 )
      {
        v133 = v50 >> 1;
        v91 = v50 >> 1;
        if ( v52 != -1 )
          v91 = v52;
        *v51 = 0;
        v52 = v91;
      }
      else
      {
        ++v54;
        *v51 = v55 + 1;
      }
LABEL_38:
      ++v51;
      v50 += 2LL;
    }
    while ( (unsigned __int64)v51 < v134 );
    LODWORD(v45) = v129;
    v122 = v54;
    v28 = v130;
  }
  if ( v52 == -1 )
    v57 = v132;
  else
    v57 = v133 - v52 + 1;
  v58 = 0;
  if ( v52 == -1 )
    v58 = v48;
  if ( v58 )
  {
    v73 = (volatile signed __int64 *)(v14 + 24);
    v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), 0LL, 1LL);
    if ( v74 != 1 )
    {
      do
      {
        v75 = 3LL;
        v76 = v74 & 6;
        if ( v76 != 2 )
          v75 = -1LL;
        v77 = v74 + v75;
        v78 = v74;
        v74 = _InterlockedCompareExchange64(v73, v77, v74);
      }
      while ( v78 != v74 );
      if ( v76 == 2 )
        sub_180070AAC(v73, v77, 0LL);
    }
  }
  if ( v52 == -1 )
  {
    v59 = 0;
    v60 = 0;
  }
  else
  {
    v92 = *(_BYTE *)(v14 + 44);
    v124 = 1;
    v93 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(v141 ^ qword_18015A440 ^ *(_QWORD *)(v141 + 24));
    v94 = v57 << v92;
    v95 = v14 + (v52 << v92);
    v96 = *(_QWORD *)v141;
    v97 = v93 == sub_180012010 ? sub_180012010(v96, v95, v94) : v93(v96, v95, v94);
    v59 = v97;
    if ( v97 < 0 )
    {
      v60 = 1;
    }
    else
    {
      v98 = (_WORD *)(v14 + *(unsigned __int16 *)(v14 + 46) + 2LL * v52);
      v99 = v57;
      v100 = 0LL;
      if ( v98 > &v98[v57] )
        v99 = 0LL;
      if ( v99 )
      {
        do
        {
          if ( !*v98 )
            *v98 = 1;
          ++v98;
          ++v100;
        }
        while ( v100 < v99 );
        LODWORD(v45) = v129;
      }
      v60 = 0;
      v59 = 0;
    }
  }
  if ( v122 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(v141 + 72) + 24LL),
      -(__int64)((unsigned __int64)(unsigned int)(v122 << *(_BYTE *)(v14 + 44)) >> 12));
  if ( v60 )
    sub_180060A50(v14, v46, v131, 2, 0LL);
  if ( v124 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v14 + 24));
  if ( v59 < 0 )
  {
    if ( (_DWORD)v45 != -1 )
      _InterlockedAnd64(
        (volatile signed __int64 *)(v14 + 8 * ((unsigned __int64)(unsigned int)(2 * v45) >> 6) + 48),
        ~(3LL << ((2 * v45) & 0x3F)));
  }
  else
  {
LABEL_54:
    v5 = v14 + v46;
    if ( v143 < v28 )
    {
      v61 = v28 - v143;
      v62 = (unsigned __int16)qword_18015A448 ^ *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int64)(unsigned __int16)v128;
      *(_BYTE *)(v62 + v5 - 1) = 0;
      v63 = *(_WORD *)(v62 + v5 - 2);
      if ( v61 == 1 )
        *(_WORD *)(v62 + v5 - 2) = v63 | 0x8000;
      else
        *(_WORD *)(v62 + v5 - 2) = v63 ^ (v61 ^ v63) & 0x3FFF;
    }
  }
  v8 = (_RTL_SRWLOCK *)v141;
  if ( !v5 )
    sub_180018770((_RTL_SRWLOCK *)v141, v14, 0LL, a5);
LABEL_59:
  v64 = v126;
LABEL_60:
  if ( v123 )
    sub_18007E9DC(v8, a2);
  if ( v64 )
    sub_18005FE60(v8, a2, v64, a5);
  return v5;
}
