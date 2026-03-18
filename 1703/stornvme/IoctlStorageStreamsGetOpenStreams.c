/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x1C000C2BC
 * Callers:
 *     IoctlToNVMe @ 0x1C000C478 (IoctlToNVMe.c)
 * Callees:
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edi
  _DWORD *v6; // rsi
  _DWORD *v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // r15d
  int v12; // edx
  unsigned __int64 v13; // rax
  unsigned int Status; // eax
  int v16; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+50h] [rbp-38h]

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 0;
  if ( v2 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = (_DWORD *)(a2 + 16);
  }
  if ( *v7 >= 0x24u )
  {
    if ( v2 == 40 )
      v9 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(unsigned __int8 *)(a2 + 7);
    if ( (unsigned int)v9 < 0xFF )
    {
      if ( (*(_BYTE *)(a1 + 3240) & 3) != 3 || *(unsigned __int8 *)(a1 + 3241) != (_DWORD)v9 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        v8 = -1056964601;
        goto LABEL_32;
      }
      if ( (unsigned int)v9 < *(_DWORD *)(a1 + 148) && (v10 = *(_QWORD *)(a1 + 8 * v9 + 1184)) != 0 )
        v11 = *(_DWORD *)(v10 + 16);
      else
        v11 = 0;
      v8 = NVMeDirectiveStreamsReturnParameters(a1, v11, 32LL, v17);
      if ( !v8 )
      {
        v12 = v18;
        v13 = (unsigned int)*v7;
        v16 = v18;
        if ( v13 < (unsigned __int64)(4 * (unsigned int)v18 + 12) + 28 )
        {
          v6[8] = 4 * v18 + 12;
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
        if ( v18 )
        {
          Status = NVMeDirectiveStreamsGetStatus(a1, v11, v18, (unsigned int)&v16, (__int64)(v6 + 10));
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
