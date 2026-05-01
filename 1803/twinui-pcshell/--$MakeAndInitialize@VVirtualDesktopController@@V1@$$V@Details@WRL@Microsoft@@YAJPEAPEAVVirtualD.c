/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x1802600D8
 * Callers:
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180261574 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0VirtualDesktopController@@QEAA@XZ @ 0x18026016C (--0VirtualDesktopController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x180260A2C (-InternalRelease@-$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopController,VirtualDesktopController,>(
        VirtualDesktopController **a1)
{
  unsigned int v1; // ebx
  VirtualDesktopController *v3; // rax
  VirtualDesktopController *v4; // rax
  volatile int *v5; // rdx
  VirtualDesktopController *v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  VirtualDesktopController *v10; // [rsp+30h] [rbp+8h] BYREF
  VirtualDesktopController *v11; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (VirtualDesktopController *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v3;
  if ( v3 )
  {
    v4 = VirtualDesktopController::VirtualDesktopController(v3);
    v10 = v4;
    v6 = v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 8);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_10:
    *a1 = v6;
    Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
