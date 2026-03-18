/*
 * XREFs of ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z @ 0x18017AAD8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBlendEffect::ProcessUpdate(
        CBlendEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_BLENDEFFECT *a3)
{
  int v4; // ebx

  v4 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CBlendEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 44) = v4;
  (*(void (__fastcall **)(CBlendEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
