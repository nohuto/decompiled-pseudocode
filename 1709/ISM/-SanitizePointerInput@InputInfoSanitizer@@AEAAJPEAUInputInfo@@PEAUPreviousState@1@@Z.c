/*
 * XREFs of ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x1800A3210
 * Callers:
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800093C8 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@KUPointer@@$09@@QEAAJAEBKAEBUPointer@@@Z @ 0x1800A36DC (-SetValueForKey@-$FixedSizeMap@KUPointer@@$09@@QEAAJAEBKAEBUPointer@@@Z.c)
 *     ?GetValues@?$FixedSizeMap@KUPointer@@$09@@QEAAJAEAY09UPointer@@PEAI@Z @ 0x1800A37CC (-GetValues@-$FixedSizeMap@KUPointer@@$09@@QEAAJAEAY09UPointer@@PEAI@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall InputInfoSanitizer::SanitizePointerInput(
        InputInfoSanitizer *this,
        struct InputInfo *a2,
        struct InputInfoSanitizer::PreviousState *a3)
{
  int *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edi
  int PointerAtIndex; // eax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // edx
  _DWORD *v13; // rax
  int v14; // eax
  char v15; // dl
  bool v16; // r8
  int v17; // r10d
  char v18; // al
  unsigned int v19; // r9d
  struct InputInfoSanitizer::PreviousState *v20; // rax
  __int64 v21; // rax
  struct InputInfoSanitizer::PreviousState *v22; // r9
  char v23; // bl
  int v24; // r9d
  char v25; // al
  int v26; // r9d
  __int64 v27; // rcx
  unsigned int v28; // esi
  __int64 v29; // rdi
  int v30; // r10d
  char v31; // al
  unsigned int v32; // edx
  _DWORD *v33; // rax
  struct InputInfoSanitizer::PreviousState *v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // ebx
  unsigned int v37; // r15d
  __int64 v38; // rdi
  _OWORD *v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  struct Pointer *v45; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v46[6]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v47[520]; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+2A8h] [rbp+1A8h]
  _BYTE v49[480]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v48 = -1;
  memset(v47, 0, sizeof(v47));
  v5 = (int *)v47;
  v6 = 10LL;
  do
  {
    *v5 = v48;
    v5 += 13;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( 1 )
    {
      v45 = 0LL;
      PointerAtIndex = GetPointerAtIndex(a2, v7, &v45);
      if ( PointerAtIndex < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_46;
        v26 = 243;
        goto LABEL_45;
      }
      v10 = *((_OWORD *)v45 + 1);
      v46[0] = *(_OWORD *)v45;
      v11 = *((_OWORD *)v45 + 2);
      v46[1] = v10;
      v46[2] = v11;
      if ( LODWORD(v46[0]) == v48 )
      {
LABEL_9:
        v14 = DWORD1(v46[0]);
      }
      else
      {
        v12 = 0;
        v13 = v47;
        while ( *v13 != LODWORD(v46[0]) )
        {
          ++v12;
          v13 += 13;
          if ( v12 >= 0xA )
            goto LABEL_9;
        }
        v14 = 4;
        DWORD1(v46[0]) = 4;
      }
      v15 = BYTE4(v46[0]) & 1;
      v16 = (v14 & 2) != 0;
      if ( (v14 & 2) != 0 && !v15 )
      {
        v15 = 1;
        DWORD1(v46[0]) = v14 | 1;
      }
      v17 = *((_DWORD *)a3 + 130);
      if ( LODWORD(v46[0]) == v17 )
      {
LABEL_14:
        v18 = 0;
      }
      else
      {
        v19 = 0;
        v20 = a3;
        while ( *(_DWORD *)v20 != LODWORD(v46[0]) )
        {
          ++v19;
          v20 = (struct InputInfoSanitizer::PreviousState *)((char *)v20 + 52);
          if ( v19 >= 0xA )
            goto LABEL_14;
        }
        v18 = 1;
      }
      if ( v18 )
      {
        if ( LODWORD(v46[0]) == v17 )
        {
          v23 = 87;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v24 = 115;
            goto LABEL_39;
          }
LABEL_46:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v21 = 0LL;
        v22 = a3;
        while ( *(_DWORD *)v22 != LODWORD(v46[0]) )
        {
          v21 = (unsigned int)(v21 + 1);
          v22 = (struct InputInfoSanitizer::PreviousState *)((char *)v22 + 52);
          if ( (unsigned int)v21 >= 0xA )
          {
            v23 = 5;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v24 = 132;
LABEL_39:
              McTemplateU0qqq(LODWORD(v46[0]), &MinInput_Warning_CheckResult, 0, v24, v23);
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 283, v23);
            }
            goto LABEL_46;
          }
        }
        v25 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)a3 + 52 * v21 + 4), 4));
        if ( (v25 & 1) != 0 || (v25 & 2) != 0 )
          goto LABEL_78;
      }
      if ( v15 || v16 )
      {
LABEL_78:
        PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(v47, v45, v46);
        if ( PointerAtIndex < 0 )
          break;
      }
      if ( ++v7 >= *((_DWORD *)a2 + 12) )
        goto LABEL_34;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_46;
    v26 = 335;
LABEL_45:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v26, PointerAtIndex);
    goto LABEL_46;
  }
LABEL_34:
  PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::GetValues(a3, v49, &v45);
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_46;
    v26 = 344;
    goto LABEL_45;
  }
  v28 = (unsigned int)v45;
  v29 = 0LL;
  if ( (_DWORD)v45 )
  {
    while ( 1 )
    {
      v30 = *(_DWORD *)&v49[48 * v29];
      if ( v30 == v48 )
      {
LABEL_51:
        v31 = 0;
      }
      else
      {
        v32 = 0;
        v33 = v47;
        while ( *v33 != v30 )
        {
          ++v32;
          v33 += 13;
          if ( v32 >= 0xA )
            goto LABEL_51;
        }
        v31 = 1;
      }
      if ( (v49[48 * v29 + 4] & 1) != 0 && !v31 )
      {
        *(_DWORD *)&v49[48 * v29 + 4] = 4;
        PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(v47, &v49[48 * v29], &v49[48 * v29]);
        if ( PointerAtIndex < 0 )
          break;
      }
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= v28 )
        goto LABEL_61;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_46;
    v26 = 366;
    goto LABEL_45;
  }
LABEL_61:
  v34 = a3;
  v35 = 10LL;
  do
  {
    *(_DWORD *)v34 = *((_DWORD *)a3 + 130);
    v34 = (struct InputInfoSanitizer::PreviousState *)((char *)v34 + 52);
    --v35;
  }
  while ( v35 );
  PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::GetValues(v47, v49, &v45);
  v36 = PointerAtIndex;
  if ( PointerAtIndex < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_46;
    v26 = 378;
    goto LABEL_45;
  }
  v37 = (unsigned int)v45;
  v38 = 0LL;
  v39 = v49;
  v40 = a2 - (struct InputInfo *)v49;
  do
  {
    v41 = 48 * v38;
    if ( (unsigned int)v38 >= v37 )
    {
      memset((char *)a2 + v41 + 56, 0, 0x30uLL);
    }
    else
    {
      v42 = v39[1];
      *(_OWORD *)((char *)v39 + v40 + 56) = *v39;
      v43 = v39[2];
      *(_OWORD *)((char *)v39 + v40 + 72) = v42;
      *(_OWORD *)((char *)v39 + v40 + 88) = v43;
      PointerAtIndex = FixedSizeMap<unsigned long,Pointer,10>::SetValueForKey(a3, &v49[v41], &v49[v41]);
      v36 = PointerAtIndex;
      if ( PointerAtIndex < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_46;
        v26 = 392;
        goto LABEL_45;
      }
    }
    v38 = (unsigned int)(v38 + 1);
    v39 += 3;
  }
  while ( (unsigned int)v38 < 0xA );
  *((_DWORD *)a2 + 12) = v37;
  return v36;
}
