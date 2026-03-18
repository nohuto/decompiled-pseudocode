/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C000BE0C
 * Callers:
 *     IoctlToNVMe @ 0x1C000C478 (IoctlToNVMe.c)
 * Callees:
 *     NVMeInitStreams @ 0x1C0006668 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v5; // dl
  _DWORD *v6; // r13
  int v7; // r15d
  __int64 v8; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  unsigned int inited; // r14d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r12d
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned __int16 v19; // cx
  _BYTE v21[2]; // [rsp+D8h] [rbp-60h] BYREF
  __int16 v22; // [rsp+DAh] [rbp-5Eh]
  __int16 v23; // [rsp+EEh] [rbp-4Ah]
  __int16 v24; // [rsp+F0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 1184);
  v5 = *(_BYTE *)(a2 + 2);
  v6 = 0LL;
  v7 = 0;
  if ( v5 == 40 )
    v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(unsigned __int8 *)(a2 + 7);
  if ( (unsigned int)v8 >= 0xFF || !v2 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_34;
  }
  if ( v5 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v9 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v9 = (_DWORD *)(a2 + 16);
  }
  v10 = v6 + 7;
  if ( *v9 < 0x4Cu )
  {
    if ( *v9 >= 0x24u )
    {
      *v10 = 1;
      v6[8] = 48;
      inited = -1056964604;
      v7 = 8;
      *(_BYTE *)(a2 + 3) = 18;
      goto LABEL_35;
    }
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_34;
  }
  if ( *v10 != 1 )
  {
    *(_BYTE *)(a2 + 3) = 6;
LABEL_34:
    inited = -1056964602;
    goto LABEL_35;
  }
  if ( (*(_BYTE *)(a1 + 3240) & 7) == 3 && *(_BYTE *)(a1 + 3241) == (_BYTE)v8 && *(_WORD *)(a1 + 3244) )
  {
    if ( (unsigned int)v8 < *(_DWORD *)(a1 + 148) && (v12 = *(_QWORD *)(a1 + 8 * v8 + 1184)) != 0 )
      v13 = *(unsigned int *)(v12 + 16);
    else
      v13 = 0LL;
    inited = NVMeDirectiveStreamsReturnParameters(a1, v13, 32LL, v21);
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
    inited = NVMeInitStreams(a1, v8);
  }
  v14 = *(_DWORD *)(v2 + 52);
  if ( inited )
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v7 = 48;
    memset(v6 + 7, 0, 0x30uLL);
    *v10 = 1;
    v6[8] = 48;
    v6[9] = v14;
    v15 = v14 * *(_DWORD *)(a1 + 3252);
    v6[10] = v15;
    v6[11] = v15 * *(_DWORD *)(a1 + 3256);
    v16 = *(unsigned __int16 *)(a1 + 3244);
    v6[18] = v16;
    v6[13] = v16;
    v6[14] = v15;
    v6[12] = 1;
    v6[15] = *(unsigned __int16 *)(a1 + 3244);
    v17 = -1;
    v18 = *(unsigned __int16 *)(a1 + 3246);
    if ( (_WORD)v18 == 0xFFFF )
      v18 = -1;
    v6[17] = v18;
    v19 = *(_WORD *)(a1 + 3248);
    if ( v19 != 0xFFFF )
      v17 = v19;
    v6[16] = v17;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_35:
  if ( (unsigned int)v8 < 0xFF )
    StorPortExtendedFunction(60LL, a1, *(_QWORD *)(a1 + 8 * v8 + 1184), 3LL);
  v6[6] = v7;
  return inited;
}
