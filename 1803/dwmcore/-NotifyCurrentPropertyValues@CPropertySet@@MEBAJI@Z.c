/*
 * XREFs of ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801A3570
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValues(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v5; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 26) )
      {
        v5 = CPropertySet::NotifyPropertyValue((__int64)this, v2, *(_DWORD *)(*((_QWORD *)this + 10) + 8 * v2));
        if ( v5 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      v3 >>= 1;
      if ( !v3 )
        return 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1FFu);
  }
  return 0LL;
}
