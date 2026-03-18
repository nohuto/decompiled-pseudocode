/*
 * XREFs of CmpCommitAddKeyUoW @ 0x1405A590C
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 */

__int64 __fastcall CmpCommitAddKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // r13
  __int64 v4; // rbx
  __int64 v5; // r14
  ULONG_PTR v6; // r15
  ULONG_PTR v7; // rbp
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rbx
  ULONG_PTR v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // dx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  char v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+88h] [rbp+10h]
  char v20; // [rsp+90h] [rbp+18h] BYREF

  v19 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(int *)(a1 + 72);
  v5 = *(_QWORD *)(v2 + 64);
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(_QWORD *)(v5 + 24);
  HvpGetCellContextReinitialize((__int64)&v20);
  HvpGetCellContextReinitialize((__int64)&v18);
  v8 = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v7 + 8))(
         v7,
         *(unsigned int *)(*(_QWORD *)(v2 + 64) + 32LL),
         &v20);
  if ( HvpMarkCellDirty(v6, *(unsigned int *)(v2 + 32), 1)
    && HvpMarkCellDirty(v7, *(unsigned int *)(v5 + 32), 1)
    && HvpMarkCellDirty(v7, *(unsigned int *)(v9 + 4 * v4 + 28), 1) )
  {
    v10 = CmpCopyKeyPartial(v6, *(unsigned int *)(v2 + 32), v7, *(unsigned int *)(v5 + 32), 38);
    v8 = v10;
    if ( v10 == -1 || !CmpAddSubKeyEx(v7, *(unsigned int *)(v5 + 32), v10, 0) )
    {
      v16 = -1073741670;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v2 + 32);
      *(_DWORD *)(v2 + 32) = v8;
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(v6 + 8))(v6, v8, &v18);
      v12 = *(unsigned int *)(v11 + 44);
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v5 + 32);
      CmpAssignSecurityToKcb(v2, v12, 0LL, 0, 0);
      ++*(_QWORD *)(v2 + 296);
      ++*(_QWORD *)(v5 + 296);
      v13 = *v19;
      *(_QWORD *)(v9 + 4) = *v19;
      *(_QWORD *)(v5 + 160) = v13;
      v14 = *(_WORD *)(v11 + 72);
      if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
        v14 *= 2;
      if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v14 )
      {
        *(_WORD *)(v9 + 52) = v14;
        *(_WORD *)(v5 + 168) = v14;
      }
      v15 = *(unsigned __int16 *)(v11 + 74);
      if ( *(_DWORD *)(v9 + 56) < v15 )
        *(_DWORD *)(v9 + 56) = v15;
      v8 = -1;
      v16 = 0;
      (*(void (__fastcall **)(ULONG_PTR, char *))(v6 + 16))(v6, &v18);
    }
  }
  else
  {
    v16 = -1073741443;
  }
  if ( v9 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(v7 + 16))(v7, &v20);
  if ( v8 != -1 )
    CmpFreeKeyByCell(v6, v8, 0);
  return v16;
}
