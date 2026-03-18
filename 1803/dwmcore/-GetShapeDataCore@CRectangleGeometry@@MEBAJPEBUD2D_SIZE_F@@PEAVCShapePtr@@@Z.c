/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800A65D0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008C630 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // esi
  float *v4; // rdi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  char v9; // dl
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  char v14; // al
  bool v15; // cl
  _DWORD *Value; // rdi
  int v17; // ecx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  DWORD v24; // ecx
  unsigned int v25; // [rsp+20h] [rbp-B8h]
  _DWORD v26[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v27[3]; // [rsp+40h] [rbp-98h] BYREF
  int v28; // [rsp+70h] [rbp-68h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = 0;
  v4 = (float *)((char *)this + 136);
  if ( a2 )
  {
    v6 = *(_OWORD *)v4;
    v7 = *(_OWORD *)((char *)this + 152);
    v28 = *((_DWORD *)this + 46);
    v27[0] = v6;
    v8 = *(_OWORD *)((char *)this + 168);
    v4 = (float *)v27;
    v27[1] = v7;
    *(float *)&v7 = a2->height - *((float *)this + 37);
    v27[2] = v8;
    *((_QWORD *)&v27[0] + 1) = __PAIR64__(v7, a2->width - *((float *)this + 36));
  }
  v9 = *((_BYTE *)this + 184);
  v10 = *v4;
  v11 = v4[1];
  if ( v9 )
  {
    v12 = v10 + v4[2];
    v13 = v11 + v4[3];
  }
  else
  {
    v12 = v4[2];
    v13 = v4[3];
  }
  if ( v12 <= v10 || v13 <= v11 )
  {
    v21 = CRectanglesShape::operator new(this);
    v18 = v21;
    if ( v21 )
    {
      v21[1] = 0LL;
      *v21 = &CRectanglesShape::`vftable';
      v21[2] = v21 + 6;
      v21[3] = v21 + 6;
      *((_DWORD *)v21 + 8) = 1;
      *(_QWORD *)((char *)v21 + 36) = 1LL;
      v21[8] = 0LL;
      goto LABEL_27;
    }
    v25 = 211;
LABEL_46:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v25);
    return v3;
  }
  v14 = *((float *)this + 38) > 0.0 || *((float *)this + 39) > 0.0;
  if ( !v9 )
  {
    v15 = *((float *)this + 40) > 0.0
       || *((float *)this + 41) > 0.0
       || *((float *)this + 42) > 0.0
       || *((float *)this + 43) > 0.0
       || *((float *)this + 44) > 0.0
       || *((float *)this + 45) > 0.0;
    v14 |= v15;
  }
  if ( !v14 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v23 = operator new(0xF8uLL);
      Value = v23;
      if ( !v23 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v24 = CThreadContext::s_dwTlsIndex;
      *v23 = 0LL;
      v23[1] = 0LL;
      v23[2] = 0LL;
      v23[3] = 0LL;
      v23[4] = 0LL;
      v23[5] = 0LL;
      v23[6] = 0LL;
      v23[7] = 0LL;
      v23[8] = 0LL;
      v23[9] = 0LL;
      v23[10] = 0LL;
      v23[11] = 0LL;
      v23[12] = 0LL;
      v23[13] = 0LL;
      v23[14] = 0LL;
      v23[15] = 0LL;
      v23[16] = 0LL;
      v23[17] = 0LL;
      v23[18] = 0LL;
      v23[19] = 0LL;
      v23[20] = 0LL;
      v23[21] = 0LL;
      v23[22] = 0LL;
      v23[23] = 0LL;
      v23[24] = 0LL;
      v23[25] = 0LL;
      v23[26] = 0LL;
      v23[27] = 0LL;
      v23[28] = 0LL;
      v23[29] = 0LL;
      v23[30] = 0LL;
      TlsSetValue(v24, v23);
    }
    v17 = Value[3];
    v18 = 0LL;
    if ( v17 )
    {
      v18 = (_QWORD *)*((_QWORD *)Value + 2);
      *((_QWORD *)Value + 2) = *v18;
      Value[3] = v17 - 1;
    }
    if ( !v18 )
    {
      v18 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
      if ( !v18 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v18[1] = 0LL;
    *v18 = &CRectanglesShape::`vftable';
    *((_DWORD *)v18 + 8) = 1;
    v18[2] = v18 + 6;
    v18[3] = v18 + 6;
    *(_QWORD *)((char *)v18 + 36) = 1LL;
    v18[8] = 0LL;
    *((_DWORD *)v18 + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v18 + 2), 0x10u);
    v19 = v18[8];
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v18[8] = 0LL;
    }
    *(float *)v26 = v10;
    *(float *)&v26[1] = v11;
    *(float *)&v26[2] = v12;
    *(float *)&v26[3] = v13;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)(v18 + 2),
      v26,
      1u);
    goto LABEL_27;
  }
  v22 = operator new(0x50uLL);
  v18 = v22;
  if ( !v22 )
  {
    v25 = 218;
    goto LABEL_46;
  }
  v22[1] = 0LL;
  *v22 = &CRoundedRectangleShape::`vftable';
  *((_OWORD *)v22 + 1) = *(_OWORD *)v4;
  *((_OWORD *)v22 + 2) = *((_OWORD *)v4 + 1);
  *((_OWORD *)v22 + 3) = *((_OWORD *)v4 + 2);
  *((float *)v22 + 16) = v4[12];
  v22[9] = 0LL;
LABEL_27:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v18;
  *((_BYTE *)a3 + 8) = 1;
  return v3;
}
