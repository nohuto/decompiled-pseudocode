/*
 * XREFs of PspCaptureUserProcessParameters @ 0x140538864
 * Callers:
 *     PspCaptureProcessParameters @ 0x140538FA8 (PspCaptureProcessParameters.c)
 *     PsCaptureUserProcessParameters @ 0x14059CC00 (PsCaptureUserProcessParameters.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspCopyUnicodeString @ 0x140538D7C (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x140538DF0 (PspCaptureAndValidateUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x140538E70 (PspValidateEnvironmentBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  _OWORD *v5; // rsi
  unsigned int v6; // r12d
  char *v7; // r13
  size_t v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // r15
  SIZE_T v11; // rdx
  signed int v12; // r14d
  _OWORD *PoolWithQuotaTag; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  const void *v16; // rdx
  char *v17; // rsi
  unsigned __int16 *ServerSiloGlobals; // rax
  char *v19; // r8
  size_t v20; // r15
  void *v21; // [rsp+20h] [rbp-E8h] BYREF
  void *Src[2]; // [rsp+28h] [rbp-E0h]
  unsigned int v23; // [rsp+38h] [rbp-D0h]
  size_t Size; // [rsp+40h] [rbp-C8h] BYREF
  char *v25; // [rsp+48h] [rbp-C0h]
  _OWORD *v26; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v27; // [rsp+58h] [rbp-B0h]
  __int128 v28; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v29[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v30; // [rsp+72h] [rbp-96h]
  _BYTE v31[2]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 v32; // [rsp+82h] [rbp-86h]
  _BYTE v33[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 v34; // [rsp+92h] [rbp-76h]
  _BYTE v35[2]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 v36; // [rsp+A2h] [rbp-66h]
  _BYTE v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int16 v38; // [rsp+B2h] [rbp-56h]
  _BYTE v39[2]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int16 v40; // [rsp+C2h] [rbp-46h]

  v5 = (_OWORD *)a2;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v23 = v6;
  if ( ((v6 ^ 1) & 0xFF010E11) != 0 )
    return 3221225485LL;
  if ( ((unsigned __int8)v6 & (unsigned __int8)((v6 & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v7 = *(char **)(a2 + 128);
  v25 = v7;
  v8 = *(_QWORD *)(a2 + 1008);
  Size = v8;
  if ( !v8 || (v8 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v7[v8] > 0x7FFFFFFF0000LL || &v7[v8] < v7 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a3 & 1) != 0 )
  {
    ServerSiloGlobals = (unsigned __int16 *)PsGetServerSiloGlobals(a4);
    v28 = *((_OWORD *)ServerSiloGlobals + 62);
    *(_OWORD *)Src = PspProtectedRuntimeData;
    if ( (a3 & 2) == 0 )
    {
      v7 = (char *)*((_QWORD *)ServerSiloGlobals + 127);
      v25 = v7;
      Size = ServerSiloGlobals[505];
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v28);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v28 >= 0x208u )
      return 3221225485LL;
    WORD1(v28) = 520;
    *(_OWORD *)Src = v5[14];
    if ( Src[1] )
    {
      WORD1(Src[0]) = Src[0];
      if ( LOWORD(Src[0]) )
      {
        v19 = (char *)Src[1] + LOWORD(Src[0]);
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(Src[0]) )
        return 3221225485LL;
      LODWORD(Src[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v5 + 5, v29);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v5 + 6, v31);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v5 + 7, v33);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v5 + 11, v35);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v5 + 12, v37);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v5 + 13, v39);
  if ( (int)result < 0 )
    return result;
  v10 = (WORD1(Src[0]) + v30 + v32 + v34 + v36 + v38 + (unsigned __int64)v40 + WORD1(v28) + 1041LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v27 = v10;
  v11 = -1LL;
  if ( v10 + Size >= v10 )
    v11 = v10 + Size;
  v12 = v10 + Size < v10 ? 0xC0000095 : 0;
  if ( v10 + Size < v10 )
    return 3221225485LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v11, 0x62507350u);
  v14 = PoolWithQuotaTag;
  v26 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v15 = 8LL;
  do
  {
    *PoolWithQuotaTag = *v5;
    PoolWithQuotaTag[1] = v5[1];
    PoolWithQuotaTag[2] = v5[2];
    PoolWithQuotaTag[3] = v5[3];
    PoolWithQuotaTag[4] = v5[4];
    PoolWithQuotaTag[5] = v5[5];
    PoolWithQuotaTag[6] = v5[6];
    PoolWithQuotaTag += 8;
    *(PoolWithQuotaTag - 1) = v5[7];
    v5 += 8;
    --v15;
  }
  while ( v15 );
  *PoolWithQuotaTag = *v5;
  if ( v12 < 0 )
    goto LABEL_62;
  v14[2] = v6;
  v14[1] = v10;
  *v14 = v10;
  v21 = v14 + 260;
  v12 = PspCopyUnicodeString(&v28, v14 + 14, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  v12 = PspCopyUnicodeString(v29, v14 + 20, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  v12 = PspCopyUnicodeString(v31, v14 + 24, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  v12 = PspCopyUnicodeString(v33, v14 + 28, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  v12 = PspCopyUnicodeString(v35, v14 + 44, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  v12 = PspCopyUnicodeString(v37, v14 + 48, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  v12 = PspCopyUnicodeString(v39, v14 + 52, &v21);
  if ( v12 < 0 )
    goto LABEL_62;
  *((_OWORD *)v14 + 14) = *(_OWORD *)Src;
  v16 = Src[1];
  v17 = (char *)v21;
  if ( Src[1] )
  {
    *((_QWORD *)v14 + 29) = v21;
    memmove(v17, v16, LOWORD(Src[0]));
    if ( v17 )
    {
      v17 += LOWORD(Src[0]);
      v21 = v17;
    }
    v20 = (char *)v14 - v17 + v10;
    if ( v20 )
    {
      memset(v17, 0, v20);
      if ( v17 )
      {
        v17 += v20;
        v21 = v17;
      }
    }
  }
  memmove(v17, v7, Size);
  if ( (a3 & 3) == 1 || (v12 = PspValidateEnvironmentBlock(v17, &Size), v12 >= 0) )
  {
    if ( (a3 & 1) != 0 )
    {
      *((_QWORD *)v14 + 2) = 0LL;
      *((_QWORD *)v14 + 4) = 0LL;
      *((_QWORD *)v14 + 5) = 0LL;
      *((_QWORD *)v14 + 6) = 0LL;
    }
    *((_QWORD *)v14 + 16) = v17;
    *((_QWORD *)v14 + 126) = Size;
    *((_QWORD *)v14 + 127) = 0LL;
    *a1 = v14;
    return 0LL;
  }
  else
  {
LABEL_62:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v12;
  }
}
