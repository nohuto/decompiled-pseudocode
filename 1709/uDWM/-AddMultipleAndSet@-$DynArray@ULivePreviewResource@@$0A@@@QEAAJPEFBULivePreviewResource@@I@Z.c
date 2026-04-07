/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x1800698D0
 * Callers:
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18006CDB0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewResource,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _OWORD *v7; // rcx
  int v8; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v4 )
  {
    if ( a3 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x88u, 1, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v7 = (_OWORD *)(*(_QWORD *)a1 + 136 * v4);
      *v7 = *(_OWORD *)a2;
      v7[1] = *(_OWORD *)(a2 + 16);
      v7[2] = *(_OWORD *)(a2 + 32);
      v7[3] = *(_OWORD *)(a2 + 48);
      v7[4] = *(_OWORD *)(a2 + 64);
      v7[5] = *(_OWORD *)(a2 + 80);
      v7[6] = *(_OWORD *)(a2 + 96);
      v7 += 8;
      *(v7 - 1) = *(_OWORD *)(a2 + 112);
      *(_QWORD *)v7 = *(_QWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 24) = a3;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  return v6;
}
