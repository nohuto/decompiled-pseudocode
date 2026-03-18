/*
 * XREFs of ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00960D4
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00D5CC0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0006D88 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0096094 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C00CDE28 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO::Initialize(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  char v12; // cl
  char IsVmProcessOrVmValidation; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int128 v24; // rax
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  DXGPROCESS_ADAPTER_INFO *v28; // rcx
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  _DXGKARG_CREATEPROCESS v37; // [rsp+20h] [rbp-48h] BYREF

  LODWORD(v3) = 0;
  if ( *((_BYTE *)this + 65) )
    return (unsigned int)v3;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 2) + 186LL) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)a3 + 54) + 8LL) + 1168LL))(
           *((_QWORD *)a3 + 55),
           a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v23 + 24) = *((_QWORD *)a3 + 2);
      *(_QWORD *)(v23 + 32) = v3;
      WdLogEvent5_WdError(v23);
      return (unsigned int)v3;
    }
    *((_BYTE *)this + 64) = 1;
  }
  v10 = *((_QWORD *)a3 + 2);
  if ( (*(_DWORD *)(v10 + 1676) & 0x80u) == 0 )
    goto LABEL_6;
  v19 = *(unsigned int *)(v10 + 248);
  if ( (_DWORD)v19 == 1 )
  {
    *((_QWORD *)this + 1) = this;
    goto LABEL_15;
  }
  v24 = *(unsigned int *)(v10 + 248) * (unsigned __int128)4uLL;
  if ( !is_mul_ok(v19, 4uLL) )
    *(_QWORD *)&v24 = -1LL;
  v25 = operator new(v24, DWORD2(v24), 1, PagedPool);
  *((_QWORD *)this + 1) = v25;
  if ( v25 )
  {
LABEL_15:
    v20 = *(_DWORD *)(v10 + 300);
    if ( (v20 & 8) != 0 || (v20 & 4) != 0 || (v20 & 0x10) != 0 )
    {
      if ( (_DWORD)v19 )
      {
        v21 = 0LL;
        v22 = v19;
        do
        {
          *(_DWORD *)(v21 + *((_QWORD *)this + 1)) = *((_DWORD *)a2 + 14);
          v21 += 4LL;
          --v22;
        }
        while ( v22 );
      }
    }
    else
    {
      v29 = 0LL;
      if ( (_DWORD)v19 )
      {
        v30 = 0LL;
        while ( 1 )
        {
          v31 = *(_QWORD *)(v10 + 2192);
          if ( (*(_DWORD *)(v30 + v31 + 16) & 1) != 0 )
          {
            v32 = ExShareAddressSpaceWithDevice(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + v31 + 8) + 64LL) + 152LL),
                    *((_QWORD *)this + 1) + 4 * v29);
            v3 = v32;
            if ( v32 < 0 )
              break;
          }
          v29 = (unsigned int)(v29 + 1);
          v30 += 48LL;
          if ( (unsigned int)v29 >= (unsigned int)v19 )
            goto LABEL_6;
        }
        v35 = WdLogNewEntry5_WdError(v34, v33);
        *(_QWORD *)(v35 + 24) = v10;
        *(_QWORD *)(v35 + 32) = v3;
        WdLogEvent5_WdError(v35);
        goto LABEL_11;
      }
    }
LABEL_6:
    v11 = *(_DWORD *)(v10 + 1676);
    if ( (v11 & 0x80u) == 0 && (v11 & 0x40) == 0 )
      goto LABEL_10;
    memset(&v37, 0, 0x20uLL);
    v12 = *((_BYTE *)a2 + 272);
    v37.hDxgkProcess = (HANDLE)*((_QWORD *)a2 + 8);
    v37.Flags.Value = v37.Flags.Value & 0xFFFFFFFC | *((_BYTE *)a2 + 273) & 1 | (2 * (v12 & 1));
    IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v10);
    v37.Flags.Value ^= (*(_BYTE *)&v37.Flags.0 ^ (unsigned __int8)(4 * IsVmProcessOrVmValidation)) & 4;
    v37.NumPasid = *(_DWORD *)(v10 + 248);
    v37.pPasid = (ULONG *)*((_QWORD *)this + 1);
    LODWORD(v3) = ADAPTER_RENDER::DdiCreateProcess(a3, &v37);
    if ( (int)v3 >= 0 )
    {
      *((_QWORD *)this + 2) = v37.hKmdProcess;
LABEL_10:
      *((_BYTE *)this + 65) = 1;
      goto LABEL_11;
    }
    v36 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v36 + 24) = 1745LL;
    WdLogEvent5_WdWarning(v36);
LABEL_11:
    if ( (int)v3 >= 0 )
      return (unsigned int)v3;
    goto LABEL_26;
  }
  v27 = WdLogNewEntry5_WdLowResource(v26);
  *(_QWORD *)(v27 + 24) = 1692LL;
  WdLogEvent5_WdLowResource(v27);
  LODWORD(v3) = -1073741801;
LABEL_26:
  DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
  v28 = (DXGPROCESS_ADAPTER_INFO *)*((_QWORD *)this + 1);
  if ( v28 != this )
  {
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  return (unsigned int)v3;
}
