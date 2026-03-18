/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C00655EC
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0038E60 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00656C4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v6; // r10
  void *v7; // rax

  v6 = *a5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  if ( !(_DWORD)a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    a2 = *(unsigned int *)(a1 + 8);
  }
  if ( (((_DWORD)a2 - 1) & (unsigned int)a2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 88LL) & 0x800) == 0 )
  {
    LOBYTE(a2) = *(_DWORD *)(a1 + 16) == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(*(unsigned int *)(a1 + 8), a2) )
      *(_DWORD *)(a1 + 8) ^= 3u;
  }
  if ( *(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 1:
      v7 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      goto LABEL_22;
    case 2:
      v7 = &unk_1C01752B8;
      goto LABEL_22;
    case 4:
      v7 = &unk_1C01752D0;
      goto LABEL_22;
    case 8:
      v7 = &unk_1C01752E8;
      goto LABEL_22;
    case 0x10:
      v7 = &unk_1C0175300;
LABEL_22:
      *(_QWORD *)(a1 + 24) = v7;
      break;
  }
  return a1;
}
