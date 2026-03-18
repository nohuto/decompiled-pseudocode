/*
 * XREFs of VidSchiUpdateFlipQueueEntriesForMove @ 0x1C0028430
 * Callers:
 *     ?ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A3770 (-ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001E7B4 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

void __fastcall VidSchiUpdateFlipQueueEntriesForMove(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r13d
  __int64 v6; // rdi
  int v7; // r12d
  char v8; // cl
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // esi
  int v13; // edx
  __int64 v14; // r13
  _QWORD *v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // r10d
  __int64 v18; // r13
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // cf
  char v22; // al
  __int64 v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 *v26; // rax
  unsigned int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // eax
  char v34; // cl
  int v35; // r15d
  unsigned int v36; // r11d
  char v37; // cl
  int v38; // eax
  unsigned int v39; // eax
  int v40; // r8d
  __int64 v41; // r11
  int v42; // edx
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v44[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-B8h]
  unsigned int v46; // [rsp+4Ch] [rbp-B4h]
  int v47; // [rsp+50h] [rbp-B0h]
  unsigned int v48; // [rsp+54h] [rbp-ACh]
  unsigned int v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v52[276]; // [rsp+80h] [rbp-80h] BYREF
  char v53; // [rsp+930h] [rbp+830h] BYREF
  unsigned int i; // [rsp+938h] [rbp+838h]
  int v55; // [rsp+940h] [rbp+840h]
  __int64 v56; // [rsp+948h] [rbp+848h]

  v56 = a2[65];
  v3 = a2[18];
  v4 = a2[17];
  v50 = v3;
  v43 = v3 + *(_QWORD *)(v4 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v5 = 0;
  for ( i = 0; v5 < *(_DWORD *)(a1 + 40); i = v5 )
  {
    v6 = *(_QWORD *)(a1 + 8LL * v5 + 2992);
    if ( v6 )
    {
      LOWORD(v7) = *(_WORD *)(v6 + 18768);
      if ( (_WORD)v7 )
      {
        do
        {
          v8 = -1;
          v9 = !_BitScanForward((unsigned int *)&v10, (unsigned __int16)v7);
          v11 = 0;
          v12 = *(unsigned __int16 *)(v6 + 18770);
          if ( !v9 )
            v8 = v10;
          v13 = v8;
          v55 = v8;
          if ( v12 )
          {
            v14 = v8;
            v15 = (_QWORD *)(v6 + ((__int64)v8 << 11) + 2392);
            while ( *v15 != v56 )
            {
              ++v11;
              v15 += 4;
              if ( v11 >= v12 )
                goto LABEL_10;
            }
            memset(&v52[1], 0, 0x850uLL);
            LODWORD(v52[1]) = i;
            v52[0] = a1;
            HIDWORD(v52[1]) = *(unsigned __int16 *)((v14 << 11) + v6 + 2408);
            v52[3] = *(_QWORD *)((v14 << 11) + v6 + 2384);
            if ( v11 )
              v26 = (__int64 *)(v6 + (v14 << 11) + 2400);
            else
              v26 = &v43;
            v27 = 0;
            v52[2] = *v26;
            LODWORD(v52[4]) = v12;
            do
            {
              if ( v27 )
              {
                v28 = 3LL * (v27 - 1);
                v29 = 32 * (v27 + (v14 << 6));
                v52[v28 + 71] = *(_QWORD *)(v29 + v6 + 2384);
                LOWORD(v52[v28 + 72]) = *(_WORD *)(v29 + v6 + 2408);
                if ( v11 == v27 )
                  v30 = &v50;
                else
                  v30 = (__int64 *)(v6 + 32 * (v27 + (v14 << 6) + 75));
                v52[3 * v27 + 70] = *v30;
                v12 = v52[4];
              }
              ++v27;
            }
            while ( v27 < v12 );
            LODWORD(v52[70]) |= 0x102u;
            v31 = *(unsigned int *)(a1 + 32);
            v32 = *(_QWORD *)(a1 + 24);
            v53 = 0;
            LODWORD(v52[265]) = -1073741823;
            DpSynchronizeExecution(v32, VidSchiExecuteMmIoFlipAtISR, v52, v31, &v53);
            v13 = v14;
          }
LABEL_10:
          v16 = *(_QWORD *)(v6 + 8LL * v13 + 24);
          if ( v16 )
          {
            v17 = *(_DWORD *)(v16 + 52);
            if ( v17 != *(_DWORD *)(v16 + 32) )
            {
              do
              {
                v18 = 1224LL * v17;
                v19 = *(_DWORD *)(v16 + v18 + 1100);
                if ( v19 > 0xC || (v20 = 4673, v21 = _bittest(&v20, v19), v22 = 1, !v21) )
                  v22 = 0;
                if ( !v22 )
                {
                  v23 = *(_QWORD *)(v16 + v18 + 1208);
                  v44[0] = a1;
                  v44[1] = v23;
                  v24 = (unsigned __int8)*(_DWORD *)v23;
                  v45 = v24;
                  if ( *(_BYTE *)(a1 + 132) )
                    v25 = *(unsigned __int8 *)(v23 + 1);
                  else
                    v25 = 0;
                  v9 = !_BitScanForward((unsigned int *)&v33, v24);
                  v34 = -1;
                  v46 = v25;
                  v35 = 0;
                  v47 = 0;
                  if ( !v9 )
                    v34 = v33;
                  v36 = v34;
                  v37 = -1;
                  v9 = !_BitScanForward((unsigned int *)&v38, v25);
                  v48 = v36;
                  if ( !v9 )
                    v37 = v38;
                  v39 = v37;
                  v49 = v37;
                  while ( v24 || v25 )
                  {
                    if ( v36 < v39 )
                    {
                      v40 = 0;
                      if ( *(_WORD *)(v6 + 18770) )
                      {
                        v41 = *(_QWORD *)(v16 + v18 + 1208);
                        v42 = *(_DWORD *)(v41 + 4);
                        while ( v56 != *(_QWORD *)(*(_QWORD *)(v41
                                                             + 48 * ((unsigned int)(v35 + v40 * v42) + 1LL)
                                                             + v42 * ((8 * *(_DWORD *)(v41 + 8) + 167) & 0xFFFFFFF8))
                                                 + 96LL) )
                        {
                          if ( ++v40 >= (unsigned int)*(unsigned __int16 *)(v6 + 18770) )
                            goto LABEL_44;
                        }
                        *(_QWORD *)(v41
                                  + v42 * ((8 * *(_DWORD *)(v41 + 8) + 167) & 0xFFFFFFF8)
                                  + 48LL * (unsigned int)(v35 + v40 * v42)
                                  + 40) = v43;
                      }
                    }
LABEL_44:
                    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v44);
                    v39 = v49;
                    v25 = v46;
                    v24 = v45;
                    v36 = v48;
                    v35 = v47;
                  }
                }
                v17 = ((_BYTE)v17 + 1) & 0x3F;
              }
              while ( v17 != *(_DWORD *)(v16 + 32) );
              LOBYTE(v13) = v55;
            }
          }
          v7 = (unsigned __int16)v7 & ~(1 << v13);
        }
        while ( (_WORD)v7 );
        v5 = i;
      }
    }
    ++v5;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
