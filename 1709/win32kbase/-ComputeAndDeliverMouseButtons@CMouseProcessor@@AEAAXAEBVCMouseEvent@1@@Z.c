/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00159E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C0018438 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00188B0 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int i; // ebx
  _BOOL8 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  _BYTE v12[72]; // [rsp+40h] [rbp-48h] BYREF

  v4 = 1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL);
  for ( i = *(_WORD *)(*(_QWORD *)a2 + 16LL) & 0xF3FF; i; v5 >>= 2 )
  {
    if ( (i & 3) != 0 )
    {
      if ( (i & 1) != 0 )
      {
        v7 = gbClientDoubleClickSupport && (v5 & 1) != 0;
        CMouseProcessor::CButtonEvent::CButtonEvent(v12, v4, 1LL, v7, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v12);
      }
      if ( (i & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v12, v4, 2LL, 0LL, a2);
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
    v4 *= 2;
    i >>= 2;
  }
}
