/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014120
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180017800 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18007EF84 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F0B4 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180016C70 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // r14
  int *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-10h] BYREF
  int v11; // [rsp+40h] [rbp+8h]

  v3 = 0;
  try
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = (_QWORD *)(v4 - 24);
    v6 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)(v4 - 24) != v6 )
    {
      if ( *((int *)v6 + 4) >= 0 && *v5 == *(_QWORD *)v6 )
      {
        v7 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v5);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *a2 = v7 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *(unsigned int *)(v4 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v10 )
  {
    v9 = (int *)v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v11 = *v9;
    v3 = *v9;
    if ( v11 < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::ToString", 0x200u, v11);
  }
  return v3;
}
