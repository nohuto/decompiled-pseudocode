/*
 * XREFs of ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00A5C28
 * Callers:
 *     ?VidMmTrimOfferCommitment@@YAXPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C0023080 (-VidMmTrimOfferCommitment@@YAXPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A2E6C (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
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
  struct _LIST_ENTRY *v11; // [rsp+20h] [rbp-69h] BYREF
  __int64 v12; // [rsp+28h] [rbp-61h] BYREF
  struct _KAPC_STATE ApcState[2]; // [rsp+30h] [rbp-59h] BYREF

  if ( (*((_DWORD *)this + 1760) & 0x10) == 0 )
  {
    v10 = 0LL;
    v11 = 0LL;
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
        ApcState[1].ApcListHead[1].Blink = (struct _LIST_ENTRY *)&v12;
        VIDMM_GLOBAL::QueueLazySystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)ApcState);
        v10 = (struct _LIST_ENTRY *)((char *)v11 + v12);
        v11 = (struct _LIST_ENTRY *)((char *)v11 + v12);
      }
      while ( v12 && v10 < a5 );
    }
    else
    {
      ApcState[1].ApcListHead[1].Flink = a5;
      ApcState[1].ApcListHead[1].Blink = (struct _LIST_ENTRY *)&v11;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)ApcState, 1);
      v10 = v11;
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
