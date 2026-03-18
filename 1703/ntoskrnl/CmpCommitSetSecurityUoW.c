/*
 * XREFs of CmpCommitSetSecurityUoW @ 0x14059B280
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14003388C (CmpRemoveSecurityCellList.c)
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitSetSecurityUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r14d
  ULONG_PTR v7; // rdi
  __int64 v8; // r12
  unsigned int *v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // ebx
  int SecurityDescriptorNode; // ebx
  int v14; // eax
  __int64 v15; // rcx
  _DWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-20h] BYREF
  _DWORD v19[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int BugCheckParameter3; // [rsp+B0h] [rbp+58h]
  unsigned int v23; // [rsp+B8h] [rbp+60h]

  v18[1] = 0;
  v19[1] = 0;
  v17[1] = 0;
  v3 = 0LL;
  v18[0] = -1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v19[0] = -1;
  v17[0] = -1;
  v6 = *(_DWORD *)(v5 + 32);
  v7 = *(_QWORD *)(v5 + 24);
  v23 = v6;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v6, v18);
  if ( !v8 )
    return (unsigned int)-1073741670;
  if ( !HvpMarkCellDirty(v7, v6, 1) )
  {
LABEL_21:
    SecurityDescriptorNode = -1073741443;
    goto LABEL_12;
  }
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, *(unsigned int *)(a1 + 96), v19);
  if ( v3 )
  {
    v9 = (unsigned int *)(v8 + 44);
    v10 = *(_DWORD *)(v8 + 44);
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v10, v17);
    v4 = v11;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      BugCheckParameter3 = *(_DWORD *)(v11 + 4);
      if ( HvpMarkCellDirty(v7, v10, 1) && HvpMarkCellDirty(v7, v12, 1) && HvpMarkCellDirty(v7, BugCheckParameter3, 1) )
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
          v14 = *(_DWORD *)(v4 + 12);
          if ( v14 == 1 )
          {
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v17);
            v4 = 0LL;
            CmpRemoveSecurityCellList(v7, v10);
            HvFreeCell(v7, v10);
          }
          else
          {
            *(_DWORD *)(v4 + 12) = v14 - 1;
          }
          v15 = *a2;
          *(_QWORD *)(v8 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 160LL) = v15;
          CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *v9, 0LL, 0, 0);
        }
        goto LABEL_12;
      }
      goto LABEL_21;
    }
  }
  SecurityDescriptorNode = -1073741670;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v18);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v19);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v17);
  return (unsigned int)SecurityDescriptorNode;
}
