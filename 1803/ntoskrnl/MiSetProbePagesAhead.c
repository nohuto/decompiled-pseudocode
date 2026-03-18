/*
 * XREFs of MiSetProbePagesAhead @ 0x140136E40
 * Callers:
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiLegitimatePageForDriversToMap @ 0x140137038 (MiLegitimatePageForDriversToMap.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // r9
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // r10
  __int64 v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 64);
  LOBYTE(CurrentThread) = v1 & 0xF0;
  if ( (v1 & 0xF0) == 0x10 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( v3 != 3 )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22);
      LODWORD(CurrentThread) = MiIsPfnInline((v4 >> 12) & 0xFFFFFFFFFLL);
      if ( (_DWORD)CurrentThread )
      {
        v22 = v5 & 0xF0FF000000000FFFuLL;
        v7 = *(_QWORD *)(v6 + 16);
        for ( *(_QWORD *)(v6 + 144) = 0LL; ; ++*(_QWORD *)(v6 + 144) )
        {
          v8 = v7 + 8;
          if ( (v8 & 0xFFF) == 0 || v8 > *(_QWORD *)(v6 + 24) )
            break;
          LODWORD(CurrentThread) = MiPteInShadowRange(v8);
          if ( (_DWORD)CurrentThread )
          {
            if ( (MiFlags & 0x1800000) != 0 )
            {
              CurrentThread = KeGetCurrentThread();
              if ( CurrentThread->ApcState.Process->AddressPolicy != 1
                && (v9 & 1) != 0
                && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
              {
                CurrentThread = KeGetCurrentThread();
                v17 = CurrentThread->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v17 )
                {
                  CurrentThread = *(struct _KTHREAD **)(v17 + 8 * ((v10 >> 3) & 0x1FF));
                  v18 = v9 | 0x20;
                  if ( ((unsigned __int8)CurrentThread & 0x20) == 0 )
                    v18 = v9;
                  v9 = v18;
                  if ( ((unsigned __int8)CurrentThread & 0x42) != 0 )
                    v9 = v18 | 0x42;
                }
              }
            }
          }
          v23 = v9;
          if ( (v9 & 0xF0FF000000000FFFuLL) != v22 )
            break;
          v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23);
          LODWORD(CurrentThread) = MiIsPfnInline((v11 >> 12) & 0xFFFFFFFFFLL);
          if ( !(_DWORD)CurrentThread )
            break;
          v13 = 48 * v12;
          v14 = (_QWORD *)qword_1403CB788;
          v15 = 48 * v12 - 0x58000000000LL;
          if ( qword_1403CB788 )
          {
            if ( ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 1 )
            {
              v19 = v13 / 48;
              if ( qword_1403CB788 )
              {
                do
                {
                  v20 = v14[3];
                  if ( v19 < v20 )
                  {
                    v14 = (_QWORD *)*v14;
                  }
                  else
                  {
                    LOBYTE(CurrentThread) = v19 - v20;
                    if ( v19 - v20 < v14[4] )
                      goto LABEL_17;
                    v14 = (_QWORD *)v14[1];
                  }
                }
                while ( v14 );
              }
            }
          }
          LODWORD(CurrentThread) = MiLegitimatePageForDriversToMap(v15);
          if ( (int)CurrentThread < 0 )
            break;
          if ( !v3 )
          {
            LOBYTE(CurrentThread) = (*(_QWORD *)(v16 + 40) >> 54) & 7;
            if ( (_BYTE)CurrentThread != 1 && *(__int64 *)(v16 + 8) >= 0 )
              break;
            if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) != 0 && (v1 & 1) != 0 )
              break;
          }
        }
LABEL_17:
        if ( *(_QWORD *)(v6 + 144) )
          *(_DWORD *)(v6 + 64) = v1 & 0xFFFFFFFB;
      }
    }
  }
  return (char)CurrentThread;
}
