/*
 * XREFs of ApiSetpSearchForApiSet @ 0x14016A36C
 * Callers:
 *     ApiSetResolveToHost @ 0x1401617C8 (ApiSetResolveToHost.c)
 *     ApiSetComposeSchema @ 0x1402C062C (ApiSetComposeSchema.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140557CF0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  unsigned int v4; // r11d
  const WCHAR *v7; // r9
  int v8; // edi
  __int64 v9; // rbx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  __int64 v16; // r9
  unsigned int v17; // eax

  v4 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a1[6];
    v9 = a3;
    do
    {
      v10 = *v7++;
      v11 = v10 + 32;
      if ( (unsigned __int16)(v10 - 65) > 0x19u )
        v11 = v10;
      v4 = v11 + v8 * v4;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0LL;
  v13 = 0;
  v14 = a1[3] - 1;
  if ( v14 < 0 )
    return v12;
  while ( 1 )
  {
    v15 = (v14 + v13) >> 1;
    v16 = (unsigned int)a1[5] + 8LL * v15;
    v17 = *(_DWORD *)((char *)a1 + v16);
    if ( v4 < v17 )
    {
      v14 = v15 - 1;
      goto LABEL_10;
    }
    if ( v4 <= v17 )
      break;
    v13 = v15 + 1;
LABEL_10:
    if ( v13 > v14 )
      return v12;
  }
  v12 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v16 + 4)] + (unsigned int)a1[4];
  if ( !v12
    || !RtlCompareUnicodeStrings(
          a2,
          a3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v12 + 4)),
          (unsigned __int64)*(unsigned int *)(v12 + 12) >> 1,
          1u) )
  {
    return v12;
  }
  return 0LL;
}
