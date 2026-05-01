/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18006E7DC
 * Callers:
 *     ?GetApplicationName@@YAJKPEAGI@Z @ 0x18006E380 (-GetApplicationName@@YAJKPEAGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 result; // rax
  signed __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax

  if ( a4 <= 0x7FFFFFFE )
  {
    v5 = a3 - a1;
    v6 = 260LL;
    do
    {
      if ( !(v6 + a4 - 260) )
        break;
      v7 = *(_WORD *)&a1[v5];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --v6;
    }
    while ( v6 );
    v8 = (unsigned __int16 *)(a1 - 2);
    if ( v6 )
      v8 = (unsigned __int16 *)a1;
    *v8 = 0;
    return v6 == 0 ? 0x8007007A : 0;
  }
  else
  {
    result = 2147942487LL;
    *(_WORD *)a1 = 0;
  }
  return result;
}
