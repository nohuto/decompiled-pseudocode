/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0126B60
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C011C230 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0124E80 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  CTouchProcessor *v6; // rcx

  v6 = (CTouchProcessor *)(*((_QWORD *)a2 + 12) + 608LL * a3);
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        *(_DWORD *)v6 |= 0x2000000u;
        break;
      case 586:
        *(_DWORD *)v6 |= 0x20000000u;
        break;
      case 593:
        *((_DWORD *)v6 + 1) |= 2u;
        break;
      case 594:
        *((_DWORD *)v6 + 1) |= 0x20u;
        break;
      default:
        *(_DWORD *)v6 |= 0x200000u;
        break;
    }
  }
  else if ( a6 )
  {
    switch ( a4 )
    {
      case 585:
        *(_DWORD *)v6 |= 0x1000000u;
        break;
      case 586:
        *(_DWORD *)v6 |= 0x10000000u;
        break;
      case 593:
        *((_DWORD *)v6 + 1) |= 1u;
        break;
      case 594:
        *((_DWORD *)v6 + 1) |= 0x10u;
        break;
      default:
        *(_DWORD *)v6 |= 0x100000u;
        break;
    }
  }
  else
  {
    switch ( a4 )
    {
      case 585:
        *(_DWORD *)v6 |= 0x4000000u;
        break;
      case 586:
        *(_DWORD *)v6 |= 0x40000000u;
        break;
      case 593:
        *((_DWORD *)v6 + 1) |= 4u;
        break;
      case 594:
        *((_DWORD *)v6 + 1) |= 0x40u;
        break;
      default:
        *(_DWORD *)v6 |= 0x400000u;
        break;
    }
  }
  CTouchProcessor::ReevaluateQFrameHasDelegation(v6, a2, *((_DWORD *)v6 + 2));
}
