/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x180074E80
 * Callers:
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800776F0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewResource,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  _OWORD *v8; // rcx
  int v9; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v3 )
  {
    if ( v6 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x88u, 1, a2);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xC0u);
    }
    else
    {
      v8 = (_OWORD *)(*(_QWORD *)a1 + 136 * v3);
      *v8 = *(_OWORD *)a2;
      v8[1] = *(_OWORD *)(a2 + 16);
      v8[2] = *(_OWORD *)(a2 + 32);
      v8[3] = *(_OWORD *)(a2 + 48);
      v8[4] = *(_OWORD *)(a2 + 64);
      v8[5] = *(_OWORD *)(a2 + 80);
      v8[6] = *(_OWORD *)(a2 + 96);
      v8 += 8;
      *(v8 - 1) = *(_OWORD *)(a2 + 112);
      *(_QWORD *)v8 = *(_QWORD *)(a2 + 128);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xB5u);
  }
  return v7;
}
