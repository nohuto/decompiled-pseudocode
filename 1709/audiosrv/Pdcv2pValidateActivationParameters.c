/*
 * XREFs of Pdcv2pValidateActivationParameters @ 0x18002C35C
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x18002B784 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800DE320 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     <none>
 */

char __fastcall Pdcv2pValidateActivationParameters(__int64 a1)
{
  char v1; // dl
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  _QWORD *v5; // rax
  unsigned __int64 *i; // r8

  v1 = 0;
  if ( !a1 || *(_DWORD *)a1 != 1 || *(_QWORD *)(a1 + 8) || (unsigned int)(*(_DWORD *)(a1 + 4) - 10) > 0x122 )
    return v1;
  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( !v2 )
    return 1;
  v3 = *v2;
  if ( *v2 > 0xA )
    return v1;
  v4 = 0LL;
  if ( !v3 )
  {
LABEL_12:
    if ( v3 < 0xA )
    {
      for ( i = &v2[2 * v3 + 1]; !*i && !i[1]; i += 2 )
      {
        if ( ++v3 >= 0xA )
          return 1;
      }
      return v1;
    }
    return 1;
  }
  v5 = v2 + 1;
  while ( *v5 && v5[1] )
  {
    ++v4;
    v5 += 2;
    if ( v4 >= v3 )
      goto LABEL_12;
  }
  return v1;
}
