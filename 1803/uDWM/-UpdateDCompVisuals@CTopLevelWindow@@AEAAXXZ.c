/*
 * XREFs of ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x1800194C4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow::UpdateDCompVisuals(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 90);
  if ( v1 && *(_DWORD *)(v1 + 504) )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 480) + 8 * v3);
      if ( *(_BYTE *)(v4 + 34) )
      {
        CVisual::RenderRecursive(*(CVisual **)(v4 + 96));
        v1 = *((_QWORD *)this + 90);
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v1 + 504) );
  }
}
