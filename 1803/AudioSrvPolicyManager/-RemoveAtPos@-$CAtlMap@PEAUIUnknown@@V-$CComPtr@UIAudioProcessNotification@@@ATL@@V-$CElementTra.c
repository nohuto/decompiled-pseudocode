/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017C34
 * Callers:
 *     _ATL::CAtlMap_IUnknown_____ptr64_ATL::CComPtr_IAudioProcessNotification__ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_ATL::CComPtr_IAudioProcessNotification_____::SetAt_::_1_::catch$0 @ 0x1800370E9 (_ATL--CAtlMap_IUnknown_____ptr64_ATL--CComPtr_IAudioProcessNotification__ATL--CElementTraits_IUn.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::RemoveAtPos(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *((_DWORD *)a1 + 4));
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * v4);
  if ( a2 == v6 )
    goto LABEL_7;
  for ( i = *(_QWORD *)(v6 + 16); i != a2; i = *(_QWORD *)(i + 16) )
    v6 = i;
  if ( v6 )
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(a2 + 16);
  else
LABEL_7:
    *(_QWORD *)(v5 + 8 * v4) = *(_QWORD *)(a2 + 16);
  return ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::FreeNode(
           a1,
           a2);
}
