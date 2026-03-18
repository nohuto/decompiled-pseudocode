/*
 * XREFs of MiFillPerSessionProtos @ 0x1406EB4D0
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     KeCopyPrivilegedPage @ 0x14014C060 (KeCopyPrivilegedPage.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiInitializeProtoPfn @ 0x14022E010 (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v10; // ebp
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  ULONG_PTR *ControlAreaPartition; // r12
  unsigned __int16 v19; // cx
  __int64 v20; // r13
  __int16 v21; // dx
  _WORD *v22; // rax
  unsigned int v23; // r15d
  __int64 DriverPage; // rdi
  int v25; // r9d
  __int128 *v26; // r13
  NTSTATUS v27; // eax
  unsigned __int64 PteFromCopyList; // r13
  __int16 v29; // [rsp+30h] [rbp-68h]
  _WORD *v30; // [rsp+38h] [rbp-60h]
  _WORD *v31; // [rsp+40h] [rbp-58h] BYREF
  __int16 v32; // [rsp+48h] [rbp-50h]
  unsigned __int16 v33; // [rsp+4Ah] [rbp-4Eh]
  unsigned int v34; // [rsp+50h] [rbp-48h] BYREF
  int v35; // [rsp+54h] [rbp-44h]
  __int64 v37; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v38; // [rsp+D8h] [rbp+40h]

  v10 = a4;
  if ( a8 )
  {
    v35 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (__int64)&v34);
    if ( !v35 )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v31);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v10 )
  {
    v19 = v33;
    v20 = a2 - (_QWORD)a3;
    v21 = v32;
    v22 = v31;
    v37 = v20;
    v38 = v33;
    v29 = v32;
    v30 = v31;
    while ( 1 )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage(ControlAreaPartition);
      }
      else
      {
        v23 = v19 | (unsigned __int16)(v21 & ++*v22);
        while ( 1 )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, v23, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      MiInitializeProtoPfn(DriverPage, (__int64 *)((char *)a3 + v20), a5, v25);
      if ( a8 )
      {
        v26 = a9;
        v27 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0LL, 0);
        if ( v27 < 0 )
          KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v27);
        MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
      }
      else
      {
        MiCopyPage(DriverPage, *a3, &v34, 8);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(&v34, DriverPage, -1LL);
        MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7);
        *(_QWORD *)PteFromCopyList = 0LL;
        if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        MiReturnPfnReferenceCount(48 * DriverPage - 0x58000000000LL);
        v26 = a9;
      }
      v16 = 1LL;
      ++a3;
      ++a6;
      --v10;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)v26 += 4096LL;
        v16 = 1LL;
      }
      if ( !v10 )
        break;
      v20 = v37;
      v22 = v30;
      v19 = v38;
      v21 = v29;
    }
  }
  MiReleasePteCopyList((__int64)&v34, v15, v16, v17);
  return 0LL;
}
