/*
 * XREFs of GetPackedName @ 0x1C001EA3C
 * Callers:
 *     EnumerateControlMethods @ 0x1C001E7F0 (EnumerateControlMethods.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackedName(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // r10
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = a1;
    while ( 1 )
    {
      v8 = v4;
      if ( !*v7 )
        break;
      v4 = v6;
      if ( *v7 != 46 )
        v4 = v8;
      ++v6;
      ++v7;
      if ( v6 >= a2 )
        goto LABEL_9;
    }
    v5 = v6;
  }
LABEL_9:
  if ( v5 > v4 && v5 - v4 - 1 <= 4 )
  {
    v9 = v5 - 1;
    if ( v9 > v4 )
    {
      v10 = &a1[v9];
      v11 = v9 - v4;
      do
      {
        v12 = *v10--;
        v2 = v12 + (v2 << 8);
        --v11;
      }
      while ( v11 );
    }
  }
  return v2;
}
