/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C027BF48
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027C19C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C0290F5C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_10;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_10:
      a1 -= 2;
      v3 = -2147483643;
    }
    goto LABEL_12;
  }
  if ( a2 )
LABEL_12:
    *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
