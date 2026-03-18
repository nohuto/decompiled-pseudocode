/*
 * XREFs of ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C007DFB0
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C008A02C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0002B4C (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C007DF70 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C0080DF0 (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO::Initialize(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  char v11; // cl
  char IsVmProcessOrVmValidation; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  DXGPROCESS_ADAPTER_INFO *v26; // rcx
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  _DXGKARG_CREATEPROCESS v34; // [rsp+20h] [rbp-48h] BYREF

  LODWORD(v3) = 0;
  if ( *((_BYTE *)this + 73) )
    return (unsigned int)v3;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 2) + 185LL) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)a3 + 66) + 8LL) + 1168LL))(
           *((_QWORD *)a3 + 67),
           a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v21 + 24) = *((_QWORD *)a3 + 2);
      *(_QWORD *)(v21 + 32) = v3;
      WdLogEvent5_WdError(v21);
      return (unsigned int)v3;
    }
    *((_BYTE *)this + 72) = 1;
  }
  v9 = *((_QWORD *)a3 + 2);
  if ( (*(_DWORD *)(v9 + 1700) & 0x80u) == 0 )
    goto LABEL_6;
  v17 = *(unsigned int *)(v9 + 248);
  if ( (_DWORD)v17 == 1 )
  {
    *((_QWORD *)this + 1) = this;
    goto LABEL_15;
  }
  v22 = 4 * v17;
  if ( !is_mul_ok(v17, 4uLL) )
    v22 = -1LL;
  v23 = operator new(v22, 0x4B677844u, 1, PagedPool);
  *((_QWORD *)this + 1) = v23;
  if ( v23 )
  {
LABEL_15:
    v18 = *(_DWORD *)(v9 + 300);
    if ( (v18 & 8) != 0 || (v18 & 4) != 0 || (v18 & 0x10) != 0 )
    {
      if ( (_DWORD)v17 )
      {
        v19 = 0LL;
        v20 = v17;
        do
        {
          *(_DWORD *)(v19 + *((_QWORD *)this + 1)) = *((_DWORD *)a2 + 14);
          v19 += 4LL;
          --v20;
        }
        while ( v20 );
      }
    }
    else
    {
      v27 = 0LL;
      if ( (_DWORD)v17 )
      {
        v28 = 0LL;
        while ( 1 )
        {
          v29 = *(_QWORD *)(v9 + 2216);
          if ( (*(_DWORD *)(v28 + v29 + 16) & 1) != 0 )
          {
            v30 = ExShareAddressSpaceWithDevice(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + v29 + 8) + 64LL) + 152LL),
                    *((_QWORD *)this + 1) + 4 * v27);
            v3 = v30;
            if ( v30 < 0 )
              break;
          }
          v27 = (unsigned int)(v27 + 1);
          v28 += 48LL;
          if ( (unsigned int)v27 >= (unsigned int)v17 )
            goto LABEL_6;
        }
        v32 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v32 + 24) = v9;
        *(_QWORD *)(v32 + 32) = v3;
        WdLogEvent5_WdError(v32);
        goto LABEL_11;
      }
    }
LABEL_6:
    v10 = *(_DWORD *)(v9 + 1700);
    if ( (v10 & 0x80u) == 0 && (v10 & 0x40) == 0 )
      goto LABEL_10;
    memset(&v34, 0, 0x20uLL);
    v11 = *((_BYTE *)a2 + 304);
    v34.hDxgkProcess = (HANDLE)*((_QWORD *)a2 + 8);
    v34.Flags.Value = v34.Flags.Value & 0xFFFFFFFC | *((_BYTE *)a2 + 305) & 1 | (2 * (v11 & 1));
    IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(a2, (struct DXGADAPTER *)v9);
    v34.Flags.Value ^= (*(_BYTE *)&v34.Flags.0 ^ (unsigned __int8)(4 * IsVmProcessOrVmValidation)) & 4;
    v34.NumPasid = *(_DWORD *)(v9 + 248);
    v34.pPasid = (ULONG *)*((_QWORD *)this + 1);
    LODWORD(v3) = ADAPTER_RENDER::DdiCreateProcess(a3, &v34);
    if ( (int)v3 >= 0 )
    {
      *((_QWORD *)this + 2) = v34.hKmdProcess;
LABEL_10:
      *((_BYTE *)this + 73) = 1;
      goto LABEL_11;
    }
    v33 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v33 + 24) = 1835LL;
    WdLogEvent5_WdWarning(v33);
LABEL_11:
    if ( (int)v3 >= 0 )
      return (unsigned int)v3;
    goto LABEL_26;
  }
  v25 = WdLogNewEntry5_WdLowResource(v24);
  *(_QWORD *)(v25 + 24) = 1782LL;
  WdLogEvent5_WdLowResource(v25);
  LODWORD(v3) = -1073741801;
LABEL_26:
  DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(this, a2, a3);
  v26 = (DXGPROCESS_ADAPTER_INFO *)*((_QWORD *)this + 1);
  if ( v26 != this )
  {
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  return (unsigned int)v3;
}
