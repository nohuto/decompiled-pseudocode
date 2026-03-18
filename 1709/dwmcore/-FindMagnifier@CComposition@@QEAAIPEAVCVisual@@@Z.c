/*
 * XREFs of ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180127F54
 * Callers:
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127C68 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180128ABC (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::FindMagnifier(CComposition *this, struct CVisual *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 238);
  for ( result = 0LL; (unsigned int)result < v2; result = (unsigned int)(result + 1) )
  {
    if ( *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 116) + 8 * result) + 8LL) == a2 )
      break;
  }
  return result;
}
