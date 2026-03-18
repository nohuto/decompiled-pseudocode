/*
 * XREFs of WheaAddErrorSource @ 0x1405D6AE0
 * Callers:
 *     <none>
 * Callees:
 *     WheapAddErrorSource @ 0x140150D28 (WheapAddErrorSource.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WheapInitializeErrorSource @ 0x1405D6C14 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  int v5; // ecx
  PVOID PoolWithTag; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rcx
  unsigned int v12; // edi
  int v13; // ecx

  v2 = *(_DWORD *)(a1 + 8);
  v4 = a1;
  if ( v2 > 0xD )
    return 3221225659LL;
  v5 = 12592;
  if ( !_bittest(&v5, v2) )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x428uLL, 0x61656857u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x428uLL);
  v8 = 7LL;
  v9 = v7 + 89;
  do
  {
    *(_OWORD *)v9 = *(_OWORD *)v4;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v4 + 16);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(v4 + 32);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(v4 + 48);
    *(_OWORD *)(v9 + 64) = *(_OWORD *)(v4 + 64);
    *(_OWORD *)(v9 + 80) = *(_OWORD *)(v4 + 80);
    *(_OWORD *)(v9 + 96) = *(_OWORD *)(v4 + 96);
    v9 += 128LL;
    v10 = *(_OWORD *)(v4 + 112);
    v4 += 128LL;
    *(_OWORD *)(v9 - 16) = v10;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v9 = *(_OWORD *)v4;
  *(_OWORD *)(v9 + 16) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(v9 + 32) = *(_OWORD *)(v4 + 32);
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(v4 + 48);
  *(_QWORD *)(v9 + 64) = *(_QWORD *)(v4 + 64);
  *(_DWORD *)(v9 + 72) = *(_DWORD *)(v4 + 72);
  v12 = WheapInitializeErrorSource(v7);
  if ( v12 )
  {
    ExFreePoolWithTag((PVOID)v7, 0x61656857u);
    return v12;
  }
  else
  {
    *(_QWORD *)(v7 + 56) = a2;
    WheapAddErrorSource(v11, v7);
    v13 = 0;
    if ( WheapInitializationComplete )
    {
      v13 = (*((__int64 (__fastcall **)(__int64, __int64, __int64))&unk_1403A2D88 + 6 * *(int *)(v7 + 97)))(
              1LL,
              v7 + 89,
              a2);
      if ( v13 >= 0 )
        *(_DWORD *)(v7 + 101) = 2;
    }
    return (unsigned int)v13;
  }
}
