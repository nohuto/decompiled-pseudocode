/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x1800803E0
 * Callers:
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18006A81C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x180082EC4 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180082FA4 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewVisual,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v4 )
  {
    if ( a3 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x28u, 1, a2);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 5 * v4;
      *(_OWORD *)(v7 + 8 * v8) = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 8 * v8 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v7 + 8 * v8 + 32) = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 24) = a3;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  return v6;
}
