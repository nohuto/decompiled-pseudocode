/*
 * XREFs of MiFillPerSessionProtos @ 0x1406BE094
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x1401FC964 (KeCopyPrivilegedPage.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     MiInitializeProtoPfn @ 0x14022136C (MiInitializeProtoPfn.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
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
  int v11; // ebp
  __int64 v14; // r8
  ULONG_PTR *ControlAreaPartition; // r12
  unsigned __int16 v16; // cx
  __int16 v17; // dx
  _WORD *v18; // rax
  unsigned int v19; // r15d
  __int64 DriverPage; // rdi
  int v21; // r9d
  NTSTATUS v22; // eax
  __int16 v23; // [rsp+30h] [rbp-68h]
  unsigned __int64 PteFromCopyList; // [rsp+38h] [rbp-60h]
  _WORD *v25; // [rsp+40h] [rbp-58h]
  _WORD *v26; // [rsp+48h] [rbp-50h] BYREF
  __int16 v27; // [rsp+50h] [rbp-48h]
  unsigned __int16 v28; // [rsp+52h] [rbp-46h]
  unsigned int v29; // [rsp+58h] [rbp-40h] BYREF
  int v30; // [rsp+5Ch] [rbp-3Ch]
  __int64 v32; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v33; // [rsp+D8h] [rbp+40h]

  v11 = a4;
  if ( a8 )
  {
    v30 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (__int64)&v29);
    if ( !v30 )
      return 3221225626LL;
    MiInitializePageColorBase(0LL, 0, (__int64)&v26);
  }
  ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(a1);
  if ( v11 )
  {
    v16 = v28;
    v17 = v27;
    v18 = v26;
    v32 = v14 - (_QWORD)a3;
    v33 = v28;
    v23 = v27;
    v25 = v26;
    while ( 1 )
    {
      if ( a8 )
      {
        DriverPage = MiAllocateDriverPage(ControlAreaPartition);
      }
      else
      {
        v19 = v16 | (unsigned __int16)(v17 & ++*v18);
        while ( 1 )
        {
          DriverPage = MiGetPage((__int64)ControlAreaPartition, v19, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(ControlAreaPartition);
        }
      }
      MiInitializeProtoPfn(DriverPage, (unsigned __int64 *)((char *)a3 + v32), a5, v21);
      if ( a8 )
      {
        v22 = KeCopyPrivilegedPage(DriverPage, a9, *a3, a8, 0);
        if ( v22 < 0 )
          KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, DriverPage, v22);
        MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
      }
      else
      {
        MiCopyPage(DriverPage, *a3, &v29, 8);
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(&v29, DriverPage, -1LL);
        MiRelocateImagePfn(a1, (__int64)(PteFromCopyList << 25) >> 16, a6, DriverPage, a7);
        *(_QWORD *)PteFromCopyList = 0LL;
        if ( MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow();
        MiReturnPfnReferenceCount(48 * DriverPage - 0x58000000000LL);
      }
      ++a3;
      ++a6;
      --v11;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)a9 += 4096LL;
      }
      if ( !v11 )
        break;
      v18 = v25;
      v16 = v33;
      v17 = v23;
    }
  }
  MiReleasePteCopyList((__int64)&v29);
  return 0LL;
}
