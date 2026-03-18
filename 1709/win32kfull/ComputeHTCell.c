/*
 * XREFs of ComputeHTCell @ 0x1C0106B84
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C01061A0 (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0079110 (ComputeChecksum.c)
 *     GenerateWORDPat @ 0x1C0106CD4 (GenerateWORDPat.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall ComputeHTCell(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // eax
  char *v8; // r14
  char *v9; // r15
  unsigned int v10; // r10d
  __int64 v11; // rax
  char *v12; // rdi
  int v13; // r13d
  unsigned __int16 v14; // r9
  ULONG v15; // r13d
  __int128 v16; // xmm0
  __int64 result; // rax
  __int64 v18; // xmm1_8
  unsigned __int16 v19; // ax
  char *v20; // r10
  unsigned int v21; // ebx
  unsigned int v22; // r11d
  unsigned int v23; // eax
  char *v24; // r10
  unsigned int v25; // eax
  int v26; // r11d
  unsigned int v27; // eax
  PVOID v28; // rax
  void *v29; // rbx
  int v30; // [rsp+40h] [rbp-30h]
  _QWORD v31[5]; // [rsp+48h] [rbp-28h] BYREF
  int v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+58h]

  LOWORD(v32) = a1;
  v6 = 0;
  memset(v31, 0, 0x20uLL);
  if ( a1 > 0x12u )
    return 4294967282LL;
  BYTE1(v31[1]) = a1;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 184) & 0xFFFFFF8F;
  if ( a1 != 18 )
  {
    v7 = ComputeChecksum((char *)&v32, 0x48545343u, 2u);
    LODWORD(v8) = v33;
    LODWORD(v9) = v33;
    v10 = v7;
    v11 = a1 >> 1;
    LODWORD(v12) = v33;
    v11 *= 2LL;
    LOBYTE(v31[1]) = 1;
    LOWORD(v13) = DefStdHTPat[8 * v11];
    v14 = DefStdHTPat[8 * v11 + 1];
    WORD2(v31[1]) = v13;
    WORD1(v31[2]) = v14;
    goto LABEL_6;
  }
  if ( !a2 || *(_WORD *)a2 != 32 )
    return 4294967281LL;
  v19 = *(_WORD *)(a2 + 6);
  v12 = *(char **)(a2 + 8);
  v13 = *(unsigned __int16 *)(a2 + 4);
  v20 = v12;
  v9 = *(char **)(a2 + 16);
  v8 = *(char **)(a2 + 24);
  v21 = v13 * v19;
  WORD2(v31[1]) = v13;
  LOWORD(v33) = v19;
  WORD1(v31[2]) = v19;
  if ( !v12 )
  {
    v20 = v9;
    if ( v9 )
      goto LABEL_23;
    v20 = v8;
    if ( v8 )
      goto LABEL_23;
    return 4294967281LL;
  }
  if ( v9 && v8 )
  {
    if ( v12 == v9 && v12 == v8 )
      v22 = 1433629234;
    else
      v22 = 1433629235;
    goto LABEL_24;
  }
LABEL_23:
  v8 = v20;
  v9 = v20;
  LODWORD(v12) = (_DWORD)v20;
  v22 = 1433629233;
LABEL_24:
  v23 = ComputeChecksum((char *)&v32, v22, 2u);
  v25 = ComputeChecksum(v24, v23, v21);
  v10 = v25;
  if ( v26 == 1433629235 )
  {
    v27 = ComputeChecksum(v9, v25, v21);
    v10 = ComputeChecksum(v8, v27, v21);
  }
  v14 = v33;
LABEL_6:
  v30 = (unsigned __int16)v13;
  v32 = v14;
  HIWORD(v31[1]) = v13 * (7u / (unsigned __int16)v13 + 1);
  LODWORD(v33) = (unsigned __int16)(HIWORD(v31[1]) + 7);
  LOWORD(v31[2]) = HIWORD(v31[1]) + 7;
  v15 = 6 * v14 * (_DWORD)v33;
  HIDWORD(v31[2]) = v15;
  if ( !a3 )
    return ComputeChecksum((char *)v31, v10, 0x20u);
  if ( (v31[1] & 1) != 0 )
  {
    v31[3] = 0LL;
LABEL_9:
    v16 = *(_OWORD *)&v31[1];
    result = v15;
    *(_DWORD *)(a3 + 184) = v6;
    v18 = v31[3];
    *(_OWORD *)(a3 + 160) = v16;
    *(_QWORD *)(a3 + 176) = v18;
    return result;
  }
  v28 = EngAllocMem(0, v15, 0x33345448u);
  v31[3] = v28;
  v29 = v28;
  if ( v28 )
  {
    if ( (unsigned int)GenerateWORDPat((_DWORD)v12, (_DWORD)v9, (_DWORD)v8, (_DWORD)v28, v30, v33, v32) )
      goto LABEL_9;
    EngFreeMem(v29);
  }
  return 4294967294LL;
}
