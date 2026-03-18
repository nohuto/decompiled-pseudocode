/*
 * XREFs of ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180013804
 * Callers:
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180013948 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this, unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax

  v2 = *((_QWORD *)this + 9);
  if ( (v2 & 2) != 0 )
    v3 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *((_QWORD *)this + 9) & 1LL;
  if ( v3 <= a2 )
    return 0LL;
  else
    return (struct CVisual *)CPtrArrayBase::operator[]();
}
