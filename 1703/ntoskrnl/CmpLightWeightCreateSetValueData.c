/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x14067470C
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpCopyCell @ 0x14057226C (CmpCopyCell.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rsi
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  ULONG_PTR v12; // rdx
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 0xCuLL, 0x77554D43u);
  v6 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *(_QWORD *)TransientPoolWithTag = 0LL;
  TransientPoolWithTag[2] = 0;
  *TransientPoolWithTag = 1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(
         v4,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
         &v14);
  v9 = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_12;
  }
  v6[1] = 0;
  v6[2] = -1;
  v10 = *(_DWORD *)(v8 + 36);
  if ( !v10 )
    goto LABEL_10;
  v6[1] = v10;
  v11 = CmpCopyCell(v4, *(unsigned int *)(v9 + 40), v4, *(_DWORD *)(v9 + 40) >> 31);
  v6[2] = v11;
  if ( v11 != -1 )
  {
    if ( !HvpMarkCellDirty(v4, *(unsigned int *)(v9 + 40), 0) )
    {
      v7 = -1073741443;
      goto LABEL_11;
    }
LABEL_10:
    v7 = 0;
    *a2 = v6;
    v6 = 0LL;
    goto LABEL_11;
  }
  v7 = -1073741670;
LABEL_11:
  (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v14);
LABEL_12:
  if ( v6 )
  {
    v12 = (unsigned int)v6[2];
    if ( (_DWORD)v12 != -1 )
      HvFreeCell(v4, v12);
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
  }
  return v7;
}
