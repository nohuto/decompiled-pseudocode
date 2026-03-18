/*
 * XREFs of MiGetImageBitMapInfo @ 0x14005EC64
 * Callers:
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
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
    result = (unsigned __int64)&dword_14036BF88;
    *a2 = &dword_14036BF88;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (unsigned int)dword_14036BF80;
      goto LABEL_7;
    }
    return result;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    result = (unsigned __int64)&dword_14036BF98;
    *a2 = &dword_14036BF98;
    if ( a3 )
    {
      result = 0x7FFFFFFE0000LL;
      *a3 = 0x7FFFFFFE0000LL;
    }
    if ( a4 )
    {
      result = (unsigned int)dword_14036BF84;
LABEL_7:
      *a4 = result;
      return result;
    }
    return result;
  }
  result = (unsigned __int64)&dword_14036BF70;
  if ( v5 == 1 )
  {
    a2[1] = &dword_14036BF70;
    goto LABEL_15;
  }
  *a2 = &dword_14036BF70;
  if ( a3 )
    *a3 = 2013265920LL;
  if ( a4 )
  {
    result = (unsigned int)dword_14036BF64;
    goto LABEL_7;
  }
  return result;
}
