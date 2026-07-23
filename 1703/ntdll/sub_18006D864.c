/*
 * XREFs of sub_18006D864 @ 0x18006D864
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006D720 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     sub_18006DBCC @ 0x18006DBCC (sub_18006DBCC.c)
 *     sub_18006EA40 @ 0x18006EA40 (sub_18006EA40.c)
 */

__int64 __fastcall sub_18006D864(char a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v5; // ebx
  unsigned int v6; // r15d
  bool v7; // si
  bool v8; // bp
  bool v9; // r14
  PVOID UserPrefLanguages; // rdi
  __int64 v11; // rax
  unsigned __int16 v12; // r8
  __int64 v13; // r9
  struct _TEB *v14; // rdx
  int WowTebOffset; // eax
  struct _TEB *v16; // rcx
  __int64 v17; // rax
  struct _TEB *v18; // rcx
  __int64 v19; // rax
  ULONG MuiImpersonation; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  int v23; // eax
  bool v24; // zf
  struct _TEB *v26; // rdx
  int v27; // eax
  struct _TEB *v28; // rcx
  __int64 v29; // rax
  struct _TEB *v30; // rcx
  __int64 v31; // rax
  _DWORD *v32; // rcx
  char v33; // cl
  __int64 v34; // rcx
  unsigned int v35; // r8d
  char v36; // al
  __int16 v37; // dx
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // [rsp+78h] [rbp+10h] BYREF
  __int64 v41; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
    {
      v12 = *(_WORD *)(v11 + 6);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 )
        {
          v14 = NtCurrentTeb();
          WowTebOffset = v14->WowTebOffset;
          if ( WowTebOffset < 0 )
            LODWORD(v14) = WowTebOffset + (_DWORD)v14;
          v16 = NtCurrentTeb();
          v17 = v16->WowTebOffset;
          if ( (int)v17 < 0 )
            v16 = (struct _TEB *)((char *)v16 + v17);
          v24 = (_DWORD)v14 == LODWORD(v16->NtTib.SubSystemTib);
          v18 = NtCurrentTeb();
          v19 = v18->WowTebOffset;
          if ( v24 )
          {
            if ( (int)v19 < 0 )
              v18 = (struct _TEB *)((char *)v18 + v19);
            MuiImpersonation = HIDWORD(v18->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v19 < 0 )
              v18 = (struct _TEB *)((char *)v18 + v19);
            MuiImpersonation = v18->MuiImpersonation;
          }
          if ( !MuiImpersonation )
          {
            if ( v12 > 1u )
            {
              v9 = 1;
            }
            else if ( (*(_BYTE *)v13 & 1) == 0 )
            {
              v35 = 0;
              do
              {
                v36 = v2++;
                v37 = *(_WORD *)(v13 + 8) >> (2 * v36);
                v38 = v35 + 1;
                if ( (v37 & 3) == 0 )
                  v38 = v35;
                v35 = v38;
              }
              while ( v2 < 3 );
              v9 = v38 > 1;
            }
            v26 = NtCurrentTeb();
            v27 = v26->WowTebOffset;
            if ( v27 < 0 )
              LODWORD(v26) = v27 + (_DWORD)v26;
            v28 = NtCurrentTeb();
            v29 = v28->WowTebOffset;
            if ( (int)v29 < 0 )
              v28 = (struct _TEB *)((char *)v28 + v29);
            v24 = (_DWORD)v26 == LODWORD(v28->NtTib.SubSystemTib);
            v30 = NtCurrentTeb();
            v31 = v30->WowTebOffset;
            if ( v24 )
            {
              if ( (int)v31 < 0 )
                v30 = (struct _TEB *)((char *)v30 + v31);
              HIDWORD(v30->glDispatchTable[186]) = 1;
            }
            else
            {
              if ( (int)v31 < 0 )
                v30 = (struct _TEB *)((char *)v30 + v31);
              v30->MuiImpersonation = 1;
            }
            if ( v9 )
              goto LABEL_36;
          }
          if ( !UserPrefLanguages )
          {
LABEL_43:
            if ( !a1 && !v8 && !v7 )
            {
              v33 = 1;
              goto LABEL_47;
            }
LABEL_83:
            v33 = 0;
LABEL_47:
            v5 = sub_18006DBCC(a2, 1, (unsigned int)&v40, 3 - (unsigned int)(a1 != 0), v33);
            if ( v5 >= 0 )
            {
              v34 = v40;
              if ( v40 )
              {
                if ( a1 )
                  *(_DWORD *)(v40 + 40) |= 0x20u;
                else
                  *(_DWORD *)(v40 + 40) |= 0x10u;
                if ( v8 )
                  *(_DWORD *)(v34 + 40) |= 2u;
                if ( v7 )
                  *(_DWORD *)(v34 + 40) |= 4u;
                if ( v8 || v7 )
                  *(_DWORD *)(v34 + 40) |= v6;
                v5 = sub_18006EA40(v34, 0LL, 4LL);
              }
              if ( v9 )
              {
                v39 = sub_18006CFF8(8, &v41, a2);
                v5 = v39;
                if ( v39 >= 0 )
                  return (unsigned int)sub_18006EA40(0LL, v41, 5LL);
              }
            }
            return (unsigned int)v5;
          }
          if ( *(_QWORD *)UserPrefLanguages )
          {
            v21 = *(_QWORD *)(*(_QWORD *)UserPrefLanguages + 16LL);
            if ( v21 )
            {
              if ( *(_DWORD *)(v21 + 12) < *(_DWORD *)(a2 + 12) )
              {
LABEL_36:
                if ( UserPrefLanguages )
                {
                  v32 = *(_DWORD **)UserPrefLanguages;
                  if ( *(_QWORD *)UserPrefLanguages )
                  {
                    v8 = (v32[10] & 2) != 0;
                    v7 = (v32[10] & 4) != 0;
                    if ( (v32[10] & 2) != 0 || (v32[10] & 4) != 0 )
                      v6 = v32[10] & 0xFFFF0000;
                    sub_180040BA0(v32);
                    *(_QWORD *)UserPrefLanguages = 0LL;
                  }
                }
                if ( NtCurrentTeb()->MergedPrefLanguages )
                  *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages
                                                                          + 10) | 0x80;
              }
            }
          }
          if ( UserPrefLanguages )
          {
            v22 = *(_DWORD **)UserPrefLanguages;
            if ( *(_QWORD *)UserPrefLanguages )
            {
              v23 = v22[10];
              if ( a1 )
                v24 = (v23 & 0x20) == 0;
              else
                v24 = (v23 & 0x10) == 0;
              if ( !v24 )
                return (unsigned int)v5;
              if ( (v23 & 2) != 0 )
                v8 = 1;
              if ( (v23 & 4) != 0 )
                v7 = 1;
              if ( v8 || v7 )
                v6 = v23 & 0xFFFF0000;
              sub_180040BA0(v22);
              *(_QWORD *)UserPrefLanguages = 0LL;
              if ( NtCurrentTeb()->MergedPrefLanguages )
              {
                sub_180040BA0(NtCurrentTeb()->MergedPrefLanguages);
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
            }
          }
          if ( v9 )
            goto LABEL_83;
          goto LABEL_43;
        }
      }
    }
  }
  return 3221225485LL;
}
