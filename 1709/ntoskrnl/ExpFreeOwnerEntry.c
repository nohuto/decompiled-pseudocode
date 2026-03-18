/*
 * XREFs of ExpFreeOwnerEntry @ 0x140112FB0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 */

void __fastcall ExpFreeOwnerEntry(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int64 v4; // rdi

  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( (v2 & 2) != 0 )
  {
    v4 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v4 & 3) != 0 )
  {
    goto LABEL_12;
  }
  if ( !v4 )
  {
LABEL_12:
    *(_QWORD *)a1 = 0LL;
    return;
  }
  if ( (v2 & 1) != 0 )
  {
    LOBYTE(a2) = 1;
    PsBoostThreadIo(v4, a2);
    *(_DWORD *)(a1 + 8) &= ~1u;
  }
  if ( (*(_DWORD *)(a1 + 8) & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 1804));
    *(_DWORD *)(a1 + 8) &= ~4u;
  }
  if ( (*(_DWORD *)(a1 + 8) & 2) != 0 )
  {
    ObDereferenceObjectDeferDelete((PVOID)v4);
    *(_DWORD *)(a1 + 8) &= ~2u;
  }
  *(_QWORD *)a1 = 0LL;
}
