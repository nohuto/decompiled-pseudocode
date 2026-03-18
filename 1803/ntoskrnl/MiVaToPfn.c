/*
 * XREFs of MiVaToPfn @ 0x14003C4FC
 * Callers:
 *     MiGetPhysicalAddress @ 0x14003C3F8 (MiGetPhysicalAddress.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiInitializeShadowPageTable @ 0x14062B9A4 (MiInitializeShadowPageTable.c)
 *     MiScrubNonPagedPool @ 0x14074DA70 (MiScrubNonPagedPool.c)
 *     MxConsumeImageSlush @ 0x140897E90 (MxConsumeImageSlush.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 */

unsigned __int64 __fastcall MiVaToPfn(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int16 v8; // ax
  __int64 v9; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  MiFillPteHierarchy(a1, v12);
  v1 = 4LL;
  do
  {
    v2 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)&v12[8 * v1 - 8]);
    v13 = v2;
  }
  while ( v1 && (v2 & 0x80u) == 0LL );
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFLL;
  if ( v5 )
  {
    v6 = 1LL;
    v7 = v4 >> 12;
    do
    {
      v8 = v7;
      v7 >>= 9;
      v9 = v6 * (v8 & 0x1FF);
      v6 <<= 9;
      v3 += v9;
      --v5;
    }
    while ( v5 );
  }
  return v3;
}
