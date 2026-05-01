/*
 * XREFs of GridLayoutFactory::_ForEachGridItem__lambda_2cae5296dae5ab40dba9d7d48bb64224___ @ 0x18029E98C
 * Callers:
 *     ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x18029F614 (-_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_2cae5296dae5ab40dba9d7d48bb64224_::operator() @ 0x18029EB74 (_lambda_2cae5296dae5ab40dba9d7d48bb64224_--operator().c)
 */

__int64 __fastcall GridLayoutFactory::_ForEachGridItem__lambda_2cae5296dae5ab40dba9d7d48bb64224___(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536), &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      v8 = *(_QWORD *)(a1 + 536);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
             v8,
             v7,
             &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932,
             &v13);
      v5 = v9;
      if ( v9 < 0 )
        break;
      v9 = lambda_2cae5296dae5ab40dba9d7d48bb64224_::operator()(a2, v13);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 259LL;
        goto LABEL_11;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( ++v7 >= v12 )
        return 0LL;
    }
    v10 = 258LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    return v5;
  }
  return 0LL;
}
