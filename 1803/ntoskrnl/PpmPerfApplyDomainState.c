/*
 * XREFs of PpmPerfApplyDomainState @ 0x1400AEB30
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140034500 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     PpmPerfApplyCapsAndFloors @ 0x1400AF18C (PpmPerfApplyCapsAndFloors.c)
 *     PpmEventDomainPerfStateChange @ 0x14016E5E4 (PpmEventDomainPerfStateChange.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  unsigned int v2; // r12d
  unsigned int v3; // r13d
  __int64 v4; // rsi
  __int64 *v5; // r15
  unsigned __int64 v6; // r14
  char v7; // r8
  char v8; // r9
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // r10d
  __int64 v12; // r9
  int v13; // r11d
  __int64 *v14; // rcx
  __int64 v15; // r15
  char v16; // cl
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // r10d
  int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // r8d
  int v33; // eax
  unsigned int v34; // r12d
  unsigned int v35; // eax
  unsigned int v36; // r13d
  char v37; // di
  int v38; // ecx
  unsigned int v39; // eax
  char v40; // al
  __int64 v41; // rdx
  char v42; // r8
  unsigned __int8 v43; // r14
  int v44; // edx
  char v46; // [rsp+50h] [rbp-B0h]
  char v47; // [rsp+51h] [rbp-AFh]
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v49; // [rsp+58h] [rbp-A8h]
  unsigned int v50; // [rsp+5Ch] [rbp-A4h]
  unsigned int v51; // [rsp+60h] [rbp-A0h]
  unsigned int v52; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+6Ch] [rbp-94h]
  unsigned int v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 *v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v64; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v65; // [rsp+B0h] [rbp-50h]
  int v66; // [rsp+B8h] [rbp-48h]
  BOOL v67; // [rsp+BCh] [rbp-44h]
  _BYTE v68[176]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v69[176]; // [rsp+170h] [rbp+70h] BYREF

  v46 = 0;
  v2 = 0;
  v47 = 0;
  v59 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 8LL);
  v54 = 0;
  v50 = 0;
  v58 = &PpmCurrentProfile[336 * dword_1403AAA2C];
  v3 = 100;
  v48 = 100;
  v49 = *(_DWORD *)(a1 + 320);
  v52 = v49;
  v51 = *(_DWORD *)(a1 + 328);
  v53 = v51;
  if ( !PpmPerfArtificialDomainEnabled
    || (KeAndAffinityEx((unsigned __int16 *)(a1 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v68),
        (unsigned int)KeIsEqualAffinityEx(a1 + 24, v68))
    || *(_BYTE *)(a1 + 207) )
  {
    v5 = *(__int64 **)a1;
    v4 = a1;
  }
  else
  {
    v4 = PpmPerfDomainHead;
    v5 = &PpmPerfDomainHead;
  }
  if ( (__int64 *)v4 != v5 )
  {
    while ( 1 )
    {
      v6 = *(unsigned int *)(v4 + 364);
      if ( v4 == a1 )
        break;
      if ( !*(_BYTE *)(v4 + 207) )
      {
        KeAndAffinityEx((unsigned __int16 *)(v4 + 24), (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v69);
        if ( !(unsigned int)KeIsEqualAffinityEx(v4 + 24, v69)
          && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL) == *(_QWORD *)(*(_QWORD *)(v4 + 16) + 192LL) )
        {
          v7 = *(_BYTE *)(a1 + 204);
          v8 = *(_BYTE *)(v4 + 204);
          if ( v7 == v8 || PpmPerfQosEnabled )
          {
            if ( *(_BYTE *)(a1 + 205) != *(_BYTE *)(v4 + 205) )
            {
              v6 = ((*(_QWORD *)(v4 + 344) >> 1) + *(_QWORD *)(v4 + 344) * v6) / *(_QWORD *)(a1 + 344);
              if ( (unsigned int)v6 > *(_DWORD *)(a1 + 320) )
                LODWORD(v6) = *(_DWORD *)(a1 + 320);
            }
            if ( v7 == v8 )
              break;
            if ( (unsigned int)v6 <= v50 )
              LODWORD(v6) = v50;
            v50 = v6;
          }
        }
      }
LABEL_23:
      v4 = *(_QWORD *)v4;
      if ( (__int64 *)v4 == v5 )
      {
        v9 = v52;
        v10 = v53;
        v3 = v48;
        v49 = v52;
        v51 = v53;
        v54 = v2;
        goto LABEL_26;
      }
    }
    v46 |= PpmPerfApplyCapsAndFloors(&v52, &v53, &v48, v4);
    if ( (unsigned int)v6 <= v2 )
      LODWORD(v6) = v2;
    v2 = v6;
    goto LABEL_23;
  }
  v10 = v51;
  v9 = v49;
LABEL_26:
  v11 = 0;
  v55 = 0;
  v12 = 0LL;
  v57 = 0LL;
  v13 = 1;
  do
  {
    if ( *(_DWORD *)(a1 + 4 * v12 + 484) )
    {
      v14 = (__int64 *)(a1 + 8 * (v11 - 1 + 4LL * (v11 - 1) + 66));
      goto LABEL_116;
    }
    v15 = 28 * v12 + a1 + 372;
    v16 = *(_BYTE *)(v15 + 21);
    if ( v16 )
      v17 = *(_DWORD *)(a1 + 328);
    else
      v17 = *(_DWORD *)(a1 + 324);
    v18 = *(_DWORD *)(v15 + 8);
    v19 = *(unsigned __int8 *)(v15 + 22);
    v20 = v16 != 0;
    if ( v17 > v18 )
      v18 = v17;
    if ( *(_BYTE *)(v15 + 22) )
    {
      v21 = *(_DWORD *)(a1 + 320);
    }
    else
    {
      v20 |= 8u;
      v21 = v3;
      if ( !PpmPerfBoostAtGuaranteed )
        v21 = 100;
    }
    if ( *(_DWORD *)v15 < 0x64u && v21 >= *(_DWORD *)v15 )
      v21 = *(_DWORD *)v15;
    v22 = *(_DWORD *)(v15 + 4);
    if ( v21 < v22 )
      v22 = v21;
    if ( PpmPerfMaxOverrideEnabled )
    {
      v23 = 100;
    }
    else if ( PpmCheckLatencyBoostActive )
    {
      v23 = *(unsigned __int8 *)(v15 + 23);
    }
    else
    {
      v23 = 0;
    }
    v24 = v18;
    if ( v23 >= v22 )
      v23 = v22;
    if ( v23 > v18 )
      v24 = v23;
    if ( v24 >= v3 )
    {
      v25 = v3;
    }
    else
    {
      v25 = v18;
      if ( v23 > v18 )
        v25 = v23;
    }
    if ( v25 <= v10 )
    {
      v27 = v10;
    }
    else
    {
      v26 = v18;
      if ( v23 > v18 )
        v26 = v23;
      if ( v26 >= v3 )
      {
        v27 = v3;
      }
      else
      {
        v27 = v18;
        if ( v23 > v18 )
          v27 = v23;
      }
    }
    v28 = v9;
    if ( v22 <= v18 )
      v22 = v18;
    if ( v22 < v9 )
      v28 = v22;
    if ( v28 <= v10 )
    {
      v9 = v10;
    }
    else if ( v22 < v49 )
    {
      v9 = v22;
    }
    if ( PpmPerfMaxOverrideEnabled )
    {
      v29 = v9;
      v30 = v9;
    }
    else
    {
      v29 = v2;
      if ( *(_BYTE *)(v15 + 24) && v2 <= v50 )
        v29 = v50;
      v30 = v29;
      if ( v29 > v9 )
      {
        v30 = v9;
        v33 = v20 | 2;
        if ( !v46 )
          v33 = v20;
        v20 = v33;
        goto LABEL_80;
      }
    }
    if ( v29 < v27 )
      v30 = v27;
LABEL_80:
    if ( v19 == 2 || (unsigned int)(v19 - 4) <= 2 )
    {
      if ( (unsigned int)(v19 - 5) <= 1 || (v31 = 100, PpmPerfBoostAtGuaranteed) )
        v31 = v3;
      if ( (unsigned int)v30 >= v31 )
        v30 = v9;
    }
    if ( PpmPerfMaxOverrideEnabled )
      v32 = 0;
    else
      v32 = *((_DWORD *)v58 + 25);
    v34 = v27;
    v35 = v29 - v32;
    if ( v32 >= v29 )
      v35 = 0;
    if ( v35 >= v27 )
      v34 = v35;
    if ( v34 > v3 )
      v34 = v3;
    if ( PpmPerfMaxOverrideEnabled || PpmCheckDeadlineBoostActive )
      v36 = 0;
    else
      v36 = *(_DWORD *)(v15 + 16);
    v37 = *(_BYTE *)(v15 + 20);
    v38 = v20 | 4;
    if ( v37 )
      v38 = v20;
    v39 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, _DWORD, int, int *, __int64 *))(a1 + 280))(
            v59,
            v30,
            v27,
            v9,
            v36,
            *(_DWORD *)(v15 + 12),
            v38,
            &v56,
            &v60);
    v11 = v55;
    v13 = 1;
    if ( v34 > v39 )
      v34 = v39;
    v64 = 0LL;
    v65 = 0LL;
    v66 = 0;
    v67 = v37 == 0;
    v62 = v39;
    v63 = v56;
    v66 = *(_DWORD *)(v15 + 12);
    v61 = v60;
    v64 = __PAIR64__(v9, v27);
    v65 = __PAIR64__(v36, v34);
    if ( !v55 )
    {
      v40 = BYTE1(v67);
      if ( *(_QWORD *)(a1 + 304) )
        v40 = 1;
      BYTE1(v67) = v40;
    }
    v12 = v57;
    v14 = &v61;
    v2 = v54;
LABEL_116:
    v41 = a1 + 528 + 40 * v12;
    if ( !*(_BYTE *)(a1 + 700)
      && (v42 = *((_BYTE *)v14 + 36), *(_BYTE *)(v41 + 36) == v42)
      && *(_DWORD *)(v41 + 16) == *((_DWORD *)v14 + 4)
      && *(_DWORD *)(v41 + 20) == *((_DWORD *)v14 + 5)
      && *(_DWORD *)(v41 + 28) == *((_DWORD *)v14 + 7) )
    {
      v3 = v48;
      if ( *(_DWORD *)(v41 + 32) == *((_DWORD *)v14 + 8)
        && *(_QWORD *)v41 == *v14
        && v48 == *(_DWORD *)(a1 + 368)
        && (v42 || *(_DWORD *)(v41 + 24) == *((_DWORD *)v14 + 6) && *(_DWORD *)(v41 + 8) == *((_DWORD *)v14 + 2)) )
      {
        v43 = v47;
        goto LABEL_128;
      }
    }
    else
    {
      v3 = v48;
    }
    v43 = 1;
    v47 = 1;
    *(_OWORD *)v41 = *(_OWORD *)v14;
    *(_OWORD *)(v41 + 16) = *((_OWORD *)v14 + 1);
    *(_QWORD *)(v41 + 32) = v14[4];
LABEL_128:
    v10 = v51;
    ++v11;
    v9 = v49;
    ++v12;
    v55 = v11;
    v57 = v12;
  }
  while ( v11 < 4 );
  if ( v43 )
  {
    v44 = v48;
    if ( *(_DWORD *)(a1 + 520) != -1 )
      v13 = *(_DWORD *)(a1 + 520) + 1;
    *(_DWORD *)(a1 + 520) = v13;
    *(_BYTE *)(a1 + 700) = 0;
    *(_DWORD *)(a1 + 368) = v44;
    *(LARGE_INTEGER *)(a1 + 688) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 696) = 0;
    if ( !*(_BYTE *)(a1 + 207) )
      PpmEventDomainPerfStateChange(a1);
  }
  return v43;
}
