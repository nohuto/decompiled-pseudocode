/*
 * XREFs of PepNotifyLpiComplete @ 0x1C000D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepNotifyLpiComplete(__int64 *a1, __int64 a2, int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // edx
  unsigned int *v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( a3 != -1 )
  {
    v5 = 0;
    if ( a4 )
    {
      v6 = a5;
      do
      {
        if ( !*(_BYTE *)(56LL * *v6 + qword_1C0019B30 + 48) )
          break;
        ++v5;
        ++v6;
      }
      while ( v5 < a4 );
    }
    v7 = *a1;
    v9 = v5;
    v10 = (__int64)a5;
    return PoFxProcessorNotification(v7, 38LL, &v9);
  }
  return result;
}
