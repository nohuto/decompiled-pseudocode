/*
 * XREFs of ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x18028C370
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1802908F0 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 *     ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1802A8630 (-v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::v_NavigateFromChildIndex(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF

  v10[0] = 0LL;
  v5 = a3;
  if ( a4 != 5 )
  {
    if ( a4 == 6 && a3 )
    {
      do
      {
        --v5;
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v10, (__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v5));
        v8 = v10[0];
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 160LL))(v10[0], a5) )
          goto LABEL_6;
      }
      while ( v5 );
    }
LABEL_12:
    *a2 = 0LL;
    goto LABEL_13;
  }
  if ( a3 >= *(_QWORD *)(a1 + 24) - 1LL )
    goto LABEL_12;
  while ( 1 )
  {
    ++v5;
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v10, (__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v5));
    v8 = v10[0];
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10[0] + 160LL))(v10[0], a5) )
      break;
    if ( v5 >= *(_QWORD *)(a1 + 24) - 1LL )
      goto LABEL_12;
  }
LABEL_6:
  *a2 = 0LL;
  if ( a2 != v10 )
  {
    v10[0] = 0LL;
    *a2 = v8;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return a2;
}
