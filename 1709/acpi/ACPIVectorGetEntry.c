/*
 * XREFs of ACPIVectorGetEntry @ 0x1C0059C8C
 * Callers:
 *     ACPIVectorInstall @ 0x1C0059DC8 (ACPIVectorInstall.c)
 * Callees:
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

char __fastcall ACPIVectorGetEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  void *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  char v9; // dl
  char result; // al

  LOBYTE(v1) = GpeVectorFree;
  if ( GpeVectorFree )
  {
LABEL_10:
    result = 1;
    *a1 = (unsigned __int8)v1;
    GpeVectorFree = *((_BYTE *)GpeVectorTable + 16 * (unsigned __int8)v1);
    return result;
  }
  v1 = GpeVectorTableSize;
  if ( GpeVectorTableSize + 4 >= (unsigned int)GpeVectorTableSize )
  {
    v3 = 16LL * (unsigned int)(GpeVectorTableSize + 4);
    if ( v3 <= 0xFFFFFFFF )
    {
      v4 = 16 * (GpeVectorTableSize + 4);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v3, 0x67706341u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v4);
        if ( GpeVectorTable )
        {
          memmove(v6, GpeVectorTable, 16LL * v1);
          ExFreePoolWithTag(GpeVectorTable, 0);
        }
        GpeVectorTableSize += 4;
        v7 = 0;
        GpeVectorTable = v6;
        do
        {
          v8 = 2LL * (v7 + v1);
          v9 = v7++ + v1 + 1;
          *((_BYTE *)GpeVectorTable + 8 * v8) = v9;
        }
        while ( v7 < 4 );
        *((_BYTE *)GpeVectorTable + 16 * v7 + 16 * v1 - 16) = 0;
        GpeVectorFree = v1;
        goto LABEL_10;
      }
    }
  }
  return 0;
}
