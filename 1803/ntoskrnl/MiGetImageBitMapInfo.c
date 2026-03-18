/*
 * XREFs of MiGetImageBitMapInfo @ 0x14006C8AC
 * Callers:
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x1405937FC (MiReturnImageBase.c)
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
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        *a2 = &dword_1403CB448;
        result = (unsigned __int64)&dword_1403CB430;
        a2[1] = &dword_1403CB430;
      }
      else
      {
        result = (unsigned __int64)&dword_1403CB430;
        *a2 = &dword_1403CB430;
      }
      if ( a3 )
        *a3 = 2013265920LL;
      if ( a4 )
      {
        result = (unsigned int)dword_1403CB424;
LABEL_18:
        *a4 = result;
      }
    }
    else
    {
      result = (unsigned __int64)&dword_1403CB458;
      *a2 = &dword_1403CB458;
      if ( a3 )
      {
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
      }
      if ( a4 )
      {
        result = (unsigned int)dword_1403CB444;
        goto LABEL_18;
      }
    }
  }
  else
  {
    result = (unsigned __int64)&dword_1403CB448;
    *a2 = &dword_1403CB448;
    if ( a3 )
      *a3 = 2013265920LL;
    if ( a4 )
    {
      result = (unsigned int)dword_1403CB440;
      goto LABEL_18;
    }
  }
  return result;
}
