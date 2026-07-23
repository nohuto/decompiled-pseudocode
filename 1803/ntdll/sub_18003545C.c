/*
 * XREFs of sub_18003545C @ 0x18003545C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 *     sub_180032B9C @ 0x180032B9C (sub_180032B9C.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     sub_180035DEC @ 0x180035DEC (sub_180035DEC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     sub_18003645C @ 0x18003645C (sub_18003645C.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     ZwIsUILanguageComitted @ 0x18009CA30 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x18009D3B0 (ZwQueryInstallUILanguage.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 */

__int64 __fastcall sub_18003545C(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  PVOID *v17; // rbx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // r13d
  __int64 v21; // rax
  unsigned int v22; // ebx
  _WORD *v23; // rdx
  int v24; // r8d
  __int64 v25; // rax
  _BYTE *v26; // rdx
  LANGID v27; // si
  __int64 v28; // r8
  PWCH Buffer; // rsi
  __int64 *v30; // r14
  _BYTE *v31; // rdx
  _BYTE *v32; // rdx
  _WORD *v34; // rdx
  __int64 v35; // rcx
  unsigned int i; // esi
  _WORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  char v40; // [rsp+28h] [rbp-79h]
  char v41; // [rsp+28h] [rbp-79h]
  char v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+38h] [rbp-69h]
  LANGID InstallUILanguageId; // [rsp+3Ch] [rbp-65h] BYREF
  _WORD v45[2]; // [rsp+40h] [rbp-61h] BYREF
  __int16 v46; // [rsp+44h] [rbp-5Dh] BYREF
  WCHAR *Heap; // [rsp+48h] [rbp-59h]
  __int16 v48; // [rsp+50h] [rbp-51h] BYREF
  PVOID *p_BaseAddress; // [rsp+58h] [rbp-49h]
  int v50; // [rsp+60h] [rbp-41h]
  int v51; // [rsp+68h] [rbp-39h] BYREF
  __int64 v52; // [rsp+70h] [rbp-31h]
  unsigned int v53; // [rsp+78h] [rbp-29h]
  unsigned int v54; // [rsp+7Ch] [rbp-25h]
  PVOID BaseAddress; // [rsp+80h] [rbp-21h] BYREF
  int v56; // [rsp+88h] [rbp-19h]
  _UNICODE_STRING String; // [rsp+90h] [rbp-11h] BYREF
  char v58; // [rsp+E8h] [rbp+47h]

  v58 = a1;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v54 = 0;
  v50 = 0;
  v11 = 0LL;
  v45[0] = -1;
  v12 = 0LL;
  v48 = -1;
  v46 = -1;
  BaseAddress = 0LL;
  v43 = 0;
  if ( !a3 || !*(_QWORD *)a3 || !a2 || *(_WORD *)(*(_QWORD *)a3 + 4LL) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v53 = v15;
  }
  else
  {
    v15 = 0;
    v53 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = a3;
  p_BaseAddress = (PVOID *)a3;
  if ( !v13 && (v15 & 6) != 0 )
  {
    v43 = 1;
    v54 = HIWORD(v15);
    p_BaseAddress = &BaseAddress;
    v18 = sub_180032B9C((__int64 *)&BaseAddress, a2, 0x19u, 0);
    if ( v18 < 0 )
      goto LABEL_54;
    v17 = &BaseAddress;
  }
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  v19 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v34 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v34 )
      {
        v52 = v19;
        v35 = a2;
        v51 = 11141120;
        if ( *(_QWORD *)(a4 + 16) )
          v35 = *(_QWORD *)(a4 + 16);
        if ( (int)sub_180035DEC(v35, v34, &v51) >= 0 )
        {
          v18 = sub_18003645C((_DWORD)v17, a2, 0, (unsigned int)v45, v52);
          if ( v18 < 0 )
            goto LABEL_53;
        }
        v19 = (__int64)Heap;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v17) = (_DWORD)p_BaseAddress;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v20 = (int)p_BaseAddress;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = (__int64)Heap )
      {
        v37 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v37 )
        {
          v52 = v19;
          v38 = a2;
          v51 = 11141120;
          if ( *(_QWORD *)(a5 + 16) )
            v38 = *(_QWORD *)(a5 + 16);
          if ( (int)sub_180035DEC(v38, v37, &v51) >= 0 )
          {
            v18 = sub_18003645C(v20, a2, 0, (unsigned int)v45, v52);
            if ( v18 < 0 )
              goto LABEL_53;
          }
        }
        ++i;
      }
    }
  }
  v56 = v58 & 0x20;
  if ( (v58 & 0x20) != 0 && ((v21 = a6) != 0 && *(_WORD *)(a6 + 4) || (v21 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v16 = v21;
    if ( *(_BYTE *)(v21 + 8) )
    {
      v12 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = *(_QWORD *)(a2 + 48);
    }
    v22 = 0;
    if ( *(_WORD *)(v21 + 4) )
    {
      do
      {
        v23 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v22);
        if ( *v23 )
        {
          v52 = (__int64)Heap;
          v51 = 11141120;
          if ( (int)sub_180035DEC(a2, v23, &v51) >= 0 )
          {
            LOBYTE(v24) = 1;
            if ( (int)sub_18003645C(v20, a2, v24, (unsigned int)v45, v52) >= 0 && (v58 & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(v16 + 24);
              if ( *(_WORD *)(v25 + 6LL * v22) == 2 )
              {
                v26 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v22 + 4));
                if ( (*v26 & 7) != 0 && ((*v26 & 6) == 0 || (int)sub_1800E78E0(v20, (_DWORD)v26, a2, v12, v40) >= 0) )
                  ++v50;
              }
            }
          }
        }
        ++v22;
      }
      while ( v22 < *(unsigned __int16 *)(v16 + 4) );
    }
  }
  v11 = (unsigned __int64)Heap;
  v18 = 0;
  InstallUILanguageId = 0;
  v27 = 0;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( *(_WORD *)(a2 + 4) )
  {
    v27 = *(_WORD *)(a2 + 4);
  }
  else
  {
    v18 = ZwQueryInstallUILanguage(&InstallUILanguageId);
    if ( v18 >= 0 )
    {
      if ( ZwIsUILanguageComitted() >= 0 )
      {
        sub_18008A9A4(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = InstallUILanguageId;
      }
      v27 = InstallUILanguageId;
    }
  }
  if ( v18 < 0 )
    goto LABEL_54;
  if ( !RtlLCIDToCultureName(v27, &String) )
  {
    v18 = -1073741823;
    goto LABEL_54;
  }
  LOBYTE(v28) = 1;
  v18 = sub_1800362CC(a2, v27, v28, &v46);
  if ( v18 >= 0 )
  {
    Buffer = String.Buffer;
    if ( (v58 & 0x40) != 0 || a9 && v50 )
    {
      v30 = (__int64 *)p_BaseAddress;
    }
    else
    {
      v30 = (__int64 *)p_BaseAddress;
      v18 = sub_18003645C((_DWORD)p_BaseAddress, a2, 0, (unsigned int)&v48, (__int64)String.Buffer);
      if ( v18 >= 0 )
      {
        if ( v56 )
        {
          v31 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46);
          if ( (*v31 & 6) != 0 )
          {
            if ( !v16 || (LODWORD(v39) = v12, !v12) )
              v39 = *(_QWORD *)(a2 + 40);
            v18 = sub_1800E78E0((_DWORD)v30, (_DWORD)v31, a2, v39, v41);
            if ( v18 < 0 )
              goto LABEL_53;
          }
        }
      }
    }
    if ( v43 )
    {
      if ( v30 )
      {
        v18 = sub_1800316A8(*v30, a2, (v53 & 4) != 0, v54, a3);
        if ( v18 >= 0 && (v58 & 0x30) == 0x30 )
        {
          v18 = sub_18003645C(a3, a2, 0, (unsigned int)&v48, (__int64)Buffer);
          if ( v18 >= 0 )
          {
            v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46);
            if ( (*v32 & 6) != 0 )
            {
              if ( !v16 || !v12 )
                v12 = *(_QWORD *)(a2 + 40);
              v18 = sub_1800E78E0(a3, (_DWORD)v32, a2, v12, v42);
            }
          }
        }
      }
    }
LABEL_53:
    v11 = (unsigned __int64)Heap;
  }
LABEL_54:
  if ( BaseAddress )
    sub_180032CEC(BaseAddress);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
  return (unsigned int)v18;
}
