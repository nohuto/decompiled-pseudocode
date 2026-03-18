/*
 * XREFs of ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z @ 0x18017AE1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaturationEffect::ProcessUpdate(
        CSaturationEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_SATURATIONEFFECT *a3)
{
  int v5; // [rsp+28h] [rbp-10h]

  v5 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CSaturationEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 44) = v5;
  (*(void (__fastcall **)(CSaturationEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
