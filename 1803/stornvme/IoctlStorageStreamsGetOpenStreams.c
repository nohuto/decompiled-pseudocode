/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x1C000CE78
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0010328 (NVMeDirectiveStreamsGetStatus.c)
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edi
  _DWORD *v6; // rsi
  __int64 v7; // r15
  unsigned int v8; // ecx
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  unsigned int v11; // r14d
  int v12; // edx
  unsigned __int64 v13; // rax
  unsigned int Status; // eax
  int v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int16 v19; // [rsp+58h] [rbp-40h]

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 0;
  if ( v2 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( *(_DWORD *)(v7 + a2) >= 0x24u )
  {
    if ( v2 == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(_BYTE *)(a2 + 7);
    if ( v9 != 255 )
    {
      if ( (*(_BYTE *)(a1 + 3288) & 3) != 3 || *(unsigned __int8 *)(a1 + 3289) != v9 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        v8 = -1056964601;
        goto LABEL_32;
      }
      if ( (unsigned int)v9 < *(_DWORD *)(a1 + 156) && (v10 = *(_QWORD *)(a1 + 8LL * v9 + 1224)) != 0 )
        v11 = *(_DWORD *)(v10 + 16);
      else
        v11 = 0;
      v8 = NVMeDirectiveStreamsReturnParameters(a1, v11, 32LL, v18);
      if ( !v8 )
      {
        v12 = v19;
        v13 = *(unsigned int *)(v7 + a2);
        v16 = v19;
        if ( v13 < (unsigned __int64)(4 * (unsigned int)v19 + 12) + 28 )
        {
          v6[8] = 4 * v19 + 12;
          v3 = 8;
          v6[7] = 1;
          v8 = -1056964604;
          *(_BYTE *)(a2 + 3) = 18;
          goto LABEL_32;
        }
        if ( v6[7] != 1 )
        {
          *(_BYTE *)(a2 + 3) = 6;
          goto LABEL_6;
        }
        if ( v19 )
        {
          v17 = 0LL;
          Status = NVMeDirectiveStreamsGetStatus(a1, v11, v19, (unsigned int)&v16, (__int64)(v6 + 10), (__int64)&v17);
          v12 = v16;
          v8 = Status;
        }
        else
        {
          v8 = 0;
        }
        if ( !v8 )
        {
          v6[9] = v12;
          v3 = 4 * v12 + 12;
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_32;
        }
        if ( v8 == -1056964604 )
        {
          v6[7] = 1;
          v6[8] = 4 * v12 + 12;
          v3 = 8;
          *(_BYTE *)(a2 + 3) = 18;
          goto LABEL_32;
        }
      }
      *(_BYTE *)(a2 + 3) = 4;
      goto LABEL_32;
    }
    *(_BYTE *)(a2 + 3) = 32;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
  }
LABEL_6:
  v8 = -1056964602;
LABEL_32:
  v6[6] = v3;
  return v8;
}
