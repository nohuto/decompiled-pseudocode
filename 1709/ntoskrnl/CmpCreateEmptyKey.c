/*
 * XREFs of CmpCreateEmptyKey @ 0x140691474
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x140691818 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140477D28 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpNameSize @ 0x1405750F8 (CmpNameSize.c)
 */

__int64 __fastcall CmpCreateEmptyKey(ULONG_PTR BugCheckParameter2, unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int v7; // r11d
  unsigned int Cell; // esi
  size_t v10; // r8
  _WORD *v11; // rdi
  int v12; // rax^4
  char *v13; // r14
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  int SecurityDescriptorNode; // edi
  unsigned int v17; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  void *v20; // [rsp+48h] [rbp-8h] BYREF

  v19[1] = 0;
  v19[0] = -1;
  v18[0] = -1;
  v18[1] = 0;
  v6 = (unsigned __int16)CmpNameSize(a2) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v6, v7, (__int64)&v20, (__int64)v19);
  if ( Cell == -1 )
    return 0xFFFFFFFFLL;
  v10 = v6;
  v11 = v20;
  memset(v20, 0, v10);
  *(_DWORD *)v11 = 33581934;
  v12 = MEMORY[0xFFFFF78000000018];
  v13 = (char *)v20;
  *((_DWORD *)v20 + 1) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)v13 + 2) = v12;
  *((_DWORD *)v13 + 4) = a3;
  *(_QWORD *)(v13 + 20) = 0LL;
  *((_DWORD *)v13 + 7) = -1;
  *((_QWORD *)v13 + 4) = 0xFFFFFFFFLL;
  *((_DWORD *)v13 + 10) = -1;
  *((_DWORD *)v13 + 11) = -1;
  *((_DWORD *)v13 + 12) = -1;
  *((_WORD *)v13 + 37) = 0;
  *((_QWORD *)v13 + 7) = 0LL;
  *((_DWORD *)v13 + 16) = 0;
  *((_WORD *)v13 + 26) = 0;
  *((_DWORD *)v13 + 13) &= 0xFF00FFFF;
  v13[55] = 0;
  v14 = CmpCopyName(v13 + 76, (const void **)a2);
  *((_WORD *)v13 + 36) = v14;
  if ( v14 < *a2 )
    v11[1] |= 0x20u;
  if ( a3 == -1 )
    v11[1] |= 0xCu;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 2952, 0LL);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v18);
  if ( v15 && CmpFindSecurityCellCacheIndex(BugCheckParameter2, *(_DWORD *)(v15 + 44), &v17) )
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               BugCheckParameter2,
                               Cell,
                               (__int64)v13,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v17 + 8) + 32LL),
                               0,
                               (unsigned int *)v13 + 11);
  else
    SecurityDescriptorNode = -1073741670;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v18);
  ExReleasePushLockEx(BugCheckParameter2 + 2952, 0LL);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v19);
  if ( SecurityDescriptorNode < 0 )
  {
    HvFreeCell(BugCheckParameter2, Cell);
    return (unsigned int)-1;
  }
  return Cell;
}
