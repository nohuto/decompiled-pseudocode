/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B700
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B550 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, (void **)&v12) )
      return 0;
    v4 = v12;
    *v12 = 44;
    v5 = v4 + 1;
    memset(v4 + 1, 0, 0x28uLL);
    *v5 = 24;
    v5[1] = *((_DWORD *)this + 6);
    if ( (*((_BYTE *)this + 104) & 1) != 0 && (v6 = *((_QWORD *)this + 7)) != 0 && (v7 = *(_QWORD *)(v6 + 16)) != 0 )
    {
      v5[3] = *(_DWORD *)(v7 + 24);
      v5[2] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL));
    }
    else
    {
      *((_QWORD *)v5 + 1) = 0LL;
    }
    v5[4] = *((_DWORD *)this + 16);
    v5[8] = *((_DWORD *)this + 12);
    v5[9] = (*((unsigned __int8 *)this + 104) >> 3) & 1;
    v8 = *((_QWORD *)this + 9);
    if ( !v8 )
    {
      v5[7] = 0;
LABEL_9:
      *(_QWORD *)(v5 + 5) = 0LL;
LABEL_10:
      *((_DWORD *)this + 4) |= 0x40u;
      return v3;
    }
    *((_WORD *)v5 + 14) = *(unsigned __int8 *)(v8 + 4);
    *((_WORD *)v5 + 15) = **((_WORD **)this + 9);
    v10 = *((_QWORD *)this + 9);
    if ( *(_DWORD *)v10 == 1 )
    {
      v11 = *(unsigned __int8 *)(v10 + 8);
    }
    else
    {
      if ( *(_DWORD *)v10 != 2 )
        goto LABEL_9;
      v11 = *(_QWORD *)(v10 + 8);
    }
    *(_QWORD *)(v5 + 5) = v11;
    goto LABEL_10;
  }
  return v3;
}
