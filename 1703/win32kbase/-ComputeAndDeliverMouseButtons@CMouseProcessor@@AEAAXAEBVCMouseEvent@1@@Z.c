/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0046B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C008237C (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C008849C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int i; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  _BYTE v11[72]; // [rsp+40h] [rbp-48h] BYREF

  v4 = 1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL);
  for ( i = *(_WORD *)(*(_QWORD *)a2 + 16LL) & 0xF3FF; i; v5 >>= 2 )
  {
    if ( (i & 3) != 0 )
    {
      if ( (i & 1) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v11, v4, 1LL);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v11);
      }
      if ( (i & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v11, v4, 2LL);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v11);
      }
      v7 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 1) == 0 && *(_DWORD *)(v7 + 84) != 1 )
      {
        v8 = *(_DWORD *)(v7 + 116);
        v9 = *(_QWORD *)(v7 + 108);
        v10 = v8;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v9, a2, 0LL) )
          break;
      }
    }
    v4 *= 2;
    i >>= 2;
  }
}
