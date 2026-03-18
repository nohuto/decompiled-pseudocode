/*
 * XREFs of MiInvalidateCollidedIos @ 0x14003855C
 * Callers:
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiPurgeImageSection @ 0x140215D80 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleaseInPageRefs @ 0x1400387AC (MiReleaseInPageRefs.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdi
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
  __int64 v19; // r10
  __int64 v20; // r11
  _QWORD **v21; // r14
  _QWORD *v22; // rdi
  _QWORD *v23; // r15
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 189) & 8) != 0 )
  {
    v5 = a1 + 16;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD **)(a1 + 24);
    if ( *(_QWORD *)(v6 + 8) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 304);
    v4 = *(_QWORD *)(a1 + 312);
    v3 = (_QWORD *)(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    v9 = v4 + 256;
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
      v1 = 1;
      v16 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
      *v3 = MiUpdateTransitionPteFrame(v16, v8);
      if ( (unsigned int)MiPteInShadowRange(v3) )
        MiWritePteShadow(v18);
      *(_QWORD *)(a1 + 168) = v17;
      *(_QWORD *)(8 * v20 - 0x58000000000LL + 16) ^= (*(_DWORD *)(8 * v20 - 0x58000000000LL + 16) ^ *(_DWORD *)(v19 + 16)) & 0x3E0;
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
      v19 = 48 * v8 - 0x58000000000LL;
    }
    MiReleaseInPageRefs(v19);
  }
  else
  {
    v3 = 0LL;
    v4 = a1;
  }
  v21 = (_QWORD **)(v4 + 16);
  v22 = *v21;
  while ( v22 != v21 )
  {
    v23 = v22 - 2;
    v22 = (_QWORD *)*v22;
    v24 = 48LL * v23[38] - 0x58000000000LL;
    if ( (*(_BYTE *)(a1 + 189) & 8) == 0 || (_QWORD *)(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) == v3 )
    {
      MiReleaseInPageRefs(v24);
      v25 = v23 + 2;
      v26 = v23[2];
      v27 = (_QWORD *)v23[3];
      if ( *(_QWORD **)(v26 + 8) != v23 + 2 || (_QWORD *)*v27 != v25 )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v23[3] = v23 + 2;
      *v25 = v25;
    }
  }
  return v1;
}
