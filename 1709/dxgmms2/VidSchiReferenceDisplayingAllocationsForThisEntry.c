/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0004850
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0025718 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // ebp
  bool v7; // zf
  int v8; // ecx
  unsigned int v9; // r11d
  unsigned int v10; // r12d
  __int64 result; // rax
  unsigned int v12; // r14d
  unsigned __int64 v13; // r15
  _WORD *v14; // r13
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  char v19; // dl
  int v20; // ecx

  v4 = **(_DWORD **)(a3 + 1160) & 0x3FF;
  if ( *(_BYTE *)(a1 + 132) )
    v5 = (**(_DWORD **)(a3 + 1160) >> 10) & 0x3FF;
  else
    v5 = 0;
  v6 = 0;
  v7 = !_BitScanForward((unsigned int *)&v8, v4);
  if ( v7 )
    LOBYTE(v8) = -1;
  v9 = (char)v8;
  v7 = !_BitScanForward((unsigned int *)&v8, v5);
  if ( v7 )
    LOBYTE(v8) = -1;
  v10 = (char)v8;
  while ( v4 || v5 )
  {
    if ( v9 >= v10 )
      goto LABEL_24;
    v12 = 0;
    if ( *(_DWORD *)(a3 + 1084) )
    {
      v13 = (unsigned __int64)v9 << 6;
      do
      {
        v14 = &a2[16 * v13 + 16 * v12];
        *((_QWORD *)v14 + 381) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 1160)
                                                       + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                                                       * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                                                       + 48
                                                       * (v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL) + v6 + 1LL))
                                           + 96LL);
        *(_QWORD *)&a2[16 * v13 + 1520 + 16 * v12] = *(_QWORD *)(*(_QWORD *)(a3 + 1160)
                                                               + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                                                               * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                                                               + 48LL
                                                               * (v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                                                               + 24);
        v15 = (unsigned __int16)a2[11762];
        if ( *(_BYTE *)(*(_QWORD *)(a3 + 1160)
                      + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                      * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                      + 48LL * (v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                      + 56) )
          v16 = v15 | (1 << v9);
        else
          v16 = v15 & ~(1 << v9);
        a2[11762] = v16;
        v14[1532] = *(_WORD *)(*(_QWORD *)(a3 + 1160)
                             + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                             * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                             + 48LL * (v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                             + 32);
        v17 = *((_QWORD *)v14 + 381);
        *((_QWORD *)v14 + 382) = *(_QWORD *)(*(_QWORD *)(a3 + 1160)
                                           + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                                           + 48LL * (v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                                           + 40);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 16) + 8LL));
        ++v12;
      }
      while ( v12 < *(_DWORD *)(a3 + 1084) );
    }
    a2[11760] |= 1 << v9;
    if ( v9 >= v10 )
    {
LABEL_24:
      v5 &= ~(1 << v10);
      v19 = -1;
      v7 = !_BitScanForward((unsigned int *)&v20, v5);
      if ( !v7 )
        v19 = v20;
      v10 = v19;
    }
    else
    {
      v4 &= ~(1 << v9);
      v7 = !_BitScanForward((unsigned int *)&v18, v4);
      if ( v7 )
        LOBYTE(v18) = -1;
      v9 = (char)v18;
    }
    ++v6;
  }
  result = *(unsigned __int16 *)(a3 + 1084);
  a2[11761] = result;
  return result;
}
