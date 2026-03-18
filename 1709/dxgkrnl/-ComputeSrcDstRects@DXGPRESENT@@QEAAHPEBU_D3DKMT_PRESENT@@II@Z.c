/*
 * XREFs of ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00FD014
 * Callers:
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00FC650 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00FCB10 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00F2794 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C00FD180 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::ComputeSrcDstRects(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        LONG a3,
        LONG a4)
{
  struct tagRECT *v4; // rdi
  int v6; // r10d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  LONG bottom; // r11d
  LONG right; // edx
  LONG v12; // r8d
  LONG v13; // ecx
  LONG v14; // r10d
  LONG v15; // r9d
  LONG v16; // r11d
  unsigned __int16 v17; // ax

  this[8].top = 0;
  v4 = this + 8;
  v6 = this[2].left - this[1].right;
  this[8].left = 0;
  this[8].right = v6;
  this[8].bottom = this[2].top - this[1].bottom;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0 && !DXGPRESENT::IntersectRect(v4, &a2->DstRect, v4) )
      return 0LL;
    this[9] = *v4;
  }
  else
  {
    this[9].top = 0;
    this[9].left = 0;
    this[9].right = a3;
    this[9].bottom = a4;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          this + 9,
                          v4,
                          (const struct tagRECT *)((unsigned __int64)&a2->SrcRect & -(__int64)((*(_DWORD *)&a2->Flags.0 & 0x80u) != 0)),
                          (const struct tagRECT *)((unsigned __int64)&a2->DstRect & -(__int64)((a2->Flags.Value & 0x40) != 0))) )
      return 0LL;
  }
  bottom = this[8].bottom;
  right = this[1].right;
  v12 = right + v4->left;
  v13 = this[1].bottom;
  v14 = right + this[8].right;
  v15 = v13 + this[8].top;
  v4->left = v12;
  v16 = v13 + bottom;
  this[8].top = v15;
  this[8].right = v14;
  this[8].bottom = v16;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    v17 = this[26].bottom;
    if ( v17 > 1u )
    {
      v4->left = v12 * v17;
      this[8].top = v15 * v17;
      this[8].right = v14 * v17;
      this[8].bottom = v16 * v17;
    }
  }
  return 1LL;
}
