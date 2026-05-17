/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180032530
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     sub_180034B2C @ 0x180034B2C (sub_180034B2C.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180030D2C @ 0x180030D2C (sub_180030D2C.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_180032030 @ 0x180032030 (sub_180032030.c)
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     sub_180032B9C @ 0x180032B9C (sub_180032B9C.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     sub_1800359B0 @ 0x1800359B0 (sub_1800359B0.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006E920 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 *     sub_1800801CC @ 0x1800801CC (sub_1800801CC.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, __int64 a2, _WORD *a3, _DWORD *a4)
{
  int v4; // r14d
  __int64 v6; // rsi
  bool v7; // r15
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // r12d
  __int64 result; // rax
  int v12; // ebx
  void *MergedPrefLanguages; // rcx
  __int64 v14; // rdx
  __int64 v15; // r13
  char v16; // cl
  void *v17; // rsi
  void *v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 *v21; // r14
  char v22; // [rsp+58h] [rbp-49h]
  __int64 v23; // [rsp+60h] [rbp-41h] BYREF
  void *v24; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+70h] [rbp-31h]
  __int64 v26; // [rsp+78h] [rbp-29h]
  void *PreferredLanguages; // [rsp+80h] [rbp-21h]
  int v28; // [rsp+88h] [rbp-19h]
  __int64 v29; // [rsp+90h] [rbp-11h]
  __int64 v30; // [rsp+98h] [rbp-9h] BYREF
  int v31; // [rsp+A0h] [rbp-1h]
  __int64 v32; // [rsp+A8h] [rbp+7h]
  char v33; // [rsp+108h] [rbp+67h] BYREF
  __int64 v34; // [rsp+110h] [rbp+6Fh]
  _WORD *v35; // [rsp+118h] [rbp+77h]
  _DWORD *v36; // [rsp+120h] [rbp+7Fh]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v4 = a1 & 0x30;
  v28 = 0;
  v25 = 0;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 0;
  v30 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  v32 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v29 = 0LL;
  v31 = v4;
  if ( a4 )
    v28 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 || (a1 & 0xC) == 0xC )
    goto LABEL_71;
  v9 = a1 | 8;
  if ( (a1 & 0xC) != 0 )
    v9 = a1;
  if ( (v9 & 0x10000) != 0 )
  {
    if ( (v9 & 0x40) != 0 || (v9 & 0x30) != 0 )
      goto LABEL_71;
    v9 |= 0x30u;
  }
  if ( (v9 & 0x40) != 0 && (v9 & 0x30) != 0 )
    goto LABEL_71;
  v10 = v9 | 0x20;
  if ( (v9 & 0x70) != 0 )
    v10 = v9;
  if ( !a4 )
    goto LABEL_71;
  if ( !*a4 || a3 )
  {
    if ( (v10 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v23);
      if ( (int)result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v8 = v23;
        if ( *(_DWORD *)(v23 + 12) == MEMORY[0x7FFE03A4] || (int)sub_18006E740() < 0 )
          goto LABEL_18;
        v23 = 0LL;
        v12 = RtlpCreateProcessRegistryInfo(&v23);
        if ( v12 < 0 )
          goto LABEL_98;
      }
      v8 = v23;
LABEL_18:
      if ( (v10 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v8 = v23;
        goto LABEL_22;
      }
      v33 = 0;
      PreferredLanguages = 0LL;
      if ( *(_DWORD *)(v8 + 12) == MEMORY[0x7FFE03A4] )
      {
LABEL_22:
        if ( (v10 & 0x40) == 0 )
        {
          v12 = sub_18003185C(0, v8);
          if ( v12 < 0 )
            goto LABEL_72;
          v26 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v8 = v23;
          v29 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v23 + 48);
          v12 = sub_180031B44(v23, 0);
          if ( v12 < 0 )
            goto LABEL_72;
          v6 = *(_QWORD *)(v8 + 56);
        }
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        if ( MergedPrefLanguages && v4 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v23 + 16) )
          {
            v7 = MergedPrefLanguages != 0LL;
            v8 = v23;
            v15 = v26;
            v17 = NtCurrentTeb()->MergedPrefLanguages;
            v24 = v17;
LABEL_45:
            v12 = sub_1800359B0((_DWORD)v17, v8, (_DWORD)v35, (_DWORD)v36, v10, 0, v34);
            if ( ((int)(v12 + 0x80000000) < 0 || v12 == -1073741789) && v4 == 48 )
            {
              if ( !*((_WORD *)v17 + 22) )
                sub_180040650(v17);
              if ( !v7 )
              {
                if ( (*((_BYTE *)v17 + 40) & 0x40) == 0 )
                {
                  sub_180030D2C((__int64)v17);
                  if ( !PreferredLanguages && (*(_BYTE *)(v15 + 40) & 0x40) != 0 && v29 == *(_QWORD *)(v8 + 48) )
                    sub_1800801CC(v8, v17);
                }
                NtCurrentTeb()->MergedPrefLanguages = v24;
                v8 = v23;
                NtCurrentTeb()->MuiGeneration = v25;
              }
              v17 = 0LL;
              v24 = 0LL;
            }
            goto LABEL_55;
          }
          v7 = 0;
          sub_180032CEC(NtCurrentTeb()->MergedPrefLanguages);
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
          goto LABEL_33;
        }
        v7 = MergedPrefLanguages != 0LL;
        if ( v4 != 48 || (v7 = MergedPrefLanguages != 0LL, PreferredLanguages) )
        {
LABEL_33:
          v8 = v23;
          goto LABEL_34;
        }
        v8 = v23;
        v19 = *(_QWORD *)(v23 + 96);
        if ( v19 && v26 && (*(_BYTE *)(v26 + 40) & 0x40) != 0 && *(char *)(v19 + 40) >= 0 )
        {
          v8 = v23;
          v15 = v26;
          v24 = *(void **)(v23 + 96);
          NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v23 + 16);
LABEL_44:
          v17 = v24;
          goto LABEL_45;
        }
LABEL_34:
        if ( (v10 & 0x10000) == 0 )
        {
          sub_180031FD4();
          RtlEnterCriticalSection((__int64)&unk_18015ABE0);
          v32 = sub_180032030(*(_QWORD *)(v8 + 72), v14);
          v25 = *(_DWORD *)(v8 + 16);
          RtlLeaveCriticalSection((__int64)&unk_18015ABE0);
        }
        v12 = sub_180032B9C(&v24, v8, 25LL, 0LL);
        if ( v12 < 0 )
          goto LABEL_106;
        if ( (v10 & 0x40) != 0 )
        {
          v15 = v26;
          v12 = sub_18003545C(v10, v8, (unsigned int)&v24, (_DWORD)PreferredLanguages, 0LL, v26, v6, v29, 0);
        }
        else
        {
          sub_180032B9C(&v30, v8, 25LL, 0LL);
          v15 = v26;
          v12 = sub_18003545C(v10, v8, (unsigned int)&v30, (_DWORD)PreferredLanguages, v32, v26, v6, v29, 0);
          if ( v12 >= 0 )
          {
            v16 = v4 == 48 || (v10 & 0x10) != 0;
            v12 = sub_1800321EC(v16, v8, v30, &v24);
          }
          sub_180032CEC(v30);
        }
        if ( v12 < 0 )
        {
LABEL_106:
          v17 = v24;
LABEL_55:
          if ( v17 )
          {
            v18 = v24;
            if ( v24 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v18 = v24;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            sub_180032CEC(v18);
            v8 = v23;
          }
LABEL_59:
          if ( v12 >= 0 )
          {
LABEL_60:
            if ( v22 && v8 )
              RtlpMuiFreeLangRegistryInfo(v8);
            if ( v32 )
              sub_180032CEC(v32);
            return (unsigned int)v12;
          }
LABEL_72:
          if ( v35 && v28 )
          {
            if ( v28 == 1 )
              *v35 = 0;
            else
              *(_DWORD *)v35 = 0;
          }
          goto LABEL_60;
        }
        goto LABEL_44;
      }
      v23 = 0LL;
      v12 = sub_18006ECB4(&v23);
      if ( v12 >= 0 )
      {
        v8 = v23;
        v22 = 1;
        v21 = (__int64 *)(v23 + 56);
        if ( !*(_QWORD *)(v23 + 56) )
        {
          v12 = sub_18006F31C(v23, v20, 0, 3, (__int64)&v33, v23 + 56);
          if ( v12 < 0 && !v33 )
            goto LABEL_59;
        }
        if ( !*(_QWORD *)(v8 + 64) )
        {
          v33 = 0;
          v12 = sub_18006F31C(v8, v20, 1, 3, (__int64)&v33, v8 + 64);
          if ( v12 < 0 && !v33 )
            goto LABEL_59;
        }
        v6 = *v21;
        v4 = v31;
        v26 = *(_QWORD *)(v8 + 64);
        goto LABEL_34;
      }
LABEL_98:
      v8 = v23;
      goto LABEL_72;
    }
LABEL_71:
    v12 = -1073741811;
    goto LABEL_72;
  }
  return (unsigned int)-1073741811;
}
