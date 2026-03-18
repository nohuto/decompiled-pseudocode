/*
 * XREFs of TryFillRenderState @ 0x180171A60
 * Callers:
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x18017165C (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TryFillRenderState(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  bool result; // al
  __int64 v7; // xmm1_8
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm1_4
  __int128 v11; // [rsp+20h] [rbp-19h] BYREF
  __int128 v12; // [rsp+30h] [rbp-9h]
  __int128 v13; // [rsp+40h] [rbp+7h]
  __int64 v14; // [rsp+50h] [rbp+17h]
  int v15; // [rsp+60h] [rbp+27h]
  float v16[6]; // [rsp+70h] [rbp+37h] BYREF

  memset_0(&v11, 0, 0x30uLL);
  v15 = 0;
  v4 = v12;
  *(_OWORD *)a2 = v11;
  v5 = v13;
  *(_OWORD *)(a2 + 16) = v4;
  *(_OWORD *)(a2 + 32) = v5;
  CMatrixStack::Top((CMatrixStack *)(a1 + 480), (struct CMILMatrix *)&v11);
  result = CMILMatrix::Is2DAffine<1>((__int64)&v11, 1);
  if ( result )
  {
    *(_QWORD *)v16 = v11;
    v7 = v14;
    *(_QWORD *)&v16[2] = v12;
    *(_OWORD *)a2 = *(_OWORD *)v16;
    *(_QWORD *)(a2 + 16) = v7;
    v8 = *(_DWORD *)(a1 + 3104);
    if ( v8 )
      v9 = *(float *)(*(_QWORD *)(a1 + 3120) + 4LL * (unsigned int)(v8 - 1));
    else
      v9 = FLOAT_1_0;
    *(float *)(a2 + 24) = v9;
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 360) + 48LL))(*(_QWORD *)(a1 + 360), v16);
    result = 1;
    v10 = v16[3] - v16[1];
    *(_DWORD *)(a2 + 36) = (int)(float)(v16[2] - v16[0]);
    *(_DWORD *)(a2 + 40) = (int)v10;
  }
  return result;
}
