/*
 * XREFs of MiPurgeImageSection @ 0x14021F0FC
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 * Callees:
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14012DC4C (MiInvalidateCollidedIos.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

int __fastcall MiPurgeImageSection(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  unsigned __int8 v3; // bl
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned __int64 PteShadow; // rax
  __int64 DemandZeroPte; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 SubsectionPte; // rdi
  unsigned int v11; // r10d
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r15
  _DWORD *v18; // rbp
  unsigned __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v26; // [rsp+20h] [rbp-88h]
  struct _KEVENT *v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h]
  __int64 v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h]
  unsigned __int64 v32; // [rsp+50h] [rbp-58h]
  unsigned __int8 v34; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+C0h] [rbp+18h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v1 = a1 + 128;
  v2 = *(_WORD *)(a1 + 60) & 0x3FF;
  v3 = 17;
  v4 = a1;
  v26 = 0LL;
  v5 = 0LL;
  v34 = 17;
  PteShadow = *(_QWORD *)(qword_140388AF0 + 8 * v2);
  v27 = (struct _KEVENT *)PteShadow;
  while ( 1 )
  {
    v28 = v1;
    if ( !v1 )
      break;
    if ( (*(_WORD *)(v1 + 34) & 2) != 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(unsigned __int16 *)(v1 + 32) >> 1) & 0x1F);
      v29 = DemandZeroPte;
      SubsectionPte = DemandZeroPte;
      v36 = v11;
      v35 = v11;
      if ( *(_DWORD *)(v1 + 36) != v11 )
      {
        SubsectionPte = MiMakeSubsectionPte(v1);
        v36 = (*(_DWORD *)(v1 + 40) << 9) | (v12 >> 4);
      }
      v13 = *(_QWORD *)(v1 + 8);
      PteShadow = v13 + 8LL * *(unsigned int *)(v1 + 44);
      v32 = PteShadow;
      if ( v13 < PteShadow )
      {
        v14 = v26;
        do
        {
          if ( (v13 & 0xFFF) == 0 || v3 == 17 )
          {
            if ( v3 != 17 )
              MiUnlockProtoPoolPage(v14, v3);
            v26 = MiLockProtoPoolPage(v13, &v34);
            v14 = v26;
            if ( !v26 )
            {
              do
              {
                MmAccessFault(2uLL, v13, 0LL, 0LL);
                v15 = MiLockProtoPoolPage(v13, &v34);
                v26 = v15;
              }
              while ( !v15 );
              DemandZeroPte = v29;
              v14 = v15;
            }
            v3 = v34;
          }
          PteShadow = MiLockLeafPage((__int64 *)v13, 0LL, v8, v9);
          v16 = *(_QWORD *)v13;
          v17 = PteShadow;
          LODWORD(PteShadow) = 2109657088;
          if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow();
            v16 = PteShadow;
          }
          v30 = v16;
          if ( !v16 )
            break;
          if ( v17 )
          {
            if ( (*(_BYTE *)(v17 + 34) & 0x10) != 0 || (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 )
            {
              v18 = (_DWORD *)(v17 + 16);
              if ( (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
                MiDereferenceControlAreaPfnList(v4, 0LL, v8, 2);
              v19 = 0LL;
              v20 = 0LL;
              v31 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL;
              if ( *(_WORD *)(v17 + 32) )
              {
                *(_QWORD *)(v17 + 24) |= 0x4000000000000000uLL;
                v22 = *(_BYTE *)(v17 + 34);
                if ( (v22 & 0x20) != 0 && (v22 & 8) == 0 )
                {
                  v20 = *(_QWORD *)v17 - 32LL;
                  if ( *(_QWORD *)(v20 + 16) == v20 + 16 )
                    v20 = 0LL;
                }
                if ( (*v18 & 0x400LL) == 0 )
                  MiChargeCommit((__int64)v27, 1uLL, 4LL, v9);
              }
              else
              {
                MiUnlinkPageFromList(v17, 0LL);
                if ( (*v18 & 0x400LL) == 0 )
                  v19 = MiCapturePageFileInfoInline((unsigned __int64 *)(v17 + 16), 0, 1);
                v21 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v30);
                MiInsertPageInFreeOrZeroedList(v21, 2);
              }
              *(_QWORD *)v13 = SubsectionPte;
              if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow();
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v20 )
                MiInvalidateCollidedIos(v20);
              v23 = 48 * v31 - 0x58000000000LL;
              MiLockPageAtDpcInline(v23);
              MiDecrementShareCount(v23);
              LODWORD(PteShadow) = -1;
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v19 )
                LODWORD(PteShadow) = MiReleasePageFileInfo(v27, v19, 1);
              v3 = v34;
              v4 = a1;
            }
            else
            {
              LODWORD(PteShadow) = -1;
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v3 = v34;
            }
          }
          else if ( (v16 & 0x400) == 0 )
          {
            PteShadow = MiMakeDemandZeroPte(24);
            if ( v24 != PteShadow )
            {
              MiReleasePageFileSpace(v27, v24);
              LODWORD(PteShadow) = 2109657088;
              *(_QWORD *)v13 = SubsectionPte;
              if ( v13 >= 0xFFFFF6FB7DBED000uLL )
              {
                LODWORD(PteShadow) = 2109659128;
                if ( v13 <= 0xFFFFF6FB7DBED7F8uLL )
                  LODWORD(PteShadow) = (unsigned int)MiWritePteShadow();
              }
            }
          }
          v13 += 8LL;
          v35 += 4096;
          if ( v35 >= v36 )
            SubsectionPte = DemandZeroPte;
        }
        while ( v13 < v32 );
        v1 = v28;
        v5 = v26;
      }
      if ( v3 != 17 )
      {
        LODWORD(PteShadow) = MiUnlockProtoPoolPage(v5, v3);
        v3 = 17;
        v34 = 17;
      }
    }
    v1 = *(_QWORD *)(v1 + 16);
  }
  return PteShadow;
}
