/*
 * XREFs of sub_1800456F0 @ 0x1800456F0
 * Callers:
 *     sub_18000FAB4 @ 0x18000FAB4 (sub_18000FAB4.c)
 *     RtlGetVersion @ 0x1800396A0 (RtlGetVersion.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlInstallFunctionTableCallback @ 0x180074550 (RtlInstallFunctionTableCallback.c)
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180084E00 (RtlpGetNameFromLangInfoNode.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800456F0(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  __int16 v7; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return (unsigned int)v4;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_12;
    v5 = 2147483646 - v3;
    v6 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(_WORD *)((char *)a1 + v6);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
LABEL_12:
      --a1;
      v4 = -2147483643;
    }
  }
  *a1 = 0;
  return (unsigned int)v4;
}
