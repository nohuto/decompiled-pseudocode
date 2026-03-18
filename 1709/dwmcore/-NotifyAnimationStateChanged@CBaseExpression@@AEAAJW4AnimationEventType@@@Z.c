/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180084C5C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180093028 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800A1D20 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x180156F58 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z.c)
 *     ?GetTargetObjectHandle@CBaseExpression@@QEBAIXZ @ 0x180158474 (-GetTargetObjectHandle@CBaseExpression@@QEBAIXZ.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180159000 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
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
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int16 v22; // cx
  void *v23; // rax
  __int64 *v24; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  double (__fastcall *v28)(__int64, __int64, __int64); // rax
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rax
  unsigned int TargetObjectHandle; // eax
  DWORD v35; // r9d
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int16 v48; // [rsp+20h] [rbp-E0h]
  unsigned int v49; // [rsp+20h] [rbp-E0h]
  void *v50; // [rsp+28h] [rbp-D8h]
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h]
  __int128 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  _DWORD v59[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+F0h] [rbp-10h]
  char v61; // [rsp+F4h] [rbp-Ch]
  __int128 v62; // [rsp+100h] [rbp+0h] BYREF
  __int128 v63; // [rsp+110h] [rbp+10h]
  __int128 v64; // [rsp+120h] [rbp+20h]
  __int128 v65; // [rsp+130h] [rbp+30h]

  v4 = 0;
  memset_0(v59, 0, sizeof(v59));
  v5 = 18;
  v61 = 0;
  v60 = 18;
  if ( a2 == 1 )
  {
    v28 = *(double (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL);
    if ( v28 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(a1, 8LL, a1);
    else
      v28(a1, 8LL, a1);
    if ( (*(_BYTE *)(a1 + 192) & 0x40) != 0 )
    {
      TargetObjectHandle = CBaseExpression::GetTargetObjectHandle((CBaseExpression *)a1);
      CAnimationLoggingManager::LogAnimationEnded(
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 56LL),
        *(_QWORD *)(a1 + 152),
        TargetObjectHandle,
        *(unsigned int *)(a1 + 176),
        0);
    }
  }
  else if ( a2 == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 9LL, a1);
  }
  if ( !CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
    return v4;
  LODWORD(v62) = 0;
  memset_0((char *)&v62 + 4, 0, 0x3CuLL);
  if ( a2 == 8 && ((*(_BYTE *)(a1 + 192) & 2) == 0 || !*(_BYTE *)(a1 + 132)) || a2 == 16 )
    goto LABEL_40;
  if ( CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v59) )
  {
    v8 = *(const struct SubchannelMaskInfo **)(a1 + 184);
    if ( !v8 )
    {
      AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)(a1 + 64), v6, (float *)&v62);
      v4 = AsFloatArray;
      if ( AsFloatArray >= 0 )
        goto LABEL_12;
      v49 = 1368;
LABEL_54:
      v35 = AsFloatArray;
LABEL_57:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, v49);
      return v4;
    }
    AsFloatArray = CBaseExpression::MergeValueWithMask(
                     (const struct CExpressionValue *)v59,
                     (const struct CExpressionValue *)(a1 + 64),
                     v8,
                     v7,
                     (float *)&v62);
    v4 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      v49 = 1364;
      goto LABEL_54;
    }
  }
  else
  {
    a2 = 16;
  }
LABEL_12:
  if ( a2 != 16 )
  {
    v5 = v60;
    goto LABEL_14;
  }
LABEL_40:
  v59[0] = 0;
  v60 = 18;
  v61 = 1;
