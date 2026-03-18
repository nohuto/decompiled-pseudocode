/*
 * XREFs of _lambda_8818c77f10d734eae77f8593241f110e_::operator() @ 0x1801A0FE8
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z @ 0x1800BA540 (-GetInputQueueInfo@CInputSinkStruct@@AEBAPEBUInputQueueInfo@1@W4CompositionInputType@@@Z.c)
 */

void __fastcall lambda_8818c77f10d734eae77f8593241f110e_::operator()(
        _BYTE **a1,
        _QWORD *a2,
        int a3,
        _QWORD *a4,
        int a5)
{
  _QWORD *v5; // r11
  _BYTE **v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *InputQueueInfo; // rax
  __int64 v11; // rax

  v5 = a2;
  v6 = a1;
  if ( !*a2 && a3 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)*a1 + 128LL);
    if ( v8 )
      v7 = *(_QWORD *)(v8 + 96);
    *a2 = v7;
  }
  if ( !*a4 )
  {
    v9 = *(_DWORD **)(*(_QWORD *)*v6 + 128LL);
    if ( v9 && (InputQueueInfo = CInputSinkStruct::GetInputQueueInfo(v9, a5)) != 0LL )
      v11 = *((_QWORD *)InputQueueInfo + 1);
    else
      v11 = 0LL;
    *a4 = v11;
  }
  if ( !*v5 && !*a4 )
    *v6[1] = 0;
}
