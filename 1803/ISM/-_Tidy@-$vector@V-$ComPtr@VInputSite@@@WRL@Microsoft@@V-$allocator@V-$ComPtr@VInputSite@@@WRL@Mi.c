/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750
 * Callers:
 *     ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000C6E0 (--1-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Micros.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     ??1InternalHitTestResult@HitTestHelper@@QEAA@XZ @ 0x18006510C (--1InternalHitTestResult@HitTestHelper@@QEAA@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18007EFF0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z @ 0x18007FD30 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18007FE30 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800807F4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x180092960 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(__int64 **)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = *(__int64 **)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete(v2);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v7 = *(v2 - 1);
        if ( v7 < (unsigned __int64)v2 && (unsigned __int64)v2 - v7 - 8 <= 0x1F )
        {
          v2 = (__int64 *)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x18000C80CLL);
  }
}
