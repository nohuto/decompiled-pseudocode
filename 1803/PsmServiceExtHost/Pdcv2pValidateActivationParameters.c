/*
 * XREFs of Pdcv2pValidateActivationParameters @ 0x1800361F0
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800357F8 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18006B1C0 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     <none>
 */

char __fastcall Pdcv2pValidateActivationParameters(__int64 a1)
{
  char v1; // dl
  unsigned __int64 *v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  _QWORD *v6; // rax
  unsigned __int64 *i; // r8

  v1 = 0;
  if ( a1
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && !*(_QWORD *)(a1 + 8)
    && (unsigned int)(*(_DWORD *)(a1 + 4) - 10) <= 0x122 )
  {
    v2 = *(unsigned __int64 **)(a1 + 24);
    if ( !v2 )
      return 1;
    v4 = *v2;
    if ( *v2 > 0xA )
      return v1;
    v5 = 0LL;
    if ( v4 )
    {
      v6 = v2 + 1;
      while ( *v6 && v6[1] )
      {
        ++v5;
        v6 += 2;
        if ( v5 >= v4 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( v4 >= 0xA )
        return 1;
      for ( i = &v2[2 * v4 + 1]; !*i && !i[1]; i += 2 )
      {
        if ( ++v4 >= 0xA )
          return 1;
      }
    }
  }
  return v1;
}
