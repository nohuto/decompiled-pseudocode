/*
 * XREFs of ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x18019C4A8
 * Callers:
 *     ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ @ 0x1801695B0 (-HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ @ 0x1801A1DA0 (-HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::HandledDeltaCurrentInteraction(CInteractionProcessor *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  int v6; // ecx
  bool v7; // zf

  v2 = *((_DWORD *)this + 149) - 1;
  if ( !v2 )
  {
    result = 1LL;
    if ( (*((_BYTE *)this + 16) & 3) != 0 && (*((_BYTE *)this + 616) & 1) != 0
      || (*((_BYTE *)this + 16) & 0xC) != 0 && (*((_BYTE *)this + 616) & 2) != 0 )
    {
      return result;
    }
    v7 = (*((_BYTE *)this + 16) & 0x30) == 0;
    goto LABEL_19;
  }
  v3 = v2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 149), 1u);
      return 0LL;
    }
    if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
      return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 149), 1u);
    v6 = *((_DWORD *)this + 84);
  }
  else
  {
    v6 = *((_DWORD *)this + 44);
  }
  result = 1LL;
  if ( ((v6 & 3) == 0 || (*((_BYTE *)this + 616) & 1) == 0) && ((v6 & 0xC) == 0 || (*((_BYTE *)this + 616) & 2) == 0) )
  {
    v7 = (v6 & 0x30) == 0;
LABEL_19:
    if ( v7 || (*((_BYTE *)this + 616) & 4) == 0 )
      return 0LL;
  }
  return result;
}
