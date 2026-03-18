/*
 * XREFs of PspCopyAndFixupParameters @ 0x14045F34C
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 */

__int64 __fastcall PspCopyAndFixupParameters(ULONG_PTR a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // r14
  size_t v5; // r15
  char *v6; // rbx
  char PreviousMode; // r9
  int v8; // eax
  signed __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 result; // rax
  unsigned int *v20; // r8
  _QWORD *v21; // r15
  unsigned int v22; // r12d
  unsigned int *v23; // rsi
  __int64 v24; // rcx
  size_t v25; // [rsp+40h] [rbp-48h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A0h] [rbp+18h]

  BugCheckParameter1 = a1;
  v4 = *(unsigned int **)(a3 + 208);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v25 = v5;
  v6 = *(char **)(a3 + 216);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 && (*(_BYTE *)(a3 + 9) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 80) == 3 && (int)v4[4] > 0 )
  {
    v8 = ObDuplicateObject(a1, 0, 0, 6, PreviousMode);
    a1 = BugCheckParameter1;
    PreviousMode = v27;
    if ( v8 >= 0 )
      *((_QWORD *)v4 + 2) = v28;
  }
  if ( a2 )
  {
    v20 = v4 + 8;
    v21 = v4 + 8;
    v22 = 0;
    v23 = a2;
    while ( 1 )
    {
      if ( *(_QWORD *)v23 )
      {
        if ( (int)*(_QWORD *)v23 < 0 )
        {
          v24 = 0LL;
          v28 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, 0, 0, 6, PreviousMode);
          v24 = v28;
          v20 = v4 + 8;
        }
        if ( (int)result < 0 )
        {
          if ( a2 == v20 )
            return result;
        }
        else
        {
          *v21 = v24;
        }
      }
      ++v21;
      ++v22;
      v23 += 2;
      if ( v22 >= 3 )
        break;
      a1 = BugCheckParameter1;
      PreviousMode = v27;
    }
    v5 = v25;
  }
  v9 = v6 - (char *)v4;
  memmove(v6, v4, v5);
  v10 = *((_QWORD *)v6 + 8);
  if ( v10 )
    *((_QWORD *)v6 + 8) = v9 + v10;
  v11 = *((_QWORD *)v6 + 11);
  if ( v11 )
    *((_QWORD *)v6 + 11) = v9 + v11;
  v12 = *((_QWORD *)v6 + 13);
  if ( v12 )
    *((_QWORD *)v6 + 13) = v9 + v12;
  v13 = *((_QWORD *)v6 + 15);
  if ( v13 )
    *((_QWORD *)v6 + 15) = v9 + v13;
  v14 = *((_QWORD *)v6 + 23);
  if ( v14 )
    *((_QWORD *)v6 + 23) = v9 + v14;
  v15 = *((_QWORD *)v6 + 25);
  if ( v15 )
    *((_QWORD *)v6 + 25) = v9 + v15;
  v16 = *((_QWORD *)v6 + 27);
  if ( v16 )
    *((_QWORD *)v6 + 27) = v9 + v16;
  v17 = *((_QWORD *)v6 + 29);
  if ( v17 )
    *((_QWORD *)v6 + 29) = v9 + v17;
  v18 = *((_QWORD *)v6 + 16);
  if ( v18 )
    *((_QWORD *)v6 + 16) = v9 + v18;
  *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 32) = v6;
  return 0LL;
}
