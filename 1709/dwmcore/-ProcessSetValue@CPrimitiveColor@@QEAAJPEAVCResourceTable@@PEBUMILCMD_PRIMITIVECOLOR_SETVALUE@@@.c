/*
 * XREFs of ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x180174A2C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1800B62CC (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::ProcessSetValue(
        CPrimitiveColor *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVECOLOR_SETVALUE *a3)
{
  if ( *((float *)this + 28) != *((float *)a3 + 2)
    || *((float *)this + 29) != *((float *)a3 + 3)
    || *((float *)this + 30) != *((float *)a3 + 4)
    || *((float *)this + 31) != *((float *)a3 + 5) )
  {
    *((_OWORD *)this + 7) = *(_OWORD *)((char *)a3 + 8);
    CPrimitiveColor::OnColorChanged(this);
  }
  return 0LL;
}
