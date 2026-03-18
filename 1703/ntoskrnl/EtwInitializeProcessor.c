/*
 * XREFs of EtwInitializeProcessor @ 0x14059E570
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpInitializeStackTracing @ 0x14059E618 (EtwpInitializeStackTracing.c)
 *     EtwpInitializeActivityIdSeed @ 0x14059E6B8 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  char *PoolWithTag; // rax
  unsigned int v3; // ebx
  char *v4; // rsi
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  PVOID v8; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x700uLL, 0x70777445u);
  v3 = 0;
  *(_QWORD *)(a1 + 24784) = PoolWithTag;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x700uLL);
    EtwpInitializeActivityIdSeed(v4, *(unsigned int *)(a1 + 36));
    EtwpInitializeStackTracing(v4 + 16, *(unsigned int *)(a1 + 36));
    v5 = v4 + 1752;
    v6 = 0LL;
    while ( 1 )
    {
      if ( CCSwapNumLoggersPerClockType[v6] )
      {
        if ( !*v5 )
        {
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
          *v5 = v8;
          if ( !v8 )
            break;
        }
      }
      ++v6;
      ++v5;
      if ( v6 >= 4 )
        return v3;
    }
  }
  return (unsigned int)-1073741801;
}
