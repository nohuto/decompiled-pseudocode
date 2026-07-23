/*
 * XREFs of MiClearPageFileHash @ 0x140035D80
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r11
  int PteTimeStamp; // eax
  __int64 v9; // r9
  __int64 *v10; // r10
  __int64 v11; // rcx
  _SLIST_ENTRY *v12; // rsi
  _QWORD *v13; // r9
  unsigned int v14; // edi
  __int64 *v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 updated; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
  {
    v4 = MI_READ_PTE_LOCK_FREE((((v3 + 4 * (unsigned __int64)a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    updated = v4;
    if ( (v4 & 1) != 0 )
    {
      *v7 = 1;
      v12 = (_SLIST_ENTRY *)MI_GET_PFN_FROM_PTE(&updated, v5, v6, v4);
      v14 = MiGetPteTimeStamp(v12[1].Next) - 1;
      updated = MiUpdatePageFileHighInPte(*v13, v14);
      *v15 = updated;
      if ( (unsigned int)MiPteInShadowRange(v15) )
        MiWritePteShadow(v16);
      if ( !v14 )
      {
        --*(_DWORD *)(a1 + 208);
        *v17 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v17) )
          MiWritePteShadow(v18);
        KeFlushSingleTb(v19, 0LL, 1LL);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v12);
      }
    }
    else
    {
      PteTimeStamp = MiGetPteTimeStamp(v4);
      updated = MiUpdatePageFileHighInPte(v9, (unsigned int)(PteTimeStamp - 1));
      *v10 = updated;
      if ( (unsigned int)MiPteInShadowRange(v10) )
        MiWritePteShadow(v11);
    }
  }
}
