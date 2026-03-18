/*
 * XREFs of CmpCommitAddKeyUoW @ 0x140571D00
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 */

__int64 __fastcall CmpCommitAddKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // r13
  __int64 v4; // rbx
  __int64 v5; // r15
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int16 v13; // dx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  char v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+88h] [rbp+10h]
  char v19; // [rsp+90h] [rbp+18h] BYREF

  v18 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(int *)(a1 + 72);
  v5 = *(_QWORD *)(v2 + 64);
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(_QWORD *)(v5 + 24);
  HvpGetCellContextReinitialize((__int64)&v19);
  HvpGetCellContextReinitialize((__int64)&v17);
  v8 = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v7 + 8))(
         v7,
         *(unsigned int *)(*(_QWORD *)(v2 + 64) + 32LL),
         &v19);
  if ( HvpMarkCellDirty(v6, *(unsigned int *)(v2 + 32), 1)
    && HvpMarkCellDirty(v7, *(unsigned int *)(v5 + 32), 1)
    && HvpMarkCellDirty(v7, *(unsigned int *)(v9 + 4 * v4 + 28), 1) )
  {
    v10 = CmpCopyKeyPartial(v6, *(unsigned int *)(v2 + 32), v7, *(unsigned int *)(v5 + 32), 38);
    v8 = v10;
    if ( v10 == -1 || !CmpAddSubKeyEx(v7, *(unsigned int *)(v5 + 32), v10, 0) )
    {
      v15 = -1073741670;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 32) = v8;
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v6 + 8))(v6, v8, &v17);
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v5 + 32);
      CmpAssignSecurityToKcb(v2, *(unsigned int *)(v11 + 44), 0LL, 0, 0);
      v12 = *v18;
      *(_QWORD *)(v9 + 4) = *v18;
      *(_QWORD *)(v5 + 160) = v12;
      v13 = *(_WORD *)(v11 + 72);
      if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
        v13 *= 2;
      if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v13 )
      {
        *(_WORD *)(v9 + 52) = v13;
        *(_WORD *)(v5 + 168) = v13;
      }
      v14 = *(unsigned __int16 *)(v11 + 74);
      if ( *(_DWORD *)(v9 + 56) < v14 )
        *(_DWORD *)(v9 + 56) = v14;
      v8 = -1;
      v15 = 0;
      (*(void (__fastcall **)(ULONG_PTR, char *))(v6 + 16))(v6, &v17);
    }
  }
  else
  {
    v15 = -1073741443;
  }
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v7 + 16))(v7, &v19);
  if ( v8 != -1 )
    CmpFreeKeyByCell(v6, v8, 0);
  return v15;
}
