/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0038E60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C00655EC (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0071988 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int i; // ebp
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  _BYTE v12[72]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_QWORD *)a2;
  v5 = *(_WORD *)(*(_QWORD *)a2 + 16LL) & 0xF3FF;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v2 = *(_QWORD *)a2;
  }
  v6 = *(unsigned __int16 *)(v2 + 18);
  for ( i = 1; v5; i *= 2 )
  {
    if ( (v5 & 3) != 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v12, i, 1LL);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v12);
      }
      if ( (v5 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v12, i, 2LL);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v12);
      }
      v8 = *(_QWORD *)a2;
      if ( (*(_BYTE *)(*(_QWORD *)a2 + 88LL) & 1) == 0 && *(_DWORD *)(v8 + 84) != 1 )
      {
        v9 = *(_DWORD *)(v8 + 116);
        v10 = *(_QWORD *)(v8 + 108);
        v11 = v9;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v10, a2, 0LL) )
          break;
      }
    }
    v5 >>= 2;
    v6 >>= 2;
  }
}
