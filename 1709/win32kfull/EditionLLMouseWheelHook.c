/*
 * XREFs of EditionLLMouseWheelHook @ 0x1C01BACA0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C0053790 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 */

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, const struct tagUIPI_INFO_INT *a3, __int64 a4)
{
  int v4; // r14d
  __int64 v6; // r12
  char v8; // si
  __int64 v9; // rcx
  __int64 Valid; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  v6 = (unsigned int)a2;
  v8 = *(_BYTE *)(a1 + 12) & 1;
  if ( (unsigned int)IsDwmInputThread(a1, a2, a3, a4) )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  Valid = PhkFirstValid(v9, 14);
  if ( Valid )
  {
    v11 = *(_QWORD *)(gptiCurrent + 1336LL);
    *(_QWORD *)(gptiCurrent + 1336LL) = a1;
    v12 = xxxCallHook2(Valid, 0, v6, (int *)a1, &v14);
    *(_QWORD *)(gptiCurrent + 1336LL) = v11;
    if ( v12 )
      return 1LL;
    if ( v4 && !IsGpqForegroundAccessibleOnInputThread(v8, a3) )
    {
      MSGLUA_GPQFOREGROUND();
      return 1LL;
    }
  }
  return 0LL;
}
