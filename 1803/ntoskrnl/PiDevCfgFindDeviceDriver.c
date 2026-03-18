/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x1405D749C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407310F0 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PnpMultiSzContainsString @ 0x140163168 (PnpMultiSzContainsString.c)
 *     PiDevCfgCompareDrivers @ 0x140164160 (PiDevCfgCompareDrivers.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x14023BF0C (PiDevCfgMatchDriverConfigurationId.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1405D9CD8 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  __int64 v3; // r14
  int ObjectProperty; // esi
  int v5; // edi
  __int64 v6; // r12
  int v7; // eax
  SIZE_T v8; // r13
  PVOID PoolWithTag; // rax
  __int64 v10; // r11
  _WORD *v11; // rbx
  unsigned int v12; // r15d
  const WCHAR *v13; // r14
  __int64 v14; // rax
  const wchar_t *v15; // rdi
  wchar_t *v16; // rax
  wchar_t *v17; // rbx
  int v18; // eax
  int v19; // eax
  const WCHAR *v20; // r10
  char v21; // bl
  int v22; // edx
  int DriverNode; // eax
  __int64 v24; // rdi
  const WCHAR *v25; // r14
  __int64 v26; // rax
  wchar_t *v27; // r14
  __int64 *v28; // rax
  __int64 v29; // rbx
  __int64 *v30; // rcx
  __int64 v31; // rcx
  unsigned int v33; // r13d
  PCWSTR *v34; // r15
  PCWSTR v35; // rax
  const WCHAR *v36; // rax
  __int64 v37; // rax
  bool v38; // sf
  __int64 *v39; // rax
  __int64 *v40; // rcx
  __int64 **v41; // rdx
  __int64 v42; // rax
  PVOID v43; // rax
  __int64 *v44; // rax
  bool matched; // al
  int v46; // eax
  wchar_t *v47; // rax
  wchar_t *v48; // rbx
  wchar_t *v49; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // ecx
  const wchar_t *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 i; // rdi
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v64; // [rsp+68h] [rbp-61h]
  int v65; // [rsp+70h] [rbp-59h]
  __int64 v66; // [rsp+78h] [rbp-51h] BYREF
  __int64 *v67; // [rsp+80h] [rbp-49h]
  int v68; // [rsp+88h] [rbp-41h] BYREF
  int v69; // [rsp+8Ch] [rbp-3Dh]
  const WCHAR *v70; // [rsp+90h] [rbp-39h]
  const wchar_t *v71; // [rsp+98h] [rbp-31h]
  unsigned int v72; // [rsp+A0h] [rbp-29h]
  wchar_t *Str; // [rsp+A8h] [rbp-21h]
  __int64 v74; // [rsp+B0h] [rbp-19h] BYREF
  PVOID P; // [rsp+B8h] [rbp-11h]
  int v76; // [rsp+C0h] [rbp-9h]
  __int64 v77; // [rsp+C8h] [rbp-1h]
  const wchar_t *v78; // [rsp+D0h] [rbp+7h]
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 *v81; // [rsp+140h] [rbp+77h]
  int v82; // [rsp+148h] [rbp+7Fh]

  v81 = a3;
  v64 = (__int64 *)&v63;
  v63 = (__int64 *)&v63;
  v67 = &v66;
  v66 = (__int64)&v66;
  v69 = 0;
  v3 = a1;
  Str = 0LL;
  ObjectProperty = 0;
  v78 = 0LL;
  v5 = 0;
  v68 = 1;
  v6 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v74 = 0LL;
  if ( a2 )
  {
    Str = a2;
    v42 = -1LL;
    do
      ++v42;
    while ( a2[v42] );
    v78 = (const wchar_t *)((unsigned __int64)&a2[v42 + 1] & -(__int64)(a2[v42 + 1] != 0));
  }
  v7 = 1;
  LODWORD(v8) = 520;
  if ( PnpSetupInProgress )
    v7 = 3;
  v77 = 520LL;
  v76 = v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x208uLL, 0x63647050u);
  v10 = 0LL;
  P = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ObjectProperty = -1073741670;
    goto LABEL_49;
  }
  v12 = 0;
  v72 = 0;
  while ( 1 )
  {
    v13 = *(const WCHAR **)(v3 + 16 * (v12 + 2LL));
    v70 = v13;
    if ( !v13 )
      goto LABEL_7;
    v65 = v10;
    while ( *v13 != (_WORD)v10 )
    {
      v68 = 1;
      LODWORD(NumberOfBytes) = v10;
      do
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v13,
                           0xBu,
                           -1LL,
                           v10,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v68,
                           (__int64)v11,
                           v8,
                           (__int64)&NumberOfBytes,
                           v10);
        if ( ObjectProperty != -1073741789 )
        {
          v10 = 0LL;
          goto LABEL_13;
        }
        if ( (unsigned int)NumberOfBytes <= (unsigned int)v8 )
        {
          v10 = 0LL;
          goto LABEL_19;
        }
        v8 = (unsigned int)NumberOfBytes;
        v77 = (unsigned int)NumberOfBytes;
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        v43 = ExAllocatePoolWithTag(PagedPool, v8, 0x63647050u);
        v10 = 0LL;
        P = v43;
        v11 = v43;
      }
      while ( v43 );
      ObjectProperty = -1073741670;
