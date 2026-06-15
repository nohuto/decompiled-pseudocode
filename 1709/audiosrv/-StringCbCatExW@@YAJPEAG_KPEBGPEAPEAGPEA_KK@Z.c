/*
 * XREFs of ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18002FDD8
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001DFE8 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x18002FE88 (StringCopyWorkerW_0.c)
 *     StringLengthWorkerW_0 @ 0x18002FEF4 (StringLengthWorkerW_0.c)
 */

__int64 __fastcall StringCbCatExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  HRESULT v6; // r8d
  __int64 v7; // r11
  size_t v8; // rbx
  wchar_t *v9; // rdi
  size_t v11; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+50h] [rbp+18h] BYREF

  pcchNewDestLength = (size_t)a3;
  v6 = StringLengthWorkerW_0(a1, a2, &pcchNewDestLength);
  if ( v6 >= 0 )
  {
    v8 = 260 - pcchNewDestLength;
    v9 = (wchar_t *)(v7 + 2 * pcchNewDestLength);
    if ( pcchNewDestLength == 260 || pcchNewDestLength == 259 )
    {
      if ( !v7 )
        return (unsigned int)-2147024809;
      v6 = -2147024774;
    }
    else
    {
      pcchNewDestLength = 0LL;
      v6 = StringCopyWorkerW_0(v9, v8, &pcchNewDestLength, L"\\AUDIODG.EXE", v11);
      v8 -= pcchNewDestLength;
      v9 += pcchNewDestLength;
      if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147024774 )
        return (unsigned int)v6;
    }
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = 2 * v8;
  }
  return (unsigned int)v6;
}
