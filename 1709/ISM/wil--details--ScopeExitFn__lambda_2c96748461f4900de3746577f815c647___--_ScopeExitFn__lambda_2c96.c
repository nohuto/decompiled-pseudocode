/*
 * XREFs of wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x180061330
 * Callers:
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x180060FA0 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     _MPCCursorManager::ProcessProviderHitTest_::_1_::dtor$0 @ 0x1800CF628 (_MPCCursorManager--ProcessProviderHitTest_--_1_--dtor$0.c)
 * Callees:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180061118 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

char *__fastcall wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___(
        __int64 a1)
{
  char v2; // dl
  int v3; // ecx
  char *result; // rax

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    if ( **(_BYTE **)(a1 + 32) )
    {
      *(_OWORD *)*(_QWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 280LL);
      *(_OWORD *)(*(_QWORD *)a1 + 16LL) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 12LL);
      *(_DWORD *)(*(_QWORD *)a1 + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 276LL);
    }
    else
    {
      *(_OWORD *)*(_QWORD *)a1 = 0uLL;
      *(_OWORD *)(*(_QWORD *)a1 + 16LL) = 0uLL;
      *(_DWORD *)(*(_QWORD *)a1 + 32LL) = 0;
    }
    MPCCursorManager::UpdateCursorVisibility(*(MPCCursorManager **)a1, **(_BYTE **)(a1 + 16), **(_BYTE **)(a1 + 24), 0);
    v2 = 1;
    v3 = *(_DWORD *)(*(_QWORD *)a1 + 60LL);
    if ( v3 == 1 || (v3 & 0x1C) != 0x18 )
      v2 = 0;
    result = *(char **)(a1 + 8);
    *result = v2;
  }
  return result;
}
