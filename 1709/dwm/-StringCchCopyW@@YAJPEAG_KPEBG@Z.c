/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140007A48
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140004F90 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1400064F0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400084B0 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // r10
  signed __int64 v7; // r11
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    result = (unsigned int)v4;
    if ( !a2 )
      return result;
  }
  else
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 2147483646 - a2;
      v7 = a3 - a1;
      while ( v6 + a2 )
      {
        v8 = *(_WORD *)&a1[v7];
        if ( !v8 )
          break;
        *(_WORD *)a1 = v8;
        a1 += 2;
        if ( !--a2 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      a1 -= 2;
      v5 = -2147024774;
    }
    result = v5;
  }
  *(_WORD *)a1 = 0;
  return result;
}
