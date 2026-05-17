/*
 * XREFs of sub_1800563A0 @ 0x1800563A0
 * Callers:
 *     RtlConvertLCIDToString @ 0x1800EB9B0 (RtlConvertLCIDToString.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     sub_1800FB1B0 @ 0x1800FB1B0 (sub_1800FB1B0.c)
 *     sub_1800FB5BC @ 0x1800FB5BC (sub_1800FB5BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800563A0(_WORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_12;
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
LABEL_12:
      --a1;
      v3 = -2147483643;
    }
  }
  *a1 = 0;
  return (unsigned int)v3;
}
