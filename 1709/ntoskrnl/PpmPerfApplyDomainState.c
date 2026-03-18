/*
 * XREFs of PpmPerfApplyDomainState @ 0x140113190
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14008F7B0 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     PpmEventDomainPerfStateChange @ 0x14015A7B4 (PpmEventDomainPerfStateChange.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r13d
  unsigned int v3; // r12d
  __int64 v4; // rdi
  __int64 *v5; // r15
  unsigned __int64 v6; // r14
  unsigned int v7; // eax
  char v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // r9
  int v18; // r10d
  unsigned int v19; // r14d
  int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // r15d
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // r12d
  unsigned int v41; // r8d
  char v42; // di
  int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ebx
  int v46; // eax
  char v47; // al
  char v48; // r8
  char v49; // r14
  bool v50; // zf
  int v51; // eax
  __int16 v53; // [rsp+58h] [rbp-B0h]
  unsigned int v54; // [rsp+5Ch] [rbp-ACh]
  unsigned int v55; // [rsp+60h] [rbp-A8h]
  unsigned int v56; // [rsp+64h] [rbp-A4h]
  unsigned int v57; // [rsp+68h] [rbp-A0h]
  unsigned int v58; // [rsp+6Ch] [rbp-9Ch]
  __int64 v60; // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+80h] [rbp-88h]
  __int64 v63; // [rsp+88h] [rbp-80h]
  __int64 v64; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v65[6]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v66[176]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v67[176]; // [rsp+178h] [rbp+70h] BYREF

  v1 = a1;
  v53 = 0;
  v2 = 100;
  v3 = *(_DWORD *)(a1 + 328);
  v63 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 8LL);
  v55 = 0;
  v62 = PpmCurrentProfile + 2688LL * dword_1403661AC;
  v54 = *(_DWORD *)(a1 + 320);
  v57 = v3;
  if ( !PpmPerfArtificialDomainEnabled
    || (KeAndAffinityEx((unsigned __int16 *)(a1 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v66),
        (unsigned int)KeIsEqualAffinityEx(v1 + 24, v66))
    || *(_BYTE *)(v1 + 207) )
  {
    v5 = *(__int64 **)v1;
    v4 = v1;
  }
  else
  {
    v4 = PpmPerfDomainHead;
    v5 = &PpmPerfDomainHead;
  }
  while ( (__int64 *)v4 != v5 )
  {
    LODWORD(v6) = *(_DWORD *)(v4 + 364);
    if ( v4 != v1 )
    {
      if ( *(_BYTE *)(v4 + 207) )
        goto LABEL_35;
      KeAndAffinityEx((unsigned __int16 *)(v4 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v67);
      if ( (unsigned int)KeIsEqualAffinityEx(v4 + 24, v67)
        || *(_QWORD *)(*(_QWORD *)(v1 + 16) + 192LL) != *(_QWORD *)(*(_QWORD *)(v4 + 16) + 192LL)
        || *(_BYTE *)(v1 + 204) != *(_BYTE *)(v4 + 204) )
      {
        goto LABEL_35;
      }
      if ( *(_BYTE *)(v1 + 205) != *(_BYTE *)(v4 + 205) )
      {
        v6 = ((*(_QWORD *)(v4 + 344) >> 1) + *(_QWORD *)(v4 + 344) * (unsigned __int64)(unsigned int)v6)
           / *(_QWORD *)(v1 + 344);
        if ( (unsigned int)v6 > *(_DWORD *)(v1 + 320) )
          LODWORD(v6) = *(_DWORD *)(v1 + 320);
      }
    }
    v7 = v55;
    v8 = 0;
    if ( (unsigned int)v6 > v55 )
      v7 = v6;
    v55 = v7;
    v9 = *(_DWORD *)(v4 + 200);
    if ( v9 )
    {
      v10 = v9;
      v11 = (unsigned int *)(*(_QWORD *)(v4 + 208) + 24LL);
      v12 = v54;
      do
      {
        v13 = v11[6];
        if ( v11[1] < v13 )
          v13 = v11[1];
        if ( *(_BYTE *)(v4 + 354) && v13 >= *v11 )
          v13 = *v11;
        if ( v13 < 0x64 && v12 > v13 )
        {
          v8 = 1;
          v12 = v13;
        }
        if ( v13 >= *v11 )
          v13 = *v11;
        if ( v2 > v13 )
          v2 = v13;
        if ( v3 < v11[7] )
          v3 = v11[7];
        v11 += 32;
        --v10;
      }
      while ( v10 );
      v54 = v12;
      v1 = a1;
      v57 = v3;
    }
    LOBYTE(v53) = v8 | v53;
LABEL_35:
    v4 = *(_QWORD *)v4;
  }
  v14 = 0;
  v58 = 0;
  v15 = 0LL;
  v60 = 0LL;
  do
  {
    if ( *(_DWORD *)(v1 + 4 * v15 + 444) )
    {
      v16 = (_QWORD *)(v1 + 40 * (v14 - 1 + 12LL));
    }
    else
    {
      v17 = 3 * v15;
      v18 = 0;
      if ( *(_BYTE *)(v1 + 8 * v17 + 393) )
      {
        v19 = *(_DWORD *)(v1 + 328);
        v18 = 1;
      }
      else
      {
        v19 = *(_DWORD *)(v1 + 324);
      }
      v20 = *(unsigned __int8 *)(v1 + 8 * v17 + 394);
      if ( v19 <= *(_DWORD *)(v1 + 8 * v17 + 380) )
        v19 = *(_DWORD *)(v1 + 8 * v17 + 380);
      if ( *(_BYTE *)(v1 + 8 * v17 + 394) )
      {
        v21 = *(_DWORD *)(v1 + 320);
      }
      else
      {
        v18 |= 8u;
        v21 = v2;
        if ( !PpmPerfBoostAtGuaranteed )
          v21 = 100;
      }
      v22 = *(_DWORD *)(v1 + 8 * v17 + 372);
      if ( v22 < 0x64 && v21 >= v22 )
        v21 = *(_DWORD *)(v1 + 8 * v17 + 372);
      if ( v21 >= *(_DWORD *)(v1 + 8 * v17 + 376) )
        v21 = *(_DWORD *)(v1 + 8 * v17 + 376);
      if ( PpmPerfMaxOverrideEnabled )
      {
        v23 = 100;
      }
      else if ( PpmCheckLatencyBoostActive )
      {
        v23 = *(unsigned __int8 *)(v1 + 8 * v17 + 395);
      }
      else
      {
        v23 = 0;
      }
      v24 = v21;
      if ( v23 < v21 )
        v24 = v23;
      if ( v24 <= v19 )
      {
        v25 = v19;
      }
      else
      {
        v25 = v21;
        if ( v23 < v21 )
          v25 = v23;
      }
      if ( v25 >= v2 )
      {
        v27 = v2;
      }
      else
      {
        v26 = v21;
        if ( v23 < v21 )
          v26 = v23;
        if ( v26 <= v19 )
        {
          v27 = v19;
        }
        else
        {
          v27 = v21;
          if ( v23 < v21 )
            v27 = v23;
        }
      }
      if ( v27 <= v3 )
      {
        v31 = v3;
      }
      else
      {
        v28 = v21;
        if ( v23 < v21 )
          v28 = v23;
        if ( v28 <= v19 )
        {
          v29 = v19;
        }
        else
        {
          v29 = v21;
          if ( v23 < v21 )
            v29 = v23;
        }
        if ( v29 >= v2 )
        {
          v31 = v2;
        }
        else
        {
          v30 = v21;
          if ( v23 < v21 )
            v30 = v23;
          if ( v30 <= v19 )
          {
            v31 = v19;
          }
          else
          {
            v31 = v21;
            if ( v23 < v21 )
              v31 = v23;
          }
        }
      }
      v32 = v19;
      if ( v21 > v19 )
        v32 = v21;
      if ( v32 >= v54 )
      {
        v33 = v54;
      }
      else
      {
        v33 = v19;
        if ( v21 > v19 )
          v33 = v21;
      }
      if ( v33 <= v3 )
      {
        v19 = v3;
      }
      else
      {
        v34 = v19;
        if ( v21 > v19 )
          v34 = v21;
        if ( v34 >= v54 )
        {
          v19 = v54;
        }
        else if ( v21 > v19 )
        {
          v19 = v21;
        }
      }
      v35 = v55;
      if ( PpmPerfMaxOverrideEnabled )
        v35 = v19;
      if ( v35 <= v19 )
      {
        v36 = v35;
        if ( v35 < v31 )
          v36 = v31;
      }
      else
      {
        v36 = v19;
        v37 = v18 | 2;
        if ( !(_BYTE)v53 )
          v37 = v18;
        v18 = v37;
      }
      if ( v20 == 2 || (unsigned int)(v20 - 4) <= 2 )
      {
        if ( (unsigned int)(v20 - 5) <= 1 || (v38 = 100, PpmPerfBoostAtGuaranteed) )
          v38 = v2;
        if ( (unsigned int)v36 >= v38 )
          v36 = v19;
      }
      if ( PpmPerfMaxOverrideEnabled )
        v39 = 0;
      else
        v39 = *(_DWORD *)(v62 + 100);
      v40 = v39 < v35 ? v35 - v39 : 0;
      if ( v40 < v31 )
        v40 = v31;
      if ( v40 > v2 )
        v40 = v2;
      if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
        v41 = 0;
      else
        v41 = *(_DWORD *)(v1 + 8 * v17 + 388);
      v42 = *(_BYTE *)(v1 + 8 * v17 + 392);
      v43 = v18 | 4;
      v56 = v41;
      if ( v42 )
        v43 = v18;
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, __int64 *, __int64 *))(v1 + 280))(
              v63,
              v36,
              v31,
              v19,
              v41,
              *(_DWORD *)(v1 + 8 * v17 + 384),
              v43,
              &v61,
              &v64);
      v45 = v44;
      if ( v40 > v44 )
        v40 = v44;
      memset(v65, 0, 0x28uLL);
      v15 = v60;
      BYTE4(v65[4]) = v42 == 0;
      v14 = v58;
      v46 = *(_DWORD *)(v1 + 24 * v60 + 384);
      v65[1] = __PAIR64__(v61, v45);
      LODWORD(v65[4]) = v46;
      v65[0] = v64;
      v65[2] = __PAIR64__(v19, v31);
      v65[3] = __PAIR64__(v56, v40);
      if ( !v58 )
      {
        v47 = BYTE5(v65[4]);
        if ( *(_QWORD *)(v1 + 304) )
          v47 = 1;
        BYTE5(v65[4]) = v47;
      }
      v3 = v57;
      v16 = v65;
    }
    if ( !*(_BYTE *)(v1 + 612)
      && (v48 = *((_BYTE *)v16 + 36), *(_BYTE *)(v1 + 40 * v15 + 516) == v48)
      && *(_DWORD *)(v1 + 40 * v15 + 496) == *((_DWORD *)v16 + 4)
      && *(_DWORD *)(v1 + 40 * v15 + 500) == *((_DWORD *)v16 + 5)
      && *(_DWORD *)(v1 + 40 * v15 + 508) == *((_DWORD *)v16 + 7)
      && *(_DWORD *)(v1 + 40 * v15 + 512) == *((_DWORD *)v16 + 8)
      && *(_QWORD *)(v1 + 40 * v15 + 480) == *v16
      && v2 == *(_DWORD *)(v1 + 368)
      && (v48
       || *(_DWORD *)(v1 + 40 * v15 + 504) == *((_DWORD *)v16 + 6)
       && *(_DWORD *)(v1 + 40 * v15 + 488) == *((_DWORD *)v16 + 2)) )
    {
      v49 = HIBYTE(v53);
    }
    else
    {
      v49 = 1;
      HIBYTE(v53) = 1;
      *(_OWORD *)(v1 + 40 * v15 + 480) = *(_OWORD *)v16;
      *(_OWORD *)(v1 + 40 * v15 + 496) = *((_OWORD *)v16 + 1);
      *(_QWORD *)(v1 + 40 * v15 + 512) = v16[4];
    }
    ++v14;
    ++v15;
    v58 = v14;
    v60 = v15;
  }
  while ( v14 < 3 );
  if ( v49 )
  {
    v50 = (*(_DWORD *)(v1 + 472))++ == -1;
    v51 = *(_DWORD *)(v1 + 472);
    if ( v50 )
      v51 = 1;
    *(_BYTE *)(v1 + 612) = 0;
    *(_DWORD *)(v1 + 472) = v51;
    *(_DWORD *)(v1 + 368) = v2;
    *(LARGE_INTEGER *)(v1 + 600) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(v1 + 608) = 0;
    if ( !*(_BYTE *)(v1 + 207) )
      PpmEventDomainPerfStateChange(v1);
  }
  return v49;
}
