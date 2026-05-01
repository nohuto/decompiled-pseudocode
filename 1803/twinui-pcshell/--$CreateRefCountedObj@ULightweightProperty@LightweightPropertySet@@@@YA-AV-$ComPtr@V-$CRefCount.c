/*
 * XREFs of ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18004EA40
 * Callers:
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x18004FCE0 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1801E22B0 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[2] = 0LL;
    v2[1] = 0LL;
    *((_DWORD *)v2 + 4) = 0;
    *v2 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
    *((_DWORD *)v2 + 6) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = v2;
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  return a1;
}
