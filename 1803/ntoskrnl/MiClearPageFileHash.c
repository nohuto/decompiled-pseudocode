/*
 * XREFs of MiClearPageFileHash @ 0x1400C7EC8
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD *v5; // r11
  int PteTimeStamp; // eax
  __int64 v7; // r9
  __int64 *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _SLIST_ENTRY *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // r8
  __int64 *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r11
  __int64 updated; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
  {
    v4 = MI_READ_PTE_LOCK_FREE((((v3 + 4 * (unsigned __int64)a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    updated = v4;
    if ( (v4 & 1) != 0 )
    {
      *v5 = 1;
      v12 = (_SLIST_ENTRY *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated) >> 12) & 0xFFFFFFFFFLL)
                           - 0x58000000000LL);
      v13 = MiGetPteTimeStamp(v12[1].Next) - 1;
      updated = MiUpdatePageFileHighInPte(v14, v13);
      *v15 = updated;
      if ( MiPteInShadowRange((unsigned __int64)v15) )
        MiWritePteShadow(v17, v16, v18);
      if ( !v13 )
      {
        --*(_DWORD *)(a1 + 208);
        *v19 = ZeroPte;
        if ( MiPteInShadowRange((unsigned __int64)v19) )
          MiWritePteShadow(v21, v20, v22);
        KeFlushSingleTb(v23, 0, 1u);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v12);
      }
    }
    else
    {
      PteTimeStamp = MiGetPteTimeStamp(v4);
      updated = MiUpdatePageFileHighInPte(v7, (unsigned int)(PteTimeStamp - 1));
      *v8 = updated;
      if ( MiPteInShadowRange((unsigned __int64)v8) )
        MiWritePteShadow(v10, v9, v11);
    }
  }
}