LABEL_14:
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1288LL) + 56LL);
  v11 = v5 - 17;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 17;
        if ( v14 )
        {
          v15 = v14 - 17;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 33;
                if ( v18 )
                {
                  if ( v18 != 161 )
                  {
                    v4 = -2147024809;
                    v49 = 1487;
                    goto LABEL_56;
                  }
                  v29 = *(_QWORD *)(a1 + 48);
                  v55 = v62;
                  v56 = v63;
                  v57 = v64;
                  v58 = v65;
                  if ( v29 )
                    v30 = *(_DWORD *)(v29 + 68);
                  else
                    v30 = 0;
                  v51 = v30;
                  v52 = *(unsigned int *)(a1 + 56);
                  v50 = &unk_1801F050C;
                  v48 = 8;
                  goto LABEL_26;
                }
                v19 = *(_QWORD *)(a1 + 48);
                v53 = v62;
                v54 = v63;
                if ( v19 )
                  v20 = *(_DWORD *)(v19 + 68);
                else
                  v20 = 0;
                v21 = v20;
                v22 = 7;
                v51 = v21;
                v52 = *(unsigned int *)(a1 + 56);
                v23 = &unk_1801F0506;
              }
              else
              {
                v36 = *(_QWORD *)(a1 + 48);
                v53 = v62;
                if ( v36 )
                  v37 = *(_DWORD *)(v36 + 68);
                else
                  v37 = 0;
                v38 = v37;
                v22 = 6;
                v51 = v38;
                v52 = *(unsigned int *)(a1 + 56);
                v23 = &unk_1801F0500;
              }
            }
            else
            {
              v31 = *(_QWORD *)(a1 + 48);
              v53 = v62;
              if ( v31 )
                v32 = *(_DWORD *)(v31 + 68);
              else
                v32 = 0;
              v33 = v32;
              v22 = 5;
              v51 = v33;
              v52 = *(unsigned int *)(a1 + 56);
              v23 = &unk_1801F04FA;
            }
          }
          else
          {
            v39 = *(_QWORD *)(a1 + 48);
            v53 = v62;
            if ( v39 )
              v40 = *(_DWORD *)(v39 + 68);
            else
              v40 = 0;
            v41 = v40;
            v22 = 4;
            v51 = v41;
            v52 = *(unsigned int *)(a1 + 56);
            v23 = &unk_1801F04F4;
          }
          v50 = v23;
          v48 = v22;
LABEL_26:
          v24 = &v51;
          goto LABEL_27;
        }
        LODWORD(v52) = DWORD2(v62);
        v42 = *(_QWORD *)(a1 + 48);
        v51 = v62;
        if ( v42 )
          v43 = *(_DWORD *)(v42 + 68);
        else
          v43 = 0;
        *(_QWORD *)&v53 = v43;
        *((_QWORD *)&v53 + 1) = *(unsigned int *)(a1 + 56);
        v50 = &unk_1801F04EE;
        v48 = 3;
      }
      else
      {
        v44 = *(_QWORD *)(a1 + 48);
        if ( v44 )
          v45 = *(_DWORD *)(v44 + 68);
        else
          v45 = 0;
        *(_QWORD *)&v53 = v45;
        *((_QWORD *)&v53 + 1) = *(unsigned int *)(a1 + 56);
        v50 = &unk_1801F04E8;
        v48 = 2;
        v51 = v62;
      }
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 48);
      if ( v26 )
        v27 = *(_DWORD *)(v26 + 68);
      else
        v27 = 0;
      *(_QWORD *)&v53 = v27;
      *((_QWORD *)&v53 + 1) = *(unsigned int *)(a1 + 56);
      v50 = &unk_1801F04E4;
      v48 = 1;
    }
  }
  else
  {
    v46 = *(_QWORD *)(a1 + 48);
    if ( v46 )
      v47 = *(_DWORD *)(v46 + 68);
    else
      v47 = 0;
    *(_QWORD *)&v53 = v47;
    *((_QWORD *)&v53 + 1) = *(unsigned int *)(a1 + 56);
    v50 = &g_parameters_PTzwBA4mNRcOZNjuEhV2NJ6EUp4;
    v48 = 0;
  }
  v24 = (__int64 *)&v53;
LABEL_27:
  v4 = CoreUICallSend(v10, v24, 2LL, 0LL, v48, v50);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
  {
    v49 = 1498;
LABEL_56:
    v35 = v4;
    goto LABEL_57;
  }
  return 0;
}
