/*
 * XREFs of sub_18003185C @ 0x18003185C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006EA40 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     sub_18006EB70 @ 0x18006EB70 (sub_18006EB70.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18007C600 @ 0x18007C600 (sub_18007C600.c)
 */

__int64 __fastcall sub_18003185C(char a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // r15d
  bool v6; // si
  bool v7; // bp
  bool v8; // r14
  __int64 *UserPrefLanguages; // rdi
  __int64 v10; // rax
  unsigned __int16 v11; // r10
  __int64 v12; // r9
  struct _TEB *v13; // r8
  int SpareUlong0; // eax
  struct _TEB *v15; // rdx
  __int64 v16; // rax
  struct _TEB *v17; // rcx
  __int64 v18; // rax
  unsigned int MuiImpersonation; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  bool v23; // zf
  struct _TEB *v25; // r8
  int v26; // eax
  struct _TEB *v27; // rdx
  __int64 v28; // rax
  struct _TEB *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // cl
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int i; // r10d
  unsigned int v36; // eax
  int v37; // eax
  __int64 v38; // [rsp+80h] [rbp+18h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v38 = 0LL;
  v39 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
    {
      v11 = *(_WORD *)(v10 + 6);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        if ( v12 )
        {
          v13 = NtCurrentTeb();
          SpareUlong0 = v13->SpareUlong0;
          if ( SpareUlong0 < 0 )
            LODWORD(v13) = SpareUlong0 + (_DWORD)v13;
          v15 = NtCurrentTeb();
          v16 = (int)v15->SpareUlong0;
          if ( (int)v16 < 0 )
            v15 = (struct _TEB *)((char *)v15 + v16);
          v17 = NtCurrentTeb();
          v18 = (int)v17->SpareUlong0;
          if ( (_DWORD)v13 == LODWORD(v15->NtTib.SubSystemTib) )
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            MuiImpersonation = HIDWORD(v17->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            MuiImpersonation = v17->MuiImpersonation;
          }
          if ( !MuiImpersonation )
          {
            if ( v11 > 1u )
            {
              v8 = 1;
            }
            else if ( (*(_BYTE *)v12 & 1) == 0 )
            {
              v34 = 0;
              for ( i = 0; i < 3; ++i )
              {
                v36 = v34 + 1;
                if ( ((*(_WORD *)(v12 + 8) >> (2 * i)) & 3) == 0 )
                  v36 = v34;
                v34 = v36;
              }
              v4 = 0;
              v8 = v36 > 1;
            }
            v25 = NtCurrentTeb();
            v26 = v25->SpareUlong0;
            if ( v26 < 0 )
              LODWORD(v25) = v26 + (_DWORD)v25;
            v27 = NtCurrentTeb();
            v28 = (int)v27->SpareUlong0;
            if ( (int)v28 < 0 )
              v27 = (struct _TEB *)((char *)v27 + v28);
            v29 = NtCurrentTeb();
            v30 = (int)v29->SpareUlong0;
            if ( (_DWORD)v25 == LODWORD(v27->NtTib.SubSystemTib) )
            {
              if ( (int)v30 < 0 )
                v29 = (struct _TEB *)((char *)v29 + v30);
              HIDWORD(v29->glDispatchTable[186]) = 1;
            }
            else
            {
              if ( (int)v30 < 0 )
                v29 = (struct _TEB *)((char *)v29 + v30);
              v29->MuiImpersonation = 1;
            }
            if ( v8 )
              goto LABEL_36;
          }
          if ( !UserPrefLanguages )
          {
LABEL_43:
            if ( !a1 && !v7 && !v6 )
            {
              v32 = 1;
              goto LABEL_47;
            }
LABEL_83:
            v32 = 0;
LABEL_47:
            v4 = sub_18006EB70(a2, 1, (unsigned int)&v38, 3 - (unsigned int)(a1 != 0), v32);
            if ( v4 >= 0 )
            {
              v33 = v38;
              if ( v38 )
              {
                if ( a1 )
                  *(_DWORD *)(v38 + 40) |= 0x20u;
                else
                  *(_DWORD *)(v38 + 40) |= 0x10u;
                if ( v7 )
                  *(_DWORD *)(v33 + 40) |= 2u;
                if ( v6 )
                  *(_DWORD *)(v33 + 40) |= 4u;
                if ( v7 || v6 )
                  *(_DWORD *)(v33 + 40) |= v5;
                v4 = sub_18007C600(v33, 0LL, 4LL);
              }
              if ( v8 )
              {
                v37 = sub_18006F10C(8LL, &v39, a2);
                v4 = v37;
                if ( v37 >= 0 )
                  return (unsigned int)sub_18007C600(0LL, v39, 5LL);
              }
            }
            return (unsigned int)v4;
          }
          if ( *UserPrefLanguages )
          {
            v20 = *(_QWORD *)(*UserPrefLanguages + 16);
            if ( v20 )
            {
              if ( *(_DWORD *)(v20 + 12) < *(_DWORD *)(a2 + 12) )
              {
LABEL_36:
                if ( UserPrefLanguages )
                {
                  v31 = *UserPrefLanguages;
                  if ( *UserPrefLanguages )
                  {
                    v7 = (*(_DWORD *)(v31 + 40) & 2) != 0;
                    v6 = (*(_DWORD *)(v31 + 40) & 4) != 0;
                    if ( (*(_DWORD *)(v31 + 40) & 2) != 0 || (*(_DWORD *)(v31 + 40) & 4) != 0 )
                      v5 = *(_DWORD *)(v31 + 40) & 0xFFFF0000;
                    sub_180032CEC(v31);
                    *UserPrefLanguages = 0LL;
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
            v21 = *UserPrefLanguages;
            if ( *UserPrefLanguages )
            {
              v22 = *(_DWORD *)(v21 + 40);
              if ( a1 )
                v23 = (v22 & 0x20) == 0;
              else
                v23 = (v22 & 0x10) == 0;
              if ( !v23 )
                return (unsigned int)v4;
              if ( (v22 & 2) != 0 )
                v7 = 1;
              if ( (v22 & 4) != 0 )
                v6 = 1;
              if ( v7 || v6 )
                v5 = v22 & 0xFFFF0000;
              sub_180032CEC(v21);
              *UserPrefLanguages = 0LL;
              if ( NtCurrentTeb()->MergedPrefLanguages )
              {
                sub_180032CEC(NtCurrentTeb()->MergedPrefLanguages);
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
            }
          }
          if ( v8 )
            goto LABEL_83;
          goto LABEL_43;
        }
      }
    }
  }
  return 3221225485LL;
}
