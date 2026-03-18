/*
 * XREFs of ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C009F530
 * Callers:
 *     ?VidMmTrimOfferCommitment@@YAXPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C0020A50 (-VidMmTrimOfferCommitment@@YAXPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C0060CFC (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTrimOfferCommitment(
        VIDMM_GLOBAL *this,
        PRKPROCESS *a2,
        struct _LIST_ENTRY *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 *a6)
{
  struct _LIST_ENTRY *v10; // rdi
  __int64 v11; // rcx
  unsigned int *v12; // r8
  struct _LIST_ENTRY *v13; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  struct _KAPC_STATE ApcState[2]; // [rsp+40h] [rbp-59h] BYREF

  if ( (*((_DWORD *)this + 1616) & 0x10) == 0 )
  {
    v10 = 0LL;
    v13 = 0LL;
    memset(ApcState, 0, 0x58uLL);
    LODWORD(ApcState[0].ApcListHead[0].Flink) = 124;
    *(_QWORD *)&ApcState[0].InProgressFlags = a2;
    ApcState[1].ApcListHead[0].Flink = a3;
    LODWORD(ApcState[1].ApcListHead[0].Blink) = a4;
    if ( (*(_BYTE *)&a4.0 & 1) != 0 )
    {
      do
      {
        ApcState[1].ApcListHead[1].Flink = (struct _LIST_ENTRY *)((char *)a5 - (char *)v10);
        ApcState[1].ApcListHead[1].Blink = (struct _LIST_ENTRY *)&v14;
        v11 = *(_QWORD *)(*((_QWORD *)this + 5041) + 88LL);
        if ( HIDWORD(ApcState[0].ApcListHead[0].Flink) == -1 )
          v12 = *(unsigned int **)(*((_QWORD *)this + 5041) + 88LL);
        else
          v12 = (unsigned int *)(v11 + 160LL * HIDWORD(ApcState[0].ApcListHead[0].Flink));
        VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
          this,
          (struct _VIDMM_SYSTEM_COMMAND *)ApcState,
          (struct VIDMM_PAGING_QUEUE *)v12,
          *(struct _VIDSCH_SYNC_OBJECT **)(160LL * v12[36] + v11 + 152),
          1);
        v10 = (struct _LIST_ENTRY *)((char *)v13 + v14);
        v13 = (struct _LIST_ENTRY *)((char *)v13 + v14);
      }
      while ( v14 && v10 < a5 );
    }
    else
    {
      ApcState[1].ApcListHead[1].Flink = a5;
      ApcState[1].ApcListHead[1].Blink = (struct _LIST_ENTRY *)&v13;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)ApcState, 1);
      v10 = v13;
    }
    *a6 = (unsigned __int64)v10;
    if ( v10 )
    {
      KeStackAttachProcess(*a2, ApcState);
      (*(void (__fastcall **)(PRKPROCESS))(*(_QWORD *)a2[3] + 136LL))(a2[3]);
      KeUnstackDetachProcess(ApcState);
    }
  }
}
