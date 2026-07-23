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

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // r14d
  __int64 v6; // rsi
  bool v7; // r15
  PVOID v8; // rdi
  ULONG v9; // edx
  ULONG v10; // ecx
  int v11; // r12d
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  PVOID MergedPrefLanguages; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  char v17; // cl
  PVOID v18; // rsi
  PVOID v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  __int64 *v22; // r14
  char v23; // [rsp+58h] [rbp-49h]
  PVOID v24; // [rsp+60h] [rbp-41h] BYREF
  PVOID v25; // [rsp+68h] [rbp-39h] BYREF
  ULONG v26; // [rsp+70h] [rbp-31h]
  __int64 v27; // [rsp+78h] [rbp-29h]
  PVOID PreferredLanguages; // [rsp+80h] [rbp-21h]
  ULONG v29; // [rsp+88h] [rbp-19h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  PVOID BaseAddress; // [rsp+98h] [rbp-9h] BYREF
  ULONG v32; // [rsp+A0h] [rbp-1h]
  PVOID v33; // [rsp+A8h] [rbp+7h]
  char v34; // [rsp+108h] [rbp+67h] BYREF
  PULONG v35; // [rsp+110h] [rbp+6Fh]
  PZZWSTR v36; // [rsp+118h] [rbp+77h]
  PULONG v37; // [rsp+120h] [rbp+7Fh]

  v37 = ReturnLength;
  v36 = Languages;
  v35 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v29 = 0;
  v26 = 0;
  PreferredLanguages = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0;
  BaseAddress = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v33 = 0LL;
  v24 = 0LL;
  v23 = 0;
  v30 = 0LL;
  v32 = v4;
  if ( ReturnLength )
    v29 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_71;
  v9 = Flags & 0xC;
  if ( v9 == 12 )
    goto LABEL_71;
  v10 = Flags | 8;
  if ( v9 )
    v10 = Flags;
  if ( (v10 & 0x10000) != 0 )
  {
    if ( (v10 & 0x40) != 0 || (v10 & 0x30) != 0 )
      goto LABEL_71;
    v10 |= 0x30u;
  }
  if ( (v10 & 0x40) != 0 && (v10 & 0x30) != 0 )
    goto LABEL_71;
  v11 = v10 | 0x20;
  if ( (v10 & 0x70) != 0 )
    v11 = v10;
  if ( !ReturnLength )
    goto LABEL_71;
  if ( !*ReturnLength || Languages )
  {
    if ( (v11 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v24);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v8 = v24;
        if ( *((_DWORD *)v24 + 3) == MEMORY[0x7FFE03A4] || (int)sub_18006E740() < 0 )
          goto LABEL_18;
        v24 = 0LL;
        v13 = RtlpCreateProcessRegistryInfo(&v24);
        if ( v13 < 0 )
          goto LABEL_98;
      }
      v8 = v24;
LABEL_18:
      if ( (v11 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
        v8 = v24;
        goto LABEL_22;
      }
      v34 = 0;
      PreferredLanguages = 0LL;
      if ( *((_DWORD *)v8 + 3) == MEMORY[0x7FFE03A4] )
      {
LABEL_22:
        if ( (v11 & 0x40) == 0 )
        {
          v13 = sub_18003185C(0, (__int64)v8);
          if ( v13 < 0 )
            goto LABEL_72;
          v27 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v8 = v24;
          v30 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v24 + 6);
          v13 = sub_180031B44((__int64)v24, 0);
          if ( v13 < 0 )
            goto LABEL_72;
          v6 = *((_QWORD *)v8 + 7);
        }
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        if ( MergedPrefLanguages && v4 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v24 + 4) )
          {
            v7 = MergedPrefLanguages != 0LL;
            v8 = v24;
            v16 = v27;
            v18 = NtCurrentTeb()->MergedPrefLanguages;
            v25 = v18;
LABEL_45:
            v13 = sub_1800359B0((_DWORD)v18, (_DWORD)v8, (_DWORD)v36, (_DWORD)v37, v11, 0, (__int64)v35);
            if ( ((int)(v13 + 0x80000000) < 0 || v13 == -1073741789) && v4 == 48 )
            {
              if ( !*((_WORD *)v18 + 22) )
                sub_180040650(v18);
              if ( !v7 )
              {
                if ( (*((_BYTE *)v18 + 40) & 0x40) == 0 )
                {
                  sub_180030D2C((__int64)v18);
                  if ( !PreferredLanguages && (*(_BYTE *)(v16 + 40) & 0x40) != 0 && v30 == *((_QWORD *)v8 + 6) )
                    sub_1800801CC(v8, v18);
                }
                NtCurrentTeb()->MergedPrefLanguages = v25;
                v8 = v24;
                NtCurrentTeb()->MuiGeneration = v26;
              }
              v18 = 0LL;
              v25 = 0LL;
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
          v8 = v24;
          goto LABEL_34;
        }
        v8 = v24;
        v20 = *((_QWORD *)v24 + 12);
        if ( v20 && v27 && (*(_BYTE *)(v27 + 40) & 0x40) != 0 && *(char *)(v20 + 40) >= 0 )
        {
          v8 = v24;
          v16 = v27;
          v25 = (PVOID)*((_QWORD *)v24 + 12);
          NtCurrentTeb()->MuiGeneration = *((_DWORD *)v24 + 4);
LABEL_44:
          v18 = v25;
          goto LABEL_45;
        }
LABEL_34:
        if ( (v11 & 0x10000) == 0 )
        {
          sub_180031FD4();
          RtlEnterCriticalSection(&stru_18015ABE0);
          v33 = (PVOID)sub_180032030(*((_QWORD *)v8 + 9), v15);
          v26 = *((_DWORD *)v8 + 4);
          RtlLeaveCriticalSection(&stru_18015ABE0);
        }
        v13 = sub_180032B9C(&v25, v8, 25LL, 0LL);
        if ( v13 < 0 )
          goto LABEL_106;
        if ( (v11 & 0x40) != 0 )
        {
          v16 = v27;
          v13 = sub_18003545C(v11, (_DWORD)v8, (unsigned int)&v25, (_DWORD)PreferredLanguages, 0LL, v27, v6, v30, 0);
        }
        else
        {
          sub_180032B9C(&BaseAddress, v8, 25LL, 0LL);
          v16 = v27;
          v13 = sub_18003545C(
                  v11,
                  (_DWORD)v8,
                  (unsigned int)&BaseAddress,
                  (_DWORD)PreferredLanguages,
                  (__int64)v33,
                  v27,
                  v6,
                  v30,
                  0);
          if ( v13 >= 0 )
          {
            v17 = v4 == 48 || (v11 & 0x10) != 0;
            v13 = sub_1800321EC(v17, (DWORD *)v8, (__int64)BaseAddress, &v25);
          }
          sub_180032CEC(BaseAddress);
        }
        if ( v13 < 0 )
        {
LABEL_106:
          v18 = v25;
LABEL_55:
          if ( v18 )
          {
            v19 = v25;
            if ( v25 == NtCurrentTeb()->MergedPrefLanguages )
            {
              v19 = v25;
              NtCurrentTeb()->MergedPrefLanguages = 0LL;
            }
            sub_180032CEC(v19);
            v8 = v24;
          }
LABEL_59:
          if ( v13 >= 0 )
          {
LABEL_60:
            if ( v23 && v8 )
              RtlpMuiFreeLangRegistryInfo(v8);
            if ( v33 )
              sub_180032CEC(v33);
            return v13;
          }
LABEL_72:
          if ( v36 && v29 )
          {
            if ( v29 == 1 )
              *v36 = 0;
            else
              *(_DWORD *)v36 = 0;
          }
          goto LABEL_60;
        }
        goto LABEL_44;
      }
      v24 = 0LL;
      v13 = sub_18006ECB4(&v24);
      if ( v13 >= 0 )
      {
        v8 = v24;
        v23 = 1;
        v22 = (__int64 *)((char *)v24 + 56);
        if ( !*((_QWORD *)v24 + 7) )
        {
          v13 = sub_18006F31C((_DWORD)v24, v21, 0, 3, (__int64)&v34, (__int64)v24 + 56);
          if ( v13 < 0 && !v34 )
            goto LABEL_59;
        }
        if ( !*((_QWORD *)v8 + 8) )
        {
          v34 = 0;
          v13 = sub_18006F31C((_DWORD)v8, v21, 1, 3, (__int64)&v34, (__int64)v8 + 64);
          if ( v13 < 0 && !v34 )
            goto LABEL_59;
        }
        v6 = *v22;
        v4 = v32;
        v27 = *((_QWORD *)v8 + 8);
        goto LABEL_34;
      }
LABEL_98:
      v8 = v24;
      goto LABEL_72;
    }
LABEL_71:
    v13 = -1073741811;
    goto LABEL_72;
  }
  return -1073741811;
}
