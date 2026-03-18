/*
 * XREFs of ?vLoadAndConvert8ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02A0F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvert8ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, __int64 a4, struct _XLATEOBJ *a5)
{
  unsigned __int8 *v6; // r10
  __int64 i; // r8
  __int64 v8; // rax
  ULONG cEntries; // ecx

  if ( (a5->flXlate & 2) != 0 )
  {
    a4 = (int)a4;
    v6 = &a2[a3];
    if ( v6 > &v6[(int)a4] )
      a4 = 0LL;
    if ( a4 )
    {
      for ( i = 0LL; i != a4; ++i )
      {
        v8 = *v6;
        cEntries = a5->cEntries;
        if ( (unsigned int)v8 > cEntries )
          v8 = (unsigned int)v8 % cEntries;
        ++v6;
        *a1++ = *((_DWORD *)&a5[3].iSrcType + v8) | 0xFF000000;
      }
    }
  }
}
