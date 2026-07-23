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

NTSTATUS __cdecl RtlGetThreadPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  ULONG v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r15
  PVOID PreferredLanguages; // rsi
  bool v8; // r12
  ULONG *v9; // rdi
  ULONG v10; // r13d
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  PVOID MergedPrefLanguages; // rcx
  PVOID v14; // r15
  __int64 v15; // rcx
  bool v16; // al
  NTSTATUS v17; // eax
  PVOID v18; // rcx
  NTSTATUS v19; // eax
  char *v20; // rax
  int v21; // edx
  __int64 *v22; // r15
  __int64 v23; // [rsp+38h] [rbp-59h]
  __int64 v24; // [rsp+38h] [rbp-59h]
  char v25; // [rsp+58h] [rbp-39h]
  PVOID v26; // [rsp+60h] [rbp-31h] BYREF
  PVOID v27; // [rsp+68h] [rbp-29h] BYREF
  ULONG v28; // [rsp+70h] [rbp-21h]
  PVOID v29; // [rsp+78h] [rbp-19h]
  ULONG v30; // [rsp+80h] [rbp-11h]
  ULONG v31; // [rsp+84h] [rbp-Dh]
  __int64 v32; // [rsp+88h] [rbp-9h]
  PVOID BaseAddress; // [rsp+90h] [rbp-1h] BYREF
  int v34; // [rsp+98h] [rbp+7h]
  PVOID v35; // [rsp+A0h] [rbp+Fh]
  char v36; // [rsp+F8h] [rbp+67h] BYREF
  PULONG v37; // [rsp+100h] [rbp+6Fh]
  PZZWSTR v38; // [rsp+108h] [rbp+77h]
  PULONG v39; // [rsp+110h] [rbp+7Fh]

  v39 = ReturnLength;
  v38 = Languages;
  v37 = NumberOfLanguages;
  v4 = Flags & 0x30;
  v31 = 0;
  v30 = 0;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  BaseAddress = 0LL;
  PreferredLanguages = 0LL;
  v27 = 0LL;
  v8 = 0;
  v35 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v25 = 0;
  v32 = 0LL;
  v28 = v4;
  if ( ReturnLength )
    v31 = *ReturnLength;
  if ( (Flags & 0xFFFEFC83) != 0 )
    goto LABEL_67;
  if ( (Flags & 0xC) != 0 )
  {
    if ( (Flags & 0xC) == 0xC )
      goto LABEL_67;
  }
  else
  {
    Flags |= 8u;
  }
  if ( (Flags & 0x10000) != 0 )
  {
    if ( (Flags & 0x40) != 0 || (Flags & 0x30) != 0 )
      goto LABEL_67;
    Flags |= 0x30u;
  }
  if ( (Flags & 0x40) != 0 && (Flags & 0x30) != 0 )
    goto LABEL_67;
  v10 = Flags | 0x20;
  if ( (Flags & 0x70) != 0 )
    v10 = Flags;
  if ( !ReturnLength )
    goto LABEL_67;
  if ( !*ReturnLength || Languages )
  {
    if ( (v10 & 0x300) != 0x300 )
    {
      result = RtlpCreateProcessRegistryInfo(&v26);
      if ( result < 0 )
        return result;
      if ( v4 == 48 )
      {
        v9 = (ULONG *)v26;
        if ( *((_DWORD *)v26 + 3) == MEMORY[0x7FFE03A4] || (int)sub_18006C280() < 0 )
          goto LABEL_17;
        v26 = 0LL;
        v12 = RtlpCreateProcessRegistryInfo(&v26);
        if ( v12 < 0 )
          goto LABEL_103;
      }
      v9 = (ULONG *)v26;
LABEL_17:
      v34 = v10 & 0x10000;
      if ( (v10 & 0x10000) == 0 )
      {
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
          v29 = PreferredLanguages;
        }
        v9 = (ULONG *)v26;
LABEL_21:
        if ( (v10 & 0x40) == 0 )
        {
          v12 = sub_18006D864(0LL, v9);
          if ( v12 < 0 )
            goto LABEL_68;
          v5 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
          v9 = (ULONG *)v26;
          v32 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              ? *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1)
              : *((_QWORD *)v26 + 6);
          v12 = sub_18006DC8C(v26, 0LL);
          if ( v12 < 0 )
            goto LABEL_68;
          v6 = *((_QWORD *)v9 + 7);
        }
        MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
        if ( MergedPrefLanguages && v28 == 48 )
        {
          if ( *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0
            && NtCurrentTeb()->MuiGeneration == *((_DWORD *)v26 + 4) )
          {
            v9 = (ULONG *)v26;
            PreferredLanguages = NtCurrentTeb()->MergedPrefLanguages;
            v27 = PreferredLanguages;
LABEL_81:
            v14 = v29;
            v8 = MergedPrefLanguages != 0LL;
LABEL_46:
            v12 = sub_180040E28((_DWORD)PreferredLanguages, (_DWORD)v9, (_DWORD)v38, (_DWORD)v39, v10, 0, (__int64)v37);
            if ( ((int)(v12 + 0x80000000) < 0 || v12 == -1073741789) && v28 == 48 )
            {
              if ( !*((_WORD *)PreferredLanguages + 22) )
                sub_18004A3B4(PreferredLanguages);
              if ( !v8 )
              {
                if ( (*((_BYTE *)PreferredLanguages + 40) & 0x40) == 0 )
                {
                  sub_180046C08(PreferredLanguages);
                  if ( !v14 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v32 == *((_QWORD *)v9 + 6) )
                    sub_18006C54C(v9, PreferredLanguages);
                }
                NtCurrentTeb()->MergedPrefLanguages = v27;
                v9 = (ULONG *)v26;
                NtCurrentTeb()->MuiGeneration = v30;
              }
              PreferredLanguages = 0LL;
              v27 = 0LL;
            }
LABEL_56:
            if ( PreferredLanguages )
            {
              v18 = v27;
              if ( v27 == NtCurrentTeb()->MergedPrefLanguages )
              {
                v18 = v27;
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
              sub_180040BA0(v18);
              v9 = (ULONG *)v26;
            }
LABEL_60:
            if ( v12 >= 0 )
            {
LABEL_61:
              if ( v25 && v9 )
                RtlpMuiFreeLangRegistryInfo(v9);
              if ( v35 )
                sub_180040BA0(v35);
              return v12;
            }
LABEL_68:
            if ( v38 && v31 )
            {
              if ( v31 == 1 )
                *v38 = 0;
              else
                *(_DWORD *)v38 = 0;
            }
            goto LABEL_61;
          }
          v8 = 0;
          sub_180040BA0(NtCurrentTeb()->MergedPrefLanguages);
          NtCurrentTeb()->MergedPrefLanguages = 0LL;
        }
        else
        {
          v8 = MergedPrefLanguages != 0LL;
          if ( v28 == 48 )
          {
            v8 = MergedPrefLanguages != 0LL;
            if ( !PreferredLanguages )
            {
              v9 = (ULONG *)v26;
              v20 = (char *)*((_QWORD *)v26 + 12);
              if ( v20 && v5 && (*(_BYTE *)(v5 + 40) & 0x40) != 0 && v20[40] >= 0 )
              {
                v9 = (ULONG *)v26;
                v27 = (PVOID)*((_QWORD *)v26 + 12);
                PreferredLanguages = v20;
                NtCurrentTeb()->MuiGeneration = *((_DWORD *)v26 + 4);
                goto LABEL_81;
              }
              goto LABEL_33;
            }
          }
        }
        v9 = (ULONG *)v26;
LABEL_33:
        PreferredLanguages = v27;
        goto LABEL_34;
      }
      v36 = 0;
      v29 = 0LL;
      if ( v9[3] == MEMORY[0x7FFE03A4] )
      {
        PreferredLanguages = 0LL;
        goto LABEL_21;
      }
      v26 = 0LL;
      v12 = RtlpInitializeLangRegistryInfo(&v26);
      if ( v12 >= 0 )
      {
        v9 = (ULONG *)v26;
        v25 = 1;
        v22 = (__int64 *)((char *)v26 + 56);
        if ( !*((_QWORD *)v26 + 7) )
        {
          v12 = sub_18006DDE4((_DWORD)v26, v21, 0, 3, (__int64)&v36, (__int64)v26 + 56);
          if ( v12 < 0 && !v36 )
            goto LABEL_60;
        }
        if ( !*((_QWORD *)v9 + 8) )
        {
          v36 = 0;
          v12 = sub_18006DDE4((_DWORD)v9, v21, 1, 3, (__int64)&v36, (__int64)(v9 + 16));
          if ( v12 < 0 && !v36 )
            goto LABEL_60;
        }
        v5 = *((_QWORD *)v9 + 8);
        v6 = *v22;
LABEL_34:
        if ( !v34 )
        {
          sub_18006E3A0();
          RtlEnterCriticalSection(&stru_180159BA0);
          v35 = (PVOID)sub_18006EB64(*((_QWORD *)v9 + 9));
          v30 = v9[4];
          RtlLeaveCriticalSection(&stru_180159BA0);
        }
        if ( v9 )
        {
          v27 = (PVOID)sub_180047104(25LL, 0LL, v9);
          PreferredLanguages = v27;
          v12 = v27 == 0LL ? 0xC0000017 : 0;
        }
        else
        {
          v12 = -1073741811;
        }
        if ( v12 < 0 )
          goto LABEL_56;
        if ( (v10 & 0x40) != 0 )
        {
          v24 = v6;
          v14 = v29;
          v19 = sub_180044D64(v10, v9, &v27, v29, 0LL, v5, v24, v32, 0);
          PreferredLanguages = v27;
          v12 = v19;
        }
        else
        {
          sub_1800470C4(&BaseAddress, v9, 25LL);
          v23 = v6;
          v14 = v29;
          v12 = sub_180044D64(v10, v9, &BaseAddress, v29, v35, v5, v23, v32, 0);
          if ( v12 >= 0 )
          {
            v16 = v28 == 48 || (v10 & 0x10) != 0;
            LOBYTE(v15) = v16;
            v17 = sub_1800468D4(v15, v9, BaseAddress, &v27);
            PreferredLanguages = v27;
            v12 = v17;
          }
          sub_180040BA0(BaseAddress);
        }
        if ( v12 < 0 )
          goto LABEL_56;
        goto LABEL_46;
      }
LABEL_103:
      v9 = (ULONG *)v26;
      goto LABEL_68;
    }
LABEL_67:
    v12 = -1073741811;
    goto LABEL_68;
  }
  return -1073741811;
}
