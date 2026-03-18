/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0131084
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0130FD0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  int v2; // eax
  __int16 v3; // r8
  __int64 v4; // [rsp+8h] [rbp+8h]

  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v2 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) |= 1u;
    v3 = *((_WORD *)this + 1);
    *((_DWORD *)this + 4) = v2;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v3 | 2;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 5) & 0x10) == 0 )
      goto LABEL_7;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 14) |= 4u;
  }
  *((_DWORD *)this + 14) &= ~8u;
LABEL_7:
  HIDWORD(v4) = *((_DWORD *)a2 + 4);
  LODWORD(v4) = 2;
  *((_QWORD *)this + 8) = v4;
  if ( (*((_DWORD *)a2 + 5) & 2) != 0 )
    *((_DWORD *)this + 14) |= 0x800u;
  if ( (*((_DWORD *)a2 + 5) & 4) != 0 )
    *((_DWORD *)this + 14) |= 2u;
  if ( (*((_DWORD *)a2 + 5) & 0x20) != 0 )
    *((_DWORD *)this + 14) |= 0x2000u;
  if ( (*((_DWORD *)a2 + 5) & 0x40) != 0 )
    *((_DWORD *)this + 14) |= 0x8000u;
}
