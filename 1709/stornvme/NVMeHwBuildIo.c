/*
 * XREFs of NVMeHwBuildIo @ 0x1C00021D0
 * Callers:
 *     <none>
 * Callees:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000D250 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  _DWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  _DWORD *v21; // r14
  __int64 v22; // r8
  _DWORD *v23; // rax
  __int64 v24; // rsi
  _DWORD *v25; // rax
  bool v26; // zf

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  memset((void *)(v4 + 4096), 0, 0x98uLL);
  v8 = *(_BYTE *)(a2 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(a2 + 20);
  else
    v9 = v8;
  if ( !v9 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      ScsiToNVMe(a1, a2);
      goto LABEL_60;
    }
LABEL_58:
    LOBYTE(v7) = 32;
    LOBYTE(v5) = 8;
    NVMeSetSenseData(a2, v5, v6, v7);
    goto LABEL_60;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      IoctlToNVMe(a1, a2);
      goto LABEL_60;
    }
    goto LABEL_58;
  }
  v11 = v10 - 6;
  if ( !v11 )
  {
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_60;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      ProtocolCommandToNVMe(a1, a2);
      goto LABEL_60;
    }
    goto LABEL_58;
  }
  v13 = v12 - 27;
  if ( v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        if ( v8 == 40 )
        {
          v22 = *(_QWORD *)(a2 + 64);
          v23 = (_DWORD *)(a2 + 60);
        }
        else
        {
          v22 = *(_QWORD *)(a2 + 24);
          v23 = (_DWORD *)(a2 + 16);
        }
        if ( v22 && *v23 >= 0x48u )
        {
          v19 = *(_QWORD *)(v22 + 64);
          goto LABEL_25;
        }
        goto LABEL_48;
      }
      v16 = v15 - 3;
      if ( v16 )
      {
        if ( v16 != 1 )
          goto LABEL_60;
        if ( v8 == 40 )
        {
          v17 = *(_QWORD *)(a2 + 64);
          v18 = (_DWORD *)(a2 + 60);
        }
        else
        {
          v17 = *(_QWORD *)(a2 + 24);
          v18 = (_DWORD *)(a2 + 16);
        }
        if ( v17 && *v18 >= 0x18u && *(_DWORD *)(v17 + 8) == 1179468873 )
        {
          v19 = *(_QWORD *)(v17 + 16);
LABEL_25:
          *(_BYTE *)(a2 + 3) = (unsigned int)StorPortExtendedFunction(1LL, a1, v19, v7) != 0 ? 4 : 1;
          goto LABEL_60;
        }
        goto LABEL_48;
      }
      if ( v8 == 40 )
      {
        v20 = *(_QWORD *)(a2 + 64);
        v21 = (_DWORD *)(a2 + 60);
      }
      else
      {
        v20 = *(_QWORD *)(a2 + 24);
        v21 = (_DWORD *)(a2 + 16);
      }
      if ( v20 && *v21 >= 0x20u && *(_DWORD *)(v20 + 8) == 1196246089 )
      {
        StorPortExtendedFunction(0LL, a1, 96LL, 1701672526LL);
LABEL_33:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_60;
      }
    }
    else
    {
      if ( v8 == 40 )
      {
        v24 = *(_QWORD *)(a2 + 64);
        v25 = (_DWORD *)(a2 + 60);
      }
      else
      {
        v24 = *(_QWORD *)(a2 + 24);
        v25 = (_DWORD *)(a2 + 16);
      }
      if ( v24 && *v25 >= 0x48u )
      {
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 96LL, 1701672526LL) )
          v7 = 0LL;
        goto LABEL_33;
      }
    }
LABEL_48:
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_60;
  }
  if ( v8 == 40 )
    v26 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
  else
    v26 = *(_BYTE *)(a2 + 4) == 1;
  *(_BYTE *)(a2 + 3) = v26 ? 1 : 6;
LABEL_60:
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
  StorPortNotification(0LL, a1, a2, v7);
  return 0;
}
