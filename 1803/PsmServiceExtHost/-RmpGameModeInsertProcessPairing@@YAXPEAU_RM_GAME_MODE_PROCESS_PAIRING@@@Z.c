/*
 * XREFs of ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x18005779C
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180057E90 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     ?RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180057324 (-RmpGameModeComparePairingByAuxiliaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?RmpGameModeComparePairingByPrimaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18005733C (-RmpGameModeComparePairingByPrimaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall RmpGameModeInsertProcessPairing(struct _RM_GAME_MODE_PROCESS_PAIRING *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  char v4; // bl
  __int64 v5; // r14
  __int64 v7; // rax
  void *v8; // r12
  unsigned __int64 v9; // rdi
  int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  struct _RTL_BALANCED_NODE **v14; // r14
  void *v15; // rbp
  unsigned __int64 v16; // rdi
  int v17; // esi
  unsigned __int64 v18; // rax

  v3 = *((_QWORD *)a1 + 6);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 7);
  v7 = *(_QWORD *)(v3 + 80);
  v8 = (void *)*(unsigned int *)(v5 + 108);
  v9 = *(_QWORD *)(v3 + 72);
  if ( (v7 & 1) != 0 )
  {
    if ( v9 )
      v9 ^= v3 + 72;
    else
      v9 = 0LL;
  }
  LOBYTE(a3) = 0;
  v10 = v7 & 1;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (int)RmpGameModeComparePairingByAuxiliaryId(v8, (struct _RTL_BALANCED_NODE *)v9) < 0 )
      {
        v11 = *(_QWORD *)v9;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_17;
          v11 ^= v9;
        }
        if ( !v11 )
        {
LABEL_17:
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_11;
          v11 ^= v9;
        }
        if ( !v11 )
        {
LABEL_11:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v9 = v11;
    }
  }
  RtlRbInsertNodeEx(v3 + 72, v9, a3, a1);
  v13 = *(_QWORD *)(v5 + 80);
  v14 = (struct _RTL_BALANCED_NODE **)(v5 + 72);
  v15 = (void *)*(unsigned int *)(v3 + 108);
  v16 = (unsigned __int64)*v14;
  if ( (v13 & 1) != 0 )
  {
    if ( v16 )
      v16 ^= (unsigned __int64)v14;
    else
      v16 = 0LL;
  }
  v17 = v13 & 1;
  if ( v16 )
  {
    while ( 1 )
    {
      if ( (int)RmpGameModeComparePairingByPrimaryId(v15, (struct _RTL_BALANCED_NODE *)v16) < 0 )
      {
        v18 = *(_QWORD *)v16;
        if ( v17 )
        {
          if ( !v18 )
            break;
          v18 ^= v16;
        }
        if ( !v18 )
          break;
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( v17 )
        {
          if ( !v18 )
            goto LABEL_28;
          v18 ^= v16;
        }
        if ( !v18 )
        {
LABEL_28:
          v4 = 1;
          break;
        }
      }
      v16 = v18;
    }
  }
  LOBYTE(v12) = v4;
  RtlRbInsertNodeEx(v14, v16, v12, (char *)a1 + 24);
}
