/*
 * XREFs of TransformWindowTrackInfo @ 0x1C0084D4C
 * Callers:
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0084DEC (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01ED2B0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 */

INT __fastcall TransformWindowTrackInfo(__int64 a1, INT *a2, INT *a3, int a4)
{
  __int64 v6; // r10
  INT result; // eax
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  INT v10; // ebx
  INT v11; // edi
  INT v12; // eax
  INT v13; // ecx
  INT v14; // eax
  INT v15; // ecx

  v6 = a1;
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    result = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 52LL) & 1) != 0 )
  {
    result = 96;
  }
  else
  {
    result = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
  }
  if ( *(_WORD *)(v6 + 372) != (_WORD)result )
  {
    if ( a4 )
    {
      v9 = result;
      LOWORD(result) = *(_WORD *)(v6 + 372);
    }
    else
    {
      v9 = *(_WORD *)(v6 + 372);
    }
    v10 = (unsigned __int16)result;
    v11 = v9;
    v12 = EngMulDiv(*a2, v9, (unsigned __int16)result);
    v13 = a2[1];
    *a2 = v12;
    a2[1] = EngMulDiv(v13, v11, v10);
    v14 = EngMulDiv(*a3, v11, v10);
    v15 = a3[1];
    *a3 = v14;
    result = EngMulDiv(v15, v11, v10);
    a3[1] = result;
  }
  return result;
}
