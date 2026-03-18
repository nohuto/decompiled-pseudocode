/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x140255080
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x14028562C (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiInitializeMdlPfn @ 0x1400B3814 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x1400B3C4C (MiPartitionObjectToPartition.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, unsigned int *a2, __int64 *a3)
{
  ULONG_PTR *v4; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  int v7; // r13d
  __int64 Page; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 *v13; // rbx
  bool v14; // zf
  volatile signed __int32 *v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int16 v16; // [rsp+28h] [rbp-40h]
  unsigned __int16 v17; // [rsp+2Ah] [rbp-3Eh]
  char v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v4 = MiPartitionObjectToPartition(a1, 1, &v18);
  v5 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v15);
  if ( *a2 )
  {
    v6 = v16;
    v7 = v17;
    do
    {
      Page = MiGetPage((__int64)v4, v7 | _InterlockedExchangeAdd(v15, 1u) & v6, 0);
      v9 = Page;
      if ( Page == -1 )
        break;
      v10 = 48 * Page - 0x58000000000LL;
      v11 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = ZeroPte;
      *(_QWORD *)(v10 + 40) = v11 & 0xFDFFFFF000000000uLL | 0xFFFFFFFFDLL;
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 52);
      v12 = (unsigned __int8)MiLockPageInline(v10);
      MiInitializeMdlPfn(v10, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
      v13 = v19;
      ++v5;
      *v19 = v9;
      v19 = v13 + 1;
    }
    while ( v5 < *a2 );
  }
  v14 = v18 == 0;
  *a2 = v5;
  if ( !v14 )
    PsDereferencePartition(v4[21]);
}
