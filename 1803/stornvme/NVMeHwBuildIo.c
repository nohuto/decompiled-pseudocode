/*
 * XREFs of NVMeHwBuildIo @ 0x1C0002120
 * Callers:
 *     <none>
 * Callees:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000D704 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
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
  char v11; // si
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  bool v27; // zf

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  memset((void *)(v4 + 4096), 0, 0xA0uLL);
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
      goto LABEL_61;
    }
LABEL_59:
    LOBYTE(v7) = 32;
    LOBYTE(v5) = 8;
    NVMeSetSenseData(a2, v5, v6, v7);
    goto LABEL_61;
  }
  v10 = v9 - 2;
  if ( !v10 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      IoctlToNVMe(a1, a2);
      goto LABEL_61;
    }
    goto LABEL_59;
  }
  v11 = 6;
  v12 = v10 - 6;
  if ( !v12 )
  {
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_61;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      ProtocolCommandToNVMe(a1, a2);
      goto LABEL_61;
    }
    goto LABEL_59;
  }
  v14 = v13 - 27;
  if ( v14 )
  {
    v15 = v14 - 2;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( v8 == 40 )
        {
          v23 = *(_QWORD *)(a2 + 64);
          v24 = 60LL;
        }
        else
        {
          v23 = *(_QWORD *)(a2 + 24);
          v24 = 16LL;
        }
        if ( !v23 || *(_DWORD *)(a2 + v24) < 0x48u )
          goto LABEL_40;
        v20 = *(_QWORD *)(v23 + 64);
        goto LABEL_39;
      }
      v17 = v16 - 3;
      if ( v17 )
      {
        if ( v17 != 1 )
          goto LABEL_61;
        if ( v8 == 40 )
        {
          v18 = *(_QWORD *)(a2 + 64);
          v19 = 60LL;
        }
        else
        {
          v18 = *(_QWORD *)(a2 + 24);
          v19 = 16LL;
        }
        if ( !v18 || *(_DWORD *)(a2 + v19) < 0x18u || *(_DWORD *)(v18 + 8) != 1179468873 )
          goto LABEL_40;
        v20 = *(_QWORD *)(v18 + 16);
LABEL_39:
        v11 = (unsigned int)StorPortExtendedFunction(1LL, a1, v20, v7) != 0 ? 4 : 1;
LABEL_40:
        *(_BYTE *)(a2 + 3) = v11;
        goto LABEL_61;
      }
      if ( v8 == 40 )
      {
        v21 = *(_QWORD *)(a2 + 64);
        v22 = 60LL;
      }
      else
      {
        v21 = *(_QWORD *)(a2 + 24);
        v22 = 16LL;
      }
      if ( !v21 || *(_DWORD *)(a2 + v22) < 0x20u || *(_DWORD *)(v21 + 8) != 1196246089 )
        goto LABEL_40;
      StorPortExtendedFunction(0LL, a1, 104LL, 1701672526LL);
    }
    else
    {
      if ( v8 == 40 )
      {
        v25 = *(_QWORD *)(a2 + 64);
        v26 = 60LL;
      }
      else
      {
        v25 = *(_QWORD *)(a2 + 24);
        v26 = 16LL;
      }
      if ( !v25 || *(_DWORD *)(a2 + v26) < 0x48u || (*(_DWORD *)(a1 + 52) & 0x10) == 0 )
        goto LABEL_40;
      if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 104LL, 1701672526LL) )
        v7 = 0LL;
    }
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_61;
  }
  if ( v8 == 40 )
    v27 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
  else
    v27 = *(_BYTE *)(a2 + 4) == 1;
  *(_BYTE *)(a2 + 3) = v27 ? 1 : 6;
LABEL_61:
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
  StorPortNotification(0LL, a1, a2, v7);
  return 0;
}
