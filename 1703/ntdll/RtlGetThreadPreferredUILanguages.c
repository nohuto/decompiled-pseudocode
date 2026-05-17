/*
 * XREFs of RtlGetThreadPreferredUILanguages @ 0x180040520
 * Callers:
 *     sub_180040BCC @ 0x180040BCC (sub_180040BCC.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180040E28 @ 0x180040E28 (sub_180040E28.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006C440 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006C54C @ 0x18006C54C (sub_18006C54C.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006CE80 (RtlpInitializeLangRegistryInfo.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 *     sub_18006EB64 @ 0x18006EB64 (sub_18006EB64.c)
 */

__int64 __fastcall RtlGetThreadPreferredUILanguages(int a1, struct _TEB *a2, _WORD *a3, _DWORD *a4)
{
  int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r15
  void *PreferredLanguages; // rsi
  bool v8; // r12
  __int64 v9; // rdi
  int v10; // r13d
  __int64 result; // rax
  signed int v12; // ebx
  void *MergedPrefLanguages; // rcx
  void *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // al
  signed int v19; // eax
  void *v20; // rcx
  signed int v21; // eax
  char *v22; // rax
  __int64 *v23; // r15
  __int64 v24; // [rsp+38h] [rbp-59h]
  __int64 v25; // [rsp+38h] [rbp-59h]
  char v26; // [rsp+58h] [rbp-39h]
  __int64 v27; // [rsp+60h] [rbp-31h] BYREF
  void *v28; // [rsp+68h] [rbp-29h] BYREF
  int v29; // [rsp+70h] [rbp-21h]
  void *v30; // [rsp+78h] [rbp-19h]
  unsigned int v31; // [rsp+80h] [rbp-11h]
  unsigned int v32; // [rsp+84h] [rbp-Dh]
  __int64 v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h] BYREF
  int v35; // [rsp+98h] [rbp+7h]
  __int64 v36; // [rsp+A0h] [rbp+Fh]
  char v37; // [rsp+F8h] [rbp+67h] BYREF
  struct _TEB *v38; // [rsp+100h] [rbp+6Fh]
  _WORD *v39; // [rsp+108h] [rbp+77h]
  _DWORD *v40; // [rsp+110h] [rbp+7Fh]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v4 = a1 & 0x30;
  v32 = 0;
  v31 = 0;
  v5 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  PreferredLanguages = 0LL;
  v28 = 0LL;
  v8 = 0;
  v36 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v26 = 0;
  v33 = 0LL;
  v29 = v4;
  if ( a4 )
    v32 = *a4;
  if ( (a1 & 0xFFFEFC83) != 0 )
    goto LABEL_67;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      goto LABEL_67;
  }
  else
  {
    a1 |= 8u;
  }
  if ( (a1 & 0x10000) != 0 )
  {
    if ( (a1 & 0x40) != 0 || (a1 & 0x30) != 0 )
      goto LABEL_67;
    a1 |= 0x30u;
  }
  if ( (a1 & 0x40) != 0 && (a1 & 0x30) != 0 )
    goto LABEL_67;
  v10 = a1 | 0x20;
  if ( (a1 & 0x70) != 0 )
    v10 = a1;
  if ( !a4 )
    goto LABEL_67;
  if ( !*a4 || a3 )
  {
    if ( (v10 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v27);
      if ( (int)result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v9 = v27;
        if ( *(_DWORD *)(v27 + 12) == MEMORY[0x7FFE03A4] || (int)sub_18006C280() < 0 )
          goto LABEL_17;
        v27 = 0LL;
        v12 = RtlpCreateProcessRegistryInfo(&v27);
        if ( v12 < 0 )
          goto LABEL_103;
      }
      v9 = v27;
LABEL_17:
      v35 = v10 & 0x10000;
      if ( (v10 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
          v30 = PreferredLanguages;
        }
        v9 = v27;
LABEL_21:
        if ( (v10 & 0x40) == 0 )
        {
          v12 = sub_18006D864(0LL, v9);
          if ( v12 < 0 )
            goto LABEL_68;
          v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v9 = v27;
          v33 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *(_QWORD *)(v27 + 48);
          v12 = sub_18006DC8C(v27, 0LL);
          if ( v12 < 0 )
            goto LABEL_68;
          v6 = *(_QWORD *)(v9 + 56);
        }
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        LOBYTE(a3) = MergedPrefLanguages != 0LL;
        if ( MergedPrefLanguages && v29 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
          {
            a2 = NtCurrentTeb();
            if ( a2->MuiGeneration == *(_DWORD *)(v27 + 16) )
            {
              v9 = v27;
              PreferredLanguages = NtCurrentTeb()->MergedPrefLanguages;
              v28 = PreferredLanguages;
LABEL_81:
              v14 = v30;
              v8 = MergedPrefLanguages != 0LL;
LABEL_46:
              v12 = sub_180040E28((_DWORD)PreferredLanguages, v9, (_DWORD)v39, (_DWORD)v40, v10, 0, (__int64)v38);
              if ( ((int)(v12 + 0x80000000) < 0 || v12 == -1073741789) && v29 == 48 )
              {
                if ( !*((_WORD *)PreferredLanguages + 22) )
                  sub_18004A3B4(PreferredLanguages);
                if ( !v8 )
                {
                  if ( (*((_BYTE *)PreferredLanguages + 40) & 0x40) == 0 )
                  {
                    sub_180046C08(PreferredLanguages);
                    if ( !v14 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v33 == *(_QWORD *)(v9 + 48) )
                      sub_18006C54C(v9, PreferredLanguages);
                  }
                  NtCurrentTeb()->MergedPrefLanguages = v28;
                  v9 = v27;
                  NtCurrentTeb()->MuiGeneration = v31;
                }
                PreferredLanguages = 0LL;
                v28 = 0LL;
              }
LABEL_56:
              if ( PreferredLanguages )
              {
                v20 = v28;
                if ( v28 == NtCurrentTeb()->MergedPrefLanguages )
                {
                  v20 = v28;
                  NtCurrentTeb()->MergedPrefLanguages = 0LL;
                }
                sub_180040BA0(v20, a2, a3);
                v9 = v27;
              }
LABEL_60:
              if ( v12 >= 0 )
              {
LABEL_61:
                if ( v26 && v9 )
                  RtlpMuiFreeLangRegistryInfo(v9);
                if ( v36 )
                  sub_180040BA0(v36, a2, a3);
                return (unsigned int)v12;
              }
LABEL_68:
              if ( v39 )
              {
                a2 = (struct _TEB *)v32;
                if ( v32 )
                {
                  if ( v32 == 1 )
                    *v39 = 0;
                  else
                    *(_DWORD *)v39 = 0;
                }
              }
              goto LABEL_61;
            }
          }
          v8 = 0;
          sub_180040BA0(NtCurrentTeb()->MergedPrefLanguages, a2, a3);
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
        }
        else
        {
          v8 = MergedPrefLanguages != 0LL;
          if ( v29 == 48 )
          {
            v8 = MergedPrefLanguages != 0LL;
            if ( !PreferredLanguages )
            {
              v9 = v27;
              v22 = *(char **)(v27 + 96);
              if ( v22 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v22[40] >= 0 )
              {
                v9 = v27;
                v28 = *(void **)(v27 + 96);
                PreferredLanguages = v22;
                NtCurrentTeb()->MuiGeneration = *(_DWORD *)(v27 + 16);
                goto LABEL_81;
              }
              goto LABEL_33;
            }
          }
        }
        v9 = v27;
LABEL_33:
        PreferredLanguages = v28;
        goto LABEL_34;
      }
      v37 = 0;
      v30 = 0LL;
      if ( *(_DWORD *)(v9 + 12) == MEMORY[0x7FFE03A4] )
      {
        PreferredLanguages = 0LL;
        goto LABEL_21;
      }
      v27 = 0LL;
      v12 = RtlpInitializeLangRegistryInfo(&v27);
      if ( v12 >= 0 )
      {
        v9 = v27;
        v26 = 1;
        v23 = (__int64 *)(v27 + 56);
        if ( !*(_QWORD *)(v27 + 56) )
        {
          v12 = sub_18006DDE4(v27, (_DWORD)a2, 0, 3, (__int64)&v37, v27 + 56);
          if ( v12 < 0 && !v37 )
            goto LABEL_60;
        }
        if ( !*(_QWORD *)(v9 + 64) )
        {
          v37 = 0;
          v12 = sub_18006DDE4(v9, (_DWORD)a2, 1, 3, (__int64)&v37, v9 + 64);
          if ( v12 < 0 && !v37 )
            goto LABEL_60;
        }
        v5 = *(_QWORD *)(v9 + 64);
        v6 = *v23;
LABEL_34:
        if ( !v35 )
        {
          sub_18006E3A0();
          RtlEnterCriticalSection((__int64)&unk_180159BA0);
          v36 = sub_18006EB64(*(_QWORD *)(v9 + 72));
          v31 = *(_DWORD *)(v9 + 16);
          RtlLeaveCriticalSection((__int64)&unk_180159BA0);
        }
        if ( v9 )
        {
          v28 = (void *)sub_180047104(25LL, 0LL, v9);
          PreferredLanguages = v28;
          v12 = v28 == 0LL ? 0xC0000017 : 0;
        }
        else
        {
          v12 = -1073741811;
        }
        if ( v12 < 0 )
          goto LABEL_56;
        if ( (v10 & 0x40) != 0 )
        {
          v25 = v6;
          v14 = v30;
          v21 = sub_180044D64(v10, v9, (unsigned int)&v28, (_DWORD)v30, 0LL, v5, v25, v33, 0);
          PreferredLanguages = v28;
          v12 = v21;
        }
        else
        {
          sub_1800470C4(&v34, v9, 25LL);
          v24 = v6;
          v14 = v30;
          v12 = sub_180044D64(v10, v9, (unsigned int)&v34, (_DWORD)v30, v36, v5, v24, v33, 0);
          if ( v12 >= 0 )
          {
            v18 = v29 == 48 || (v10 & 0x10) != 0;
            LOBYTE(v16) = v18;
            v19 = sub_1800468D4(v16, v9, v34, &v28);
            PreferredLanguages = v28;
            v12 = v19;
          }
          sub_180040BA0(v34, v15, v17);
        }
        if ( v12 < 0 )
          goto LABEL_56;
        goto LABEL_46;
      }
LABEL_103:
      v9 = v27;
      goto LABEL_68;
    }
LABEL_67:
    v12 = -1073741811;
    goto LABEL_68;
  }
  return (unsigned int)-1073741811;
}
