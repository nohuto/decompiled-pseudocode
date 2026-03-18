/*
 * XREFs of MiInvalidateCollidedIos @ 0x1400ACB34
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReleaseInPageRefs @ 0x1400ACD80 (MiReleaseInPageRefs.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v1; // r15d
  _QWORD *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  _QWORD *v22; // r14
  _QWORD *v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 189) & 8) != 0 )
  {
    v5 = a1 + 16;
    v6 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v6 + 8) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 312);
    v4 = *(_QWORD *)(a1 + 320);
    v3 = (_QWORD *)(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    v9 = v4 + 264;
    if ( *(_QWORD *)(v4 + 248) )
      v9 = *(_QWORD *)(v4 + 248);
    v10 = (_QWORD *)(v9 + 48);
    v11 = (((*(_DWORD *)(v9 + 32) + *(_DWORD *)(v9 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v9 + 40) + 4095) >> 12;
    v12 = 6LL * *(_QWORD *)(v9 + 48);
    v13 = v9 + 40 + 8 * v11;
    v1 = 0;
    v14 = *(_QWORD *)(8 * v12 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
    if ( (unsigned __int64)v3 >= v14
      && (v15 = (__int64)((__int64)v3 - v14) >> 3, v15 < v11)
      && v3 == (_QWORD *)(*(_QWORD *)(48LL * v10[v15] - 0x58000000000LL + 8) | 0x8000000000000000uLL) )
    {
LABEL_10:
      v16 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
      *v3 = MiUpdateTransitionPteFrame(v16, v8);
      if ( MiPteInShadowRange((unsigned __int64)v3) )
        MiWritePteShadow(v18, v17, v19);
      *(_QWORD *)(a1 + 168) = v17;
      v1 = 1;
      *(_QWORD *)(8 * v21 - 0x58000000000LL + 16) ^= (*(_DWORD *)(8 * v21 - 0x58000000000LL + 16) ^ *(_DWORD *)(v20 + 16)) & 0x3E0;
    }
    else
    {
      while ( (unsigned __int64)v10 <= v13 )
      {
        if ( (_QWORD *)(*(_QWORD *)(48LL * *v10 - 0x58000000000LL + 8) | 0x8000000000000000uLL) == v3 )
          goto LABEL_10;
        ++v10;
      }
      *(_BYTE *)(v4 + 188) |= 1u;
      v20 = 48 * v8 - 0x58000000000LL;
    }
    MiReleaseInPageRefs(v20);
  }
  else
  {
    v3 = 0LL;
    v4 = a1;
  }
  v22 = (_QWORD *)(v4 + 16);
  v23 = (_QWORD *)*v22;
  while ( v23 != v22 )
  {
    v24 = v23[37];
    v25 = v23;
    v23 = (_QWORD *)*v23;
    v26 = 48 * v24 - 0x58000000000LL;
    if ( (*(_BYTE *)(a1 + 189) & 8) == 0 || (_QWORD *)(*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) == v3 )
    {
      MiReleaseInPageRefs(v26);
      v27 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 || (v28 = (_QWORD *)v25[1], (_QWORD *)*v28 != v25) )
        __fastfail(3u);
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      v25[1] = v25;
      *v25 = v25;
    }
  }
  return v1;
}
