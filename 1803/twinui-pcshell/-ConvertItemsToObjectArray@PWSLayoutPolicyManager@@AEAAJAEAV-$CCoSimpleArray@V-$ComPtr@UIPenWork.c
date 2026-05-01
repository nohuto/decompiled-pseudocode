/*
 * XREFs of ?ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x18019A794
 * Callers:
 *     ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18019AB60 (-GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::ConvertItemsToObjectArray(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  const struct _GUID *v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v7 = CEnumerableObjectCollection::CreateInstance(v6, v5, &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (_QWORD *)*a2;
    v11 = *a2 + 8LL * a2[1];
    while ( v10 != (_QWORD *)v11 )
    {
      v7 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, *v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 326LL;
        goto LABEL_9;
      }
      ++v10;
    }
    v7 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v14)(
           v14,
           &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
           a3);
    v8 = v7;
    if ( v7 >= 0 )
      goto LABEL_10;
    v9 = 328LL;
  }
  else
  {
    v9 = 323LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v8;
}
