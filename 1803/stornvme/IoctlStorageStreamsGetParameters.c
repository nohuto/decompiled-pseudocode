/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C000C9A8
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeInitStreams @ 0x1C0006CF8 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  char v3; // dl
  _DWORD *v5; // r13
  int v6; // r15d
  __int64 v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // ecx
  _DWORD *v11; // rbx
  unsigned int inited; // ebp
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // ax
  int v16; // r12d
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned __int16 v21; // cx
  __int64 v23; // [rsp+D8h] [rbp-70h]
  _BYTE v24[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v25; // [rsp+E2h] [rbp-66h]
  __int16 v26; // [rsp+F6h] [rbp-52h]
  __int16 v27; // [rsp+F8h] [rbp-50h]

  v23 = *(_QWORD *)(a1 + 1224);
  v3 = *(_BYTE *)(a2 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( v3 == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  v8 = *(_DWORD *)(a1 + 156);
  if ( (unsigned int)v7 >= 0xFF || !*(_QWORD *)(a1 + 1224) )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_34;
  }
  if ( v3 == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v9 = 60LL;
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v9 = 16LL;
  }
  v10 = *(_DWORD *)(a2 + v9);
  v11 = v5 + 7;
  if ( v10 < 0x4C )
  {
    if ( v10 >= 0x24 )
    {
      *v11 = 1;
      v5[8] = 48;
      inited = -1056964604;
      v6 = 8;
      *(_BYTE *)(a2 + 3) = 18;
      goto LABEL_35;
    }
    goto LABEL_11;
  }
  if ( *v11 != 1 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 6;
LABEL_34:
    inited = -1056964602;
    goto LABEL_35;
  }
  if ( (*(_BYTE *)(a1 + 3288) & 7) == 3 && *(_BYTE *)(a1 + 3289) == (_BYTE)v7 && *(_WORD *)(a1 + 3292) )
  {
    if ( (unsigned int)v7 < v8 && (v13 = *(_QWORD *)(a1 + 8 * v7 + 1224)) != 0 )
      v14 = *(unsigned int *)(v13 + 16);
    else
      v14 = 0LL;
    inited = NVMeDirectiveStreamsReturnParameters(a1, v14, 32LL, v24);
    if ( inited )
    {
      inited = 0;
      *(_WORD *)(a1 + 3294) = -1;
      v15 = -1;
    }
    else
    {
      v15 = v25 + v26;
      *(_WORD *)(a1 + 3294) = v27;
    }
    *(_WORD *)(a1 + 3296) = v15;
  }
  else
  {
    inited = NVMeInitStreams(a1, v7);
  }
  v16 = *(_DWORD *)(v23 + 52);
  if ( inited )
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v6 = 48;
    memset(v5 + 7, 0, 0x30uLL);
    *v11 = 1;
    v5[8] = 48;
    v5[9] = v16;
    v17 = v16 * *(_DWORD *)(a1 + 3300);
    v5[10] = v17;
    v5[11] = v17 * *(_DWORD *)(a1 + 3304);
    v18 = *(unsigned __int16 *)(a1 + 3292);
    v5[18] = v18;
    v5[13] = v18;
    v5[14] = v17;
    v5[12] = 1;
    v5[15] = *(unsigned __int16 *)(a1 + 3292);
    v19 = -1;
    v20 = *(unsigned __int16 *)(a1 + 3294);
    if ( (_WORD)v20 == 0xFFFF )
      v20 = -1;
    v5[17] = v20;
    v21 = *(_WORD *)(a1 + 3296);
    if ( v21 != 0xFFFF )
      v19 = v21;
    v5[16] = v19;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_35:
  if ( (unsigned int)v7 < 0xFF )
    StorPortExtendedFunction(60LL, a1, *(_QWORD *)(a1 + 8 * v7 + 1224), 3LL);
  v5[6] = v6;
  return inited;
}
