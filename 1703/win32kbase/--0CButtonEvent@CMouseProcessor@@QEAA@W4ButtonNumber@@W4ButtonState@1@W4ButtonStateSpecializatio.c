/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C008237C
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0046B60 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01310D8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@P.c)
 * Callees:
 *     _anonymous_namespace_::ShouldSwapMouseButtons @ 0x1C0082420 (_anonymous_namespace_--ShouldSwapMouseButtons.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r9

  v5 = a1;
  v6 = 2;
  v7 = *a5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  LOBYTE(a3) = (_DWORD)a3 == 2;
  *(_DWORD *)(a1 + 20) = a4;
  v8 = (unsigned int)a2;
  *(_QWORD *)a1 = v7;
  LOBYTE(a2) = *(_DWORD *)(v7 + 80) == 18;
  LOBYTE(a1) = (*(_BYTE *)(v7 + 88) & 0x20) != 0;
  if ( (unsigned __int8)anonymous_namespace_::ShouldSwapMouseButtons(a1, a2, a3, v8) )
    *(_DWORD *)(v5 + 8) ^= 3u;
  if ( *(_DWORD *)(v5 + 8) == 1 )
  {
    v6 = 0;
  }
  else if ( *(_DWORD *)(v5 + 8) == 2 )
  {
    v6 = 1;
  }
  else if ( *(_DWORD *)(v5 + 8) != 4 )
  {
    v6 = 4;
    if ( *(_DWORD *)(v5 + 8) == 8 )
    {
      v6 = 3;
    }
    else if ( *(_DWORD *)(v5 + 8) != 16 )
    {
      return v5;
    }
  }
  *(_QWORD *)(v5 + 24) = (char *)&CMouseProcessor::CButtonEvent::_dependentInfo + 24 * v6;
  return v5;
}
