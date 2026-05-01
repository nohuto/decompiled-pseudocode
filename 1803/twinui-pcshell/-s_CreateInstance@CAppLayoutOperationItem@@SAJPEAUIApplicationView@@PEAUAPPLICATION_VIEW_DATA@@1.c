/*
 * XREFs of ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803163A8
 * Callers:
 *     ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18030FFB4 (-_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANI.c)
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x180310124 (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180315F34 (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 */

__int64 __fastcall CAppLayoutOperationItem::s_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        _QWORD *a12)
{
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edi
  _QWORD v17[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+80h] [rbp+20h] BYREF
  __int64 v19; // [rsp+88h] [rbp+28h] BYREF
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF

  v20 = a3;
  v19 = a2;
  v18 = a1;
  v12 = a12;
  v17[1] = a5;
  v17[2] = a6;
  v13 = a7;
  *a12 = 0LL;
  v17[3] = v13;
  v17[0] = a4;
  Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    (__int64 *)&a12,
    &v18,
    &v19,
    &v20,
    (__int64)v17,
    &a8,
    &a9,
    &a10);
  v14 = (__int64)a12;
  v15 = a12 == 0LL ? 0x8007000E : 0;
  if ( a12 )
    v15 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a12)(
            a12,
            &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
            v12);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v15;
}
