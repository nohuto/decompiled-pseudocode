/*
 * XREFs of GetMonitorMaxArea @ 0x1C003C008
 * Callers:
 *     CkptUpdate @ 0x1C001D51C (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C003C134 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall GetMonitorMaxArea(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = HungWindowFromGhostWindow();
  v7 = a1;
  if ( v6 )
    v7 = v6;
  if ( (*(_BYTE *)(v7 + 70) & 1) != 0 && (*(_BYTE *)(v7 + 56) & 8) != 0 && !*(_WORD *)(gpDispInfo + 176LL) )
  {
    if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
      && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
    {
      result = *(_QWORD *)(a2 + 40) + 92LL;
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
           && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
    {
      result = *(_QWORD *)(a2 + 40) + 108LL;
    }
    else
    {
      result = *(_QWORD *)(a2 + 40) + 76LL;
    }
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 52LL) & 1) != 0 )
  {
    result = *(_QWORD *)(a2 + 40) + 44LL;
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
         && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
  {
    result = *(_QWORD *)(a2 + 40) + 60LL;
  }
  else
  {
    result = *(_QWORD *)(a2 + 40) + 28LL;
  }
  *a3 = result;
  return result;
}
