/*
 * XREFs of PerfSelectionHwp @ 0x1C0006DC0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0008230 (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionHwp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        char a7,
        _DWORD *a8,
        _QWORD *a9)
{
  unsigned int v10; // r11d
  unsigned int v13; // eax
  _BYTE *v14; // rcx
  __int64 v15; // r10
  unsigned int v16; // edi
  int v17; // r9d
  char v18; // al
  int v19; // r9d
  __int16 v20; // ax
  int v21; // r9d
  char v23; // cl
  unsigned __int64 v24; // rcx
  __int64 v26; // [rsp+70h] [rbp+48h]

  v10 = a3;
  if ( a2 >= a3 )
    v10 = a2;
  if ( v10 > a4 )
    v10 = a4;
  if ( a9 )
  {
    v13 = PerformanceFromPercentage(a1, v10);
    v26 = 0LL;
    v16 = v13;
    if ( v14[93] )
    {
      if ( (a7 & 4) != 0 )
        v17 = 0;
      else
        v17 = (unsigned __int8)v13 << 16;
      LODWORD(v26) = v17;
    }
    else
    {
      v17 = 0;
    }
    if ( v14[94] )
    {
      v18 = PerformanceFromPercentage(v14, a3);
      v17 = (unsigned __int8)(v19 ^ v18) ^ v19;
      LODWORD(v26) = v17;
    }
    if ( v14[95] )
    {
      v20 = PerformanceFromPercentage(v14, a4);
      v17 = ((unsigned __int16)v21 ^ (unsigned __int16)(v20 << 8)) & 0xFF00 ^ v21;
      LODWORD(v26) = v17;
    }
    if ( v14[96] )
      LODWORD(v26) = v17 & 0xFFFFFF | ((255 * a5 / 0x64u) << 24);
    if ( *(_BYTE *)(v15 + 97) )
    {
      v23 = 0;
      while ( a6 > 0x7F )
      {
        ++v23;
        a6 /= 0xAu;
      }
      HIDWORD(v26) = a6 & 0x7F | ((v23 & 7) << 7);
    }
    *a9 = v26;
    v24 = *(_QWORD *)(v15 + 56);
    if ( v16 < v24 )
      v24 = v16;
    if ( a8 )
      *a8 = v24 * *(unsigned int *)(v15 + 64) / *(_QWORD *)(v15 + 16);
  }
  return v10;
}
