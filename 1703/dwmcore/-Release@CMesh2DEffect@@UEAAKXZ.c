/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1801C2070
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800D6940 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CMesh2DEffect@@WBA@EAAKXZ @ 0x1800D6950 (-Release@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBase::Release((CMesh2DEffect *)((char *)this + 16));
}
