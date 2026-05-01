/*
 * XREFs of ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180038050
 * Callers:
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18003858C (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpGameModeAcquireAndApplyRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  unsigned int i; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  unsigned int v11; // ebp
  void (__fastcall **v12)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  int v13; // edi
  int v14; // eax

  v2 = 0;
  v3 = off_180051330;
  for ( i = 0; i < 4; ++i )
  {
    v7 = 1 << i;
    if ( *((_BYTE *)v3 + 33) )
      goto LABEL_12;
    if ( !*v3 )
      goto LABEL_11;
    if ( *((_BYTE *)v3 + 32) )
    {
      v8 = v7 & *((_DWORD *)a1 + 32);
      v9 = v2 | v7;
      if ( !v8 )
        v9 = v2;
      v2 = v9;
    }
    else
    {
      v10 = (*v3)(a1, a2);
      if ( v10 >= 0 && v10 != 255 )
      {
        *((_DWORD *)a2 + 36) |= v7;
LABEL_11:
        v2 |= v7;
      }
    }
LABEL_12:
    v3 += 5;
  }
  v11 = 0;
  v12 = &off_180051348;
  do
  {
    v13 = 1 << v11;
    if ( ((1 << v11) & v2) == 0 )
      goto LABEL_20;
    v14 = ((__int64 (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *))*(v12 - 2))(
            a1,
            a2);
    if ( v14 != 255 )
    {
      if ( v14 >= 0 )
        goto LABEL_20;
      if ( (v13 & *((_DWORD *)a2 + 36)) != 0 )
      {
        (*v12)(a1, a2);
        *((_DWORD *)a2 + 36) &= ~v13;
      }
    }
    v2 &= ~v13;
LABEL_20:
    ++v11;
    v12 += 5;
  }
  while ( v11 < 4 );
  *((_DWORD *)a2 + 37) = v2;
}
