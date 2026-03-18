/*
 * XREFs of MiClearPageFileHash @ 0x140231C5C
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r11
  unsigned __int64 *v5; // r10
  unsigned __int64 PteShadow; // r8
  int PteTimeStamp; // eax
  __int64 v8; // r8
  __int64 *v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 *v14; // r9
  _QWORD *v15; // r10
  unsigned __int64 v16; // r11
  __int64 updated; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
  {
    v4 = v3 + 4LL * (unsigned int)a2;
    v5 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v5;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    updated = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      *(_DWORD *)v4 = 1;
      v10 = MI_GET_PFN_FROM_PTE((unsigned __int64 *)&updated);
      v12 = MiGetPteTimeStamp(*(_QWORD *)(v10 + 16), v11, *(_QWORD *)(v10 + 16)) - 1;
      updated = MiUpdatePageFileHighInPte(v13, v12);
      *v14 = updated;
      if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      if ( !v12 )
      {
        --*(_DWORD *)(a1 + 208);
        *v15 = 0LL;
        if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        KeFlushSingleTb(v16, 0, 1u);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), (PSLIST_ENTRY)v10);
      }
    }
    else
    {
      PteTimeStamp = MiGetPteTimeStamp(PteShadow, a2, PteShadow);
      updated = MiUpdatePageFileHighInPte(v8, (unsigned int)(PteTimeStamp - 1));
      *v9 = updated;
      if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
    }
  }
}
