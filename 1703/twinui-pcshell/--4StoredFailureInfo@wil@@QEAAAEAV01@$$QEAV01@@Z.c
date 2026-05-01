/*
 * XREFs of ??4StoredFailureInfo@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A43AC
 * Callers:
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A0D50 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B5B78 (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180158B34 (--4-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::StoredFailureInfo::operator=(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rcx
  HANDLE ProcessHeap; // rax
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  v4 = *(volatile signed __int32 **)(a1 + 144);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 144));
    }
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  result = a1;
  *(_QWORD *)(a2 + 144) = 0LL;
  *(_QWORD *)(a2 + 152) = 0LL;
  return result;
}
