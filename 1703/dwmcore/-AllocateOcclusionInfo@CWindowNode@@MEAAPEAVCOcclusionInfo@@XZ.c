/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ @ 0x18004FF30
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

struct COcclusionInfo *__fastcall CWindowNode::AllocateOcclusionInfo(CWindowNode *this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = operator new(0x28uLL);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  memset_0(v1, 0, 0x28uLL);
  *v2 = &CWindowOcclusionInfo::`vftable';
  return (struct COcclusionInfo *)v2;
}
