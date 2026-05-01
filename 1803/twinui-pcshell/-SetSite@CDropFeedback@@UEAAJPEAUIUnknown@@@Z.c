/*
 * XREFs of ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1802EEF00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x1802EF63C (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropFeedback::SetSite(CDropFeedback *this, struct IUnknown *a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !a2 && *((_QWORD *)this + 2) )
  {
    v4 = (__int64 *)((char *)this + 128);
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    }
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 128LL))(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
    }
    DestroyWindow(*((HWND *)this + 8));
    CDropFeedback::_SetThreadPriority(this, 0);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v7, (__int64)&DropFeedback_Hide_Info);
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)this + 2, (CWinRTApplicationView *)a2);
  return 0LL;
}
