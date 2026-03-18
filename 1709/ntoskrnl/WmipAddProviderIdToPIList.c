/*
 * XREFs of WmipAddProviderIdToPIList @ 0x14051F6C0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140588B24 (WmipPrepareForWnodeAD.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipAddProviderIdToPIList(
        const void **a1,
        _DWORD *a2,
        unsigned int *a3,
        void *a4,
        volatile signed __int64 *a5)
{
  __int64 v5; // rbp
  signed int v6; // ebx
  __int64 v7; // r14
  void *v9; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // r12
  PVOID PoolWithTag; // rdi
  void *v15; // r15
  volatile signed __int64 **v16; // rbx
  unsigned int v17; // [rsp+70h] [rbp+8h]
  _DWORD *v18; // [rsp+78h] [rbp+10h]

  v18 = a2;
  v5 = (unsigned int)*a2;
  v6 = 0;
  v7 = *a3;
  v9 = (void *)*a1;
  if ( (_DWORD)v5 != (_DWORD)v7 )
    goto LABEL_2;
  v11 = 2 * v7;
  v12 = -1;
  v13 = *a3;
  if ( (unsigned __int64)(2 * v7) <= 0xFFFFFFFF )
    v12 = 2 * v7;
  v17 = v12;
  v6 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
    PoolWithTag = 0LL;
  else
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v12, 0x70696D57u);
  v15 = v9;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v9, 8 * v7);
    v9 = PoolWithTag;
    *a1 = PoolWithTag;
    *a3 = v17;
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v16 = (volatile signed __int64 **)v9;
      do
      {
        WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v16++);
        --v13;
      }
      while ( v13 );
    }
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, a5);
    *a1 = 0LL;
    v6 = -1073741670;
  }
  if ( v15 != a4 )
    ExFreePoolWithTag(v15, 0);
  if ( v6 >= 0 )
  {
    a2 = v18;
LABEL_2:
    *((_QWORD *)v9 + v5) = a5;
    *a2 = v5 + 1;
  }
  return (unsigned int)v6;
}
