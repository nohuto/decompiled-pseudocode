/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C0101D20
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, int *a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // r15d
  __int64 Valid; // rax
  int v11; // r11d
  __int64 v12; // r10
  _DWORD *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  int v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  if ( (unsigned int)IsDwmInputThread(a1, a2, a3, a4) )
    v8 = gptiRit;
  else
    v8 = gptiCurrent;
  v9 = a2[3] & 1;
  Valid = PhkFirstValid(v8, 14);
  v12 = Valid;
  if ( !Valid )
    return 0LL;
  if ( !v7
    || v7 == *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL)
    || (v13 = (_DWORD *)gbEnforceUIPI,
        v14 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL),
        v15 = *(_QWORD *)(v14 + 824),
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL) + 824LL),
        gbEnforceUIPI == v11)
    || (unsigned int)v15 > (unsigned int)v16
    || (_DWORD)v15 == (_DWORD)v16
    && ((v25 = HIDWORD(v15), v26 = HIDWORD(v16), (_DWORD)v25 == (_DWORD)v26) || (_DWORD)v26 == -1 || (_DWORD)v25 == -1)
    || *(_DWORD *)(v14 + 12) < v11 )
  {
    v17 = *(_QWORD *)(gptiCurrent + 1248LL);
    v18 = *(_QWORD *)(gptiCurrent + 1232LL);
    v19 = *(_QWORD *)(gptiCurrent + 1240LL);
    *(_QWORD *)(gptiCurrent + 1248LL) = a2;
    if ( v7 )
    {
      v20 = *(_QWORD **)(*(_QWORD *)(v7 + 16) + 376LL);
      if ( *v20 == gpepCSRSS )
        *(_QWORD *)(gptiCurrent + 1240LL) = 0x2000LL;
      else
        *(_QWORD *)(gptiCurrent + 1240LL) = v20[103];
    }
    else
    {
      *(_DWORD *)(gptiCurrent + 1240LL) = -1;
      *(_DWORD *)(gptiCurrent + 1244LL) = -1;
    }
    if ( v9 && *((_DWORD *)a4 + 2) == v11 )
    {
      *(_QWORD *)(gptiCurrent + 1232LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    }
    else
    {
      *(_DWORD *)(gptiCurrent + 1232LL) = -1;
      *(_DWORD *)(gptiCurrent + 1236LL) = -1;
    }
    v21 = xxxCallHook2(v12, 0, v30, a2, &v29);
    v11 = 0;
    *(_QWORD *)(gptiCurrent + 1232LL) = v18;
    *(_QWORD *)(gptiCurrent + 1240LL) = v19;
    *(_QWORD *)(gptiCurrent + 1248LL) = v17;
    if ( v21 )
      return 1LL;
    v13 = (_DWORD *)gbEnforceUIPI;
  }
  if ( a5 == v11 )
    return 0LL;
  if ( !v9 )
    return 0LL;
  if ( !gpqForeground )
    return 0LL;
  v22 = *(_QWORD *)(gpqForeground + 380LL);
  v23 = *a4;
  if ( *v13 == v11 )
    return 0LL;
  if ( (unsigned int)v23 > (unsigned int)v22 )
    return 0LL;
  if ( (_DWORD)v23 == (_DWORD)v22 )
  {
    v27 = HIDWORD(v23);
    v28 = HIDWORD(v22);
    if ( (_DWORD)v27 == (_DWORD)v28 || (_DWORD)v28 == -1 || (_DWORD)v27 == -1 )
      return 0LL;
  }
  if ( *((_DWORD *)a4 + 2) != v11 )
    return 0LL;
  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 1LL;
}
