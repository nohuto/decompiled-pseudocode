/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0143A84
 * Callers:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F3B0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // r10
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 >= 0 )
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_10;
    v5 = 2147483646 - v3;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
LABEL_10:
      a1 -= 2;
      v4 = -2147024774;
    }
    goto LABEL_12;
  }
  if ( v3 )
LABEL_12:
    *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