LABEL_13:
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty >= 0 )
      {
        if ( v68 != 8210 )
          goto LABEL_20;
        v15 = v11;
        if ( !*v11 )
          goto LABEL_20;
        while ( 2 )
        {
          v16 = wcschr(v15, 0x5Cu);
          v10 = 0LL;
          v17 = v16;
          if ( v16 )
          {
            v18 = DrvDbSplitDeviceIdDriverInfMatch(v15, 0LL, 0LL);
            v10 = 0LL;
            ObjectProperty = v18;
            if ( v18 < 0 )
              goto LABEL_20;
            v19 = v76;
            v20 = v15;
            *v17 = 0;
            v15 = v17 + 1;
            v21 = v82;
            v22 = v19;
            v71 = v15;
            if ( v12 == 2 )
            {
              if ( (_BYTE)v82 == 3 )
              {
                v22 = v19 | 8;
                goto LABEL_31;
              }
            }
            else
            {
LABEL_31:
              if ( (_BYTE)v82 == 1 || (_BYTE)v82 == 2 || (_BYTE)v82 == 3 )
              {
                DriverNode = PiDevCfgQueryDriverNode(v20, v13, v22, (__int64)&v74);
                v10 = 0LL;
                ObjectProperty = DriverNode;
                if ( DriverNode < 0 )
                {
                  ObjectProperty = 0;
                }
                else
                {
                  v24 = v74;
                  v25 = *(const WCHAR **)(v74 + 152);
                  if ( v25 )
                  {
                    if ( *v25 )
                    {
                      do
                      {
                        v33 = 0;
                        v34 = (PCWSTR *)(a1 + 32);
                        while ( 1 )
                        {
                          if ( *v34 )
                          {
                            v35 = PnpMultiSzContainsString(*v34, v25);
                            v10 = 0LL;
                            if ( v35 )
                              break;
                          }
                          ++v33;
                          v34 += 2;
                          if ( v33 >= 3 )
                          {
                            v36 = *(const WCHAR **)(v24 + 160);
                            goto LABEL_62;
                          }
                        }
                        *(_QWORD *)(v24 + 160) = v25;
                        v36 = v25;
LABEL_62:
                        if ( v36 )
                          break;
                        v37 = -1LL;
                        do
                          ++v37;
                        while ( v25[v37] );
                        v25 += v37 + 1;
                      }
                      while ( *v25 );
                      v21 = v82;
                      v12 = v72;
                    }
                    if ( *(_QWORD *)(v24 + 160) )
                      *(_DWORD *)(v24 + 108) |= 0xFFFFu;
                  }
                  if ( v21 == 3 )
                  {
                    v44 = v67;
                    if ( (__int64 *)*v67 != &v66 )
                      __fastfail(3u);
                    *(_QWORD *)(v24 + 8) = v67;
                    *(_QWORD *)v24 = &v66;
                    *v44 = v24;
                    v67 = (__int64 *)v24;
                  }
                  else
                  {
                    if ( Str )
                    {
                      matched = PiDevCfgMatchDriverConfigurationId(v24, Str);
                      v10 = 0LL;
                      if ( !matched )
                      {
                        v39 = v64;
                        if ( (__int64 **)*v64 != &v63 )
                          __fastfail(3u);
                        goto LABEL_73;
                      }
                    }
                    if ( *(_QWORD *)(v24 + 160) )
                    {
                      v39 = v64;
                      if ( (__int64 **)*v64 != &v63 )
                        __fastfail(3u);
LABEL_73:
                      *(_QWORD *)v24 = &v63;
                      *(_QWORD *)(v24 + 8) = v39;
                      *v39 = v24;
                      v64 = (__int64 *)v24;
                    }
                    else
                    {
                      if ( !v6 )
                        goto LABEL_38;
                      v38 = (int)PiDevCfgCompareDrivers(v24, v6) < 0;
                      v39 = v64;
                      if ( !v38 )
                      {
                        if ( (__int64 **)*v64 != &v63 )
                          __fastfail(3u);
                        goto LABEL_73;
                      }
                      if ( (__int64 **)*v64 != &v63 )
                        __fastfail(3u);
                      *(_QWORD *)(v6 + 8) = v64;
                      *(_QWORD *)v6 = &v63;
                      *v39 = v6;
                      v64 = (__int64 *)v6;
                      if ( (*(_DWORD *)(v6 + 168) & 0xC) != 0 )
                      {
                        v46 = *(_DWORD *)(v24 + 168);
                        if ( (v46 & 4) == 0 )
                          *(_DWORD *)(v24 + 168) = v46 | 8;
                      }
LABEL_38:
                      v6 = v24;
                    }
                  }
                  v13 = v70;
                  v15 = v71;
                }
              }
            }
          }
          v26 = -1LL;
          do
            ++v26;
          while ( v15[v26] != (_WORD)v10 );
          v15 += v26 + 1;
          if ( *v15 == (_WORD)v10 )
            goto LABEL_20;
          continue;
        }
      }
      if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
      {
        if ( v5 != -1073741772 )
          v5 = ObjectProperty;
        v69 = v5;
      }
      else if ( ObjectProperty == -1073741772 )
      {
        v69 = -1073741772;
      }
