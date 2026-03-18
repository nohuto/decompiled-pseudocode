/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x1405A13E0
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x140133054 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x1401330EC (PnpMultiSzContainsString.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401FF4D8 (PiDevCfgMatchDriverConfigurationId.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14059449C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  __int64 v3; // r14
  int ObjectProperty; // esi
  int v5; // edi
  __int64 v6; // r13
  int v7; // eax
  SIZE_T v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  PVOID v11; // rbx
  unsigned int v12; // r15d
  const WCHAR *v13; // r14
  __int64 v14; // rax
  const WCHAR *v15; // r14
  char v16; // bl
  const wchar_t *i; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r12d
  PCWSTR *v21; // r15
  wchar_t *v22; // rbx
  unsigned int v23; // eax
  const WCHAR *v24; // r10
  __int64 v25; // rdi
  wchar_t *v26; // r14
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  bool v32; // sf
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rax
  int v37; // eax
  wchar_t *v38; // rax
  wchar_t *v39; // rbx
  wchar_t *v40; // rax
  __int64 v41; // rax
  int v42; // ecx
  const wchar_t *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 j; // rdi
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v54; // [rsp+68h] [rbp-61h]
  int v55; // [rsp+70h] [rbp-59h]
  __int64 v56; // [rsp+78h] [rbp-51h] BYREF
  __int64 *v57; // [rsp+80h] [rbp-49h]
  int v58; // [rsp+88h] [rbp-41h] BYREF
  int v59; // [rsp+8Ch] [rbp-3Dh]
  PCWSTR v60; // [rsp+90h] [rbp-39h]
  const wchar_t *v61; // [rsp+98h] [rbp-31h]
  unsigned int v62; // [rsp+A0h] [rbp-29h]
  wchar_t *Str; // [rsp+A8h] [rbp-21h]
  __int64 v64; // [rsp+B0h] [rbp-19h] BYREF
  PVOID P; // [rsp+B8h] [rbp-11h]
  int v66; // [rsp+C0h] [rbp-9h]
  __int64 v67; // [rsp+C8h] [rbp-1h]
  const wchar_t *v68; // [rsp+D0h] [rbp+7h]
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 *v71; // [rsp+140h] [rbp+77h]
  int v72; // [rsp+148h] [rbp+7Fh] BYREF

  v71 = a3;
  v54 = &v53;
  v53 = (__int64)&v53;
  v57 = &v56;
  v56 = (__int64)&v56;
  v59 = 0;
  v3 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v68 = 0LL;
  v5 = 0;
  v58 = 1;
  v6 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v64 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v35 = -1LL;
    do
      ++v35;
    while ( a2[v35] );
    v68 = (const wchar_t *)((unsigned __int64)&a2[v35 + 1] & -(__int64)(a2[v35 + 1] != 0));
  }
  v7 = 1;
  LODWORD(v8) = 520;
  if ( PnpSetupInProgress )
    v7 = 3;
  v67 = 520LL;
  v66 = v7;
  P = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v11 = P;
  if ( !P )
  {
    ObjectProperty = -1073741670;
    goto LABEL_56;
  }
  v12 = 0;
  v62 = 0;
  while ( 1 )
  {
    v13 = *(const WCHAR **)(v3 + 16 * (v12 + 2LL));
    v60 = v13;
    if ( !v13 )
      goto LABEL_7;
    v55 = 0;
    while ( *v13 )
    {
      v58 = 1;
      LODWORD(NumberOfBytes) = 0;
      while ( 1 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v13,
                           0xAu,
                           -1LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v58,
                           (__int64)v11,
                           v8,
                           (__int64)&NumberOfBytes,
                           0);
        if ( ObjectProperty != -1073741789 )
          break;
        if ( (unsigned int)NumberOfBytes <= (unsigned int)v8 )
          goto LABEL_88;
        v8 = (unsigned int)NumberOfBytes;
        v67 = (unsigned int)NumberOfBytes;
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        P = ExAllocatePoolWithTag(PagedPool, v8, 0x63647050u);
        v11 = P;
        if ( !P )
        {
          ObjectProperty = -1073741670;
          break;
        }
      }
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty < 0 )
      {
        if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
        {
          if ( v5 != -1073741772 )
            v5 = ObjectProperty;
          v59 = v5;
        }
        else if ( ObjectProperty == -1073741772 )
        {
          v59 = -1073741772;
        }
LABEL_88:
        ObjectProperty = 0;
      }
      else if ( v58 == 8210 )
      {
        for ( i = (const wchar_t *)v11; *i; i += v18 + 1 )
        {
          v22 = wcschr(i, 0x5Cu);
          if ( !v22 )
            goto LABEL_23;
          ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(i, 0LL, 0LL, (__int64)&v72);
          if ( ObjectProperty < 0 )
            break;
          v23 = v66;
          v24 = i;
          *v22 = 0;
          i = v22 + 1;
          v16 = v72;
          v9 = v23;
          v61 = i;
          if ( v12 == 2 )
          {
            if ( (_BYTE)v72 != 3 )
              goto LABEL_23;
            v9 = v23 | 8;
          }
          if ( (_BYTE)v72 != 1 && (_BYTE)v72 != 2 && (_BYTE)v72 != 3 )
            goto LABEL_23;
          ObjectProperty = PiDevCfgQueryDriverNode(v24, v13, v9, (__int64)&v64);
          if ( ObjectProperty >= 0 )
          {
            v25 = v64;
            v15 = *(const WCHAR **)(v64 + 152);
            if ( v15 )
            {
              if ( *v15 )
              {
                do
                {
                  v20 = 0;
                  v21 = (PCWSTR *)(a1 + 32);
                  while ( !*v21 || !PnpMultiSzContainsString(*v21, v15) )
                  {
                    ++v20;
                    v21 += 2;
                    if ( v20 >= 3 )
                      goto LABEL_10;
                  }
                  *(_QWORD *)(v25 + 160) = v15;
LABEL_10:
                  if ( *(_QWORD *)(v25 + 160) )
                    break;
                  v14 = -1LL;
                  do
                    ++v14;
                  while ( v15[v14] );
                  v15 += v14 + 1;
                }
                while ( *v15 );
                v16 = v72;
                v12 = v62;
              }
              if ( *(_QWORD *)(v25 + 160) )
                *(_DWORD *)(v25 + 108) |= 0xFFFFu;
            }
            if ( v16 == 3 )
            {
              v36 = v57;
              if ( (__int64 *)*v57 != &v56 )
                __fastfail(3u);
              *(_QWORD *)(v25 + 8) = v57;
              *(_QWORD *)v25 = &v56;
              *v36 = v25;
              v57 = (__int64 *)v25;
            }
            else
            {
              if ( Str && !PiDevCfgMatchDriverConfigurationId(v25, Str) )
              {
                v33 = v54;
                if ( (__int64 *)*v54 != &v53 )
                  __fastfail(3u);
                goto LABEL_65;
              }
              if ( *(_QWORD *)(v25 + 160) )
              {
                v33 = v54;
                if ( (__int64 *)*v54 != &v53 )
                  __fastfail(3u);
LABEL_65:
                *(_QWORD *)v25 = &v53;
                *(_QWORD *)(v25 + 8) = v33;
                *v33 = v25;
                v54 = (__int64 *)v25;
              }
              else
              {
                if ( !v6 )
                  goto LABEL_21;
                v32 = (int)PiDevCfgCompareDrivers(v25, v6) < 0;
                v33 = v54;
                if ( !v32 )
                {
                  if ( (__int64 *)*v54 != &v53 )
                    __fastfail(3u);
                  goto LABEL_65;
                }
                if ( (__int64 *)*v54 != &v53 )
                  __fastfail(3u);
                *(_QWORD *)(v6 + 8) = v54;
                *(_QWORD *)v6 = &v53;
                *v33 = v6;
                v54 = (__int64 *)v6;
                if ( (*(_DWORD *)(v6 + 168) & 0xC) != 0 )
                {
                  v37 = *(_DWORD *)(v25 + 168);
                  if ( (v37 & 4) == 0 )
                    *(_DWORD *)(v25 + 168) = v37 | 8;
                }
LABEL_21:
                v6 = v25;
              }
            }
            v13 = v60;
            i = v61;
            goto LABEL_23;
          }
          ObjectProperty = 0;
LABEL_23:
          v18 = -1LL;
          do
            ++v18;
          while ( i[v18] );
        }
      }
      v19 = -1LL;
      do
        ++v19;
      while ( v13[v19] );
      v5 = v59;
      v11 = P;
      v13 += v19 + 1;
      ++v55;
      LODWORD(v8) = v67;
      v60 = v13;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_56;
    v11 = P;
    LODWORD(v8) = v67;
LABEL_7:
    v62 = ++v12;
    if ( v12 >= 3 )
      break;
    v3 = a1;
  }
  v26 = Str;
  if ( !Str )
    goto LABEL_52;
  if ( v6 )
  {
LABEL_53:
    while ( 1 )
    {
      v27 = (_QWORD *)v53;
      if ( (__int64 *)v53 == &v53 )
        break;
      if ( *(__int64 **)(v53 + 8) != &v53 || (v34 = *(_QWORD *)v53, *(_QWORD *)(*(_QWORD *)v53 + 8LL) != v53) )
        __fastfail(3u);
      v53 = *(_QWORD *)v53;
      *(_QWORD *)(v34 + 8) = &v53;
      v9 = *(_QWORD *)(v6 + 216);
      if ( *(_QWORD *)v9 != v6 + 208 )
        __fastfail(3u);
      *v27 = v6 + 208;
      v27[1] = v9;
      *(_QWORD *)v9 = v27;
      *(_QWORD *)(v6 + 216) = v27;
    }
    while ( 1 )
    {
      v28 = v56;
      if ( (__int64 *)v56 == &v56 )
      {
        *v71 = v6;
        v6 = 0LL;
        goto LABEL_56;
      }
      if ( *(__int64 **)(v56 + 8) != &v56 || (v41 = *(_QWORD *)v56, *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56) )
        __fastfail(3u);
      v56 = *(_QWORD *)v56;
      *(_QWORD *)(v41 + 8) = &v56;
      if ( PnpIsNullGuid((void *)(v28 + 172)) || *(_QWORD *)(v28 + 160) )
        goto LABEL_136;
      if ( !v26 )
        goto LABEL_137;
      v9 = (__int64)v68;
      if ( !v68 )
        goto LABEL_136;
      v42 = *v68 - asc_1405F5890[0];
      if ( !v42 )
        v42 = v68[1] - asc_1405F5890[1];
      if ( !v42 )
        goto LABEL_137;
      v43 = v68;
      if ( !*v68 )
      {
LABEL_136:
        PiDevCfgFreeDriverNode(v28, v9, v10);
      }
      else
      {
        while ( !PiDevCfgMatchDriverConfigurationId(v28, v43) )
        {
          v44 = -1LL;
          do
            ++v44;
          while ( v43[v44] );
          v43 += v44 + 1;
          if ( !*v43 )
            goto LABEL_136;
        }
LABEL_137:
        v45 = v6 + 192;
        for ( j = *(_QWORD *)(v6 + 192); j != v45; j = *(_QWORD *)j )
        {
          v47 = *(_QWORD *)(j + 172) - *(_QWORD *)(v28 + 172);
          if ( !v47 )
            v47 = *(_QWORD *)(j + 180) - *(_QWORD *)(v28 + 180);
          if ( !v47 && RtlEqualUnicodeString((PCUNICODE_STRING)(j + 72), (PCUNICODE_STRING)(v28 + 72), 1u) )
          {
            if ( (int)PiDevCfgCompareDrivers(v28, j) >= 0 )
            {
              j = v28;
              v28 = 0LL;
            }
            else
            {
              v48 = *(_QWORD *)j;
              if ( *(_QWORD *)(*(_QWORD *)j + 8LL) != j || (v49 = *(__int64 **)(j + 8), *v49 != j) )
                __fastfail(3u);
              *v49 = v48;
              *(_QWORD *)(v48 + 8) = v49;
            }
            if ( j )
              PiDevCfgFreeDriverNode(j, v9, v10);
            break;
          }
        }
        if ( v28 )
        {
          v50 = *(__int64 **)(v6 + 200);
          if ( *v50 != v45 )
            __fastfail(3u);
          *(_QWORD *)v28 = v45;
          *(_QWORD *)(v28 + 8) = v50;
          *v50 = v28;
          *(_QWORD *)(v6 + 200) = v28;
        }
        v26 = Str;
      }
    }
  }
  v38 = wcschr(Str, 0x3Au);
  v39 = v38;
  if ( !v38 || (*v38 = 0, (v40 = wcschr(v38 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_56;
  }
  *v40 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v26, v39 + 1, 4, (__int64)&v64) >= 0 )
  {
    v6 = v64;
LABEL_52:
    if ( v6 )
      goto LABEL_53;
  }
  if ( !v5 || v5 == -1073741772 )
    ObjectProperty = -1073740656;
  else
    ObjectProperty = v5;
LABEL_56:
  while ( 1 )
  {
    v29 = v53;
    if ( (__int64 *)v53 == &v53 )
      break;
    if ( *(__int64 **)(v53 + 8) != &v53 || (v51 = *(_QWORD *)v53, *(_QWORD *)(*(_QWORD *)v53 + 8LL) != v53) )
      __fastfail(3u);
    v53 = *(_QWORD *)v53;
    *(_QWORD *)(v51 + 8) = &v53;
    PiDevCfgFreeDriverNode(v29, (__int64)&v53, v10);
  }
  while ( 1 )
  {
    v30 = v56;
    if ( (__int64 *)v56 == &v56 )
      break;
    if ( *(__int64 **)(v56 + 8) != &v56 || (v52 = *(_QWORD *)v56, *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56) )
      __fastfail(3u);
    v56 = *(_QWORD *)v56;
    *(_QWORD *)(v52 + 8) = &v56;
    PiDevCfgFreeDriverNode(v30, (__int64)&v56, v10);
  }
  if ( v6 )
    PiDevCfgFreeDriverNode(v6, v9, v10);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
