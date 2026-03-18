/*
 * XREFs of PpmPerfApplyDomainState @ 0x14000E170
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x1400458C0 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmPerfApplyCapsAndFloors @ 0x14000E710 (PpmPerfApplyCapsAndFloors.c)
 *     PpmGetHeterogeneousClass @ 0x14000E7B0 (PpmGetHeterogeneousClass.c)
 *     KeAndAffinityEx @ 0x1400450B0 (KeAndAffinityEx.c)
 *     PpmEventDomainPerfStateChange @ 0x14014B088 (PpmEventDomainPerfStateChange.c)
 *     KeIsEqualAffinityEx @ 0x140160800 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  char v4; // r9
  __int64 *v5; // r13
  unsigned int HeterogeneousClass; // r8d
  char v7; // al
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // eax
  char v13; // r12
  __int64 v14; // rsi
  __int64 *v15; // r14
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned int v20; // r9d
  bool v21; // cc
  __int64 v22; // rdx
  int v23; // r11d
  unsigned int v24; // eax
  unsigned int v25; // r12d
  int v26; // r13d
  char v27; // r15
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // r8d
  __int64 *v32; // r9
  bool v34; // zf
  int v35; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  char v37; // [rsp+50h] [rbp-B0h]
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v40; // [rsp+60h] [rbp-A0h]
  unsigned int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+6Ch] [rbp-94h]
  unsigned int v43; // [rsp+70h] [rbp-90h]
  int v44; // [rsp+74h] [rbp-8Ch]
  int v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v48[176]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v49[176]; // [rsp+140h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v4 = 0;
  v42 = 0;
  v46 = *(_QWORD *)(v2 + 8);
  v5 = &PpmCurrentProfile[175 * dword_14034BB2C + 5];
  v40 = v5;
  if ( *(_BYTE *)(a1 + 207) )
    HeterogeneousClass = 0;
  else
    HeterogeneousClass = (unsigned __int8)PpmGetHeterogeneousClass(*(_QWORD *)(a1 + 16));
  v44 = *((_DWORD *)v5 + 14);
  v7 = *((_BYTE *)v5 + 16);
  if ( v7 == 1 || v7 == 2 && *(_BYTE *)(a1 + 356) )
    v4 = 1;
  v8 = *(_DWORD *)(a1 + 368);
  v9 = *(_DWORD *)(a1 + 372);
  if ( *(_DWORD *)(a1 + 364) < v8 )
    v8 = *(_DWORD *)(a1 + 364);
  v37 = PpmPerfMaxOverrideEnabled;
  if ( PpmPerfMaxOverrideEnabled )
  {
    v9 = v8;
  }
  else if ( PpmCheckLatencyBoostActive )
  {
    v10 = *((unsigned __int8 *)v5 + HeterogeneousClass + 73);
    v11 = v8;
    if ( v10 < v8 )
      v11 = v10;
    if ( v9 <= v11 )
    {
      v9 = v8;
      if ( v10 < v8 )
        v9 = v10;
    }
  }
  v12 = *(_DWORD *)(a1 + 328);
  v43 = v12;
  if ( v4 )
    v42 = 1;
  else
    v12 = *(_DWORD *)(a1 + 324);
  v39 = 100;
  if ( v8 <= v12 )
    v8 = v12;
  v41 = v8;
  if ( v9 <= v12 )
    v9 = v12;
  v38 = v9;
  v13 = PpmPerfApplyCapsAndFloors(&v41, &v38, &v39, a1);
  if ( !PpmPerfArtificialDomainEnabled
    || (KeAndAffinityEx(a1 + 24, &PpmPerfNewCoreParkingMask, v48), (unsigned int)KeIsEqualAffinityEx(a1 + 24, v48))
    || *(_BYTE *)(a1 + 207) )
  {
    v15 = *(__int64 **)a1;
    v14 = a1;
  }
  else
  {
    v14 = PpmPerfDomainHead;
    v15 = &PpmPerfDomainHead;
  }
  for ( ; (__int64 *)v14 != v15; v14 = *(_QWORD *)v14 )
  {
    if ( v14 != a1 )
    {
      if ( *(_BYTE *)(v14 + 207) )
        continue;
      KeAndAffinityEx(v14 + 24, &PpmPerfNewCoreParkingMask, v49);
      if ( (unsigned int)KeIsEqualAffinityEx(v14 + 24, v49)
        || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 192LL)
        || *(_BYTE *)(a1 + 204) != *(_BYTE *)(v14 + 204) )
      {
        continue;
      }
    }
    v16 = *(unsigned int *)(v14 + 360);
    if ( *(_BYTE *)(a1 + 205) != *(_BYTE *)(v14 + 205) )
    {
      v16 = (*(_QWORD *)(v14 + 344) * v16 + (*(_QWORD *)(v14 + 344) >> 1)) / *(_QWORD *)(a1 + 344);
      if ( (unsigned int)v16 > *(_DWORD *)(a1 + 320) )
        LODWORD(v16) = *(_DWORD *)(a1 + 320);
    }
    if ( (unsigned int)v16 > v3 )
      v3 = v16;
    v13 |= PpmPerfApplyCapsAndFloors(&v41, &v38, &v39, v14);
  }
  v17 = v41;
  v18 = v38;
  if ( v41 <= v43 )
    v17 = v43;
  v19 = v39;
  if ( v38 <= v43 )
    v18 = v43;
  if ( v18 >= v17 )
    v18 = v17;
  if ( v44 )
  {
    if ( v17 == 100 )
    {
      v20 = 100;
      if ( *(_DWORD *)(a1 + 368) > 0x64u )
        v17 = *(_DWORD *)(a1 + 368);
      goto LABEL_58;
    }
LABEL_57:
    v20 = 100;
LABEL_58:
    v21 = v39 <= v17;
    goto LABEL_59;
  }
  if ( !PpmPerfBoostAtGuaranteed )
    goto LABEL_57;
  v20 = 100;
  v21 = v39 <= v17;
  if ( v39 <= v17 )
  {
    v17 = v39;
    goto LABEL_62;
  }
LABEL_59:
  if ( !v21 )
    v19 = v17;
  v39 = v19;
LABEL_62:
  if ( v18 >= v19 )
    v18 = v19;
  v38 = v18;
  if ( v37 )
  {
    v3 = v17;
    v22 = v17;
    goto LABEL_66;
  }
  v22 = v3;
  if ( v3 <= v17 )
  {
LABEL_66:
    v23 = v42;
    if ( v3 < v18 )
      v22 = v18;
    goto LABEL_68;
  }
  v22 = v17;
  v23 = v42 | 2;
  if ( !v13 )
    v23 = v42;
LABEL_68:
  if ( v44 == 2 || (unsigned int)(v44 - 4) <= 2 )
  {
    if ( (unsigned int)(v44 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v20 = v19;
    if ( (unsigned int)v22 >= v20 )
      v22 = v17;
  }
  v24 = 0;
  if ( !v37 )
    v24 = *((_DWORD *)v5 + 15);
  v25 = v3 - v24;
  if ( v24 >= v3 )
    v25 = 0;
  if ( v25 < v18 )
    v25 = v18;
  if ( v25 > v19 )
    v25 = v19;
  if ( v37 || (v18 = v38, v19 = v39, (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008]) )
    v26 = 0;
  else
    v26 = *((_DWORD *)v5 + 16);
  v27 = !*((_BYTE *)v40 + 72) || !*(_BYTE *)(a1 + 359);
  v28 = v23 | 4;
  if ( v27 )
    v28 = v23;
  v29 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, int, int *, __int64 *))(a1 + 280))(
          v46,
          v22,
          v18,
          v17,
          v26,
          *((_DWORD *)v40 + 17),
          v28,
          &v45,
          &v47);
  v30 = v47;
  v31 = v29;
  if ( v25 > v29 )
    v25 = v29;
  if ( !*(_BYTE *)(a1 + 484)
    && v27 == *(_BYTE *)(a1 + 485)
    && v18 == *(_DWORD *)(a1 + 408)
    && v17 == *(_DWORD *)(a1 + 412)
    && v19 == *(_DWORD *)(a1 + 376)
    && (!PpmPerfEppViaPerfControl || v26 == *(_DWORD *)(a1 + 420)) )
  {
    v32 = v40;
    if ( (!PpmPerfAutonomousActivityWindowViaPerfControl || *((_DWORD *)v40 + 17) == *(_DWORD *)(a1 + 424))
      && (!v27 || v25 == *(_DWORD *)(a1 + 416) && v47 == *(_QWORD *)(a1 + 392)) )
    {
      return 0;
    }
  }
  else
  {
    v32 = v40;
  }
  v34 = (*(_DWORD *)(a1 + 380))++ == -1;
  v35 = *(_DWORD *)(a1 + 380);
  if ( v34 )
    v35 = 1;
  *(_QWORD *)(a1 + 392) = v30;
  *(_DWORD *)(a1 + 380) = v35;
  *(_DWORD *)(a1 + 404) = v45;
  v34 = *(_QWORD *)(a1 + 304) == 0LL;
  *(_BYTE *)(a1 + 428) = v27 == 0;
  *(_DWORD *)(a1 + 400) = v31;
  *(_DWORD *)(a1 + 408) = v18;
  *(_DWORD *)(a1 + 412) = v17;
  *(_DWORD *)(a1 + 416) = v25;
  *(_DWORD *)(a1 + 420) = v26;
  *(_DWORD *)(a1 + 424) = *((_DWORD *)v32 + 17);
  if ( !v34 )
    *(_BYTE *)(a1 + 429) = 1;
  *(_BYTE *)(a1 + 484) = 0;
  *(_DWORD *)(a1 + 376) = v19;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v34 = *(_BYTE *)(a1 + 207) == 0;
  *(LARGE_INTEGER *)(a1 + 472) = PerformanceCounter;
  *(_DWORD *)(a1 + 480) = 0;
  *(_BYTE *)(a1 + 485) = v27;
  if ( v34 )
    PpmEventDomainPerfStateChange(a1);
  return 1;
}
