/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C0174A70
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00436DC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C00A6F38 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0170DDC (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     DmmGetClientVidPnTargetModeInfo @ 0x1C01D4F9C (DmmGetClientVidPnTargetModeInfo.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(__int64 a1, unsigned int a2, unsigned __int64 *a3, _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _DWORD v32[4]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+80h] [rbp+18h] BYREF
  int v35; // [rsp+84h] [rbp+1Ch]

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 902LL;
    WdLogEvent5_WdAssertion(v12);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*(_DWORD *)(a1 + 300) & 0x100) == 0 )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(*(ADAPTER_DISPLAY **)(a1 + 2280), (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                               (DXGADAPTER *)a1,
                                               (unsigned int)v5,
                                               &v33);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_9;
      v21 = v33;
      if ( v33 == -1 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        *(_QWORD *)(v22 + 24) = 932LL;
        WdLogEvent5_WdAssertion(v22);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(a1 + 2280), v21);
      if ( !DisplayModeInfo )
      {
        v26 = WdLogNewEntry5_WdError(v24, v23);
        *(_QWORD *)(v26 + 24) = v21;
        *(_QWORD *)(v26 + 32) = a1;
        WdLogEvent5_WdError(v26);
        return 3221225485LL;
      }
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(
                                               a1,
                                               (unsigned int)v5,
                                               0LL,
                                               0LL,
                                               0LL,
                                               &v33,
                                               &v34,
                                               v32);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_9:
        v20 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v20 + 24) = v5;
        *(_QWORD *)(v20 + 32) = a1;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        memset(a4, 0, 0x2CuLL);
        a4[5] = v34;
        a4[6] = v35;
        a4[8] = *((_DWORD *)DisplayModeInfo + 2);
        a4[9] = v32[0];
        a4[10] = v32[1];
        if ( v33 != *((_DWORD *)DisplayModeInfo + 6) )
        {
          v31 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
          *(_QWORD *)(v31 + 24) = 958LL;
          WdLogEvent5_WdAssertion(v31);
        }
        switch ( *((_DWORD *)DisplayModeInfo + 6) )
        {
          case 2:
            a4[7] = 4;
            break;
          case 3:
            a4[7] = 3;
            break;
          case 0xFF:
            a4[7] = 0;
            break;
          default:
            a4[7] = 2;
            break;
        }
      }
    }
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
