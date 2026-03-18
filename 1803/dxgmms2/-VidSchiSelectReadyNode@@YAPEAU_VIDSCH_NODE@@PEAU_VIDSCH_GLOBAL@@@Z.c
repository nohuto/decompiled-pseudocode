/*
 * XREFs of ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0028484
 * Callers:
 *     VidSchiSelectContext @ 0x1C002CAFC (VidSchiSelectContext.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_NODE *__fastcall VidSchiSelectReadyNode(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_NODE *result; // rax
  ULONGLONG v3; // rdx
  int v4; // r8d
  __int64 LeastSignificantBit; // rcx

  if ( *((_DWORD *)a1 + 16) == 1 )
  {
    result = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + 55);
    if ( *((_DWORD *)result + 434) )
      return result;
  }
  else
  {
    v3 = *((_QWORD *)a1 + 52);
    v4 = *((_DWORD *)a1 + 238);
    if ( (v3 & *((_QWORD *)a1 + 53)) != 0 )
      v3 &= *((_QWORD *)a1 + 53);
    if ( v3 >> ((unsigned __int8)v4 + 1) )
      v3 = v3 >> ((unsigned __int8)v4 + 1) << ((unsigned __int8)v4 + 1);
    if ( v3 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v3);
      result = (struct _VIDSCH_NODE *)*((_QWORD *)a1 + LeastSignificantBit + 55);
      *((_DWORD *)a1 + 238) = LeastSignificantBit;
      return result;
    }
  }
  return 0LL;
}
