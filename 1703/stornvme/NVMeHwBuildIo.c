/*
 * XREFs of NVMeHwBuildIo @ 0x1C0002130
 * Callers:
 *     <none>
 * Callees:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000C478 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000CAE0 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     memset @ 0x1C0012380 (memset.c)
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
  __int64 v15; // r8
  _DWORD *v16; // rax
  __int64 v17; // rsi
  _DWORD *v18; // rax
  bool v19; // zf

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
      goto LABEL_43;
    }
LABEL_41:
    LOBYTE(v7) = 32;
    LOBYTE(v5) = 8;
    NVMeSetSenseData(a2, v5, v6, v7);
    goto LABEL_43;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      IoctlToNVMe(a1, a2);
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  v11 = v10 - 6;
  if ( !v11 )
  {
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_43;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      ProtocolCommandToNVMe(a1, a2);
      goto LABEL_43;
    }
    goto LABEL_41;
  }
  v13 = v12 - 27;
  if ( v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      if ( v14 != 1 )
        goto LABEL_43;
      if ( v8 == 40 )
      {
        v15 = *(_QWORD *)(a2 + 64);
        v16 = (_DWORD *)(a2 + 60);
      }
      else
      {
        v15 = *(_QWORD *)(a2 + 24);
        v16 = (_DWORD *)(a2 + 16);
      }
      if ( v15 && *v16 >= 0x48u )
      {
        *(_BYTE *)(a2 + 3) = (unsigned int)StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v15 + 64), v7) != 0 ? 4 : 1;
        goto LABEL_43;
      }
      goto LABEL_31;
    }
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
    if ( !v17 || *v18 < 0x48u )
    {
LABEL_31:
      *(_BYTE *)(a2 + 3) = 6;
      goto LABEL_43;
    }
    if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 96LL, 1701672526LL) )
      v7 = 0LL;
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    if ( v8 == 40 )
      v19 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
    else
      v19 = *(_BYTE *)(a2 + 4) == 1;
    *(_BYTE *)(a2 + 3) = v19 ? 1 : 6;
  }
LABEL_43:
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
  StorPortNotification(0LL, a1, a2, v7);
  return 0;
}
