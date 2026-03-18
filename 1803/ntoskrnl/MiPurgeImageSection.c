/*
 * XREFs of MiPurgeImageSection @ 0x14025ACE0
 * Callers:
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1401A666C (MiMakeSubsectionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

int __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int8 v4; // di
  ULONG_PTR v5; // rbp
  struct _KEVENT *v6; // r12
  __int64 v7; // rdx
  __int64 DemandZeroPte; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 SubsectionPte; // rbx
  unsigned __int64 v12; // r15
  ULONG_PTR v13; // r13
  __int64 v14; // rax
  ULONG_PTR v15; // r14
  _DWORD *v16; // r12
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // rax
  volatile signed __int64 *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbp
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+30h] [rbp-78h]
  __int64 v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  unsigned __int64 v32; // [rsp+48h] [rbp-60h] BYREF
  __int64 v33; // [rsp+50h] [rbp-58h]
  unsigned __int64 v34; // [rsp+58h] [rbp-50h]
  unsigned __int8 v36; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+18h]
  unsigned int v38; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 128;
  LODWORD(v2) = qword_1403CBD88;
  v3 = *(_WORD *)(a1 + 60) & 0x3FF;
  v4 = 17;
  v5 = 0LL;
  v27 = 0LL;
  v36 = 17;
  v6 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * v3);
  v28 = (__int64)v6;
  while ( 1 )
  {
    v30 = v1;
    if ( !v1 )
      return v2;
    if ( (*(_WORD *)(v1 + 34) & 2) != 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(unsigned __int16 *)(v1 + 32) >> 1) & 0x1F);
      v31 = DemandZeroPte;
      SubsectionPte = DemandZeroPte;
      v38 = 0;
      v37 = 0;
      if ( *(_DWORD *)(v1 + 36) )
      {
        SubsectionPte = MiMakeSubsectionPte(v1);
        v38 = (*(_DWORD *)(v1 + 40) << 9) | ((unsigned __int16)v7 >> 4);
      }
      v12 = *(_QWORD *)(v1 + 8);
      v2 = v12 + 8LL * *(unsigned int *)(v1 + 44);
      v34 = v2;
      if ( v12 < v2 )
      {
        v13 = v27;
        while ( 1 )
        {
          if ( (v12 & 0xFFF) == 0 || v4 == 17 )
          {
            if ( v4 != 17 )
            {
              LOBYTE(v7) = v4;
              MiUnlockProtoPoolPage(v13, v7, v9, v10);
            }
            v27 = MiLockProtoPoolPage(v12, &v36);
            v13 = v27;
            if ( !v27 )
            {
              do
              {
                MmAccessFault(2uLL, v12, 0, 0LL);
                v14 = MiLockProtoPoolPage(v12, &v36);
                v27 = v14;
              }
              while ( !v14 );
              DemandZeroPte = v31;
              v13 = v14;
            }
            v4 = v36;
          }
          v15 = MiLockLeafPage(v12, 0);
          v2 = MI_READ_PTE_LOCK_FREE(v12);
          v9 = 0LL;
          v32 = v2;
          v7 = v2;
          if ( !v2 )
          {
LABEL_48:
            v1 = v30;
            v5 = v27;
            goto LABEL_49;
          }
          if ( !v15 )
          {
            if ( (v2 & 0x400) == 0 )
            {
              v2 = MiMakeDemandZeroPte(24);
              if ( v7 != v2 )
              {
                MiReleasePageFileSpace((__int64)v6, v7);
                *(_QWORD *)v12 = SubsectionPte;
                LODWORD(v2) = MiPteInShadowRange(v12);
                if ( (_DWORD)v2 )
                  LODWORD(v2) = (unsigned int)MiWritePteShadow(v25, SubsectionPte, v9);
              }
            }
            goto LABEL_45;
          }
          if ( (*(_BYTE *)(v15 + 34) & 0x10) != 0 || (*(_DWORD *)(v15 + 16) & 0x400LL) == 0 )
            break;
          LODWORD(v2) = -1;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_33:
          v4 = v36;
LABEL_45:
          v12 += 8LL;
          v37 += 4096;
          if ( v37 >= v38 )
            SubsectionPte = DemandZeroPte;
          if ( v12 >= v34 )
            goto LABEL_48;
        }
        v16 = (_DWORD *)(v15 + 16);
        if ( (*(_DWORD *)(v15 + 16) & 0x400LL) != 0 )
          MiDereferenceControlAreaPfnList(a1, 0LL, 0LL, 2);
        v29 = 0LL;
        v17 = 0LL;
        v33 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFLL;
        if ( !*(_WORD *)(v15 + 32) )
        {
          MiUnlinkPageFromList(v15, 0LL);
          if ( (*v16 & 0x400LL) == 0 )
            v17 = MiCapturePageFileInfoInline((_QWORD *)(v15 + 16), 0, 1);
          v18 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v32);
          MiInsertPageInFreeOrZeroedList(v18, 2);
          v19 = (volatile signed __int64 *)(v15 + 24);
          goto LABEL_26;
        }
        v19 = (volatile signed __int64 *)(v15 + 24);
        *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
        v23 = *(_BYTE *)(v15 + 34);
        if ( (v23 & 0x20) != 0 && (v23 & 8) == 0 )
        {
          v24 = *(_QWORD *)v15 - 32LL;
          if ( *(_QWORD *)(v24 + 16) == v24 + 16 )
            v24 = 0LL;
          v29 = v24;
        }
        if ( (*v16 & 0x400LL) != 0 )
        {
LABEL_26:
          v6 = (struct _KEVENT *)v28;
        }
        else
        {
          v6 = (struct _KEVENT *)v28;
          MiChargeCommit(v28, 1uLL, 4u);
        }
        *(_QWORD *)v12 = SubsectionPte;
        if ( MiPteInShadowRange(v12) )
          MiWritePteShadow(v20, SubsectionPte, v21);
        _InterlockedAnd64(v19, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v29 )
          MiInvalidateCollidedIos(v29);
        v22 = 48 * v33 - 0x58000000000LL;
        MiLockPageAtDpcInline(v22);
        MiDecrementShareCount(v22);
        LODWORD(v2) = -1;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v17 )
          LODWORD(v2) = MiReleasePageFileInfo(v6, v17, 1);
        goto LABEL_33;
      }
LABEL_49:
      if ( v4 != 17 )
      {
        LOBYTE(v7) = v4;
        LODWORD(v2) = MiUnlockProtoPoolPage(v5, v7, v9, v10);
        v4 = 17;
        v36 = 17;
      }
    }
    v1 = *(_QWORD *)(v1 + 16);
  }
}
