/*
 * XREFs of MiPurgeImageSection @ 0x140215D80
 * Callers:
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14003855C (MiInvalidateCollidedIos.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017CF90 (MiMakeSubsectionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  unsigned __int8 v3; // di
  __int64 v4; // rbp
  struct _KEVENT *v5; // r12
  __int64 DemandZeroPte; // rsi
  __int64 SubsectionPte; // rbx
  unsigned int v8; // r10d
  unsigned __int16 v9; // dx
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rax
  __int64 v15; // r8
  _DWORD *v16; // r12
  unsigned __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-88h]
  unsigned __int64 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h] BYREF
  __int64 v29; // [rsp+48h] [rbp-60h]
  unsigned __int64 v30; // [rsp+50h] [rbp-58h]
  unsigned __int8 v32; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+18h]
  unsigned int v34; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 128;
  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v3 = 17;
  v4 = 0LL;
  v24 = 0LL;
  v32 = 17;
  v5 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * v2);
  v25 = (unsigned __int64)v5;
  while ( 1 )
  {
    v26 = v1;
    if ( !v1 )
      break;
    if ( (*(_WORD *)(v1 + 34) & 2) != 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(unsigned __int16 *)(v1 + 32) >> 1) & 0x1F);
      v27 = DemandZeroPte;
      SubsectionPte = DemandZeroPte;
      v34 = v8;
      v33 = v8;
      if ( *(_DWORD *)(v1 + 36) != v8 )
      {
        SubsectionPte = MiMakeSubsectionPte(v1);
        v34 = (*(_DWORD *)(v1 + 40) << 9) | (v9 >> 4);
      }
      v10 = *(_QWORD *)(v1 + 8);
      v30 = v10 + 8LL * *(unsigned int *)(v1 + 44);
      if ( v10 < v30 )
      {
        v11 = v24;
        while ( 1 )
        {
          if ( (v10 & 0xFFF) == 0 || v3 == 17 )
          {
            if ( v3 != 17 )
              MiUnlockProtoPoolPage(v11, v3);
            v24 = MiLockProtoPoolPage(v10, &v32);
            v11 = v24;
            if ( !v24 )
            {
              do
              {
                MmAccessFault(2uLL, v10, 0, 0LL);
                v12 = MiLockProtoPoolPage(v10, &v32);
                v24 = v12;
              }
              while ( !v12 );
              DemandZeroPte = v27;
              v11 = v12;
            }
            v3 = v32;
          }
          v13 = MiLockLeafPage(v10, 0);
          v14 = MI_READ_PTE_LOCK_FREE(v10);
          v28 = v14;
          if ( !v14 )
          {
LABEL_47:
            v1 = v26;
            v4 = v24;
            goto LABEL_48;
          }
          if ( !v13 )
          {
            if ( (v14 & 0x400) == 0 )
            {
              v22 = MiMakeDemandZeroPte(24);
              if ( v23 != v22 )
              {
                MiReleasePageFileSpace(v5, v23, 1);
                *(_QWORD *)v10 = SubsectionPte;
                if ( MiPteInShadowRange(v10) )
                  MiWritePteShadow();
              }
            }
            goto LABEL_44;
          }
          if ( (*(_BYTE *)(v13 + 34) & 0x10) == 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_20;
          }
          v16 = (_DWORD *)(v13 + 16);
          if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
            MiDereferenceControlAreaPfnList(a1, 0LL, v15, 2);
          v17 = 0LL;
          v18 = 0LL;
          v29 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFLL;
          if ( !*(_WORD *)(v13 + 32) )
            break;
          *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
          v21 = *(_BYTE *)(v13 + 34);
          if ( (v21 & 0x20) != 0 && (v21 & 8) == 0 )
          {
            v18 = *(_QWORD *)v13 - 32LL;
            if ( *(_QWORD *)(v18 + 16) == v18 + 16 )
              v18 = 0LL;
          }
          if ( (*v16 & 0x400LL) != 0 )
            goto LABEL_27;
          v5 = (struct _KEVENT *)v25;
          MiChargeCommit(v25, 1uLL, 4uLL);
LABEL_28:
          *(_QWORD *)v10 = SubsectionPte;
          if ( MiPteInShadowRange(v10) )
            MiWritePteShadow();
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiInvalidateCollidedIos(v18);
          v20 = 48 * v29 - 0x58000000000LL;
          MiLockPageAtDpcInline(v20);
          MiDecrementShareCount(v20);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
          {
            MiReleasePageFileInfo(v5, v17, 1);
            v3 = v32;
            goto LABEL_44;
          }
LABEL_20:
          v3 = v32;
LABEL_44:
          v10 += 8LL;
          v33 += 4096;
          if ( v33 >= v34 )
            SubsectionPte = DemandZeroPte;
          if ( v10 >= v30 )
            goto LABEL_47;
        }
        MiUnlinkPageFromList(v13, 0);
        if ( (*v16 & 0x400LL) == 0 )
          v17 = MiCapturePageFileInfoInline((_QWORD *)(v13 + 16), 0, 1);
        v19 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v28);
        MiInsertPageInFreeOrZeroedList(v19, 2);
LABEL_27:
        v5 = (struct _KEVENT *)v25;
        goto LABEL_28;
      }
LABEL_48:
      if ( v3 != 17 )
      {
        MiUnlockProtoPoolPage(v4, v3);
        v3 = 17;
        v32 = 17;
      }
    }
    v1 = *(_QWORD *)(v1 + 16);
  }
}
