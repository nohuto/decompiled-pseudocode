/*
 * XREFs of sub_180044D64 @ 0x180044D64
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CBF0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18006D510 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_180045CA4 @ 0x180045CA4 (sub_180045CA4.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046590 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 */

__int64 __fastcall sub_180044D64(
        int a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  int v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r12
  unsigned __int64 *v17; // rbx
  int SystemDefaultUILanguage; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  __int64 v22; // rax
  unsigned int v23; // ebx
  _WORD *v24; // rdx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned __int64 *v29; // r15
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  _WORD *v33; // rdx
  bool v34; // zf
  _QWORD *v35; // rcx
  unsigned int i; // r14d
  _WORD *v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // r9
  char v40; // [rsp+28h] [rbp-79h]
  char v41; // [rsp+28h] [rbp-79h]
  char v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+38h] [rbp-69h]
  _WORD v44[2]; // [rsp+3Ch] [rbp-65h] BYREF
  __int16 v45; // [rsp+40h] [rbp-61h] BYREF
  __int64 Heap; // [rsp+48h] [rbp-59h]
  _WORD v47[2]; // [rsp+50h] [rbp-51h] BYREF
  _WORD v48[2]; // [rsp+54h] [rbp-4Dh] BYREF
  unsigned __int64 *v49; // [rsp+58h] [rbp-49h]
  int v50; // [rsp+60h] [rbp-41h]
  int v51; // [rsp+68h] [rbp-39h] BYREF
  __int64 v52; // [rsp+70h] [rbp-31h]
  unsigned int v53; // [rsp+78h] [rbp-29h]
  unsigned int v54; // [rsp+7Ch] [rbp-25h]
  unsigned __int64 v55; // [rsp+80h] [rbp-21h] BYREF
  int v56; // [rsp+88h] [rbp-19h]
  __int64 v57; // [rsp+90h] [rbp-11h] BYREF
  __int64 v58; // [rsp+98h] [rbp-9h]
  char v59; // [rsp+E8h] [rbp+47h]

  v59 = a1;
  v57 = 0LL;
  v58 = 0LL;
  v54 = 0;
  v50 = 0;
  v11 = 0LL;
  v44[0] = -1;
  v12 = 0LL;
  v48[0] = -1;
  v45 = -1;
  v55 = 0LL;
  v43 = 0;
  if ( !a3 || !*a3 || !a2 || *(_WORD *)(*a3 + 4) )
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
  LODWORD(v17) = (_DWORD)a3;
  v49 = a3;
  if ( !v13 && (v15 & 6) != 0 )
  {
    v54 = HIWORD(v15);
    v43 = 1;
    v49 = &v55;
    SystemDefaultUILanguage = sub_1800470C4(&v55, a2, 25LL);
    if ( SystemDefaultUILanguage < 0 )
      goto LABEL_52;
    v17 = &v55;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 340LL);
  v19 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v20 = 170LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v33 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v33 )
      {
        v52 = v19;
        v34 = *(_QWORD *)(a4 + 16) == 0LL;
        v35 = a2;
        v51 = 11141120;
        if ( !v34 )
          v35 = *(_QWORD **)(a4 + 16);
        if ( (int)sub_18004576C(v35, v33, &v51, 170LL) >= 0 )
        {
          SystemDefaultUILanguage = sub_180045CA4((_DWORD)v17, (_DWORD)a2, 0, (unsigned int)v44, v52);
          if ( SystemDefaultUILanguage < 0 )
            goto LABEL_51;
        }
        v19 = Heap;
        v20 = 170LL;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v17) = (_DWORD)v49;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v21 = (int)v49;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = Heap )
      {
        v37 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v37 )
        {
          v52 = v19;
          v34 = *(_QWORD *)(a5 + 16) == 0LL;
          v38 = a2;
          v51 = 11141120;
          if ( !v34 )
            v38 = *(_QWORD **)(a5 + 16);
          if ( (int)sub_18004576C(v38, v37, &v51, v20) >= 0 )
          {
            SystemDefaultUILanguage = sub_180045CA4(v21, (_DWORD)a2, 0, (unsigned int)v44, v52);
            if ( SystemDefaultUILanguage < 0 )
              goto LABEL_51;
          }
        }
        ++i;
      }
    }
  }
  v56 = v59 & 0x20;
  if ( (v59 & 0x20) != 0 && ((v22 = a6) != 0 && *(_WORD *)(a6 + 4) || (v22 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v16 = v22;
    if ( *(_BYTE *)(v22 + 8) )
    {
      v12 = a2[5];
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = a2[6];
    }
    v23 = 0;
    if ( *(_WORD *)(v22 + 4) )
    {
      do
      {
        v24 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v23);
        if ( *v24 )
        {
          v52 = Heap;
          v51 = 11141120;
          if ( (int)sub_18004576C(a2, v24, &v51, v20) >= 0 )
          {
            LOBYTE(v19) = 1;
            if ( (int)sub_180045CA4(v21, (_DWORD)a2, v19, (unsigned int)v44, v52) >= 0 && (v59 & 0x10) != 0 )
            {
              v25 = *(_QWORD *)(v16 + 24);
              if ( *(_WORD *)(v25 + 6LL * v23) == 2 )
              {
                v26 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v23 + 4));
                if ( (*v26 & 7) != 0
                  && ((*v26 & 6) == 0 || (int)sub_18008A338(v21, (_DWORD)v26, (_DWORD)a2, v12, v40) >= 0) )
                {
                  ++v50;
                }
              }
            }
          }
        }
        ++v23;
      }
      while ( v23 < *(unsigned __int16 *)(v16 + 4) );
    }
  }
  v11 = Heap;
  LODWORD(v57) = 11141120;
  v58 = Heap + 170;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(v47, a2, v19, v20);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v47[0], &v57) )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_52;
  }
  LOBYTE(v27) = 1;
  SystemDefaultUILanguage = sub_180045B5C(a2, v47[0], v27, &v45);
  if ( SystemDefaultUILanguage >= 0 )
  {
    v28 = v58;
    if ( (v59 & 0x40) != 0 || a9 && v50 )
    {
      v29 = v49;
    }
    else
    {
      v29 = v49;
      SystemDefaultUILanguage = sub_180045CA4((_DWORD)v49, (_DWORD)a2, 0, (unsigned int)v48, v58);
      if ( SystemDefaultUILanguage >= 0 )
      {
        if ( v56 )
        {
          v30 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * v45);
          if ( (*v30 & 6) != 0 )
          {
            if ( !v16 || (LODWORD(v39) = v12, !v12) )
              v39 = a2[5];
            SystemDefaultUILanguage = sub_18008A338((_DWORD)v29, (_DWORD)v30, (_DWORD)a2, v39, v41);
            if ( SystemDefaultUILanguage < 0 )
              goto LABEL_51;
          }
        }
      }
    }
    if ( v43 )
    {
      if ( v29 )
      {
        SystemDefaultUILanguage = sub_180046F10(*v29, a2, ((unsigned __int8)v53 >> 2) & 1, v54, a3);
        if ( SystemDefaultUILanguage >= 0 && (v59 & 0x30) == 0x30 )
        {
          SystemDefaultUILanguage = sub_180045CA4((_DWORD)a3, (_DWORD)a2, 0, (unsigned int)v48, v28);
          if ( SystemDefaultUILanguage >= 0 )
          {
            v31 = (_BYTE *)(*(_QWORD *)(a2[3] + 16LL) + 28LL * v45);
            if ( (*v31 & 6) != 0 )
            {
              if ( !v16 || !v12 )
                v12 = a2[5];
              SystemDefaultUILanguage = sub_18008A338((_DWORD)a3, (_DWORD)v31, (_DWORD)a2, v12, v42);
            }
          }
        }
      }
    }
LABEL_51:
    v11 = Heap;
  }
LABEL_52:
  if ( v55 )
    sub_180040BA0(v55);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)SystemDefaultUILanguage;
}
