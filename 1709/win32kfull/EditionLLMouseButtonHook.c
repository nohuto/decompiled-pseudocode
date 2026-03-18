/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C00535B0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C0053790 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rbp
  __int64 v8; // rcx
  BOOL v9; // r15d
  __int64 Valid; // rax
  int v11; // r9d
  int v12; // r10d
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rdi
  _QWORD *v21; // rdx
  __int64 v22; // rax
  char v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  if ( (unsigned int)IsDwmInputThread() )
    v8 = gptiRit;
  else
    v8 = gptiCurrent;
  v9 = *(_DWORD *)(a2 + 12) & 1;
  Valid = PhkFirstValid(v8, 14LL);
  v12 = Valid;
  if ( !Valid )
    return 0LL;
  if ( v7 )
  {
    if ( v7 != *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL);
      v14 = *(_QWORD *)(v13 + 832);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 400LL) + 832LL);
      if ( gbEnforceUIPI != v11 && (unsigned int)v14 <= (unsigned int)v15 )
      {
        if ( (_DWORD)v14 != (_DWORD)v15
          || (v16 = HIDWORD(v14), v17 = HIDWORD(v15), (_DWORD)v16 != (_DWORD)v17)
          && (_DWORD)v17 != -1
          && (_DWORD)v16 != -1 )
        {
          if ( *(_DWORD *)(v13 + 12) >= v11 )
            goto LABEL_36;
        }
      }
    }
  }
  v18 = *(_QWORD *)(gptiCurrent + 1336LL);
  v19 = *(_QWORD *)(gptiCurrent + 1320LL);
  v20 = *(_QWORD *)(gptiCurrent + 1328LL);
  *(_QWORD *)(gptiCurrent + 1336LL) = a2;
  if ( v7 )
  {
    v21 = *(_QWORD **)(*(_QWORD *)(v7 + 16) + 400LL);
    *(_QWORD *)(gptiCurrent + 1328LL) = *v21 == gpepCSRSS ? 0x2000LL : v21[104];
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 1328LL) = -1;
    *(_DWORD *)(gptiCurrent + 1332LL) = -1;
  }
  if ( v9 && *(_DWORD *)(a4 + 8) == v11 )
  {
    *(_QWORD *)(gptiCurrent + 1320LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 1320LL) = -1;
    *(_DWORD *)(gptiCurrent + 1324LL) = -1;
  }
  v22 = xxxCallHook2(v12, 0, v25, a2, (__int64)&v24);
  v11 = 0;
  *(_QWORD *)(gptiCurrent + 1320LL) = v19;
  *(_QWORD *)(gptiCurrent + 1328LL) = v20;
  *(_QWORD *)(gptiCurrent + 1336LL) = v18;
  if ( !v22 )
  {
LABEL_36:
    if ( a5 == v11 || IsGpqForegroundAccessibleOnInputThread(v9, (const struct tagUIPI_INFO_INT *)a4) )
      return 0LL;
    MSGLUA_GPQFOREGROUND();
  }
  return 1LL;
}
