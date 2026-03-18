/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C0199EA8
 * Callers:
 *     DelegateCoalescePointerMessage @ 0x1C01C9AC4 (DelegateCoalescePointerMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PointerFrameList::SetPointerInfoNodeDelegateAction(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2,
        int a3,
        int a4,
        int a5)
{
  _DWORD *v5; // rdx

  v5 = (_DWORD *)(*((_QWORD *)this + 11) + 216LL * (unsigned int)a2);
  if ( a4 )
  {
    switch ( a3 )
    {
      case 585:
        *v5 |= 0x2000000u;
        break;
      case 586:
        *v5 |= 0x20000000u;
        break;
      case 593:
        v5[1] |= 2u;
        break;
      case 594:
        v5[1] |= 0x20u;
        break;
      default:
        *v5 |= 0x200000u;
        break;
    }
  }
  else if ( a5 )
  {
    switch ( a3 )
    {
      case 585:
        *v5 |= 0x1000000u;
        break;
      case 586:
        *v5 |= 0x10000000u;
        break;
      case 593:
        v5[1] |= 1u;
        break;
      case 594:
        v5[1] |= 0x10u;
        break;
      default:
        *v5 |= 0x100000u;
        break;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 585:
        *v5 |= 0x4000000u;
        break;
      case 586:
        *v5 |= 0x40000000u;
        break;
      case 593:
        v5[1] |= 4u;
        break;
      case 594:
        v5[1] |= 0x40u;
        break;
      default:
        *v5 |= 0x400000u;
        break;
    }
  }
  ReevaluateQFrameHasDelegation(this, v5[2]);
}
