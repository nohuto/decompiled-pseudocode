/*
 * XREFs of MmMapMdl @ 0x140256AE0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiMappingHasIoReferences @ 0x14013CCF0 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14026D2CC (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x14026D360 (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  _SLIST_ENTRY *v5; // r13
  void (__fastcall *v6)(__int64, _QWORD); // r8
  __int64 v7; // r9
  unsigned int ProtectionMask; // r14d
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // r15
  int v16; // ebp
  int v17; // ebp
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  _DWORD v24[17]; // [rsp+34h] [rbp-44h] BYREF

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
      || (v14 = MiReservePtes((__int64)&qword_1403CC5E0, v11)) != 0 )
    {
      v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
      v16 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, v24);
      if ( v16 >= 0 )
      {
        v17 = v24[0] & 1;
        if ( (v24[0] & 1) != 0 )
        {
          MiMappingHasIoReferences(v15);
          *(_WORD *)(a1 + 10) |= 0x800u;
        }
        if ( (dword_14044B16C & 1) != 0 )
        {
          v18 = MiProtectionToCacheAttribute(ProtectionMask);
          MiInsertPteTracker(a1, 0LL, v19, v18);
        }
        a3(a4, v15);
        if ( v17 )
          MiZeroAndFlushPtes(v15, v10);
        v16 = 0;
      }
      if ( v5 )
      {
        if ( v11 )
        {
          do
          {
            *(_QWORD *)v14 = ZeroPte;
            if ( MiPteInShadowRange(v14) )
              MiWritePteShadow(v21, v20, v22);
            v14 += 8LL;
          }
          while ( v23 != 1 );
        }
        MiFreeUltraMdlContext(v5);
        v14 = 0LL;
      }
      if ( v14 )
        MiReleasePtes((__int64)&qword_1403CC5E0, v14, v11);
      return (unsigned int)v16;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
