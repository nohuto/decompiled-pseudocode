/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C0150664
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001D0F0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C01506B4 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = a2;
  result = Win32FreePool(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2));
  if ( v3 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v5 = v3++;
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result;
    }
    while ( v3 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
