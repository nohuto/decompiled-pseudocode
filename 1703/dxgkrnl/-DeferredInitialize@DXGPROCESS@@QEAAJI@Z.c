/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00D6DB8
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00D65C8 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C01104D0 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C000D3FC (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  VIDSCH_EXPORT *v6; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct DXGGLOBAL *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGGLOBAL *v32; // rax

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v27 + 24) = 1224LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v6 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v4 + 16) )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v28 + 24) = 1229LL;
    WdLogEvent5_WdAssertion(v28);
  }
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  if ( (unsigned int)v4 >= 2 )
  {
    v8 = 0LL;
  }
  else
  {
    _mm_lfence();
    v8 = *((_QWORD *)Global + v4 + 15);
  }
  v9 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v8 + 8) + 80LL))(this);
  v12 = *((_QWORD *)this + 8);
  v13 = (unsigned int)(*(_DWORD *)v8 - 1);
  *(_QWORD *)(v12 + 8 * v13 + 16) = v9;
  if ( !v9 )
    goto LABEL_22;
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v4) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v13, v10, v11);
    *(_QWORD *)(v30 + 24) = 1240LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v14 = DXGGLOBAL::GetGlobal(v12, v13, v10, v11);
  if ( (unsigned int)v4 >= 2 )
  {
    v15 = 0LL;
  }
  else
  {
    _mm_lfence();
    v15 = *((_QWORD *)v14 + v4 + 13);
  }
  v16 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v15 + 8) + 352LL))(this);
  v12 = *((_QWORD *)this + 8);
  v19 = (unsigned int)(*(_DWORD *)v15 - 1);
  *(_QWORD *)(v12 + 8 * v19) = v16;
  if ( v16 )
  {
    v20 = DXGGLOBAL::GetGlobal(v12, v19, v17, v18);
    if ( (unsigned int)v4 >= 2 )
      v25 = 0LL;
    else
      v25 = *((_QWORD *)v20 + v4 + 15);
    if ( !v25 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      *(_QWORD *)(v31 + 24) = 1252LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( *((_BYTE *)this + 274) )
    {
      v32 = DXGGLOBAL::GetGlobal(v22, v21, v23, v24);
      if ( (unsigned int)v4 < 2 )
        v6 = (VIDSCH_EXPORT *)*((_QWORD *)v32 + v4 + 15);
      VIDSCH_EXPORT::VidSchRegisterAsDwm(v6, this);
    }
    return 0LL;
  }
  else
  {
LABEL_22:
    v29 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdLowResource(v29);
    return 3221225495LL;
  }
}
