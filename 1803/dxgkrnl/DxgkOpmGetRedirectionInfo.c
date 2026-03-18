/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C015C66C
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00418E0 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6BA8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0153C18 (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0212860 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int64 *a3, char *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Numerator; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // ecx
  struct _D3DDDI_RATIONAL v24; // [rsp+40h] [rbp-28h] BYREF
  struct _D3DDDI_RATIONAL v25; // [rsp+70h] [rbp+8h] BYREF
  struct _D3DKMDT_2DREGION v26; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 957LL;
    WdLogEvent5_WdAssertion(v9);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_DWORD *)a1 + 75) & 0x100) == 0 )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(a1[307], (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                               (DXGADAPTER *)a1,
                                               v5,
                                               (unsigned int *)&v25);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_9;
      Numerator = v25.Numerator;
      if ( v25.Numerator == -1 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v16 + 24) = 987LL;
        WdLogEvent5_WdAssertion(v16);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)a1[307], Numerator);
      if ( !DisplayModeInfo )
      {
        v19 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v19 + 24) = Numerator;
        *(_QWORD *)(v19 + 32) = a1;
        WdLogEvent5_WdError(v19);
        return 3221225485LL;
      }
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(
                                               a1,
                                               v5,
                                               0LL,
                                               0LL,
                                               0LL,
                                               (struct _D3DDDI_RATIONAL)&v25,
                                               &v26,
                                               &v24);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_9:
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = v5;
        *(_QWORD *)(v14 + 32) = a1;
        WdLogEvent5_WdError(v14);
      }
      else
      {
        memset(a4, 0, 0x2CuLL);
        *(struct _D3DKMDT_2DREGION *)(a4 + 20) = v26;
        *((_DWORD *)a4 + 8) = *((_DWORD *)DisplayModeInfo + 2);
        *(struct _D3DDDI_RATIONAL *)(a4 + 36) = v24;
        v20 = *((unsigned int *)DisplayModeInfo + 6);
        if ( v25.Numerator != (_DWORD)v20 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v21 + 24) = 1013LL;
          WdLogEvent5_WdAssertion(v21);
          LODWORD(v20) = *((_DWORD *)DisplayModeInfo + 6);
        }
        v22 = v20 - 2;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 252 )
              *((_DWORD *)a4 + 7) = 0;
            else
              *((_DWORD *)a4 + 7) = 2;
          }
          else
          {
            *((_DWORD *)a4 + 7) = 3;
          }
        }
        else
        {
          *((_DWORD *)a4 + 7) = 4;
        }
      }
    }
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
