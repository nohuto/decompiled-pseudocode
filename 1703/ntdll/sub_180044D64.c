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
        __int64 a2,
        PVOID *a3,
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
  PVOID *v17; // rbx
  NTSTATUS SystemDefaultUILanguage; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  __int64 v22; // rax
  unsigned int v23; // ebx
  _WORD *v24; // rdx
  int v25; // r8d
  __int64 v26; // rax
  _BYTE *v27; // rdx
  __int64 v28; // r8
  PWCH Buffer; // r14
  PVOID *v30; // r15
  _BYTE *v31; // rdx
  _BYTE *v32; // rdx
  _WORD *v34; // rdx
  bool v35; // zf
  __int64 v36; // rcx
  unsigned int i; // r14d
  _WORD *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  char v41; // [rsp+28h] [rbp-79h]
  char v42; // [rsp+28h] [rbp-79h]
  char v43; // [rsp+28h] [rbp-79h]
  char v44; // [rsp+38h] [rbp-69h]
  _WORD v45[2]; // [rsp+3Ch] [rbp-65h] BYREF
  __int16 v46; // [rsp+40h] [rbp-61h] BYREF
  WCHAR *Heap; // [rsp+48h] [rbp-59h]
  LANGID DefaultUILanguageId; // [rsp+50h] [rbp-51h] BYREF
  _WORD v49[2]; // [rsp+54h] [rbp-4Dh] BYREF
  PVOID *p_BaseAddress; // [rsp+58h] [rbp-49h]
  int v51; // [rsp+60h] [rbp-41h]
  int v52; // [rsp+68h] [rbp-39h] BYREF
  __int64 v53; // [rsp+70h] [rbp-31h]
  unsigned int v54; // [rsp+78h] [rbp-29h]
  unsigned int v55; // [rsp+7Ch] [rbp-25h]
  PVOID BaseAddress; // [rsp+80h] [rbp-21h] BYREF
  int v57; // [rsp+88h] [rbp-19h]
  _UNICODE_STRING String; // [rsp+90h] [rbp-11h] BYREF
  char v59; // [rsp+E8h] [rbp+47h]

  v59 = a1;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  v55 = 0;
  v51 = 0;
  v11 = 0LL;
  v45[0] = -1;
  v12 = 0LL;
  v49[0] = -1;
  v46 = -1;
  BaseAddress = 0LL;
  v44 = 0;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v54 = v15;
  }
  else
  {
    v15 = 0;
    v54 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = (_DWORD)a3;
  p_BaseAddress = a3;
  if ( !v13 && (v15 & 6) != 0 )
  {
    v55 = HIWORD(v15);
    v44 = 1;
    p_BaseAddress = &BaseAddress;
    SystemDefaultUILanguage = sub_1800470C4(&BaseAddress, a2, 25LL);
    if ( SystemDefaultUILanguage < 0 )
      goto LABEL_52;
    v17 = &BaseAddress;
  }
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  v19 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  v20 = 170LL;
  if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
  {
    do
    {
      v34 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
      if ( *v34 )
      {
        v53 = v19;
        v35 = *(_QWORD *)(a4 + 16) == 0LL;
        v36 = a2;
        v52 = 11141120;
        if ( !v35 )
          v36 = *(_QWORD *)(a4 + 16);
        if ( (int)sub_18004576C(v36, v34, &v52, 170LL) >= 0 )
        {
          SystemDefaultUILanguage = sub_180045CA4((_DWORD)v17, a2, 0, (unsigned int)v45, v53);
          if ( SystemDefaultUILanguage < 0 )
            goto LABEL_51;
        }
        v19 = (__int64)Heap;
        v20 = 170LL;
      }
      v11 = (unsigned int)(v11 + 1);
      LODWORD(v17) = (_DWORD)p_BaseAddress;
    }
    while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
  }
  v21 = (int)p_BaseAddress;
  if ( a5 )
  {
    if ( !v13 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a5 + 4); v19 = (__int64)Heap )
      {
        v38 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * i);
        if ( *v38 )
        {
          v53 = v19;
          v35 = *(_QWORD *)(a5 + 16) == 0LL;
          v39 = a2;
          v52 = 11141120;
          if ( !v35 )
            v39 = *(_QWORD *)(a5 + 16);
          if ( (int)sub_18004576C(v39, v38, &v52, v20) >= 0 )
          {
            SystemDefaultUILanguage = sub_180045CA4(v21, a2, 0, (unsigned int)v45, v53);
            if ( SystemDefaultUILanguage < 0 )
              goto LABEL_51;
          }
        }
        ++i;
      }
    }
  }
  v57 = v59 & 0x20;
  if ( (v59 & 0x20) != 0 && ((v22 = a6) != 0 && *(_WORD *)(a6 + 4) || (v22 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v16 = v22;
    if ( *(_BYTE *)(v22 + 8) )
    {
      v12 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v12 = a8;
      if ( !a8 )
        v12 = *(_QWORD *)(a2 + 48);
    }
    v23 = 0;
    if ( *(_WORD *)(v22 + 4) )
    {
      do
      {
        v24 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v23);
        if ( *v24 )
        {
          v53 = (__int64)Heap;
          v52 = 11141120;
          if ( (int)sub_18004576C(a2, v24, &v52, v20) >= 0 )
          {
            LOBYTE(v25) = 1;
            if ( (int)sub_180045CA4(v21, a2, v25, (unsigned int)v45, v53) >= 0 && (v59 & 0x10) != 0 )
            {
              v26 = *(_QWORD *)(v16 + 24);
              if ( *(_WORD *)(v26 + 6LL * v23) == 2 )
              {
                v27 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v23 + 4));
                if ( (*v27 & 7) != 0 && ((*v27 & 6) == 0 || (int)sub_18008A338(v21, (_DWORD)v27, a2, v12, v41) >= 0) )
                  ++v51;
              }
            }
          }
        }
        ++v23;
      }
      while ( v23 < *(unsigned __int16 *)(v16 + 4) );
    }
  }
  v11 = (unsigned __int64)Heap;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, (PLCID)a2);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_52;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_52;
  }
  LOBYTE(v28) = 1;
  SystemDefaultUILanguage = sub_180045B5C(a2, DefaultUILanguageId, v28, &v46);
  if ( SystemDefaultUILanguage >= 0 )
  {
    Buffer = String.Buffer;
    if ( (v59 & 0x40) != 0 || a9 && v51 )
    {
      v30 = p_BaseAddress;
    }
    else
    {
      v30 = p_BaseAddress;
      SystemDefaultUILanguage = sub_180045CA4((_DWORD)p_BaseAddress, a2, 0, (unsigned int)v49, (__int64)String.Buffer);
      if ( SystemDefaultUILanguage >= 0 )
      {
        if ( v57 )
        {
          v31 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46);
          if ( (*v31 & 6) != 0 )
          {
            if ( !v16 || (LODWORD(v40) = v12, !v12) )
              v40 = *(_QWORD *)(a2 + 40);
            SystemDefaultUILanguage = sub_18008A338((_DWORD)v30, (_DWORD)v31, a2, v40, v42);
            if ( SystemDefaultUILanguage < 0 )
              goto LABEL_51;
          }
        }
      }
    }
    if ( v44 )
    {
      if ( v30 )
      {
        SystemDefaultUILanguage = sub_180046F10(*v30, a2, ((unsigned __int8)v54 >> 2) & 1, v55, a3);
        if ( SystemDefaultUILanguage >= 0 && (v59 & 0x30) == 0x30 )
        {
          SystemDefaultUILanguage = sub_180045CA4((_DWORD)a3, a2, 0, (unsigned int)v49, (__int64)Buffer);
          if ( SystemDefaultUILanguage >= 0 )
          {
            v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46);
            if ( (*v32 & 6) != 0 )
            {
              if ( !v16 || !v12 )
                v12 = *(_QWORD *)(a2 + 40);
              SystemDefaultUILanguage = sub_18008A338((_DWORD)a3, (_DWORD)v32, a2, v12, v43);
            }
          }
        }
      }
    }
LABEL_51:
    v11 = (unsigned __int64)Heap;
  }
LABEL_52:
  if ( BaseAddress )
    sub_180040BA0(BaseAddress);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
  return (unsigned int)SystemDefaultUILanguage;
}
