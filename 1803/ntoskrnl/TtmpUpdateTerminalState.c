/*
 * XREFs of TtmpUpdateTerminalState @ 0x14077273C
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140771D94 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x140772424 (TtmpResetEvaluationTimer.c)
 *     TtmpTsmIterate @ 0x140772658 (TtmpTsmIterate.c)
 *     TtmiLogTerminalStateMachine @ 0x1407781B4 (TtmiLogTerminalStateMachine.c)
 */

char __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, char *a3, char *a4)
{
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // edx
  BOOL v13; // ecx
  char v14; // al
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  char v18; // al
  int v19; // ecx
  int v21; // [rsp+20h] [rbp-60h] BYREF
  char v22; // [rsp+24h] [rbp-5Ch]
  int v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  int v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h]
  char v31; // [rsp+68h] [rbp-18h]
  bool v32; // [rsp+69h] [rbp-17h]
  int v33; // [rsp+6Ch] [rbp-14h]
  int v34; // [rsp+70h] [rbp-10h]

  v26 = *(_DWORD *)(a2 + 36);
  v27 = *(_QWORD *)(a2 + 72);
  v7 = *(_DWORD *)(a1 + 20) == 0;
  v28 = MEMORY[0xFFFFF78000000008];
  v29 = *(_QWORD *)(a2 + 56);
  v30 = *(_QWORD *)(a2 + 64);
  v8 = *(_DWORD *)(a2 + 32);
  if ( !v7 || (v31 = 0, (v8 & 8) != 0) )
    v31 = 1;
  v32 = (v8 & 0x60) != 0;
  *(_DWORD *)(a2 + 32) = v8 & 0xFFFFFF9F;
  v9 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 0;
  v33 = v9;
  v10 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a2 + 52) = 0;
  v34 = v10;
  TtmpTsmIterate((__int64)&v26, (__int64)&v21);
  TtmiLogTerminalStateMachine(*(unsigned int *)(a2 + 28), &v26, &v21);
  v7 = v22 == 0;
  v11 = v21;
  *(_QWORD *)(a2 + 72) = v24;
  *(_DWORD *)(a2 + 36) = v11;
  if ( v7 || (v12 = *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40) = v23, v13 = v11 != 1, ((v12 >> 4) & 1) == v13) )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    *(_DWORD *)(a2 + 32) = v12 & 0xFFFFFFEF | (16 * v13);
  }
  *a3 = v14;
  v15 = *(_DWORD *)(a2 + 40);
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
    v16 = 0;
  else
    v16 = *(_DWORD *)(a2 + 36);
  v17 = *(_DWORD *)(a2 + 268);
  if ( v17 == v16 )
  {
    v18 = 0;
  }
  else
  {
    if ( !v17 || !v16 )
      v15 = 22;
    *(_DWORD *)(a2 + 272) = v15;
    *(_DWORD *)(a2 + 268) = v16;
    v18 = 1;
  }
  v19 = *(_DWORD *)(a2 + 268);
  *a4 = v18;
  if ( v19 )
  {
    if ( v19 == 1 )
      *(_DWORD *)(a2 + 44) = 2;
    else
      *(_DWORD *)(a2 + 44) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 44) = 1;
  }
  return TtmpResetEvaluationTimer((char *)a2, v25);
}
