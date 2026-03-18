/*
 * XREFs of PiDevCfgResolveVariableFormatString @ 0x14069D540
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryMultiSz @ 0x14014FC24 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryString @ 0x14014FF00 (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140594210 (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // r14
  NTSTATUS RegistryValue; // edi
  unsigned __int16 *v7; // r13
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int *v11; // rbx
  unsigned int v12; // r10d
  const WCHAR *v13; // rsi
  const WCHAR *v14; // rcx
  __int64 v15; // rax
  SIZE_T v16; // r14
  PVOID PoolWithTag; // rax
  unsigned int i; // r14d
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // r14d
  unsigned __int16 *v22; // rsi
  _QWORD *v23; // r15
  unsigned __int16 v24; // dx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  unsigned int v30; // r14d
  PVOID v31; // rax
  void *v32; // r12
  unsigned __int16 *v33; // r8
  unsigned __int16 *v34; // r13
  unsigned __int16 v35; // dx
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  wchar_t *v40; // rdx
  __int64 v41; // rsi
  unsigned int v42; // esi
  __int64 v43; // rsi
  __int64 v44; // rcx
  NTSTATUS v46; // [rsp+20h] [rbp-50h]
  unsigned int v47; // [rsp+20h] [rbp-50h]
  unsigned int v48; // [rsp+24h] [rbp-4Ch]
  PVOID v49; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int16 *v50; // [rsp+30h] [rbp-40h]
  PVOID P; // [rsp+38h] [rbp-38h]
  PVOID v52; // [rsp+40h] [rbp-30h] BYREF
  __int64 v53; // [rsp+48h] [rbp-28h]
  wchar_t pszDest[12]; // [rsp+50h] [rbp-20h] BYREF

  v53 = a3;
  v52 = 0LL;
  v49 = 0LL;
  v48 = 0;
  P = 0LL;
  LODWORD(v5) = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Format", 0, &v52);
  if ( RegistryValue < 0 )
    goto LABEL_105;
  if ( !PnpValidateRegistryString(v52) )
  {
    RegistryValue = -1073741823;
    goto LABEL_105;
  }
  v7 = (unsigned __int16 *)((char *)v52 + *((unsigned int *)v52 + 2));
  v50 = v7;
  v8 = IopGetRegistryValue(a2, L"Variables", 0, &v49);
  v11 = (unsigned int *)v49;
  v12 = 0;
  v46 = v8;
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(v49, v9, v10) )
    {
      RegistryValue = -1073741823;
      goto LABEL_103;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_103;
    RegistryValue = 0;
    v46 = 0;
  }
  if ( v11 )
  {
    v13 = (const WCHAR *)((char *)v11 + v11[2]);
    v14 = v13;
    if ( *v13 != (_WORD)v12 )
    {
      do
      {
        v5 = (unsigned int)(v5 + 1);
        v15 = -1LL;
        do
          ++v15;
        while ( v14[v15] != (_WORD)v12 );
        v14 += v15 + 1;
      }
      while ( *v14 != (_WORD)v12 );
      v48 = v5;
      if ( (_DWORD)v5 )
      {
        v16 = 8 * v5;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x63647050u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryValue = -1073741670;
          goto LABEL_103;
        }
        memset(PoolWithTag, 0, v16);
        v12 = 0;
        for ( i = 0; *v13 && i < v48; ++i )
        {
          v19 = PiDevCfgResolveVariable(a1, v13, (UNICODE_STRING **)P + i);
          v12 = 0;
          v46 = v19;
          RegistryValue = v19;
          if ( v19 < 0 )
          {
            if ( v19 == -1073741772 )
              RegistryValue = -1073741823;
            v46 = RegistryValue;
            break;
          }
          v20 = -1LL;
          do
            ++v20;
          while ( v13[v20] );
          v13 += v20 + 1;
        }
        if ( RegistryValue < 0 )
          goto LABEL_101;
      }
    }
  }
  v21 = v12;
  v22 = v7;
  if ( *v7 == (_WORD)v12 )
    goto LABEL_55;
  v23 = P;
  do
  {
    if ( *v22 != 37 || (++v22, v24 = *v22, *v22 == 37) )
    {
      ++v22;
      v21 += 2;
      continue;
    }
    if ( (unsigned __int16)(v24 - 48) <= 9u )
    {
      v25 = v12;
      while ( v24 && (unsigned __int16)(v24 - 48) <= 9u )
      {
        ++v22;
        v25 = v24 + 2 * (5 * v25 - 24);
        v24 = *v22;
      }
      if ( v25 < v48 )
      {
        _mm_lfence();
        v26 = v23[v25];
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 + 32);
          if ( v27 )
          {
            if ( v27 <= 2 )
            {
              v21 += *(_DWORD *)(v26 + 36) - 2;
            }
            else
            {
              if ( v27 != 4 )
              {
                if ( v27 != 7 )
                  continue;
                v28 = -1LL;
                do
                  ++v28;
                while ( *(_WORD *)(*(_QWORD *)(v26 + 40) + 2 * v28) != (_WORD)v12 );
                goto LABEL_47;
              }
              v29 = RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v26 + 40));
              v12 = 0;
              if ( v29 >= 0 )
              {
                v28 = -1LL;
                do
                  ++v28;
                while ( pszDest[v28] );
LABEL_47:
                v21 += 2 * v28;
              }
            }
          }
        }
      }
    }
  }
  while ( *v22 != (_WORD)v12 );
  v11 = (unsigned int *)v49;
  RegistryValue = v46;
LABEL_55:
  v30 = v21 + 2;
  v47 = v30;
  v31 = ExAllocatePoolWithTag(PagedPool, v30, 0x63647050u);
  v32 = v31;
  if ( !v31 )
  {
    RegistryValue = -1073741670;
    goto LABEL_101;
  }
  v33 = v50;
  v34 = (unsigned __int16 *)v31;
  if ( !*v50 )
    goto LABEL_95;
  while ( 2 )
  {
    if ( *v33 == 37 )
    {
      v50 = ++v33;
      v35 = *v33;
      if ( *v33 == 37 )
      {
        if ( v30 <= 2 )
          goto LABEL_92;
        *v34 = 37;
LABEL_62:
        ++v34;
        ++v33;
        v30 -= 2;
LABEL_88:
        if ( !*v33 )
          goto LABEL_94;
        continue;
      }
      if ( (unsigned __int16)(v35 - 48) > 9u )
        goto LABEL_88;
      v36 = 0;
      if ( v35 )
      {
        do
        {
          if ( (unsigned __int16)(v35 - 48) > 9u )
            break;
          ++v33;
          v37 = v35;
          v35 = *v33;
          v36 = v37 + 2 * (5 * v36 - 24);
        }
        while ( *v33 );
        v50 = v33;
      }
      if ( v36 >= v48 )
        goto LABEL_88;
      _mm_lfence();
      v38 = *((_QWORD *)P + v36);
      if ( !v38 )
        goto LABEL_88;
      v39 = *(_DWORD *)(v38 + 32);
      if ( !v39 )
        goto LABEL_82;
      if ( v39 <= 2 )
      {
        v40 = *(wchar_t **)(v38 + 40);
        v42 = *(_DWORD *)(v38 + 36) - 2;
        goto LABEL_83;
      }
      if ( v39 == 4 )
      {
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v38 + 40)) >= 0 )
        {
          v40 = pszDest;
          v43 = -1LL;
          do
            ++v43;
          while ( pszDest[v43] );
          v33 = v50;
          v42 = 2 * v43;
          goto LABEL_84;
        }
      }
      else
      {
        if ( v39 == 7 )
        {
          v40 = *(wchar_t **)(v38 + 40);
          v41 = -1LL;
          do
            ++v41;
          while ( v40[v41] );
          v42 = 2 * v41;
          goto LABEL_83;
        }
LABEL_82:
        v40 = 0LL;
        v42 = 0;
LABEL_83:
        if ( !v40 )
          goto LABEL_88;
LABEL_84:
        if ( !v42 )
          goto LABEL_88;
        if ( v30 <= v42 )
        {
LABEL_92:
          v11 = (unsigned int *)v49;
          RegistryValue = -1073741823;
          goto LABEL_99;
        }
        memmove(v34, v40, v42);
        v30 -= v42;
        v34 += (unsigned __int64)v42 >> 1;
      }
      v33 = v50;
      goto LABEL_88;
    }
    break;
  }
  if ( v30 > 2 )
  {
    *v34 = *v33;
    goto LABEL_62;
  }
  RegistryValue = -1073741823;
LABEL_94:
  v11 = (unsigned int *)v49;
LABEL_95:
  if ( RegistryValue >= 0 )
  {
    if ( v30 == 2 )
    {
      v44 = v53;
      *v34 = 0;
      *(_QWORD *)(v44 + 40) = v32;
      v32 = 0LL;
      *(_DWORD *)(v44 + 32) = 1;
      *(_DWORD *)(v44 + 36) = v47;
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
LABEL_99:
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
LABEL_101:
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_103:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
LABEL_105:
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  return (unsigned int)RegistryValue;
}
