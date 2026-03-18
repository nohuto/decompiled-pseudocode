/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x1400CEF50
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v5; // r9
  _QWORD *Teb; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  unsigned __int16 v12; // [rsp+20h] [rbp-48h]
  unsigned int v13; // [rsp+24h] [rbp-44h]
  unsigned int v14; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v13 = 0;
  v12 = 0;
  v14 = 0;
  if ( a1 || !a3 )
    return 3221225485LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  v7 = Teb[762];
  if ( v7 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v7 + 64 > 0x7FFFFFFF0000LL || v7 + 64 < v7 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v8 = *(_QWORD *)(v7 + 24);
    if ( v8 )
    {
      v14 = *(unsigned __int16 *)(v7 + 4);
      if ( (unsigned int)v5 < v14 )
      {
        if ( (v8 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v8 + 6 * v5;
        if ( v9 + 6 > 0x7FFFFFFF0000LL || v9 + 6 < v9 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( (unsigned __int16)*(_DWORD *)v9 == 1 )
          v12 = *(_WORD *)(v9 + 4);
        else
          v13 = -1073741595;
      }
    }
  }
  *a3 = v12;
  if ( a4 )
    *a4 = v14;
  v10 = v13;
  if ( !v13 )
  {
    if ( !v12 )
      return (unsigned int)-1073741275;
    return v10;
  }
  return v13;
}
