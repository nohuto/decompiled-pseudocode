/*
 * XREFs of WdipSemCaptureState @ 0x140279D40
 * Callers:
 *     WdipSemDisableContextProvider @ 0x14073FE74 (WdipSemDisableContextProvider.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemCaptureState(__int64 a1, char a2, __int64 a3)
{
  char v4; // si
  unsigned int v5; // ecx
  unsigned __int16 v6; // di
  int v7; // edx
  int v8; // edx
  __int64 v10; // rcx
  unsigned __int8 v11; // dl
  __int64 v12; // r9
  unsigned int v13; // ecx

  v4 = 0;
  v5 = 0;
  if ( !a2 )
  {
    if ( !a1 )
      return (unsigned int)-1073741811;
    v6 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
    v7 = *(_DWORD *)(a1 + 32);
    if ( !v7 )
      return v5;
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v5;
      return (unsigned int)WdipSemEnableDisableTrace(v6, a1, 0LL, 0LL, 0, 2);
    }
    v10 = *(_QWORD *)(a1 + 40);
    if ( *(_BYTE *)(v10 + 69) )
      goto LABEL_18;
    v11 = *(_BYTE *)(v10 + 48);
    v4 = 1;
    v12 = *(_QWORD *)(v10 + 56);
    v13 = *(_DWORD *)(v10 + 64);
    if ( *(_BYTE *)(a1 + 18) > v11 )
      v11 = *(_BYTE *)(a1 + 18);
    LOBYTE(a3) = v11;
    v5 = WdipSemEnableDisableTrace(v6, a1, a3, *(_QWORD *)(a1 + 24) | v12, *(_DWORD *)(a1 + 36) | v13, 1);
    if ( (v5 & 0x80000000) == 0 )
    {
LABEL_18:
      v5 = WdipSemEnableDisableTrace(v6, a1, 0LL, 0LL, 0, 2);
      if ( v4 )
        return (unsigned int)WdipSemEnableDisableTrace(v6, a1, 0LL, 0LL, 0, 0);
    }
  }
  return v5;
}
