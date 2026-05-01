/*
 * XREFs of ?KeyDown@CSwitchItemGrid@@UEAA_NIW4ModifierKeys@@@Z @ 0x18028F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x18028F1F0 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z @ 0x180290390 (-_GetNavDirFromKey@CSwitchItemGrid@@AEAAIIW4ModifierKeys@@@Z.c)
 */

char __fastcall CSwitchItemGrid::KeyDown(_QWORD *a1, int a2)
{
  char v2; // di
  __int64 v4; // rcx
  __int64 NavDirFromKey; // rbp
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 *v8; // rax
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  if ( a2 == 9 || (unsigned int)(a2 - 37) <= 3 )
  {
    NavDirFromKey = (unsigned int)CSwitchItemGrid::_GetNavDirFromKey();
    (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*a1 + 272LL))(
      a1,
      &v11,
      a1[21],
      NavDirFromKey,
      0);
    if ( v11
      || (v6 = *a1,
          v7 = ElementHelpers::MapToChildNavDir((ElementHelpers *)(unsigned int)NavDirFromKey, 0),
          v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, _QWORD, _DWORD))(v6 + 272))(
                            a1,
                            v10,
                            0LL,
                            v7,
                            0),
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(&v11, v8),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10),
          v11) )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
    }
    v2 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    v4 = a1[21];
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4);
  }
  return v2;
}
