/*
 * XREFs of ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18002457C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x180017694 (--1CButton@@MEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAtlasImage(CAtlasedRectsVisual *this, struct CAtlasedImage *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  __int64 i; // r8
  __int64 v6; // rcx
  void (__fastcall *v7)(CVisual *__hidden, unsigned int); // rax

  v2 = *((_QWORD *)this + 30);
  v4 = *((_DWORD *)this + 66);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct CAtlasedImage **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v4 )
  {
    for ( ; (unsigned int)i < v4 - 1; v4 = *((_DWORD *)this + 66) )
    {
      v6 = (unsigned int)i;
      LODWORD(i) = i + 1;
      *(_QWORD *)(v2 + 8 * v6) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
    }
    *((_DWORD *)this + 66) = v4 - 1;
  }
  *((_QWORD *)a2 + 10) = 0LL;
  CBaseObject::Release(a2);
  v7 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v7 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x2000u);
  else
    v7(this, 0x2000u);
}
