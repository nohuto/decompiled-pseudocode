/*
 * XREFs of ?vLoadAndConvert8ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C029D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvert8ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  unsigned __int8 *v8; // r8
  __int64 v9; // rax
  ULONG cEntries; // ecx

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = a4;
    v7 = 0LL;
    v8 = &a2[a3];
    if ( v8 > &v8[v6] )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        v9 = *v8;
        cEntries = a5->cEntries;
        if ( (unsigned int)v9 > cEntries )
          v9 = (unsigned int)v9 % cEntries;
        ++v8;
        ++v7;
        *a1++ = *((_DWORD *)&a5[3].iSrcType + v9) | 0xFF000000;
      }
      while ( v7 != v6 );
    }
  }
}
