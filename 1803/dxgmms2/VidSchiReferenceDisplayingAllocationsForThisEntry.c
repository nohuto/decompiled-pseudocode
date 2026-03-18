/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0010E10
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0028260 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // eax
  int v6; // r15d
  bool v7; // zf
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  __int64 result; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // r10
  __int64 v15; // r10
  __int16 v16; // r10
  _WORD *v17; // r10
  __int64 v18; // rcx
  int v19; // ecx
  char v20; // dl
  int v21; // ecx

  v3 = 0;
  v5 = **(_DWORD **)(a3 + 1160) & 0x3FF;
  if ( *(_BYTE *)(a1 + 136) )
    v3 = (**(_DWORD **)(a3 + 1160) >> 10) & 0x3FF;
  v6 = 0;
  v7 = !_BitScanForward((unsigned int *)&v8, v5);
  if ( v7 )
    LOBYTE(v8) = -1;
  v9 = (char)v8;
  v7 = !_BitScanForward((unsigned int *)&v8, v3);
  if ( v7 )
    LOBYTE(v8) = -1;
  v10 = (char)v8;
  while ( v5 || v3 )
  {
    if ( v9 >= v10 )
      goto LABEL_23;
    v12 = 0LL;
    if ( *(_DWORD *)(a3 + 1084) )
    {
      v13 = (unsigned __int64)v9 << 6;
      do
      {
        v14 = *(_QWORD *)(a3 + 1160);
        *(_QWORD *)&a2[20 * v12 + 1204 + 20 * v13] = *(_QWORD *)(*(_QWORD *)(v14
                                                                           + *(_DWORD *)(v14 + 4)
                                                                           * ((8 * *(_DWORD *)(v14 + 8) + 175) & 0xFFFFFFF8)
                                                                           + 48
                                                                           * ((unsigned int)(v6
                                                                                           + v12 * *(_DWORD *)(v14 + 4))
                                                                            + 1LL))
                                                               + 96LL);
        v15 = *(_QWORD *)(a3 + 1160);
        *(_QWORD *)&a2[20 * (unsigned int)v12 + 1200 + 20 * v13] = *(_QWORD *)(v15
                                                                             + *(_DWORD *)(v15 + 4)
                                                                             * ((8 * *(_DWORD *)(v15 + 8) + 175) & 0xFFFFFFF8)
                                                                             + 48LL
                                                                             * (unsigned int)(v6
                                                                                            + v12 * *(_DWORD *)(v15 + 4))
                                                                             + 24);
        v16 = a2[14002];
        if ( *(_QWORD *)(*(_QWORD *)(a3 + 1160)
                       + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                       * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                       + 48LL * (unsigned int)(v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                       + 56) )
        {
          a2[14002] = v16 | (1 << v9);
          v17 = &a2[20 * v12 + 20 * v13];
          *((_QWORD *)v17 + 302) = *(_QWORD *)(*(_QWORD *)(a3 + 1160)
                                             + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                                             + 48LL
                                             * (unsigned int)(v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                                             + 56);
        }
        else
        {
          a2[14002] = v16 & ~(1 << v9);
          v17 = &a2[20 * v12 + 20 * v13];
        }
        v17[1216] = *(_WORD *)(*(_QWORD *)(a3 + 1160)
                             + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                             * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                             + 48LL * (unsigned int)(v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                             + 32);
        v18 = *((_QWORD *)v17 + 301);
        *((_QWORD *)v17 + 303) = *(_QWORD *)(*(_QWORD *)(a3 + 1160)
                                           + *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL)
                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 8LL) + 175) & 0xFFFFFFF8)
                                           + 48LL * (unsigned int)(v6 + v12 * *(_DWORD *)(*(_QWORD *)(a3 + 1160) + 4LL))
                                           + 40);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 16) + 8LL));
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *(_DWORD *)(a3 + 1084) );
    }
    a2[14000] |= 1 << v9;
    if ( v9 >= v10 )
    {
LABEL_23:
      v3 &= ~(1 << v10);
      v20 = -1;
      v7 = !_BitScanForward((unsigned int *)&v21, v3);
      if ( !v7 )
        v20 = v21;
      v10 = v20;
    }
    else
    {
      v5 &= ~(1 << v9);
      v7 = !_BitScanForward((unsigned int *)&v19, v5);
      if ( v7 )
        LOBYTE(v19) = -1;
      v9 = (char)v19;
    }
    ++v6;
  }
  result = *(unsigned __int16 *)(a3 + 1084);
  a2[14001] = result;
  return result;
}
