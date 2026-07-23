/*
 * XREFs of MmMapMdl @ 0x14021A540
 * Callers:
 *     <none>
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x140119C0C (MiMappingHasIoReferences.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     MiFreeUltraMdlContext @ 0x140234A18 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x140234AAC (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  _SLIST_ENTRY *v5; // r13
  void (__fastcall *v6)(__int64, _QWORD); // r8
  __int64 v7; // r9
  unsigned int ProtectionMask; // r14d
  unsigned __int64 v10; // r15
  unsigned int v11; // esi
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // r12
  int v16; // ebp
  unsigned __int64 v17; // r9
  int v18; // ebp
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r10
  int v22; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+34h] [rbp-44h]

  v5 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    v6(v7, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  else
  {
    v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
    v11 = v10;
    if ( MmProtectFreedNonPagedPool == 1 )
      v11 = v10 + 1;
    if ( v11 <= 0x200
      && (UltraMdlContext = MiGetUltraMdlContext(), (v5 = (_SLIST_ENTRY *)UltraMdlContext) != 0LL)
      && (UltraMapping = MiGetUltraMapping((unsigned __int64 *)(UltraMdlContext + 8), 3u, v11, 0),
          v14 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL)
      || (v14 = MiReservePtes((__int64)&qword_140389360, v11, (__int64)v6)) != 0 )
    {
      v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
      v16 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, &v22);
      if ( v16 >= 0 )
      {
        v18 = v22 & 1;
        if ( (v22 & 1) != 0 )
        {
          MiMappingHasIoReferences(v15);
          *(_WORD *)(a1 + 10) |= 0x800u;
        }
        if ( (dword_14040010C & 1) != 0 )
        {
          v19 = MiProtectionToCacheAttribute(ProtectionMask);
          MiInsertPteTracker(a1, 0LL, v20, v19);
        }
        v23 = 0;
        a3(a4, v15);
        if ( v18 )
        {
          MiZeroAndFlushPtes(v15, v10);
          v16 = v23;
        }
        else
        {
          v16 = 0;
        }
      }
      if ( v5 )
      {
        if ( v11 )
        {
          v21 = v11;
          do
          {
            *(_QWORD *)v14 = 0LL;
            if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow();
            v14 += 8LL;
            --v21;
          }
          while ( v21 );
        }
        MiFreeUltraMdlContext(v5);
        v14 = 0LL;
      }
      if ( v14 )
        MiReleasePtes((__int64)&qword_140389360, v14, v11, v17);
      return (unsigned int)v16;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
