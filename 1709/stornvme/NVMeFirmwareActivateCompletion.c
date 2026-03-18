/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C000AF30
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerAsyncReset @ 0x1C00057B0 (NVMeControllerAsyncReset.c)
 */

char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // dl
  __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // r14
  __int64 v9; // rsi
  unsigned __int16 v10; // cx
  char v11; // dl
  int v12; // eax

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  v7 = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - v7 + 4096;
  v8 = 1;
  if ( v4 == 40 )
    v9 = *(_QWORD *)(a2 + 64);
  else
    v9 = *(_QWORD *)(a2 + 24);
  if ( !a3 )
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(a2 + 3) = 4;
    *(_BYTE *)(v6 + 4245) |= 8u;
    goto LABEL_28;
  }
  v10 = *(_WORD *)(a3 + 14);
  if ( ((v10 >> 9) & 7) == 0 )
  {
    if ( (v10 & 0x1FE) == 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      v11 = 0;
      goto LABEL_14;
    }
    goto LABEL_25;
  }
  if ( ((v10 >> 9) & 7) != 1 )
  {
LABEL_25:
    *(_DWORD *)(v9 + 20) = 16;
    goto LABEL_26;
  }
  v12 = (unsigned __int8)(v10 >> 1);
  switch ( v12 )
  {
    case 6:
      *(_DWORD *)(v9 + 20) = 6;
      goto LABEL_26;
    case 7:
      *(_DWORD *)(v9 + 20) = 7;
LABEL_26:
      *(_BYTE *)(a2 + 3) = 4;
      goto LABEL_27;
    case 11:
      goto LABEL_22;
  }
  if ( (unsigned int)(v12 - 16) > 1 )
    goto LABEL_25;
  *(_DWORD *)(a1 + 20) |= 0x20u;
  v11 = (v10 & 0x1FE) == 32;
LABEL_14:
  if ( !NVMeControllerAsyncReset(a1, v11, (__int64)NVMeFirmwareActivateCompletionAfterReset, a2) )
  {
LABEL_22:
    *(_DWORD *)(v9 + 20) = 32;
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_27;
  }
  v8 = 0;
LABEL_27:
  LOBYTE(v7) = (8 * v8) | *(_BYTE *)(v6 + 4245) & 0xF7;
  *(_BYTE *)(v6 + 4245) = v7;
LABEL_28:
  if ( *(_BYTE *)(a2 + 3) != 1 )
    LOBYTE(v7) = StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
  return v7;
}
