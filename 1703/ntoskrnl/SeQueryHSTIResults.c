/*
 * XREFs of SeQueryHSTIResults @ 0x140576058
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  size_t v3; // rax
  unsigned int v4; // ebx

  v3 = (unsigned int)dword_1407BC700;
  *a3 = dword_1407BC700;
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    if ( a2 >= (unsigned int)v3 )
      memmove(a1, qword_1407BC708, v3);
    else
      return (unsigned int)-1073741820;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
