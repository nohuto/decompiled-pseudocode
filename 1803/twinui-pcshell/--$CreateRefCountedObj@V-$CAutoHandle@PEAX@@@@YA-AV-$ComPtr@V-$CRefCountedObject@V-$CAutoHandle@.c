/*
 * XREFs of ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x1801021A4
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18010DA20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CreateRefCountedObj<CAutoHandle<void *>>(__int64 *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[1] = 0LL;
    *((_DWORD *)v2 + 4) = 0;
    *v2 = &CRefCountedObject<CAutoHandle<void *>>::`vftable';
  }
  *a1 = (__int64)v2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
