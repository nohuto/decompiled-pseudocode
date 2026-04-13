/*
 * XREFs of ?FillInItemsWithBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x18008F540
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::FillInItemsWithBindings(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  double v13; // xmm1_8
  double v14; // xmm2_8
  const WCHAR *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  const WCHAR *v18; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  _BYTE v21[32]; // [rsp+48h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v20 = -2LL;
  v19 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  if ( (a2[1] - *a2) >> 4 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      v10 = *a3;
      if ( v6 >= (a3[1] - *a3) / 56 )
        return;
      v11 = v9 + v10;
      v12 = *(_QWORD *)(v8 + v7);
      v13 = *(double *)(v9 + v10 + 32);
      v14 = *(double *)(v12 + 32);
      if ( v13 == v14 && (!*(_BYTE *)(v12 + 18) || *(double *)(v11 + 40) == *(double *)(v12 + 40)) )
      {
        if ( *(_QWORD *)(v11 + 24) < 8uLL )
          v15 = (const WCHAR *)(v9 + v10);
        else
          v15 = *(const WCHAR **)v11;
        v18 = v15;
        v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, &v18);
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 48LL))(
                v19,
                *(_QWORD *)(v16 + 24),
                **(_QWORD **)(v8 + v7),
                *(_QWORD *)(*(_QWORD *)(v8 + v7) + 8LL));
        if ( v17 < 0 )
        {
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x6C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v17);
          return;
        }
        *(_BYTE *)(*(_QWORD *)(v8 + v7) + 48LL) = 1;
        *(_BYTE *)(v11 + 48) = 1;
        ++v5;
        v8 += 16LL;
      }
      else if ( v14 <= v13 && (v13 != v14 || *(double *)(v12 + 40) <= *(double *)(v11 + 40)) )
      {
        if ( v13 > v14 || v13 == v14 && *(double *)(v11 + 40) > *(double *)(v12 + 40) )
        {
          ++v5;
          v8 += 16LL;
        }
        goto LABEL_20;
      }
      ++v6;
      v9 += 56LL;
LABEL_20:
      v7 = *a2;
    }
    while ( v5 < (a2[1] - *a2) >> 4 );
  }
}
