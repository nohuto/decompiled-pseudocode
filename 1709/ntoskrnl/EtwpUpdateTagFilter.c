/*
 * XREFs of EtwpUpdateTagFilter @ 0x140749E5C
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140748F80 (EtwpCheckForPoolTagFilterExtension.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateTagFilter(_DWORD *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // r9

  result = 0LL;
  if ( a2 )
  {
    v4 = (_DWORD *)(a3 + 4);
    while ( *(_BYTE *)a1 != 42 && *a1 != 1061109567 )
    {
      *v4++ = *a1++;
      result = (unsigned int)(result + 1);
      if ( (unsigned int)result >= a2 )
      {
        *(_WORD *)a3 = a2;
        return result;
      }
    }
  }
  *(_WORD *)a3 = 1;
  *(_DWORD *)(a3 + 4) = 42;
  return result;
}
