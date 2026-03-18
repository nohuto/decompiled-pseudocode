/*
 * XREFs of MiFillPerSessionProtos @ 0x140754D84
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MiGetNextPageColor @ 0x1400093C8 (MiGetNextPageColor.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400C8214 (MiReleasePteCopyList.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     KeCopyPrivilegedPage @ 0x14015B1EC (KeCopyPrivilegedPage.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiInitializeProtoPfn @ 0x1402681CC (MiInitializeProtoPfn.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        ULONG_PTR a1,
        __int64 a2,
        ULONG_PTR *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v11; // ebp
  __int64 v14; // r8
  ULONG_PTR *ControlAreaPartition; // r12
  unsigned int NextPageColor; // r15d
  unsigned int i; // edx
  __int64 DriverPage; // rdi
  int v19; // r9d
  ULONG_PTR v20; // rdx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _BYTE v25[16]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+44h] [rbp-44h]
  __int64 v29; // [rsp+98h] [rbp+10h]
  unsigned __int64 PteFromCopyList; // [rsp+C8h] [rbp+40h]

  v11 = a4;
  if ( a8 )
  {
    v27 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (__int64)&v26);
    if ( !v27 )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)v25);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v11 )
  {
    v29 = v14 - (_QWORD)a3;
    do
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage(ControlAreaPartition);
      }
      else
      {
        NextPageColor = MiGetNextPageColor((__int64)v25);
        for ( i = NextPageColor; ; i = NextPageColor )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, i, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      MiInitializeProtoPfn(DriverPage, (ULONG_PTR *)((char *)a3 + v29), a5, v19);
      v20 = *a3;
      if ( a8 )
      {
        v21 = KeCopyPrivilegedPage(DriverPage, a9, v20, a8, 0LL, 0);
        if ( v21 < 0 )
          KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v21);
        MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
      }
      else
      {
        MiCopyPage(DriverPage, v20, &v26, 8);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(&v26, DriverPage, -1LL);
        MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7);
        *(_QWORD *)PteFromCopyList = ZeroPte;
        if ( MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow(v23, v22, v24);
        MiReturnPfnReferenceCount(48 * DriverPage - 0x58000000000LL);
      }
      ++a6;
      ++a3;
      --v11;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)a9 += 4096LL;
      }
    }
    while ( v11 );
  }
  MiReleasePteCopyList((__int64)&v26);
  return 0LL;
}
