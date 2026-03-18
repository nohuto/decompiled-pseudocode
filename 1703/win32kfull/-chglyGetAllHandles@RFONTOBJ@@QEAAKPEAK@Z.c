/*
 * XREFs of ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1C02A4134
 * Callers:
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C02735B0 (FONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::chglyGetAllHandles(RFONTOBJ *this, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r10
  unsigned int i; // r11d
  unsigned __int16 *v8; // r9
  unsigned int j; // ebx
  __int64 v10; // rcx
  unsigned int k; // ecx
  unsigned int v12; // eax

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
  if ( *(_DWORD *)(v4 + 4) > 8u && (result = *(unsigned int *)(v4 + 200), (_DWORD)result) )
  {
    if ( a2 )
    {
      do
        *a2++ = v3++;
      while ( v3 < (unsigned int)result );
    }
  }
  else
  {
    v6 = *(_QWORD *)(v2 + 472);
    if ( a2 )
    {
      for ( i = 0; i < *(_DWORD *)(v6 + 12); ++i )
      {
        v8 = (unsigned __int16 *)(v6 + 16 * (i + 1LL));
        if ( *((_QWORD *)v8 + 1) )
        {
          for ( j = 0; j < v8[1]; ++a2 )
          {
            v10 = j++;
            *a2 = *(_DWORD *)(*((_QWORD *)v8 + 1) + 4 * v10);
          }
        }
        else
        {
          for ( k = 0; k < v8[1]; ++a2 )
          {
            v12 = k + *v8;
            ++k;
            *a2 = v12;
          }
        }
      }
    }
    return *(unsigned int *)(v6 + 8);
  }
  return result;
}
