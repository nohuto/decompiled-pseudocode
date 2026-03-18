/*
 * XREFs of ?SetFloatProperty@CPencilMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01425F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::SetFloatProperty(
        DirectComposition::CPencilMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  bool v5; // dl

  result = 0LL;
  *a4 = 0;
  if ( a2 )
  {
    if ( a2 != 2 )
      return 3221225485LL;
    if ( *((float *)this + 11) != a3 )
    {
      *((float *)this + 11) = a3;
LABEL_9:
      v5 = 1;
      goto LABEL_10;
    }
  }
  else if ( *((float *)this + 10) != a3 )
  {
    *((float *)this + 10) = a3;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_10:
  *a4 = v5;
  *((_DWORD *)this + 4) &= ~0x20u;
  return result;
}
