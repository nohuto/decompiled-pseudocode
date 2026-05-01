/*
 * XREFs of ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18027262C
 * Callers:
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180271220 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180271360 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180271D80 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18027272C (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 */

__int64 __fastcall CMultitaskingViewManager::_FindMTVHost(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  int v7; // ebx
  unsigned __int64 *v9; // rsi
  char v10; // di
  unsigned __int64 v11; // rbp
  __int64 v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // rax

  v7 = a2;
  if ( a4 )
    *a4 = 0LL;
  v9 = a5;
  if ( a5 )
    *a5 = -1LL;
  v10 = 0;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 280) )
  {
    v12 = 0LL;
    do
    {
      if ( v10 )
        break;
      if ( ((unsigned int)CMultitaskingViewManager::s_GetMTVHostType(*(_QWORD *)(v12 + *(_QWORD *)(a1 + 272))) & v7) != 0 )
      {
        if ( a3 != 1
          || ((*(void (__fastcall **)(_QWORD, unsigned __int64 **))(**(_QWORD **)(v12 + *(_QWORD *)(a1 + 272)) + 32LL))(
                *(_QWORD *)(v12 + *(_QWORD *)(a1 + 272)),
                &a5),
              (_DWORD)a5) )
        {
          v10 = 1;
          if ( a4 )
          {
            v13 = (__int64 *)(v12 + *(_QWORD *)(a1 + 272));
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v13);
            v14 = *v13;
            v7 = a2;
            *a4 = v14;
          }
          if ( v9 )
            *v9 = v11;
        }
      }
      ++v11;
      v12 += 16LL;
    }
    while ( v11 < *(_QWORD *)(a1 + 280) );
  }
  return v10 == 0 ? 0x8002802B : 0;
}
