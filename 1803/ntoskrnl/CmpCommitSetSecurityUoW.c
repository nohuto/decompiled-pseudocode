/*
 * XREFs of CmpCommitSetSecurityUoW @ 0x1405F3504
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     CmpRemoveSecurityCellList @ 0x1400CE6D8 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 */

__int64 __fastcall CmpCommitSetSecurityUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r14d
  ULONG_PTR v7; // rdi
  __int64 v8; // rbx
  unsigned int *v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rax
  int SecurityDescriptorNode; // ebx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-20h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-10h]
  unsigned int BugCheckParameter3; // [rsp+A0h] [rbp+48h]
  unsigned int v22; // [rsp+B0h] [rbp+58h]
  unsigned int v23; // [rsp+B8h] [rbp+60h]

  v17[1] = 0;
  v18[1] = 0;
  v16[1] = 0;
  v3 = 0LL;
  v17[0] = -1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v18[0] = -1;
  v16[0] = -1;
  v6 = *(_DWORD *)(v5 + 32);
  v7 = *(_QWORD *)(v5 + 24);
  v23 = v6;
  v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v6, v17);
  v8 = v19;
  if ( !v19 )
    return (unsigned int)-1073741670;
  if ( !HvpMarkCellDirty(v7, v6, 1) )
  {
LABEL_21:
    SecurityDescriptorNode = -1073741443;
    goto LABEL_12;
  }
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, *(unsigned int *)(a1 + 96), v18);
  if ( v3 )
  {
    v9 = (unsigned int *)(v8 + 44);
    v10 = *(_DWORD *)(v8 + 44);
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v10, v16);
    v4 = v11;
    if ( v11 )
    {
      BugCheckParameter3 = *(_DWORD *)(v11 + 8);
      v22 = *(_DWORD *)(v11 + 4);
      if ( HvpMarkCellDirty(v7, v10, 1) && HvpMarkCellDirty(v7, BugCheckParameter3, 1) && HvpMarkCellDirty(v7, v22, 1) )
      {
        SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                                   v7,
                                   v23,
                                   v8,
                                   (void *)(v3 + 20),
                                   1,
                                   (unsigned int *)(v8 + 44));
        if ( SecurityDescriptorNode < 0 )
        {
          *v9 = v10;
        }
        else
        {
          v13 = *(_DWORD *)(v4 + 12);
          if ( v13 == 1 )
          {
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v16);
            v4 = 0LL;
            CmpRemoveSecurityCellList(v7, v10);
            HvFreeCell(v7, v10);
          }
          else
          {
            *(_DWORD *)(v4 + 12) = v13 - 1;
          }
          v14 = *a2;
          *(_QWORD *)(v19 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v14;
          CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *v9, 0LL, 0, 0);
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 296LL);
        }
        goto LABEL_12;
      }
      goto LABEL_21;
    }
  }
  SecurityDescriptorNode = -1073741670;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v17);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v18);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v16);
  return (unsigned int)SecurityDescriptorNode;
}