LABEL_19:
      ObjectProperty = 0;
LABEL_20:
      v14 = -1LL;
      do
        ++v14;
      while ( v13[v14] != (_WORD)v10 );
      v5 = v69;
      v11 = P;
      v13 += v14 + 1;
      ++v65;
      LODWORD(v8) = v77;
      v70 = v13;
    }
    if ( ObjectProperty < 0 )
      goto LABEL_49;
    v11 = P;
    LODWORD(v8) = v77;
LABEL_7:
    v72 = ++v12;
    if ( v12 >= 3 )
      break;
    v3 = a1;
  }
  v27 = Str;
  if ( !Str )
    goto LABEL_45;
  if ( v6 )
  {
LABEL_46:
    while ( 1 )
    {
      v28 = v63;
      if ( v63 == (__int64 *)&v63 )
        break;
      if ( (__int64 **)v63[1] != &v63 || (v40 = (__int64 *)*v63, *(__int64 **)(*v63 + 8) != v63) )
        __fastfail(3u);
      v63 = (__int64 *)*v63;
      v40[1] = (__int64)&v63;
      v41 = *(__int64 ***)(v6 + 216);
      if ( *v41 != (__int64 *)(v6 + 208) )
        __fastfail(3u);
      *v28 = v6 + 208;
      v28[1] = (__int64)v41;
      *v41 = v28;
      *(_QWORD *)(v6 + 216) = v28;
    }
    while ( 1 )
    {
      v29 = v66;
      if ( (__int64 *)v66 == &v66 )
      {
        *v81 = v6;
        v6 = v10;
        goto LABEL_49;
      }
      if ( *(__int64 **)(v66 + 8) != &v66 || (v51 = *(_QWORD *)v66, *(_QWORD *)(*(_QWORD *)v66 + 8LL) != v66) )
        __fastfail(3u);
      v66 = *(_QWORD *)v66;
      *(_QWORD *)(v51 + 8) = &v66;
      if ( PnpIsNullGuid((void *)(v29 + 172)) || *(_QWORD *)(v29 + 160) )
        goto LABEL_139;
      if ( v27 )
      {
        if ( !v78 )
          goto LABEL_139;
        v52 = *v78 - asc_1406584F0[0];
        if ( !v52 )
          v52 = v78[1] - asc_1406584F0[1];
        if ( v52 )
        {
          v53 = v78;
          if ( !*v78 )
            goto LABEL_139;
          while ( !PiDevCfgMatchDriverConfigurationId(v29, v53) )
          {
            v54 = -1LL;
            do
              ++v54;
            while ( v53[v54] );
            v53 += v54 + 1;
            if ( !*v53 )
              goto LABEL_139;
          }
        }
        if ( v29 )
          goto LABEL_141;
LABEL_139:
        PiDevCfgFreeDriverNode(v29);
        v10 = 0LL;
      }
      else
      {
LABEL_141:
        v55 = v6 + 192;
        for ( i = *(_QWORD *)(v6 + 192); i != v55; i = *(_QWORD *)i )
        {
          v57 = *(_QWORD *)(i + 172) - *(_QWORD *)(v29 + 172);
          if ( !v57 )
            v57 = *(_QWORD *)(i + 180) - *(_QWORD *)(v29 + 180);
          if ( !v57 && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 72), (PCUNICODE_STRING)(v29 + 72), 1u) )
          {
            if ( (int)PiDevCfgCompareDrivers(v29, i) >= 0 )
            {
              i = v29;
              v29 = 0LL;
            }
            else
            {
              v58 = *(_QWORD *)i;
              if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v59 = *(__int64 **)(i + 8), *v59 != i) )
                __fastfail(3u);
              *v59 = v58;
              *(_QWORD *)(v58 + 8) = v59;
            }
            if ( i )
              PiDevCfgFreeDriverNode(i);
            break;
          }
        }
        v10 = 0LL;
        if ( v29 )
        {
          v60 = *(__int64 **)(v6 + 200);
          if ( *v60 != v55 )
            __fastfail(3u);
          *(_QWORD *)v29 = v55;
          *(_QWORD *)(v29 + 8) = v60;
          *v60 = v29;
          *(_QWORD *)(v6 + 200) = v29;
        }
        v27 = Str;
      }
    }
  }
  v47 = wcschr(Str, 0x3Au);
  v48 = v47;
  if ( !v47 || (*v47 = 0, (v49 = wcschr(v47 + 1, 0x2Cu)) == 0LL) )
  {
    ObjectProperty = -1073741773;
    goto LABEL_49;
  }
  *v49 = 0;
  v50 = PiDevCfgQueryDriverNode(v27, v48 + 1, 4, (__int64)&v74);
  v10 = 0LL;
  if ( v50 >= 0 )
  {
    v6 = v74;
LABEL_45:
    if ( v6 )
      goto LABEL_46;
  }
  if ( v5 && v5 != -1073741772 )
    ObjectProperty = v5;
  else
    ObjectProperty = -1073740656;
LABEL_49:
  while ( 1 )
  {
    v30 = v63;
    if ( v63 == (__int64 *)&v63 )
      break;
    if ( (__int64 **)v63[1] != &v63 || (v61 = *v63, *(__int64 **)(*v63 + 8) != v63) )
      __fastfail(3u);
    v63 = (__int64 *)*v63;
    *(_QWORD *)(v61 + 8) = &v63;
    PiDevCfgFreeDriverNode(v30);
  }
  while ( 1 )
  {
    v31 = v66;
    if ( (__int64 *)v66 == &v66 )
      break;
    if ( *(__int64 **)(v66 + 8) != &v66 || (v62 = *(_QWORD *)v66, *(_QWORD *)(*(_QWORD *)v66 + 8LL) != v66) )
      __fastfail(3u);
    v66 = *(_QWORD *)v66;
    *(_QWORD *)(v62 + 8) = &v66;
    PiDevCfgFreeDriverNode(v31);
  }
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
