/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180094BF4
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x180091C60 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000DE94 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18002B0D0 (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     WPP_SF_Sddd @ 0x1800958CC (WPP_SF_Sddd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CExclusiveStreamGroupProxy::RuntimeClassInitialize(
        CExclusiveStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        struct STREAM_GROUP_DESCRIPTOR *a3,
        int a4)
{
  int Instance; // ebx
  LPVOID pProxy[2]; // [rsp+40h] [rbp-28h] BYREF

  pProxy[1] = (LPVOID)-2LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)a2 + 2) + 4LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 2LL),
      *(_WORD *)(*((_QWORD *)a2 + 2) + 14LL));
  }
  pProxy[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
               0LL,
               0x17u,
               &GUID_816e5b3e_5523_4efc_9223_98ec4214c3a0,
               pProxy);
  if ( Instance < 0
    || (Instance = CoSetProxyBlanket((IUnknown *)pProxy[0], 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u),
        Instance < 0)
    || (Instance = (*(__int64 (__fastcall **)(LPVOID, struct STREAM_GROUP_DESCRIPTOR *))(*(_QWORD *)pProxy[0] + 64LL))(
                     pProxy[0],
                     a3),
        Instance < 0)
    || (Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)this + 11, (__int64)pProxy[0]),
        Instance = CBaseStreamGroupProxy::RuntimeClassInitialize(
                     (CExclusiveStreamGroupProxy *)((char *)this + 8),
                     a2,
                     a4),
        Instance < 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_9c6016c0d7cb367d67baf4bee7e000df_Traceguids,
        Instance);
    }
  }
  else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x11u,
      (__int64)&WPP_9c6016c0d7cb367d67baf4bee7e000df_Traceguids,
      this);
  }
  if ( pProxy[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pProxy[0] + 16LL))(pProxy[0]);
  return (unsigned int)Instance;
}
