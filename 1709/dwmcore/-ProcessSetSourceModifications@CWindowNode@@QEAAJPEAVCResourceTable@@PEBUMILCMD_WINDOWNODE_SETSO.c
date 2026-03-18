/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18009CD2C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18009D000 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x1800BC6A0 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  struct _D3DCOLORVALUE *v3; // rdi
  __int128 v5; // xmm1
  char v6; // r10
  bool v8; // zf
  int v9; // eax
  char v10; // r9
  __int64 v12; // rcx
  __int64 i; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  _OWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+68h] [rbp-10h]

  v3 = (struct _D3DCOLORVALUE *)((char *)this + 848);
  v5 = *((_OWORD *)this + 54);
  v6 = (*((_DWORD *)this + 225) & 2) != 0;
  v8 = (*((_BYTE *)a3 + 8) & 2) == 0;
  v16[0] = *((_OWORD *)this + 53);
  v16[1] = v5;
  v17 = *((_DWORD *)this + 220);
  if ( v8 )
  {
    LOBYTE(v18) = 0;
    v9 = v18;
    *(_OWORD *)&v3->r = _xmm;
    *((_OWORD *)this + 54) = 0LL;
    *((_DWORD *)this + 220) = v9;
  }
  else
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), v3);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 4), (struct _D3DCOLORVALUE *)this + 54);
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
      *((_BYTE *)this + 880) = 1;
  }
  v10 = (*((_DWORD *)this + 225) & 2) != 0;
  *((_BYTE *)this + 1018) = *((_DWORD *)a3 + 5) != 0;
  if ( v6 != v10 || !(unsigned __int8)CColorKey::operator==(v16, v3) )
  {
    v12 = *((_QWORD *)this + 98);
    if ( v12 )
    {
      LOBYTE(a2) = v10;
      (*(void (__fastcall **)(__int64, struct CResourceTable *, struct _D3DCOLORVALUE *))(*(_QWORD *)v12 + 216LL))(
        v12,
        a2,
        v3);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 204); i = (unsigned int)(i + 1) )
    {
      v14 = *((_DWORD *)this + 225) >> 1;
      LOBYTE(v14) = (*((_DWORD *)this + 225) & 2) != 0;
      v15 = *(_QWORD *)(*((_QWORD *)this + 99) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v15 + 216LL))(v15, v14, v3);
    }
  }
  if ( !(unsigned __int8)CColorKey::operator==(v3, v16) || *((_DWORD *)this + 225) != *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 225) = *((_DWORD *)a3 + 2);
    CVisual::PropagateFlags((__int64)this, 4u, 0);
  }
  return 0LL;
}
