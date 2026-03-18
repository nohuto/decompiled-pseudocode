/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x1408E0A50
 * Callers:
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402414DC (KeCreateEnclaveMetadataPage.c)
 *     MiGetEnclavePage @ 0x140264534 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402648EC (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v2; // rsi
  __int64 EnclavePage; // rax
  __int64 v4; // r9
  ULONG_PTR v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax

  v0 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  if ( v0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x4D424D45u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      *(_DWORD *)v2 = 512;
      v2[1] = v2 + 2;
      *((_DWORD *)v2 + 4) |= 1u;
      EnclavePage = MiGetEnclavePage(&MiSystemPartition, 0);
      v5 = EnclavePage;
      if ( EnclavePage != -1 )
      {
        *(_QWORD *)v0 = MiMakeValidPte(v0, EnclavePage, 3221225476LL, v4);
        if ( MiPteInShadowRange(v0) )
          MiWritePteShadow(v7, v6, v8);
        if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
        {
          qword_1403CB7A0 = 0LL;
          result = 1LL;
          qword_1403CB790 = (__int64)(v0 << 25) >> 16;
          qword_1403CB798 = (__int64)v2;
          dword_1403CB7A8 = 0;
          return result;
        }
      }
      ExFreePoolWithTag(v2, 0);
      if ( v5 != -1LL )
        MiReturnEnclavePage(v5);
    }
    MiReleasePtes((__int64)&qword_1403CC5E0, v0, 1uLL);
  }
  return 0LL;
}
