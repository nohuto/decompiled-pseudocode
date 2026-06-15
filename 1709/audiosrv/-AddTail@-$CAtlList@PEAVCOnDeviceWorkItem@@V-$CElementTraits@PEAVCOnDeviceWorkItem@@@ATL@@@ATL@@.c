/*
 * XREFs of ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180009DC0
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x180009EF4 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18002C738 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x180062F20 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180013260 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  struct ATL::CAtlPlex *v5; // r8
  int v6; // edx
  _QWORD *i; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v5 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    v6 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v5 + 16 * (v6 - 1) + 8 * (unsigned int)(v6 - 1) + 8); --v6 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  v8 = *(_QWORD **)(a1 + 32);
  v9 = *v8;
  if ( v8 )
    v8[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *v8 = 0LL;
  v8[1] = v3;
  ++*(_QWORD *)(a1 + 16);
  v10 = *(_QWORD **)(a1 + 8);
  if ( v10 )
    *v10 = v8;
  else
    *(_QWORD *)a1 = v8;
  result = v8;
  *(_QWORD *)(a1 + 8) = v8;
  return result;
}
