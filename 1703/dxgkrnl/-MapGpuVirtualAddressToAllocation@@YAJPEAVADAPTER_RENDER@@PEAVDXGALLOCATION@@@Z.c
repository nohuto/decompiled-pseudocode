/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C008B320
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C008B0E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0182880 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  int v14; // r14d
  int v15; // ebp
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-B8h]
  _QWORD v21[14]; // [rsp+40h] [rbp-98h] BYREF

  memset(v21, 0, 0x68uLL);
  v6 = *((_QWORD *)a1 + 2);
  v21[7] |= 1uLL;
  if ( *(_BYTE *)(v6 + 2210) )
  {
    v14 = 0;
    v15 = 0;
    v16 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 24LL);
    while ( v16 )
    {
      LOBYTE(v20) = 0;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*((_QWORD *)a1 + 54)
                                                                                              + 8LL)
                                                                                  + 792LL))(
              *((_QWORD *)a1 + 55),
              0LL,
              *(_QWORD *)(v16 + 24),
              v21,
              v20,
              (*(_DWORD *)(v16 + 72) >> 12) & 0x3F);
      v12 = v17;
      if ( v17 < 0 )
        goto LABEL_13;
      v21[1] = v21[11];
      v5 = (*(_DWORD *)(v16 + 72) >> 12) & 0x3F;
      v4 = (unsigned int)(1 << ((*(_DWORD *)(v16 + 72) >> 12) & 0x3F));
      if ( ((unsigned int)v4 & v14) != 0 )
      {
        v18 = WdLogNewEntry5_WdError(v5, v4);
        *(_QWORD *)(v18 + 24) = 1599LL;
        goto LABEL_12;
      }
      v16 = *(_QWORD *)(v16 + 64);
      v14 |= v4;
      ++v15;
    }
    if ( v15 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 248LL) )
      return 0LL;
    v18 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v18 + 24) = 1608LL;
LABEL_12:
    WdLogEvent5_WdError(v18);
    LODWORD(v12) = -1073741811;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 54)
                                                                                                + 8LL)
                                                                                    + 792LL))(
           *((_QWORD *)a1 + 55),
           0LL,
           *((_QWORD *)a2 + 3),
           v21,
           0,
           *(_DWORD *)(v6 + 2308));
    v12 = v7;
    if ( v7 >= 0 )
      return 0LL;
LABEL_13:
    v19 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v19 + 24) = v12;
    WdLogEvent5_WdWarning(v19);
  }
  return (unsigned int)v12;
}
