/*
 * XREFs of InvokeMovePoint @ 0x1C02C939C
 * Callers:
 *     itrp_ALIGNPTS @ 0x1C02C9AD0 (itrp_ALIGNPTS.c)
 *     itrp_ALIGNRP @ 0x1C02C9D60 (itrp_ALIGNRP.c)
 *     itrp_DeltaEngine @ 0x1C02CAB5C (itrp_DeltaEngine.c)
 *     itrp_IP @ 0x1C02CCA70 (itrp_IP.c)
 *     itrp_MDAP @ 0x1C02CF180 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02CF860 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02CFC80 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D05B0 (itrp_MSIRP.c)
 *     itrp_WC @ 0x1C02D49E0 (itrp_WC.c)
 * Callees:
 *     itrp_ChangeCvtSlow @ 0x1C02CA614 (itrp_ChangeCvtSlow.c)
 *     itrp_MovePoint @ 0x1C02D0A54 (itrp_MovePoint.c)
 */

void __fastcall InvokeMovePoint(int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx

  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = (unsigned int)(v6 - 1);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 1 )
            itrp_ChangeCvtSlow(v7, a3, a4);
          else
            EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(qword_1C0327C90 + 16) + 4LL * (int)a3) += a4;
        }
      }
      else
      {
        *(_DWORD *)(a2[1] + 4LL * (int)a3) += a4;
        *(_BYTE *)(a2[9] + (int)a3) |= 2u;
      }
    }
    else
    {
      *(_DWORD *)(*a2 + 4LL * (int)a3) += a4;
      *(_BYTE *)(a2[9] + (int)a3) |= 1u;
    }
  }
  else
  {
    itrp_MovePoint(a2, a3, a4);
  }
}
