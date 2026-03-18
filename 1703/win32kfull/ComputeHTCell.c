/*
 * XREFs of ComputeHTCell @ 0x1C00EDB60
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00ED180 (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     ComputeChecksum @ 0x1C0034108 (ComputeChecksum.c)
 *     GenerateWORDPat @ 0x1C00EDCB0 (GenerateWORDPat.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall ComputeHTCell(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // r10d
  __int64 v8; // rax
  char *v9; // rdi
  int v10; // r13d
  unsigned __int16 v11; // r9
  char *v12; // r15
  char *v13; // r14
  ULONG v14; // r13d
  __int128 v15; // xmm0
  __int64 result; // rax
  __int64 v17; // xmm1_8
  unsigned __int16 v18; // ax
  char *v19; // r10
  unsigned int v20; // ebx
  unsigned int v21; // r11d
  unsigned int v22; // eax
  char *v23; // r10
  unsigned int v24; // eax
  int v25; // r11d
  unsigned int v26; // eax
  PVOID v27; // rax
  void *v28; // rbx
  int v29; // [rsp+40h] [rbp-30h]
  _QWORD v30[5]; // [rsp+48h] [rbp-28h] BYREF
  int v31; // [rsp+B0h] [rbp+40h] BYREF
  int v32; // [rsp+C8h] [rbp+58h]

  LOWORD(v31) = a1;
  v6 = 0;
  memset(v30, 0, 0x20uLL);
  if ( a1 > 0x12u )
    return 4294967282LL;
  BYTE1(v30[1]) = a1;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 184) & 0xFFFFFF8F;
  if ( a1 != 18 )
  {
    v7 = ComputeChecksum((char *)&v31, 0x48545343u, 2u);
    LOBYTE(v30[1]) = 1;
    v8 = a1 >> 1;
    LODWORD(v9) = v30[0];
    v8 *= 2LL;
    LOWORD(v10) = DefStdHTPat[8 * v8];
    v11 = DefStdHTPat[8 * v8 + 1];
    WORD2(v30[1]) = v10;
    LODWORD(v12) = v30[1];
    WORD1(v30[2]) = v11;
    LODWORD(v13) = v30[2];
    goto LABEL_6;
  }
  if ( !a2 || *(_WORD *)a2 != 32 )
    return 4294967281LL;
  v18 = *(_WORD *)(a2 + 6);
  v9 = *(char **)(a2 + 8);
  v10 = *(unsigned __int16 *)(a2 + 4);
  v19 = v9;
  v12 = *(char **)(a2 + 16);
  v13 = *(char **)(a2 + 24);
  v20 = v10 * v18;
  WORD2(v30[1]) = v10;
  LOWORD(v32) = v18;
  WORD1(v30[2]) = v18;
  if ( !v9 )
  {
    v19 = v12;
    if ( v12 )
      goto LABEL_23;
    v19 = v13;
    if ( v13 )
      goto LABEL_23;
    return 4294967281LL;
  }
  if ( v12 && v13 )
  {
    if ( v9 == v12 && v9 == v13 )
      v21 = 1433629234;
    else
      v21 = 1433629235;
    goto LABEL_24;
  }
LABEL_23:
  v13 = v19;
  v12 = v19;
  LODWORD(v9) = (_DWORD)v19;
  v21 = 1433629233;
LABEL_24:
  v22 = ComputeChecksum((char *)&v31, v21, 2u);
  v24 = ComputeChecksum(v23, v22, v20);
  v7 = v24;
  if ( v25 == 1433629235 )
  {
    v26 = ComputeChecksum(v12, v24, v20);
    v7 = ComputeChecksum(v13, v26, v20);
  }
  v11 = v32;
LABEL_6:
  v29 = (unsigned __int16)v10;
  v31 = v11;
  HIWORD(v30[1]) = v10 * (7u / (unsigned __int16)v10 + 1);
  v32 = (unsigned __int16)(HIWORD(v30[1]) + 7);
  LOWORD(v30[2]) = HIWORD(v30[1]) + 7;
  v14 = 6 * v11 * v32;
  HIDWORD(v30[2]) = v14;
  if ( !a3 )
    return ComputeChecksum((char *)v30, v7, 0x20u);
  if ( (v30[1] & 1) != 0 )
  {
    v30[3] = 0LL;
LABEL_9:
    v15 = *(_OWORD *)&v30[1];
    result = v14;
    *(_DWORD *)(a3 + 184) = v6;
    v17 = v30[3];
    *(_OWORD *)(a3 + 160) = v15;
    *(_QWORD *)(a3 + 176) = v17;
    return result;
  }
  v27 = EngAllocMem(0, v14, 0x33345448u);
  v30[3] = v27;
  v28 = v27;
  if ( v27 )
  {
    if ( (unsigned int)GenerateWORDPat((_DWORD)v9, (_DWORD)v12, (_DWORD)v13, (_DWORD)v27, v29, v32, v31) )
      goto LABEL_9;
    EngFreeMem(v28);
  }
  return 4294967294LL;
}
