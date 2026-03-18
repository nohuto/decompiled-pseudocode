/*
 * XREFs of VidSchiUpdateFlipQueueEntriesForMove @ 0x1C002D5C4
 * Callers:
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00B17C0 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B2D80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 */

void __fastcall VidSchiUpdateFlipQueueEntriesForMove(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned int i; // r15d
  __int64 v6; // rbx
  int v7; // esi
  unsigned int v8; // r12d
  char v9; // cl
  unsigned int v10; // r13d
  int v12; // eax
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 *v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[276]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+900h] [rbp+800h] BYREF
  int v26; // [rsp+908h] [rbp+808h]
  __int64 v27; // [rsp+910h] [rbp+810h]
  __int64 v28; // [rsp+918h] [rbp+818h] BYREF

  v3 = a2[18];
  v27 = a2[63];
  v4 = a2[17];
  v22 = v3;
  v28 = v3 + *(_QWORD *)(v4 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v6 = *(_QWORD *)(a1 + 8LL * i + 3032);
    if ( v6 )
    {
      LOWORD(v7) = *(_WORD *)(v6 + 28000);
      while ( (_WORD)v7 )
      {
        v8 = *(unsigned __int16 *)(v6 + 28002);
        v9 = -1;
        v10 = 0;
        if ( _BitScanForward((unsigned int *)&v12, (unsigned __int16)v7) )
          v9 = v12;
        v26 = v9;
        if ( v8 )
        {
          v13 = 2560LL * v9;
          v25 = v9;
          v14 = (_QWORD *)(v6 + v13 + 2408);
          while ( *v14 != v27 )
          {
            ++v10;
            v14 += 5;
            if ( v10 >= v8 )
              goto LABEL_23;
          }
          memset(v24, 0, 0x858uLL);
          HIDWORD(v24[1]) = *(unsigned __int16 *)(v13 + v6 + 2432);
          v24[3] = *(_QWORD *)(v13 + v6 + 2400);
          v24[0] = a1;
          LODWORD(v24[1]) = i;
          if ( v10 )
            v15 = (__int64 *)(v6 + v13 + 2424);
          else
            v15 = &v28;
          v24[2] = *v15;
          v16 = 0;
          LODWORD(v24[4]) = v8;
          v17 = v25;
          do
          {
            if ( v16 )
            {
              v18 = 3LL * (v16 - 1);
              v24[v18 + 71] = *(_QWORD *)(v6 + 40 * (v16 + (v17 << 6) + 60));
              LOWORD(v24[v18 + 72]) = *(_WORD *)(v6 + 40 * ((v17 << 6) + v16) + 2432);
              if ( v10 == v16 )
                v19 = &v22;
              else
                v19 = (__int64 *)(v6 + 8 * (5 * ((v17 << 6) + v16) + 303));
              v24[3 * v16 + 70] = *v19;
              v8 = v24[4];
            }
            ++v16;
          }
          while ( v16 < v8 );
          LODWORD(v24[70]) |= 0x102u;
          v20 = *(unsigned int *)(a1 + 32);
          v21 = *(_QWORD *)(a1 + 24);
          LODWORD(v24[265]) = -1073741823;
          LOBYTE(v25) = 0;
          DpSynchronizeExecution(v21, VidSchiExecuteMmIoFlipAtISR, v24, v20, &v25);
          v9 = v26;
        }
LABEL_23:
        v7 = (unsigned __int16)v7 & ~(1 << v9);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
