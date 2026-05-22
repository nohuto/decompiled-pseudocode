/*
 * XREFs of ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B3090
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x180068B60 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     ??0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z @ 0x1800B358C (--0EdgyProcessorTarget@@IEAA@PEAVEdgyProcessor@@@Z.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3864 (-Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3B3C (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800B45EC (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessor::OnHitTest(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v7; // ebx
  int v8; // esi
  unsigned int v9; // r12d
  __int64 *v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  float v14; // xmm0_4
  double v15; // xmm1_8
  double v16; // xmm1_8
  float v17; // xmm3_4
  double v18; // xmm0_8
  double v19; // xmm0_8
  const struct D2D_VECTOR_2F *v20; // rsi
  __int64 v21; // rcx
  int v22; // r12d
  const struct D2D_VECTOR_2F *v23; // r9
  int v24; // esi
  const char *v25; // r9
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  void *v28; // rsi
  HANDLE CurrentProcess; // rbx
  HANDLE v30; // rax
  HANDLE v31; // r15
  __int64 v32; // rcx
  __int128 v33; // xmm6
  __int128 v34; // xmm7
  __int64 v35; // xmm8_8
  EdgyProcessorTarget *v36; // rax
  EdgyProcessorTarget *v37; // rbx
  EdgyProcessorTarget *v38; // rsi
  __int64 v39; // rcx
  void (*v40)(void); // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v45; // [rsp+48h] [rbp-99h] BYREF
  __int64 v46; // [rsp+50h] [rbp-91h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-89h] BYREF
  __int64 v48; // [rsp+60h] [rbp-81h]
  __int128 v49; // [rsp+68h] [rbp-79h] BYREF
  __int128 v50; // [rsp+78h] [rbp-69h]
  __int64 v51; // [rsp+88h] [rbp-59h]
  __int64 v52; // [rsp+98h] [rbp-49h]
  __int128 v53; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-31h]
  __int64 v55; // [rsp+C0h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v52 = -2LL;
  TargetHandle = a3;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)a4 = 0;
  v10 = (__int64 *)((char *)a4 + 8);
  v11 = *((_QWORD *)a4 + 1);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    a3 = (struct InputContext *)TargetHandle;
  }
  if ( (*(_DWORD *)a2 & 0x88) != 8 )
    goto LABEL_54;
  v12 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_54;
  do
  {
    if ( (*((_BYTE *)a2 + 32 * v12 + 60) & 2) != 0 )
    {
      if ( (unsigned int)++v8 > 1 )
        goto LABEL_54;
      v9 = v12;
    }
    ++v12;
  }
  while ( v12 < *((_DWORD *)a2 + 12) );
  if ( v8 != 1 )
    goto LABEL_54;
  v13 = *((_QWORD *)a3 + 1);
  LODWORD(v45) = 0;
  LODWORD(v46) = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, &v45, &v46);
  if ( v7 < 0 )
  {
    v20 = (const struct D2D_VECTOR_2F *)((char *)this + 48);
  }
  else
  {
    v14 = (float)((float)(int)v46 / 800.0) * 40.0;
    v15 = v14;
    v16 = v14 < 0.0 ? v15 - 0.5 : v15 + 0.5;
    v17 = (float)((float)(int)v45 / 480.0) * 40.0;
    v18 = v17;
    v19 = v17 < 0.0 ? v18 - 0.5 : v18 + 0.5;
    v20 = (const struct D2D_VECTOR_2F *)((char *)this + 48);
    *((float *)this + 12) = (float)(int)v19;
    *((float *)this + 13) = (float)(int)v16;
  }
  if ( v7 < 0 )
    goto LABEL_54;
  v21 = v9;
  v22 = *((_DWORD *)a2 + 8 * v9 + 16);
  v21 *= 32LL;
  LODWORD(v45) = *(_DWORD *)((char *)a2 + v21 + 68);
  v48 = *((_QWORD *)a2 + 4);
  LODWORD(v46) = *(_DWORD *)((char *)a2 + v21 + 56);
  EdgyImpl::Reset((EdgyProcessor *)((char *)this + 64));
  v23 = v20;
  v24 = v45;
  if ( !Edges::HitTest((Edges *)(*((_QWORD *)this + 11) + 72LL), v22, v45, v23, (void **)this + 8) )
  {
    v43 = *v10;
    if ( *v10 )
    {
      *v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    *(_DWORD *)a4 = 0;
    goto LABEL_54;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v25);
    goto LABEL_59;
  }
  *((_DWORD *)this + 6) = v46;
  *((_QWORD *)this + 5) = v48;
  *((_DWORD *)this + 7) = v22;
  *((_DWORD *)this + 8) = v24;
  v45 = 0LL;
  v26 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))TargetHandle)(
          *(_QWORD *)TargetHandle,
          &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
          &v45);
  v27 = retaddr;
  if ( v26 < 0 )
  {
LABEL_59:
    wil::details::in1diag3::FailFast_Hr(
      v27,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      (const char *)(unsigned int)v26);
    JUMPOUT(0x1800B353ALL);
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v45 + 72LL))(v45, &v53);
  v28 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 56LL))(v45);
  if ( v28
    && (CurrentProcess = GetCurrentProcess(),
        v30 = GetCurrentProcess(),
        DuplicateHandle(v30, v28, CurrentProcess, &TargetHandle, 0, 0, 2u)) )
  {
    v31 = TargetHandle;
  }
  else
  {
    v31 = 0LL;
    TargetHandle = 0LL;
  }
  v32 = *((_QWORD *)this + 7);
  if ( v32 )
  {
    v49 = v53;
    v50 = v54;
    v51 = v55;
    EdgyProcessorTarget::UpdateInputTarget(v32, &v49, v31);
    goto LABEL_45;
  }
  v33 = v53;
  v34 = v54;
  v35 = v55;
  if ( this == (EdgyProcessor *)-56LL )
  {
    v7 = -2147024809;
    goto LABEL_41;
  }
  v36 = (EdgyProcessorTarget *)malloc(0xA0uLL);
  v37 = v36;
  if ( v36 )
    memset_0(v36, 0, 0xA0uLL);
  if ( v37 )
    v38 = EdgyProcessorTarget::EdgyProcessorTarget(v37, this);
  else
    v38 = 0LL;
  if ( !v38 )
  {
    v7 = -2147024882;
    goto LABEL_41;
  }
  v49 = v33;
  v50 = v34;
  v51 = v35;
  v7 = EdgyProcessorTarget::Initialize(v38, &v49, v31);
  if ( v7 < 0 )
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v38 + 2) + 24LL))((__int64)v38 + 16, 1LL);
  else
    *((_QWORD *)this + 7) = v38;
  if ( v7 >= 0 )
  {
LABEL_45:
    v41 = *v10;
    if ( *v10 )
    {
      *v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7))(
           *((_QWORD *)this + 7),
           &GUID_00000000_0000_0000_c000_000000000046,
           v10);
    if ( v7 < 0 )
    {
      v42 = v45;
      if ( !v45 )
        goto LABEL_54;
      v45 = 0LL;
      v40 = *(void (**)(void))(*(_QWORD *)v42 + 16LL);
      goto LABEL_43;
    }
    *(_DWORD *)a4 = 1;
  }
LABEL_41:
  v39 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    v40 = *(void (**)(void))(*(_QWORD *)v39 + 16LL);
LABEL_43:
    v40();
  }
LABEL_54:
  if ( !*v10 || !*(_DWORD *)a4 )
    EdgyImpl::Reset((EdgyProcessor *)((char *)this + 64));
  return (unsigned int)v7;
}
