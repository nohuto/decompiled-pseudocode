/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpDuplicateUnicodeString @ 0x140133158 (PnpDuplicateUnicodeString.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     wcsrchr @ 0x140160610 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401FF2C8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401FF600 (PiDevCfgPushDriverNodeEntry.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgAppendMultiSz @ 0x1406C4A18 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  _QWORD **v2; // rcx
  int DriverConfiguration; // ebx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rdi
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  wchar_t *v10; // rax
  const wchar_t *v11; // r12
  wchar_t v12; // cx
  bool v13; // cf
  wchar_t v14; // cx
  int v15; // eax
  wchar_t *v16; // rax
  int v17; // r8d
  unsigned int v18; // r13d
  wchar_t *v19; // rax
  wchar_t *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 *v23; // rdi
  wchar_t *v24; // r15
  __int64 *v25; // r13
  int v26; // eax
  __int64 *v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // [rsp+30h] [rbp-38h]
  _QWORD *v33; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v37; // [rsp+B8h] [rbp+50h]
  __int64 *v38; // [rsp+C0h] [rbp+58h] BYREF
  wchar_t *Str2; // [rsp+C8h] [rbp+60h]

  v1 = a1;
  v33 = &v33;
  v2 = &v33;
  P = &v33;
  if ( *(_QWORD *)(v1 + 344) )
  {
    DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v33, v1);
    if ( DriverConfiguration < 0 )
      goto LABEL_59;
    while ( v33 != &v33 )
    {
      v5 = P;
      if ( *(_QWORD ***)P != &v33 || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
        __fastfail(3u);
      P = (PVOID)*((_QWORD *)P + 1);
      *v6 = &v33;
      v7 = v5[2];
      v32 = v7;
      ExFreePoolWithTag(v5, 0);
      v8 = *(wchar_t **)(v7 + 344);
      if ( v8 )
      {
        while ( *v8 )
        {
          v9 = v8;
          v10 = wcschr(v8, 0x3Au);
          if ( v10 )
          {
            *v10 = 0;
            v11 = v10 + 1;
            v12 = *v8;
            v8 = v10 + 1;
            v13 = v12 < asc_1405F5890[0];
            if ( v12 == asc_1405F5890[0] && (v14 = v9[1], v13 = v14 < asc_1405F5890[1], v14 == asc_1405F5890[1]) )
              v15 = 0;
            else
              v15 = v13 ? -1 : 1;
            Str2 = (wchar_t *)((unsigned __int64)v9 & -(__int64)(v15 != 0));
            v16 = wcsrchr(v11, 0x2Eu);
            if ( v16 )
            {
              *v16 = 0;
              v8 = v16 + 1;
              v17 = v16[1] - asc_1405F5890[0];
              if ( !v17 )
                v17 = v16[2] - asc_1405F5890[1];
              if ( v17 )
              {
                v8 = v16 + 1;
                v18 = 0;
                v37 = 0;
                if ( v16[1] )
                {
                  do
                  {
                    v19 = wcschr(v8, 0x2Cu);
                    if ( v19 )
                    {
                      *v19 = 0;
                      v20 = v19 + 1;
                    }
                    else
                    {
                      v21 = -1LL;
                      do
                        ++v21;
                      while ( v8[v21] );
                      v20 = &v8[v21];
                    }
                    v18 |= PiDevCfgGetDriverConfigurationKeyScope(v8);
                    v8 = v20;
                  }
                  while ( *v20 );
                  v37 = v18;
                }
              }
              else
              {
                v37 = -1;
              }
              v38 = 0LL;
              RtlInitUnicodeString(&DestinationString, v11);
              v22 = v1 + 352;
              v23 = *(__int64 **)(v1 + 352);
              if ( v23 == (__int64 *)(v1 + 352) )
                goto LABEL_36;
              v24 = Str2;
              do
              {
                v38 = v23;
                v25 = v23;
                if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v23 + 11), &DestinationString, 1u)
                  && (!v24 || !wcsicmp((const wchar_t *)v23[6], v24)) )
                {
                  break;
                }
                v23 = (__int64 *)*v23;
                v25 = 0LL;
                v38 = 0LL;
              }
              while ( v23 != (__int64 *)v22 );
              v1 = a1;
              if ( !v25 )
              {
LABEL_36:
                v26 = PiDevCfgQueryIncludedDriverNode(v32, Str2, v11, v37, &v38);
                DriverConfiguration = v26;
                if ( v26 < 0 )
                {
                  *(_DWORD *)(v1 + 396) = v26;
                  break;
                }
                v27 = *(__int64 **)(v22 + 8);
                if ( *v27 != v22 )
                  __fastfail(3u);
                v28 = v38;
                v29 = (__int64)v38;
                *v38 = v22;
                *(_QWORD *)(v29 + 8) = v27;
                *v27 = v29;
                *(_QWORD *)(v22 + 8) = v29;
                DriverConfiguration = PiDevCfgQueryDriverConfiguration(v29);
                if ( DriverConfiguration < 0 )
                  goto LABEL_59;
                if ( v28[35] && !*(_QWORD *)(v1 + 280) && !PnpDuplicateUnicodeString(v1 + 272, (__int64)(v28 + 34)) )
                {
                  DriverConfiguration = -1073741670;
                  break;
                }
                if ( v28[37] )
                {
                  DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 288));
                  if ( DriverConfiguration < 0 )
                    goto LABEL_59;
                }
                if ( v28[39] )
                {
                  DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304));
                  if ( DriverConfiguration < 0 )
                    goto LABEL_59;
                }
                DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v33, (__int64)v28);
                if ( DriverConfiguration < 0 )
                  goto LABEL_59;
              }
            }
          }
          v30 = -1LL;
          do
            ++v30;
          while ( v8[v30] );
          v8 += v30 + 1;
        }
        if ( DriverConfiguration < 0 )
          goto LABEL_59;
      }
    }
  }
  else
  {
    DriverConfiguration = 0;
    while ( v33 != &v33 )
    {
      if ( *v2 != &v33 || (v31 = v2[1], (_QWORD **)*v31 != v2) )
        __fastfail(3u);
      P = v2[1];
      *v31 = &v33;
      ExFreePoolWithTag(v2, 0);
LABEL_59:
      v2 = (_QWORD **)P;
    }
  }
  return (unsigned int)DriverConfiguration;
}
