/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x180070570
 * Callers:
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180073B60 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewResource,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  int v7; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 136, 1, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 136 * v2);
      *v6 = *(_OWORD *)a2;
      v6[1] = *(_OWORD *)(a2 + 16);
      v6[2] = *(_OWORD *)(a2 + 32);
      v6[3] = *(_OWORD *)(a2 + 48);
      v6[4] = *(_OWORD *)(a2 + 64);
      v6[5] = *(_OWORD *)(a2 + 80);
      v6[6] = *(_OWORD *)(a2 + 96);
      v6 += 8;
      *(v6 - 1) = *(_OWORD *)(a2 + 112);
      *(_QWORD *)v6 = *(_QWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xB5u);
  }
  return v5;
}
