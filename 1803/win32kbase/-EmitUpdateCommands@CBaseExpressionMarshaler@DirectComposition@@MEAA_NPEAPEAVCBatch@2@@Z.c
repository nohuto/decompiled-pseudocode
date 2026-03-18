/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A350
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00089F0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00094A0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014F4E0 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014FA40 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01557B0 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009E58 (-EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009EE0 (-EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009F54 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005CF68 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C014AC0C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // r15
  const unsigned __int16 *v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // r13
  int v9; // eax
  unsigned __int64 v10; // rbx
  int v11; // ecx
  int v12; // r12d
  unsigned __int64 v13; // r14
  char *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  char *v17; // rcx
  unsigned int v18; // edx
  _DWORD *v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+60h] [rbp+40h] BYREF
  void *v22; // [rsp+70h] [rbp+50h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)this + 14);
    if ( v5 )
    {
      v9 = StringCchLengthW(v5, 0x3E8uLL, &v21);
      v10 = v21 + 1;
      if ( v9 < 0 )
        return 0;
      v11 = 2 * v10;
      if ( ((2 * (_BYTE)v10) & 3) != 0 )
        v11 += 4 - ((2 * (_BYTE)v10) & 3);
      v12 = v11 + 16;
      v13 = (unsigned int)(v11 + 16);
      v21 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
      if ( v21 < v13 && (!DirectComposition::CBatch::AllocateNewFragment(a2, &v21) || v21 < v13) )
        return 0;
      DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, v13, &v22);
      v14 = (char *)v22;
      *(_DWORD *)v22 = v12;
      *(_QWORD *)(v14 + 4) = 0LL;
      *((_DWORD *)v14 + 3) = 0;
      *((_DWORD *)v14 + 1) = 26;
      *((_DWORD *)v14 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v14 + 3) = v10;
      memmove(v14 + 16, *((const void **)this + 14), 2 * v10);
      *((_DWORD *)this + 4) |= 0x200u;
    }
  }
  if ( !DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(
          this,
          (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetTracingCookie(this, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(this, (struct DirectComposition::CBatch **)a2) )
  {
    return 0;
  }
  v6 = *((_DWORD *)this + 25);
  v7 = *((_QWORD *)this + 11);
  while ( *((_DWORD *)this + 24) < v6 )
  {
    v15 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v21 = v15;
    if ( v15 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v21) )
        break;
      v15 = v21;
    }
    v16 = v6 - *((_DWORD *)this + 24);
    if ( v16 >= (v15 - 16) >> 2 )
      LODWORD(v16) = (v15 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(4 * v16 + 16),
      &v22);
    v17 = (char *)v22;
    v18 = 0;
    *(_DWORD *)v22 = 4 * v16 + 16;
    v19 = v17 + 16;
    *(_QWORD *)(v17 + 4) = 0LL;
    *((_DWORD *)v17 + 3) = 0;
    *((_DWORD *)v17 + 1) = 24;
    *((_DWORD *)v17 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v17 + 3) = v16; v18 < (unsigned int)v16; ++v19 )
    {
      v20 = v18 + *((_DWORD *)this + 24);
      ++v18;
      *v19 = *(_DWORD *)(*(_QWORD *)(v7 + 8 * v20) + 24LL);
    }
    *((_DWORD *)this + 24) += v16;
  }
  if ( *((_DWORD *)this + 24) != v6 )
    return 0;
  return v4;
}
