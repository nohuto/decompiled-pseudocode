/*
 * XREFs of CmpCreateEmptyKey @ 0x1406F4C7C
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1406F5048 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 *     CmpCopyName @ 0x1405157EC (CmpCopyName.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpNameSize @ 0x140560BD4 (CmpNameSize.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  void *v22; // [rsp+48h] [rbp-8h] BYREF

  v21[1] = 0;
  v21[0] = -1;
  v20[0] = -1;
  v20[1] = 0;
  v6 = (unsigned __int16)CmpNameSize(a2) + 76;
  Cell = HvAllocateCell(BugCheckParameter2, v6, v7, (__int64)&v22, (__int64)v21);
  if ( Cell == -1 )
    return 0xFFFFFFFFLL;
  v10 = v6;
  v11 = v22;
  memset(v22, 0, v10);
  *(_DWORD *)v11 = 33581934;
  v12 = MEMORY[0xFFFFF78000000018];
  v13 = (char *)v22;
  *((_DWORD *)v22 + 1) = MEMORY[0xFFFFF78000000014];
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
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v20);
  if ( v15 && CmpFindSecurityCellCacheIndex(BugCheckParameter2, *(_DWORD *)(v15 + 44), &v19) )
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               BugCheckParameter2,
                               Cell,
                               (__int64)v13,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v19 + 8) + 32LL),
                               0,
                               (unsigned int *)v13 + 11);
  else
    SecurityDescriptorNode = -1073741670;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v20);
  ExReleasePushLockEx(BugCheckParameter2 + 1776, 0LL, v17, v18);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v21);
  if ( SecurityDescriptorNode < 0 )
  {
    HvFreeCell(BugCheckParameter2, Cell);
    return (unsigned int)-1;
  }
  return Cell;
}
