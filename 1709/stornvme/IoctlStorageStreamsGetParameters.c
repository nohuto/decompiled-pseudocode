/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C000C578
 * Callers:
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 * Callees:
 *     NVMeInitStreams @ 0x1C0006A78 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FAA0 (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x1C00138B0 (__security_check_cookie.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  char v3; // dl
  _DWORD *v5; // r13
  int v6; // r15d
  __int64 v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  unsigned int inited; // r14d
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r12d
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  unsigned __int16 v18; // cx
  __int64 v20; // [rsp+D8h] [rbp-70h]
  _BYTE v21[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v22; // [rsp+E2h] [rbp-66h]
  __int16 v23; // [rsp+F6h] [rbp-52h]
  __int16 v24; // [rsp+F8h] [rbp-50h]

  v20 = *(_QWORD *)(a1 + 1184);
  v3 = *(_BYTE *)(a2 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( v3 == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  if ( (unsigned int)v7 >= 0xFF || !*(_QWORD *)(a1 + 1184) )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_33;
  }
  if ( v3 == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v8 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v8 = (_DWORD *)(a2 + 16);
  }
  v9 = v5 + 7;
  if ( *v8 < 0x4Cu )
  {
    if ( *v8 >= 0x24u )
    {
      *v9 = 1;
      v5[8] = 48;
      inited = -1056964604;
      v6 = 8;
      *(_BYTE *)(a2 + 3) = 18;
      goto LABEL_34;
    }
    goto LABEL_11;
  }
  if ( *v9 != 1 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 6;
LABEL_33:
    inited = -1056964602;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 3240) & 7) == 3 && *(_BYTE *)(a1 + 3241) == (_BYTE)v7 && *(_WORD *)(a1 + 3244) )
  {
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 148) && (v11 = *(_QWORD *)(a1 + 8 * v7 + 1184)) != 0 )
      v12 = *(unsigned int *)(v11 + 16);
    else
      v12 = 0LL;
    inited = NVMeDirectiveStreamsReturnParameters(a1, v12, 32LL, v21);
    if ( inited )
    {
      *(_DWORD *)(a1 + 3246) = -1;
      inited = 0;
    }
    else
    {
      *(_WORD *)(a1 + 3246) = v24;
      *(_WORD *)(a1 + 3248) = v22 + v23;
    }
  }
  else
  {
    inited = NVMeInitStreams(a1, v7);
  }
  v13 = *(_DWORD *)(v20 + 52);
  if ( inited )
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v6 = 48;
    memset(v5 + 7, 0, 0x30uLL);
    *v9 = 1;
    v5[8] = 48;
    v5[9] = v13;
    v14 = v13 * *(_DWORD *)(a1 + 3252);
    v5[10] = v14;
    v5[11] = v14 * *(_DWORD *)(a1 + 3256);
    v15 = *(unsigned __int16 *)(a1 + 3244);
    v5[18] = v15;
    v5[13] = v15;
    v5[14] = v14;
    v5[12] = 1;
    v5[15] = *(unsigned __int16 *)(a1 + 3244);
    v16 = -1;
    v17 = *(unsigned __int16 *)(a1 + 3246);
    if ( (_WORD)v17 == 0xFFFF )
      v17 = -1;
    v5[17] = v17;
    v18 = *(_WORD *)(a1 + 3248);
    if ( v18 != 0xFFFF )
      v16 = v18;
    v5[16] = v16;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_34:
  if ( (unsigned int)v7 < 0xFF )
    StorPortExtendedFunction(60LL, a1, *(_QWORD *)(a1 + 8 * v7 + 1184), 3LL);
  v5[6] = v6;
  return inited;
}
