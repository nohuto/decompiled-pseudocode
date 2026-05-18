/*
 * XREFs of ?NewNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x180008110
 * Callers:
 *     ?CreateNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x1800080A8 (-CreateNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager.c)
 * Callees:
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x180007DD0 (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 *     ?PickSize@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEBAI_K@Z @ 0x180007EC4 (-PickSize@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180008278 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::NewNode(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // rbp
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = *(unsigned int *)(a1 + 52);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x30 )
        goto LABEL_8;
      v8 *= 48LL;
    }
    if ( ~v8 >= 8 )
    {
      v9 = malloc(v8 + 8);
      v10 = v9;
      if ( !v9 )
        goto LABEL_18;
      *v9 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v9;
LABEL_9:
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 52);
        for ( i = &v10[6 * (unsigned int)(v11 - 1) + 1]; --v11 >= 0; i -= 6 )
        {
          i[4] = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = i;
        }
        goto LABEL_13;
      }
LABEL_18:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 32);
  *(_DWORD *)v13 = *a2;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 12) = 0;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  *(_DWORD *)(v13 + 40) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 32) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::PickSize(
            a1,
            v14);
    ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::Rehash(
      a1,
      v15);
  }
  return v13;
}
