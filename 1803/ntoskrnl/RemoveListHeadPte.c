/*
 * XREFs of RemoveListHeadPte @ 0x1400DE6D0
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x14025C600 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x1401A65E4 (MiMakeLinkedListPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall RemoveListHeadPte(_QWORD *a1)
{
  __int64 PteLink; // rax
  __int64 v2; // r11
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  ULONG_PTR v8; // r9
  _QWORD *v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 LinkedListPte; // rax
  __int64 *v16; // r8
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // r9
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10

  PteLink = MiGetPteLink(*a1);
  if ( MiPteInShadowRange(v2 + 8 * PteLink) && (unsigned int)MiPteHasShadow() )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_12;
    if ( (v3 & 0x20) == 0 || (v3 & 0x42) == 0 )
    {
      v5 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 8 * (((unsigned __int64)(unsigned int)v4 >> 3) & 0x1FF));
        v7 = v3 | 0x20;
        if ( (v6 & 0x20) == 0 )
          v7 = v3;
        v3 = v7;
        if ( (v6 & 0x42) != 0 )
          v3 = v7 | 0x42;
      }
    }
  }
  if ( (v3 & 1) != 0 )
    goto LABEL_31;
LABEL_12:
  if ( (v3 & 0x3E0) != 0 )
LABEL_31:
    KeBugCheckEx(0x1Au, 0x3800uLL, v4, v3, 0LL);
  if ( MiPteInShadowRange(v4 + 8) && (unsigned int)MiPteHasShadow() )
  {
    if ( (v8 & 1) == 0 )
      goto LABEL_24;
    if ( (v8 & 0x20) == 0 || (v8 & 0x42) == 0 )
    {
      v11 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * ((v10 >> 3) & 0x1FF));
        v13 = v8 | 0x20;
        if ( (v12 & 0x20) == 0 )
          v13 = v8;
        v8 = v13;
        if ( (v12 & 0x42) != 0 )
          v8 = v13 | 0x42;
      }
    }
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_30;
LABEL_24:
  if ( (v8 & 0x3E0) != 0 )
LABEL_30:
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v9, v8, 0LL);
  v14 = MiGetPteLink(*v9);
  LinkedListPte = MiMakeLinkedListPte(v14);
  *v16 = LinkedListPte;
  v19 = (__int64)((((unsigned __int64)v16 >> 9) & 0x7FFFFFFFF8LL) - v18 - 0x98000000000LL) >> 3;
  if ( v20 == v19 )
  {
    v16[1] = LinkedListPte;
    return v17;
  }
  else
  {
    v22 = MiMakeLinkedListPte(v19);
    v25 = (__int64 *)(v23 + 8 + 8 * v24);
    *v25 = v22;
    if ( MiPteInShadowRange((unsigned __int64)v25) )
      MiWritePteShadow(v27, v26, v28);
    return v29;
  }
}
