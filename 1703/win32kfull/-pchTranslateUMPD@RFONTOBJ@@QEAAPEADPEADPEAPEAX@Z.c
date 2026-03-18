/*
 * XREFs of ?pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEADPEAPEAX@Z @ 0x1C0286E60
 * Callers:
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02870E0 (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall RFONTOBJ::pchTranslateUMPD(RFONTOBJ *this, char *a2, void **a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  __int64 v7; // rcx
  __int64 *v8; // rdx
  unsigned int v9; // r9d
  int v10; // r8d
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  char *result; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 CurrentProcess; // rax
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)a2 < 0x10000 )
    return 0LL;
  if ( a2 > MmHighestUserAddress )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( !v7 )
    return 0LL;
  v8 = *(__int64 **)(v7 + 152);
  if ( !v8 )
    return 0LL;
  v9 = *(_DWORD *)(v7 + 36);
  v10 = 0;
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    v11 = *v8;
    if ( *v8 )
    {
      if ( !v10 )
      {
        v4 = *(_QWORD *)(v11 + 32);
        v3 = *(_QWORD *)(v11 + 104);
      }
      v12 = *(_QWORD *)(v11 + 104);
      if ( !v12 )
        v12 = v3;
      if ( (v12 || (v12 = *(_QWORD *)(v11 + 16)) != 0)
        && v12 <= (unsigned __int64)a2
        && (unsigned __int64)a2 < v12 + *(unsigned int *)(v11 + 24) )
      {
        break;
      }
    }
    ++v8;
    if ( ++v10 >= v9 )
      return 0LL;
  }
  v14 = *(_QWORD *)(v11 + 32);
  if ( !v14 )
    v14 = v4;
  result = 0LL;
  if ( v14 )
  {
    *a3 = 0LL;
    v15 = *(unsigned int *)(v11 + 24);
    v17 = 0LL;
    v18 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v11);
    if ( (int)MmMapViewOfSection(v14, CurrentProcess, a3, 0LL, v15, &v18, &v17, 2, 0, 2) >= 0 )
      return (char *)*a3 + (_QWORD)a2 - v12;
    *a3 = 0LL;
    return 0LL;
  }
  return result;
}
