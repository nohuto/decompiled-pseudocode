/*
 * XREFs of sub_18001F314 @ 0x18001F314
 * Callers:
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 * Callees:
 *     sub_18000A020 @ 0x18000A020 (sub_18000A020.c)
 *     sub_18000A1D0 @ 0x18000A1D0 (sub_18000A1D0.c)
 *     sub_18000A220 @ 0x18000A220 (sub_18000A220.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     sub_18001F10C @ 0x18001F10C (sub_18001F10C.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001F314(char *BaseAddress, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v5; // r15d
  _RTL_BALANCED_NODE **v6; // r12
  __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r14
  char v16; // cl
  unsigned int v17; // esi
  unsigned int v18; // edx
  _RTL_BALANCED_NODE *v20; // rsi
  int v21; // ebp
  __int64 v22; // r13
  _RTL_BALANCED_NODE *v23; // rax
  _BYTE *v24; // rax
  PVOID v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int16 v28; // [rsp+60h] [rbp+8h]
  int v30; // [rsp+70h] [rbp+18h]

  v30 = a3;
  v3 = a2;
  LOBYTE(v28) = ~(_BYTE)a2;
  HIBYTE(v28) = a2;
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
  v6 = (_RTL_BALANCED_NODE **)(BaseAddress + 120);
  v7 = *((_QWORD *)BaseAddress + 15);
  v8 = BaseAddress[128] & 1;
  v9 = 0LL;
  while ( v7 )
  {
    v10 = sub_18001F54C(v28, v7, a3);
    if ( !v10 )
      goto LABEL_12;
    if ( v10 >= 0 )
    {
      v11 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v7;
      v9 = v7;
    }
    if ( v8 && v11 )
      v7 ^= v11;
    else
      v7 = v11;
  }
  v7 = v9;
LABEL_12:
  if ( v7 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(BaseAddress + 120), (PRTL_BALANCED_NODE)v7);
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    v12 = ~*(_BYTE *)(v7 + 26);
    *(_DWORD *)v7 = -857879331;
    *((_QWORD *)BaseAddress + 3) -= v12;
  }
  else
  {
    if ( !v5 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
    v25 = sub_18000A020((volatile signed __int64 *)BaseAddress, 0);
    v26 = (unsigned __int64)v25;
    if ( !v25 )
      return 0LL;
    sub_18000A1D0((__int64)v25, 0);
    v7 = v27 + 64;
    if ( !v5 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
    sub_18000A220((__int64)BaseAddress, v26);
  }
  v13 = sub_18001F10C(v7, v3);
  v15 = v13;
  if ( !v13 )
    goto LABEL_15;
  LOBYTE(v14) = 0;
  v20 = *v6;
  v21 = BaseAddress[128] & 1;
  v22 = *(unsigned __int16 *)(v13 + 26);
  if ( !*v6 )
    goto LABEL_26;
  while ( 1 )
  {
    if ( (int)sub_18001F54C(v22, v20, v14) < 0 )
    {
      v23 = v20->Children[0];
      if ( v21 )
      {
        if ( !v23 )
        {
LABEL_25:
          LOBYTE(v14) = 0;
          goto LABEL_26;
        }
        v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v20 ^ (unsigned __int64)v23);
      }
      if ( !v23 )
        goto LABEL_25;
      goto LABEL_29;
    }
    v23 = v20->Children[1];
    if ( v21 )
      break;
LABEL_28:
    if ( !v23 )
      goto LABEL_33;
LABEL_29:
    v20 = v23;
  }
  if ( v23 )
  {
    v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v20 ^ (unsigned __int64)v23);
    goto LABEL_28;
  }
LABEL_33:
  LOBYTE(v14) = 1;
LABEL_26:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(BaseAddress + 120), v20, v14, (PRTL_BALANCED_NODE)v15);
  v3 = a2;
  *((_QWORD *)BaseAddress + 3) += (unsigned __int8)~*(_BYTE *)(v15 + 26);
LABEL_15:
  if ( (v30 & 0x4000000) != 0 )
  {
    v16 = 5;
  }
  else
  {
    v16 = 4;
    if ( (v30 & 0x8000000) != 0 )
      v16 = 36;
  }
  v17 = v3 - 1;
  *(_BYTE *)(v7 + 24) |= v16;
  *(_BYTE *)(32LL * (v3 - 1) + v7 + 24) |= 4u;
  if ( !v5 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
  v18 = 1;
  if ( v17 > 1 )
  {
    v24 = (_BYTE *)(v7 + 56);
    do
    {
      v24[3] = v18++;
      *v24 |= 4u;
      v24 += 32;
    }
    while ( v18 < v17 );
  }
  return v7;
}
