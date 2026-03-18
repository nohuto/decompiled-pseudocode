/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x14058EEF8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14069EB7C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x14014FBC4 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x14014FC94 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1401F9578 (PiDevCfgMatchDriverConfigurationId.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14058F3B8 (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14058FB54 (DrvDbSplitDeviceIdDriverInfMatch.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  int v4; // r14d
  int v5; // edi
  __int64 v6; // r13
  int v7; // eax
  SIZE_T v8; // r12
  PVOID PoolWithTag; // rax
  __int64 v10; // r11
  _WORD *v11; // r15
  const WCHAR **v12; // rcx
  unsigned int v13; // eax
  const WCHAR *v14; // rsi
  wchar_t *v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v21; // ebx
  int ObjectProperty; // eax
  const wchar_t *v23; // rdi
  wchar_t *v24; // rax
  wchar_t *v25; // rbx
  int v26; // eax
  unsigned int v27; // eax
  int v28; // ecx
  const WCHAR *v29; // r10
  char v30; // bl
  int v31; // edx
  int DriverNode; // eax
  __int64 v33; // rdi
  const WCHAR *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  PCWSTR *v37; // rbx
  unsigned int v38; // r12d
  PCWSTR *v39; // r15
  PCWSTR v40; // rax
  __int64 v41; // rax
  bool v42; // sf
  __int64 *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // rax
  PVOID v47; // rax
  __int64 *v48; // rax
  bool matched; // al
  int v50; // eax
  wchar_t *v51; // rax
  wchar_t *v52; // rbx
  wchar_t *v53; // rax
  int v54; // eax
  __int64 v55; // rax
  int v56; // ecx
  const wchar_t *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 i; // rdi
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v68; // [rsp+68h] [rbp-51h]
  int v69; // [rsp+70h] [rbp-49h]
  unsigned int v70; // [rsp+74h] [rbp-45h]
  __int64 v71; // [rsp+78h] [rbp-41h] BYREF
  __int64 *v72; // [rsp+80h] [rbp-39h]
  int v73; // [rsp+88h] [rbp-31h] BYREF
  int v74; // [rsp+8Ch] [rbp-2Dh]
  const WCHAR *v75; // [rsp+90h] [rbp-29h]
  const wchar_t *v76; // [rsp+98h] [rbp-21h]
  wchar_t *Str; // [rsp+A0h] [rbp-19h]
  __int64 v78; // [rsp+A8h] [rbp-11h] BYREF
  PVOID P; // [rsp+B0h] [rbp-9h]
  int v80; // [rsp+B8h] [rbp-1h]
  __int64 v81; // [rsp+C0h] [rbp+7h]
  const WCHAR **v82; // [rsp+C8h] [rbp+Fh]
  const wchar_t *v83; // [rsp+D0h] [rbp+17h]
  PCWSTR *v84; // [rsp+D8h] [rbp+1Fh]
  int v85; // [rsp+128h] [rbp+6Fh]
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+7Fh] BYREF

  v68 = &v67;
  v67 = (__int64)&v67;
  v72 = &v71;
  v71 = (__int64)&v71;
  v74 = 0;
  Str = 0LL;
  v4 = 0;
  v83 = 0LL;
  v5 = 0;
  v73 = 1;
  v6 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v78 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v46 = -1LL;
    do
      ++v46;
    while ( a2[v46] );
    v83 = (const wchar_t *)((unsigned __int64)&a2[v46 + 1] & -(__int64)(a2[v46 + 1] != 0));
  }
  v7 = 1;
  LODWORD(v8) = 520;
  if ( PnpSetupInProgress )
    v7 = 3;
  v81 = 520LL;
  v80 = v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = 0LL;
  P = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_13;
  }
  v12 = (const WCHAR **)(a1 + 32);
  v13 = 0;
  v70 = 0;
  v84 = (PCWSTR *)(a1 + 32);
  v82 = (const WCHAR **)(a1 + 32);
  do
  {
    v14 = *v12;
    v75 = v14;
    if ( !v14 )
      goto LABEL_7;
    v21 = v10;
    v85 = v10;
    if ( *v14 != (_WORD)v10 )
    {
      do
      {
        v73 = 1;
        LODWORD(NumberOfBytes) = v10;
        while ( 1 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v14,
                             0xAu,
                             -1LL,
                             v10,
                             (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                             (__int64)&v73,
                             (__int64)v11,
                             v8,
                             (__int64)&NumberOfBytes,
                             v10);
          v10 = 0LL;
          v4 = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( (unsigned int)NumberOfBytes <= (unsigned int)v8 )
            goto LABEL_88;
          v8 = (unsigned int)NumberOfBytes;
          v81 = (unsigned int)NumberOfBytes;
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          v47 = ExAllocatePoolWithTag(PagedPool, v8, 0x63647050u);
          v10 = 0LL;
          P = v47;
          v11 = v47;
          if ( !v47 )
          {
            v4 = -1073741670;
            break;
          }
        }
        if ( v4 == -1073741670 )
          break;
        if ( v4 < 0 )
        {
          if ( v4 == -1073741790 || v4 == -1073740697 )
          {
            if ( v5 != -1073741772 )
              v5 = v4;
            v74 = v5;
          }
          else if ( v4 == -1073741772 )
          {
            v74 = -1073741772;
          }
LABEL_88:
          v4 = 0;
          goto LABEL_43;
        }
        if ( v73 == 8210 )
        {
          v23 = v11;
          if ( *v11 )
          {
            while ( 1 )
            {
              v24 = wcschr(v23, 0x5Cu);
              v10 = 0LL;
              v25 = v24;
              if ( !v24 )
                goto LABEL_39;
              v26 = DrvDbSplitDeviceIdDriverInfMatch(v23, 0LL, 0LL);
              v10 = 0LL;
              v4 = v26;
              if ( v26 < 0 )
                goto LABEL_42;
              v27 = v70;
              v28 = v80;
              v29 = v23;
              *v25 = 0;
              v23 = v25 + 1;
              v30 = v69;
              v31 = v28;
              v76 = v23;
              if ( v27 == 2 )
              {
                if ( (_BYTE)v69 != 3 )
                  goto LABEL_39;
                v31 = v28 | 8;
              }
              if ( (_BYTE)v69 != 1 && (_BYTE)v69 != 2 && (_BYTE)v69 != 3 )
                goto LABEL_39;
              DriverNode = PiDevCfgQueryDriverNode(v29, v14, v31, (__int64)&v78);
              v10 = 0LL;
              v4 = DriverNode;
              if ( DriverNode >= 0 )
              {
                v33 = v78;
                v34 = *(const WCHAR **)(v78 + 152);
                if ( v34 )
                {
                  if ( *v34 )
                  {
                    v37 = v84;
                    do
                    {
                      v38 = 0;
                      v39 = v37;
                      while ( 1 )
                      {
                        if ( *v39 )
                        {
                          v40 = PnpMultiSzContainsString(*v39, v34);
                          v10 = 0LL;
                          if ( v40 )
                            break;
                        }
                        ++v38;
                        v39 += 2;
                        if ( v38 >= 3 )
                          goto LABEL_55;
                      }
                      *(_QWORD *)(v33 + 160) = v34;
LABEL_55:
                      if ( *(_QWORD *)(v33 + 160) )
                        break;
                      v41 = -1LL;
                      do
                        ++v41;
                      while ( v34[v41] );
                      v34 += v41 + 1;
                    }
                    while ( *v34 );
                    v30 = v69;
                  }
                  if ( *(_QWORD *)(v33 + 160) )
                    *(_DWORD *)(v33 + 108) |= 0xFFFFu;
                }
                if ( v30 == 3 )
                {
                  v48 = v72;
                  if ( (__int64 *)*v72 != &v71 )
                    __fastfail(3u);
                  *(_QWORD *)(v33 + 8) = v72;
                  *(_QWORD *)v33 = &v71;
                  *v48 = v33;
                  v72 = (__int64 *)v33;
                }
                else
                {
                  if ( Str )
                  {
                    matched = PiDevCfgMatchDriverConfigurationId(v33, Str);
                    v10 = 0LL;
                    if ( !matched )
                    {
                      v43 = v68;
                      if ( (__int64 *)*v68 != &v67 )
                        __fastfail(3u);
                      goto LABEL_64;
                    }
                  }
                  if ( *(_QWORD *)(v33 + 160) )
                  {
                    v43 = v68;
                    if ( (__int64 *)*v68 != &v67 )
                      __fastfail(3u);
LABEL_64:
                    *(_QWORD *)v33 = &v67;
                    *(_QWORD *)(v33 + 8) = v43;
                    *v43 = v33;
                    v68 = (__int64 *)v33;
                  }
                  else
                  {
                    if ( !v6 )
                      goto LABEL_37;
                    v42 = (int)PiDevCfgCompareDrivers(v33, v6) < 0;
                    v43 = v68;
                    if ( !v42 )
                    {
                      if ( (__int64 *)*v68 != &v67 )
                        __fastfail(3u);
                      goto LABEL_64;
                    }
                    if ( (__int64 *)*v68 != &v67 )
                      __fastfail(3u);
                    *(_QWORD *)(v6 + 8) = v68;
                    *(_QWORD *)v6 = &v67;
                    *v43 = v6;
                    v68 = (__int64 *)v6;
                    if ( (*(_DWORD *)(v6 + 168) & 0xC) != 0 )
                    {
                      v50 = *(_DWORD *)(v33 + 168);
                      if ( (v50 & 4) == 0 )
                        *(_DWORD *)(v33 + 168) = v50 | 8;
                    }
LABEL_37:
                    v6 = v33;
                  }
                }
                v14 = v75;
                v23 = v76;
                goto LABEL_39;
              }
              v4 = 0;
LABEL_39:
              v35 = -1LL;
              do
                ++v35;
              while ( v23[v35] != (_WORD)v10 );
              v23 += v35 + 1;
              if ( *v23 == (_WORD)v10 )
              {
LABEL_42:
                v21 = v85;
                break;
              }
            }
          }
        }
LABEL_43:
        v36 = -1LL;
        do
          ++v36;
        while ( v14[v36] != (_WORD)v10 );
        v5 = v74;
        v11 = P;
        v14 += v36 + 1;
        LODWORD(v8) = v81;
        ++v21;
        v75 = v14;
        v85 = v21;
      }
      while ( *v14 != (_WORD)v10 );
      v12 = v82;
      v13 = v70;
    }
    if ( v4 < 0 )
      goto LABEL_13;
    v11 = P;
    LODWORD(v8) = v81;
LABEL_7:
    ++v13;
    v12 += 2;
    v70 = v13;
    v82 = v12;
  }
  while ( v13 < 3 );
  v15 = Str;
  if ( !Str )
    goto LABEL_9;
  if ( v6 )
  {
LABEL_10:
    while ( 1 )
    {
      v16 = (_QWORD *)v67;
      if ( (__int64 *)v67 == &v67 )
        break;
      v44 = *(_QWORD *)v67;
      if ( *(__int64 **)(v67 + 8) != &v67 || *(_QWORD *)(v44 + 8) != v67 )
        __fastfail(3u);
      v67 = *(_QWORD *)v67;
      *(_QWORD *)(v44 + 8) = &v67;
      v45 = *(_QWORD **)(v6 + 216);
      if ( *v45 != v6 + 208 )
        __fastfail(3u);
      *v16 = v6 + 208;
      v16[1] = v45;
      *v45 = v16;
      *(_QWORD *)(v6 + 216) = v16;
    }
    while ( 1 )
    {
      v17 = v71;
      if ( (__int64 *)v71 == &v71 )
      {
        *a3 = v6;
        v6 = v10;
        goto LABEL_13;
      }
      v55 = *(_QWORD *)v71;
      if ( *(__int64 **)(v71 + 8) != &v71 || *(_QWORD *)(v55 + 8) != v71 )
        __fastfail(3u);
      v71 = *(_QWORD *)v71;
      *(_QWORD *)(v55 + 8) = &v71;
      if ( PnpIsNullGuid((void *)(v17 + 172)) || *(_QWORD *)(v17 + 160) )
        goto LABEL_135;
      if ( !v15 )
        goto LABEL_136;
      if ( !v83 )
        goto LABEL_135;
      v56 = *v83 - asc_140750958[0];
      if ( !v56 )
        v56 = v83[1] - asc_140750958[1];
      if ( !v56 )
        goto LABEL_136;
      v57 = v83;
      if ( !*v83 )
      {
LABEL_135:
        PiDevCfgFreeDriverNode(v17);
        v10 = 0LL;
      }
      else
      {
        while ( !PiDevCfgMatchDriverConfigurationId(v17, v57) )
        {
          v58 = -1LL;
          do
            ++v58;
          while ( v57[v58] );
          v57 += v58 + 1;
          if ( !*v57 )
            goto LABEL_135;
        }
LABEL_136:
        v59 = v6 + 192;
        for ( i = *(_QWORD *)(v6 + 192); i != v59; i = *(_QWORD *)i )
        {
          v61 = *(_QWORD *)(i + 172) - *(_QWORD *)(v17 + 172);
          if ( !v61 )
            v61 = *(_QWORD *)(i + 180) - *(_QWORD *)(v17 + 180);
          if ( !v61 && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 72), (PCUNICODE_STRING)(v17 + 72), 1u) )
          {
            if ( (int)PiDevCfgCompareDrivers(v17, i) >= 0 )
            {
              i = v17;
              v17 = 0LL;
            }
            else
            {
              v62 = *(_QWORD *)i;
              v63 = *(__int64 **)(i + 8);
              if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v63 != i )
                __fastfail(3u);
              *v63 = v62;
              *(_QWORD *)(v62 + 8) = v63;
            }
            if ( i )
              PiDevCfgFreeDriverNode(i);
            break;
          }
        }
        v10 = 0LL;
        if ( v17 )
        {
          v64 = *(__int64 **)(v6 + 200);
          if ( *v64 != v59 )
            __fastfail(3u);
          *(_QWORD *)v17 = v59;
          *(_QWORD *)(v17 + 8) = v64;
          *v64 = v17;
          *(_QWORD *)(v6 + 200) = v17;
        }
        v15 = Str;
      }
    }
  }
  v51 = wcschr(Str, 0x3Au);
  v52 = v51;
  if ( !v51 || (*v51 = 0, (v53 = wcschr(v51 + 1, 0x2Cu)) == 0LL) )
  {
    v4 = -1073741773;
    goto LABEL_13;
  }
  *v53 = 0;
  v54 = PiDevCfgQueryDriverNode(v15, v52 + 1, 4, (__int64)&v78);
  v10 = 0LL;
  if ( v54 >= 0 )
  {
    v6 = v78;
LABEL_9:
    if ( v6 )
      goto LABEL_10;
  }
  if ( !v5 || v5 == -1073741772 )
    v4 = -1073740656;
  else
    v4 = v5;
LABEL_13:
  while ( 1 )
  {
    v18 = v67;
    if ( (__int64 *)v67 == &v67 )
      break;
    v65 = *(_QWORD *)v67;
    if ( *(__int64 **)(v67 + 8) != &v67 || *(_QWORD *)(v65 + 8) != v67 )
      __fastfail(3u);
    v67 = *(_QWORD *)v67;
    *(_QWORD *)(v65 + 8) = &v67;
    PiDevCfgFreeDriverNode(v18);
  }
  while ( 1 )
  {
    v19 = v71;
    if ( (__int64 *)v71 == &v71 )
      break;
    v66 = *(_QWORD *)v71;
    if ( *(__int64 **)(v71 + 8) != &v71 || *(_QWORD *)(v66 + 8) != v71 )
      __fastfail(3u);
    v71 = *(_QWORD *)v71;
    *(_QWORD *)(v66 + 8) = &v71;
    PiDevCfgFreeDriverNode(v19);
  }
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
