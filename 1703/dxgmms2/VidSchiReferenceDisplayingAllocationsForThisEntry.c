/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0002E00
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0023240 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r14d
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  unsigned int v10; // r10d
  unsigned int v11; // r15d
  __int64 result; // rax
  unsigned int v13; // esi
  unsigned __int64 v14; // rbp
  _WORD *v15; // r13
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r9
  int v19; // ecx
  char v20; // dl
  int v21; // ecx

  v4 = *(_QWORD *)(a3 + 1152);
  v5 = (unsigned __int8)*(_DWORD *)v4;
  if ( *(_BYTE *)(a1 + 132) )
    v6 = *(unsigned __int8 *)(v4 + 1);
  else
    v6 = 0;
  v7 = 0;
  v8 = !_BitScanForward((unsigned int *)&v9, v5);
  if ( v8 )
    LOBYTE(v9) = -1;
  v10 = (char)v9;
  v8 = !_BitScanForward((unsigned int *)&v9, v6);
  if ( v8 )
    LOBYTE(v9) = -1;
  v11 = (char)v9;
  while ( v5 || v6 )
  {
    if ( v10 >= v11 )
    {
      v6 &= ~(1 << v11);
      v20 = -1;
      v8 = !_BitScanForward((unsigned int *)&v21, v6);
      if ( !v8 )
        v20 = v21;
      v11 = v20;
    }
    else
    {
      v13 = 0;
      if ( *(_DWORD *)(a3 + 1068) )
      {
        v14 = (unsigned __int64)v10 << 6;
        do
        {
          v15 = &a2[16 * v14 + 16 * v13];
          *((_QWORD *)v15 + 299) = *(_QWORD *)(*(_QWORD *)(((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 8LL) + 167) & 0xFFFFFFF8)
                                                         * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL)
                                                         + *(_QWORD *)(a3 + 1152)
                                                         + 48
                                                         * (v7 + v13 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL) + 1LL))
                                             + 96LL);
          *((_QWORD *)v15 + 298) = *(_QWORD *)(*(_QWORD *)(a3 + 1152)
                                             + *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 8LL) + 167) & 0xFFFFFFF8)
                                             + 48LL * (v7 + v13 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL))
                                             + 24);
          v16 = (unsigned __int16)a2[9386];
          if ( *(_BYTE *)(*(_QWORD *)(a3 + 1152)
                        + *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL)
                        * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 8LL) + 167) & 0xFFFFFFF8)
                        + 48LL * (v7 + v13 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL))
                        + 56) )
            v17 = v16 | (1 << v10);
          else
            v17 = v16 & ~(1 << v10);
          a2[9386] = v17;
          v15[1204] = *(_WORD *)(*(_QWORD *)(a3 + 1152)
                               + *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL)
                               * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 8LL) + 167) & 0xFFFFFFF8)
                               + 48LL * (v7 + v13 * *(_DWORD *)(*(_QWORD *)(a3 + 1152) + 4LL))
                               + 32);
          v18 = *(_QWORD *)(a3 + 1152);
          *(_QWORD *)&a2[16 * v14 + 1200 + 16 * v13] = *(_QWORD *)(v18
                                                                 + *(_DWORD *)(v18 + 4)
                                                                 * ((8 * *(_DWORD *)(v18 + 8) + 167) & 0xFFFFFFF8)
                                                                 + 48LL * (v7 + v13 * *(_DWORD *)(v18 + 4))
                                                                 + 40);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v15 + 299) + 16LL) + 8LL));
          ++v13;
        }
        while ( v13 < *(_DWORD *)(a3 + 1068) );
      }
      a2[9384] |= 1 << v10;
      v5 &= ~(1 << v10);
      v8 = !_BitScanForward((unsigned int *)&v19, v5);
      if ( v8 )
        LOBYTE(v19) = -1;
      v10 = (char)v19;
    }
    ++v7;
  }
  result = *(unsigned __int16 *)(a3 + 1068);
  a2[9385] = result;
  return result;
}
