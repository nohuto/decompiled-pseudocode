/*
 * XREFs of SeObjectCreateSaclAccessBits @ 0x140441F74
 * Callers:
 *     ObpAdjustAccessMask @ 0x1404CB0E4 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall SeObjectCreateSaclAccessBits(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v1; // edx
  __int64 v2; // rax
  char *v3; // rax
  char *v4; // rcx
  unsigned int v5; // r9d

  if ( (~(unsigned __int8)*((_WORD *)SecurityDescriptor + 1) & 0x10) != 0 )
    return 0x1000000;
  v1 = 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v2 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v2 )
      return 0x1000000;
    v3 = (char *)SecurityDescriptor + v2;
  }
  if ( !v3 )
    return 0x1000000;
  v4 = v3 + 8;
  v5 = 0;
  if ( *((_WORD *)v3 + 2) )
  {
    while ( (unsigned __int8)(*v4 - 17) <= 1u || (unsigned __int8)(*v4 - 20) <= 1u )
    {
      ++v5;
      v4 += *((unsigned __int16 *)v4 + 1);
      if ( v5 >= *((unsigned __int16 *)v3 + 2) )
        return v1;
    }
    return 0x1000000;
  }
  return v1;
}
