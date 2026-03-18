/*
 * XREFs of MiGetImageBitMapInfo @ 0x1400BB4C8
 * Callers:
 *     MiReturnImageBase @ 0x140499C04 (MiReturnImageBase.c)
 *     MiSelectImageBase @ 0x140504474 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageBitMapInfo(int a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  int v4; // ecx
  int v5; // ecx
  unsigned __int64 result; // rax

  a2[1] = 0LL;
  v4 = a1 - 1;
  if ( !v4 )
  {
LABEL_15:
    result = (unsigned __int64)&dword_1403882A8;
    *a2 = &dword_1403882A8;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (unsigned int)dword_1403882A0;
      goto LABEL_7;
    }
    return result;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    result = (unsigned __int64)&dword_1403882B8;
    *a2 = &dword_1403882B8;
    if ( a3 )
    {
      result = 0x7FFFFFFE0000LL;
      *a3 = 0x7FFFFFFE0000LL;
    }
    if ( a4 )
    {
      result = (unsigned int)dword_1403882A4;
LABEL_7:
      *a4 = result;
      return result;
    }
    return result;
  }
  result = (unsigned __int64)&dword_140388290;
  if ( v5 == 1 )
  {
    a2[1] = &dword_140388290;
    goto LABEL_15;
  }
  *a2 = &dword_140388290;
  if ( a3 )
    *a3 = 2013265920LL;
  if ( a4 )
  {
    result = (unsigned int)dword_140388284;
    goto LABEL_7;
  }
  return result;
}
