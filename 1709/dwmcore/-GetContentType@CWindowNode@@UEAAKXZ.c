/*
 * XREFs of ?GetContentType@CWindowNode@@UEAAKXZ @ 0x180178B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentType@CVisual@@UEAAKXZ @ 0x18016FC40 (-GetContentType@CVisual@@UEAAKXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentType(CWindowNode *this)
{
  __int64 v1; // rdi
  int v2; // ebx

  v2 = 0;
  if ( *((_QWORD *)this + 115) )
  {
    v2 = 1;
  }
  else if ( *((_QWORD *)this + 118) )
  {
    v2 = 2;
  }
  v1 = *((_QWORD *)this + 98);
  return (v2 << 16) | (v1 != 0 ? 0x100 : 0) | (unsigned int)CVisual::GetContentType(this);
}
