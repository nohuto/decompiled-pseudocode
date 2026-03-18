/*
 * XREFs of ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x18013F5A4
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180131310 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18013F2FC (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::FindDDAExcludeVisual(CComposition *this, struct CVisual *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 254);
  for ( result = 0LL; (unsigned int)result < v2; result = (unsigned int)(result + 1) )
  {
    if ( *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 124) + 8 * result) + 8LL) == a2 )
      break;
  }
  return result;
}
