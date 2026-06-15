/*
 * XREFs of RtlStringCchCopyW @ 0x1800DE7BC
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x1800DE320 (Pdcv2ActivationClientRenewActivation.c)
 *     PdcPortOpen @ 0x1800DE938 (PdcPortOpen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(_WORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_10;
    v4 = 2147483646 - a2;
    v5 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)((char *)a1 + v5);
      if ( !v6 )
        break;
      *a1++ = v6;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_10:
      --a1;
      v3 = -2147483643;
    }
    goto LABEL_12;
  }
  if ( a2 )
LABEL_12:
    *a1 = 0;
  return (unsigned int)v3;
}
