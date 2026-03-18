/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C008C7A8
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0019AFC (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00149CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0017F70 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  int v8; // esi
  _DWORD *v9; // rax

  v8 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x800002u;
    v8 = 0;
    *(_DWORD *)(a1 + 88) = 1065353216;
    *(_DWORD *)(a1 + 92) = 1065353216;
    v9 = Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76634344u);
    if ( v9 )
      v9[2] = 0;
    *(_QWORD *)(a1 + 240) = v9;
    if ( v9 )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
      *(_DWORD *)(*(_QWORD *)(a1 + 240) + 12LL) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 240) + 8LL) = a3;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
