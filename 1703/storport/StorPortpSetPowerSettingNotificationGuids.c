/*
 * XREFs of StorPortpSetPowerSettingNotificationGuids @ 0x1C001E014
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall StorPortpSetPowerSettingNotificationGuids(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  SIZE_T v8; // r15
  char *PoolWithTag; // rax
  char *v10; // rbp
  __int64 v11; // rcx

  v5 = a2;
  v6 = 0;
  v7 = **(_QWORD **)(a1 - 16);
  v8 = 24LL * a2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x45416152u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8);
    *(_QWORD *)(v7 + 4904) = v10;
    *(_DWORD *)(v7 + 4896) = a2;
    *(_QWORD *)(v7 + 4912) = &v10[16 * a2];
    if ( a2 )
    {
      v11 = 0LL;
      do
      {
        *(_OWORD *)(v11 + *(_QWORD *)(v7 + 4904)) = *(_OWORD *)(v11 + a3);
        v11 += 16LL;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v6;
}
