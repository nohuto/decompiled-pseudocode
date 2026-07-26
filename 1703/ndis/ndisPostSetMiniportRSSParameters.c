/*
 * XREFs of ndisPostSetMiniportRSSParameters @ 0x1C00218A0
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C00212E0 (ndisOidPostRSSParameters.c)
 * Callees:
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0021874 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

void __fastcall ndisPostSetMiniportRSSParameters(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v8; // r15
  void *v9; // r9
  __int64 v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int16 v13; // cx
  __int64 v14; // r10
  int v15; // r9d
  unsigned int Number; // r8d
  __int64 v17; // r8
  unsigned __int64 v18; // rax

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(165LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
  if ( !a3 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)a2) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    CurrentThread = KeGetCurrentThread();
    v8 = v6;
    v9 = *(void **)(a1 + 1984);
    *(_QWORD *)(a1 + 552) = v9;
    *(_QWORD *)(a1 + 520) = CurrentThread;
    *(_DWORD *)(a1 + 1856) = 2306000;
    v10 = *(_QWORD *)(a2 + 40);
    v11 = *(_DWORD *)(v10 + 16) + *(unsigned __int16 *)(v10 + 12);
    if ( *(_BYTE *)(v10 + 1) < 2u )
      v12 = 0;
    else
      v12 = *(_DWORD *)(v10 + 28) + *(_DWORD *)(v10 + 32) * *(_DWORD *)(v10 + 36);
    if ( v11 <= *(_DWORD *)(v10 + 24) + (unsigned int)*(unsigned __int16 *)(v10 + 20) )
      v11 = *(_DWORD *)(v10 + 24) + *(unsigned __int16 *)(v10 + 20);
    if ( v11 > v12 )
      v12 = v11;
    if ( v12 > 0x394 )
      v12 = 916;
    if ( v12 )
      memmove(v9, *(const void **)(a2 + 40), v12);
    v13 = *(_WORD *)(v10 + 4);
    if ( (v13 & 0x10) != 0 || !(unsigned __int8)*(_DWORD *)(v10 + 8) )
    {
      *(_QWORD *)(a1 + 552) = 0LL;
    }
    else if ( (v13 & 4) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      v15 = *(_DWORD *)(a1 + 80);
      Number = -1;
      if ( (*(_DWORD *)(a1 + 48) & 0x800) != 0 )
      {
        Number = KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v14 + Number * ndisPcwPerCpuDataStride + 88);
      }
      if ( (v15 & 0x800) != 0 )
      {
        if ( Number == -1 )
          Number = KeGetPcr()->Prcb.Number;
        v17 = v14 + Number * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData;
        v18 = __rdtsc();
        *(_QWORD *)(v17 + 192) += (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - *(_QWORD *)(a2 + 144);
        *(_QWORD *)(v17 + 392) = 0LL;
      }
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(166LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
}
