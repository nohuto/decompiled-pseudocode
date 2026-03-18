/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18002E81C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x18001C618 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002B088 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18002F0B8 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  const struct SubchannelMaskInfo *v8; // r8
  int AsFloatArray; // eax
  __int64 v10; // r10
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 *v15; // rdx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int16 v26; // cx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // r9d
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int16 v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  void *v49; // [rsp+28h] [rbp-D8h]
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int128 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-70h]
  __int128 v57; // [rsp+A0h] [rbp-60h]
  _DWORD v58[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v59; // [rsp+F0h] [rbp-10h]
  char v60; // [rsp+F4h] [rbp-Ch]
  __int128 v61; // [rsp+100h] [rbp+0h] BYREF
  __int128 v62; // [rsp+110h] [rbp+10h]
  __int128 v63; // [rsp+120h] [rbp+20h]
  __int128 v64; // [rsp+130h] [rbp+30h]

  v4 = 0;
  memset_0(v58, 0, sizeof(v58));
  v5 = 18;
  v60 = 0;
  v59 = 18;
  if ( a2 == 1 )
  {
    v28 = 8LL;
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_3;
    v28 = 9LL;
  }
  CResource::NotifyOnChanged(a1, v28, a1);
LABEL_3:
  if ( !CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
    return v4;
  LODWORD(v61) = 0;
  memset_0((char *)&v61 + 4, 0, 0x3CuLL);
  if ( a2 == 8 && ((*(_BYTE *)(a1 + 208) & 2) == 0 || !*(_BYTE *)(a1 + 132)) || a2 == 16 )
    goto LABEL_41;
  if ( CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v58) )
  {
    v8 = *(const struct SubchannelMaskInfo **)(a1 + 184);
    if ( !v8 )
    {
      AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)(a1 + 64), v6, (float *)&v61);
      v4 = AsFloatArray;
      if ( AsFloatArray >= 0 )
        goto LABEL_11;
      v48 = 1210;
LABEL_54:
      v36 = AsFloatArray;
LABEL_57:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, v48);
      return v4;
    }
    AsFloatArray = CBaseExpression::MergeValueWithMask(
                     (const struct CExpressionValue *)v58,
                     (const struct CExpressionValue *)(a1 + 64),
                     v8,
                     v7,
                     (float *)&v61);
    v4 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      v48 = 1206;
      goto LABEL_54;
    }
  }
  else
  {
    a2 = 16;
  }
LABEL_11:
  if ( a2 != 16 )
  {
    v5 = v59;
    goto LABEL_13;
  }
LABEL_41:
  v58[0] = 0;
  v59 = 18;
  v60 = 1;
LABEL_13:
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1352LL) + 56LL);
  v11 = v5 - 17;
  if ( !v11 )
  {
    v45 = *(_QWORD *)(a1 + 48);
    if ( v45 )
      v46 = *(_DWORD *)(v45 + 60);
    else
      v46 = 0;
    *(_QWORD *)&v52 = v46;
    *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 56);
    v49 = &g_parameters_blcqTp7zoL7zyxbqT$v876RaKVw;
    v47 = 0;
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v13 = *(_QWORD *)(a1 + 48);
    if ( v13 )
      v14 = *(_DWORD *)(v13 + 60);
    else
      v14 = 0;
    *(_QWORD *)&v52 = v14;
    *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 56);
    v49 = &unk_1801D53A4;
    v47 = 1;
LABEL_18:
    v15 = (__int64 *)&v52;
    goto LABEL_19;
  }
  v17 = v12 - 17;
  if ( !v17 )
  {
    v43 = *(_QWORD *)(a1 + 48);
    if ( v43 )
      v44 = *(_DWORD *)(v43 + 60);
    else
      v44 = 0;
    *(_QWORD *)&v52 = v44;
    *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 56);
    v49 = &unk_1801D53A8;
    v47 = 2;
    v50 = v61;
    goto LABEL_18;
  }
  v18 = v17 - 17;
  if ( !v18 )
  {
    LODWORD(v51) = DWORD2(v61);
    v34 = *(_QWORD *)(a1 + 48);
    v50 = v61;
    if ( v34 )
      v35 = *(_DWORD *)(v34 + 60);
    else
      v35 = 0;
    *(_QWORD *)&v52 = v35;
    *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 56);
    v49 = &unk_1801D53AE;
    v47 = 3;
    goto LABEL_18;
  }
  v19 = v18 - 17;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 33;
        if ( v22 )
        {
          if ( v22 != 161 )
          {
            v4 = -2147024809;
            v48 = 1329;
            goto LABEL_56;
          }
          v29 = *(_QWORD *)(a1 + 48);
          v54 = v61;
          v55 = v62;
          v56 = v63;
          v57 = v64;
          if ( v29 )
            v30 = *(_DWORD *)(v29 + 60);
          else
            v30 = 0;
          v50 = v30;
          v51 = *(unsigned int *)(a1 + 56);
          v49 = &unk_1801D53CC;
          v47 = 8;
          goto LABEL_32;
        }
        v23 = *(_QWORD *)(a1 + 48);
        v52 = v61;
        v53 = v62;
        if ( v23 )
          v24 = *(_DWORD *)(v23 + 60);
        else
          v24 = 0;
        v25 = v24;
        v26 = 7;
        v50 = v25;
        v51 = *(unsigned int *)(a1 + 56);
        v27 = &unk_1801D53C6;
      }
      else
      {
        v37 = *(_QWORD *)(a1 + 48);
        v52 = v61;
        if ( v37 )
          v38 = *(_DWORD *)(v37 + 60);
        else
          v38 = 0;
        v39 = v38;
        v26 = 6;
        v50 = v39;
        v51 = *(unsigned int *)(a1 + 56);
        v27 = &unk_1801D53C0;
      }
    }
    else
    {
      v31 = *(_QWORD *)(a1 + 48);
      v52 = v61;
      if ( v31 )
        v32 = *(_DWORD *)(v31 + 60);
      else
        v32 = 0;
      v33 = v32;
      v26 = 5;
      v50 = v33;
      v51 = *(unsigned int *)(a1 + 56);
      v27 = &unk_1801D53BA;
    }
  }
  else
  {
    v40 = *(_QWORD *)(a1 + 48);
    v52 = v61;
    if ( v40 )
      v41 = *(_DWORD *)(v40 + 60);
    else
      v41 = 0;
    v42 = v41;
    v26 = 4;
    v50 = v42;
    v51 = *(unsigned int *)(a1 + 56);
    v27 = &unk_1801D53B4;
  }
  v49 = v27;
  v47 = v26;
LABEL_32:
  v15 = &v50;
LABEL_19:
  v4 = CoreUICallSend(v10, v15, 2LL, 0LL, v47, v49);
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
  {
    v48 = 1340;
LABEL_56:
    v36 = v4;
    goto LABEL_57;
  }
  return 0;
}
