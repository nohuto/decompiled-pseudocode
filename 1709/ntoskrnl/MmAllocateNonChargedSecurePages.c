/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x140217718
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x14024FB68 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiInitializeMdlPfn @ 0x1400CAAD8 (MiInitializeMdlPfn.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiPartitionObjectToPartition @ 0x14011CD74 (MiPartitionObjectToPartition.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, unsigned int *a2, __int64 *a3)
{
  ULONG_PTR *v4; // rsi
  unsigned int v5; // ebp
  __int16 v6; // r12
  int v7; // r13d
  _WORD *v8; // rax
  __int64 Page; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 *v14; // rbx
  bool v15; // zf
  _WORD *v16; // [rsp+20h] [rbp-48h] BYREF
  __int16 v17; // [rsp+28h] [rbp-40h]
  unsigned __int16 v18; // [rsp+2Ah] [rbp-3Eh]
  char v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v4 = MiPartitionObjectToPartition(a1, 1, &v19);
  v5 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v16);
  if ( *a2 )
  {
    v6 = v17;
    v7 = v18;
    do
    {
      v8 = v16;
      ++*v16;
      Page = MiGetPage((__int64)v4, v7 | (unsigned int)(unsigned __int16)(v6 & *v8), 0);
      v10 = Page;
      if ( Page == -1 )
        break;
      v11 = 48 * Page - 0x58000000000LL;
      v12 = *(_QWORD *)(v11 + 40);
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 40) = v12 & 0xFDFFFFF000000000uLL | 0xFFFFFFFFDLL;
      _InterlockedAdd64((volatile signed __int64 *)v4 + 52, 1uLL);
      v13 = (unsigned __int8)MiLockPageInline(v11);
      MiInitializeMdlPfn(v11, 131584);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      v14 = v20;
      *v20 = v10;
      v20 = v14 + 1;
      ++v5;
    }
    while ( v5 < *a2 );
  }
  v15 = v19 == 0;
  *a2 = v5;
  if ( !v15 )
    PsDereferencePartition(v4[21]);
}
