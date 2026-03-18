/*
 * XREFs of RtlDuplicateCmResourceList @ 0x1C00AA38C
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00AA010 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     memmove @ 0x1C002C840 (memmove.c)
 */

PVOID __fastcall RtlDuplicateCmResourceList(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  unsigned int v5; // r8d
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // eax
  unsigned int v11; // esi
  PVOID PoolWithTag; // rax
  PVOID v13; // rbx

  v2 = *a2;
  v3 = 0;
  v5 = 40;
  if ( *a2 )
  {
    v6 = a2 + 4;
    do
    {
      v7 = *v6;
      v8 = v5 + 36;
      v9 = 0;
      if ( !v3 )
        v8 = v5;
      v5 = v8;
      if ( v7 )
      {
        do
        {
          v10 = v5 + 20;
          if ( !v9 )
            v10 = v5;
          ++v9;
          v5 = v10;
        }
        while ( v9 < v7 );
      }
      ++v3;
      v6 += 9;
    }
    while ( v3 < v2 );
  }
  v11 = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x52706341u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, a2, v11);
  return v13;
}
