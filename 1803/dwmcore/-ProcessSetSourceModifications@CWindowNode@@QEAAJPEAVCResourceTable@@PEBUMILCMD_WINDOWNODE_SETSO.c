/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800935E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x1800115D8 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x1800937A0 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  int v3; // r9d
  struct _D3DCOLORVALUE *v4; // rdi
  __int128 v6; // xmm1
  char v8; // r10
  bool v9; // zf
  int v10; // eax
  char v11; // r9
  int v12; // eax
  __int64 v14; // rcx
  __int64 i; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  _OWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+68h] [rbp-10h]

  v3 = *((_DWORD *)this + 209);
  v4 = (struct _D3DCOLORVALUE *)((char *)this + 784);
  v6 = *((_OWORD *)this + 50);
  v18[0] = *((_OWORD *)this + 49);
  v8 = (v3 & 2) != 0;
  v9 = (*((_BYTE *)a3 + 8) & 2) == 0;
  v18[1] = v6;
  v19 = *((_DWORD *)this + 204);
  if ( v9 )
  {
    LOBYTE(v20) = 0;
    v10 = v20;
    *(_OWORD *)&v4->r = _xmm;
    *((_OWORD *)this + 50) = 0LL;
    *((_DWORD *)this + 204) = v10;
  }
  else
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), v4);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 4), (struct _D3DCOLORVALUE *)this + 50);
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
      *((_BYTE *)this + 816) = 1;
    v3 = *((_DWORD *)this + 209);
  }
  v11 = (v3 & 2) != 0;
  *((_BYTE *)this + 922) = *((_DWORD *)a3 + 5) != 0;
  if ( v8 != v11 || !(unsigned __int8)CColorKey::operator==(v18, v4) )
  {
    v14 = *((_QWORD *)this + 90);
    if ( v14 )
    {
      LOBYTE(a2) = v11;
      (*(void (__fastcall **)(__int64, struct CResourceTable *, struct _D3DCOLORVALUE *))(*(_QWORD *)v14 + 216LL))(
        v14,
        a2,
        v4);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 188); i = (unsigned int)(i + 1) )
    {
      v16 = *((_DWORD *)this + 209) >> 1;
      LOBYTE(v16) = (*((_DWORD *)this + 209) & 2) != 0;
      v17 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v17 + 216LL))(v17, v16, v4);
    }
  }
  v9 = (unsigned __int8)CColorKey::operator==(v4, v18) == 0;
  v12 = *((_DWORD *)a3 + 2);
  if ( v9 || *((_DWORD *)this + 209) != v12 )
  {
    *((_DWORD *)this + 209) = v12;
    CVisual::PropagateFlags((__int64)this, 4u, 0);
  }
  return 0LL;
}
