/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002983C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18003B4C0 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18013CF48 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x18017FEF8 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x1801820E8 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  unsigned int v7; // r9d
  const struct SubchannelMaskInfo *v8; // r8
  int AsFloatArray; // eax
  __int64 v10; // r10
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int16 v17; // cx
  void *v18; // rax
  unsigned int v19; // eax
  int v20; // edi
  int v21; // edi
  int v22; // edi
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  double (__fastcall *v27)(__int64, __int64, __int64); // rax
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int16 v30; // ax
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rax
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  int v35; // r9d
  int v36; // edi
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // ecx
  unsigned int v51; // [rsp+20h] [rbp-E0h]
  void *v52; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __m128i v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __m128i v57; // [rsp+80h] [rbp-80h]
  __int128 v58; // [rsp+90h] [rbp-70h]
  __int128 v59; // [rsp+A0h] [rbp-60h]
  __int128 v60; // [rsp+B0h] [rbp-50h]
  _DWORD v61[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+108h] [rbp+8h]
  char v64; // [rsp+10Ch] [rbp+Ch]
  __m128i v65; // [rsp+110h] [rbp+10h] BYREF
  __int128 v66; // [rsp+120h] [rbp+20h]
  __int128 v67; // [rsp+130h] [rbp+30h]
  __int128 v68; // [rsp+140h] [rbp+40h]

  v4 = 0;
  memset_0(v61, 0, sizeof(v61));
  v5 = 18;
  v62 = 0LL;
  v63 = 18;
  v64 = 0;
  if ( a2 == 1 )
  {
    v27 = *(double (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
    if ( v27 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(a1, 8LL, a1);
    else
      v27(a1, 8LL, a1);
    if ( (*(_BYTE *)(a1 + 208) & 0x40) != 0 )
    {
      AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)a1);
      CAnimationLoggingManager::LogAnimationEnded(
        AnimationLoggingManagerNoRef,
        *(_QWORD *)(a1 + 160),
        *(unsigned int *)(a1 + 200),
        *(unsigned int *)(a1 + 184),
        0);
    }
  }
  else if ( a2 == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9LL, a1);
  }
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
  {
    memset_0(&v65, 0, 0x40uLL);
    if ( a2 == 8 && ((*(_BYTE *)(a1 + 208) & 2) == 0 || !*(_BYTE *)(a1 + 140)) || a2 == 16 )
      goto LABEL_46;
    if ( !CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v61) )
    {
      a2 = 16;
      goto LABEL_13;
    }
    v8 = *(const struct SubchannelMaskInfo **)(a1 + 192);
    if ( v8 )
    {
      AsFloatArray = CBaseExpression::MergeValueWithMask(
                       (const struct CExpressionValue *)v61,
                       (const struct CExpressionValue *)(a1 + 64),
                       v8,
                       v7,
                       (float *)v65.m128i_i32);
      v4 = AsFloatArray;
      if ( AsFloatArray >= 0 )
        goto LABEL_13;
      v51 = 1362;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 144) == 11
        || (AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)(a1 + 64), v6, (float *)v65.m128i_i32),
            v4 = AsFloatArray,
            AsFloatArray >= 0) )
      {
LABEL_13:
        if ( a2 != 16 )
        {
          v5 = v63;
          goto LABEL_15;
        }
LABEL_46:
        v61[0] = 0;
        v63 = 18;
        v64 = 1;
LABEL_15:
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1312LL) + 56LL);
        if ( v5 <= 69 )
        {
          if ( v5 == 69 )
          {
            v46 = *(_QWORD *)(a1 + 48);
            v55 = v65;
            if ( v46 )
              v47 = *(_DWORD *)(v46 + 68);
            else
              v47 = 0;
            v48 = v47;
            v17 = 4;
            v53 = v48;
            v54 = *(unsigned int *)(a1 + 56);
            v18 = &unk_180239C54;
            goto LABEL_22;
          }
          v20 = v5 - 11;
          if ( !v20 )
          {
            v44 = *(_QWORD *)(a1 + 48);
            if ( v44 )
              v45 = *(_DWORD *)(v44 + 68);
            else
              v45 = 0;
            v53 = v45;
            v54 = *(unsigned int *)(a1 + 56);
            v19 = CoreUICallSend(v10, &v53, 2LL, 0LL, 9, &unk_180239C72);
            goto LABEL_30;
          }
          v21 = v20 - 6;
          if ( !v21 )
          {
            v42 = *(_QWORD *)(a1 + 48);
            if ( v42 )
              v43 = *(_DWORD *)(v42 + 68);
            else
              v43 = 0;
            v53 = v43;
            v54 = *(unsigned int *)(a1 + 56);
            v19 = CoreUICallSend(
                    v10,
                    &v53,
                    2LL,
                    0LL,
                    0,
                    &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_B7Wh97u7JZ5MPI8fhO4RmhzOr4c);
            goto LABEL_30;
          }
          v22 = v21 - 1;
          if ( !v22 )
          {
            v23 = *(_QWORD *)(a1 + 48);
            if ( v23 )
              v24 = *(_DWORD *)(v23 + 68);
            else
              v24 = 0;
            v53 = v24;
            v54 = *(unsigned int *)(a1 + 56);
            v19 = CoreUICallSend(v10, &v53, 2LL, 0LL, 1, &unk_180239C44);
            goto LABEL_30;
          }
          v36 = v22 - 17;
          if ( !v36 )
          {
            v40 = *(_QWORD *)(a1 + 48);
            if ( v40 )
              v41 = *(_DWORD *)(v40 + 68);
            else
              v41 = 0;
            v53 = v41;
            v54 = *(unsigned int *)(a1 + 56);
            v55.m128i_i64[0] = v65.m128i_i64[0];
            v19 = CoreUICallSend(v10, &v53, 2LL, 0LL, 2, &unk_180239C48);
            goto LABEL_30;
          }
          if ( v36 == 17 )
          {
            v37 = *(_QWORD *)(a1 + 48);
            v55.m128i_i64[0] = v65.m128i_i64[0];
            v55.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v65, 8));
            if ( v37 )
              v38 = *(_DWORD *)(v37 + 68);
            else
              v38 = 0;
            v39 = v38;
            v17 = 3;
            v53 = v39;
            v54 = *(unsigned int *)(a1 + 56);
            v18 = &unk_180239C4E;
            goto LABEL_22;
          }
        }
        else
        {
          v11 = v5 - 70;
          if ( !v11 )
          {
            v31 = *(_QWORD *)(a1 + 48);
            v55 = v65;
            if ( v31 )
              v32 = *(_DWORD *)(v31 + 68);
            else
              v32 = 0;
            v33 = v32;
            v17 = 5;
            v53 = v33;
            v54 = *(unsigned int *)(a1 + 56);
            v18 = &unk_180239C5A;
            goto LABEL_22;
          }
          v12 = v11 - 1;
          if ( !v12 )
          {
            v49 = *(_QWORD *)(a1 + 48);
            v55 = v65;
            if ( v49 )
              v50 = *(_DWORD *)(v49 + 68);
            else
              v50 = 0;
            v53 = v50;
            v54 = *(unsigned int *)(a1 + 56);
            v30 = 6;
            v52 = &unk_180239C60;
            goto LABEL_45;
          }
          v13 = v12 - 33;
          if ( !v13 )
          {
            v14 = *(_QWORD *)(a1 + 48);
            v55 = v65;
            v56 = v66;
            if ( v14 )
              v15 = *(_DWORD *)(v14 + 68);
            else
              v15 = 0;
            v16 = v15;
            v17 = 7;
            v53 = v16;
            v54 = *(unsigned int *)(a1 + 56);
            v18 = &unk_180239C66;
LABEL_22:
            v19 = CoreUICallSend(v10, &v53, 2LL, 0LL, v17, v18);
            goto LABEL_30;
          }
          if ( v13 == 161 )
          {
            v28 = *(_QWORD *)(a1 + 48);
            v57 = v65;
            v58 = v66;
            v59 = v67;
            v60 = v68;
            if ( v28 )
              v29 = *(_DWORD *)(v28 + 68);
            else
              v29 = 0;
            v53 = v29;
            v54 = *(unsigned int *)(a1 + 56);
            v52 = &unk_180239C6C;
            v30 = 8;
LABEL_45:
            v19 = CoreUICallSend(v10, &v53, 2LL, 0LL, v30, v52);
LABEL_30:
            v4 = v19;
            if ( (int)(v19 + 0x80000000) < 0 || v19 == -2018375675 )
            {
              v4 = 0;
              goto LABEL_32;
            }
            v51 = 1508;
            goto LABEL_58;
          }
        }
        v4 = -2147024809;
        v51 = 1501;
LABEL_58:
        v35 = v4;
        goto LABEL_59;
      }
      v51 = 1370;
    }
    v35 = AsFloatArray;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, v51);
  }
LABEL_32:
  v25 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v4;
}
