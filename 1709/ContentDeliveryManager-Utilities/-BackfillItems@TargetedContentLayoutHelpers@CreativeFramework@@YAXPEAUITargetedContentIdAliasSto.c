/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x18008F6F8
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r12
  char v10; // cl
  _BYTE *v11; // r15
  __int64 v12; // rax
  int v13; // eax
  volatile signed __int32 *v14; // rbx
  unsigned __int64 v15; // rax
  const WCHAR *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v19; // [rsp+40h] [rbp-31h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-29h]
  const WCHAR *v21[2]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v22; // [rsp+60h] [rbp-11h]
  __int64 v23; // [rsp+68h] [rbp-9h]
  _BYTE v24[32]; // [rsp+70h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v23 = -2LL;
  v22 = a3;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  if ( (a2[1] - *a2) >> 4 )
  {
    while ( v6 < (a3[1] - *a3) / 56LL )
    {
      v8 = *a3 + 56 * v6;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        &v19,
        (__int64 *)(v7 + 16 * v5));
      v9 = v19;
      v10 = *(_BYTE *)(v19 + 48);
      if ( v10 || (v11 = (_BYTE *)(v8 + 48), *(_BYTE *)(v8 + 48)) )
      {
        v15 = v5 + 1;
        if ( !v10 )
          v15 = v5;
        v5 = v15;
        v16 = (const WCHAR *)(v6 + 1);
        if ( !*(_BYTE *)(v8 + 48) )
          v16 = (const WCHAR *)v6;
        v6 = (unsigned __int64)v16;
        v21[1] = v16;
        if ( v20 )
        {
          if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
          {
            v17 = v20;
            (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          }
        }
        v4 = a1;
      }
      else
      {
        if ( *(_QWORD *)(v8 + 24) >= 8uLL )
          v8 = *(_QWORD *)v8;
        v21[0] = (const WCHAR *)v8;
        v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, v21);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 48LL))(
                v4,
                *(_QWORD *)(v12 + 24),
                *(_QWORD *)v9,
                *(_QWORD *)(v9 + 8));
        if ( v13 < 0 )
        {
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v13);
          return;
        }
        *(_BYTE *)(v9 + 48) = 1;
        *v11 = 1;
        ++v5;
        ++v6;
        if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = v20;
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      v7 = *a2;
      if ( v5 >= (a2[1] - *a2) >> 4 )
        return;
      a3 = v22;
    }
  }
}
