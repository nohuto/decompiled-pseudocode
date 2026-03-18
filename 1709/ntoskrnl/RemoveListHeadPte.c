/*
 * XREFs of RemoveListHeadPte @ 0x1400A3BF4
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x14017C790 (MiMakeLinkedListPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall RemoveListHeadPte(_QWORD *a1)
{
  __int64 PteLink; // rax
  __int64 v2; // r11
  ULONG_PTR *v3; // r10
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v5; // rcx
  ULONG_PTR v6; // rax
  __int64 v7; // rax
  __int64 LinkedListPte; // rax
  __int64 *v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 *v17; // rcx

  PteLink = MiGetPteLink(*a1);
  v3 = (ULONG_PTR *)(v2 + 8 * PteLink);
  PteShadow = *v3;
  if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v3, *v3);
  if ( (PteShadow & 1) != 0 || (PteShadow & 0x3E0) != 0 )
    KeBugCheckEx(0x1Au, 0x3800uLL, (ULONG_PTR)v3, PteShadow, 0LL);
  v5 = (unsigned __int64)(v3 + 1);
  v6 = v3[1];
  if ( (unsigned __int64)(v3 + 1) >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    v6 = MiReadPteShadow(v5, v3[1]);
  if ( (v6 & 1) != 0 || (v6 & 0x3E0) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v3, v6, 0LL);
  v7 = MiGetPteLink(*v3);
  LinkedListPte = MiMakeLinkedListPte(v7);
  *v9 = LinkedListPte;
  v12 = (__int64)((((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - v11 - 0x98000000000LL) >> 3;
  if ( v13 == v12 )
  {
    v9[1] = LinkedListPte;
  }
  else
  {
    v14 = MiMakeLinkedListPte(v12);
    v17 = (__int64 *)(v16 + 8 * (v15 + 1));
    *v17 = v14;
    if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v17, v14);
  }
  return v10;
}
