/*
 * XREFs of ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C0151600
 * Callers:
 *     NtDCompositionUpdatePointerCapture @ 0x1C013E9F0 (NtDCompositionUpdatePointerCapture.c)
 * Callees:
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C015142C (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C01515B0 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

__int64 __fastcall CInputManager::UpdatePointerCapture(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r8d
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  if ( g_pInputManager )
  {
    ExAcquirePushLockExclusiveEx((char *)g_pInputManager + 128, 0LL);
    v6 = *((_DWORD *)g_pInputManager + 30);
    if ( v6 )
    {
      do
      {
        if ( **(_DWORD **)(*((_QWORD *)g_pInputManager + 14) + 8LL * v5) == a2 )
          break;
        ++v5;
      }
      while ( v5 < v6 );
    }
    if ( v5 >= v6 )
    {
      if ( a1 )
      {
        v8 = __PAIR64__(a1, a2);
        v2 = CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt((__int64)g_pInputManager + 112, &v8, v6);
      }
    }
    else if ( a1 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)g_pInputManager + 14) + 8LL * v5) + 4LL) = a1;
    }
    else
    {
      CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt((__int64)g_pInputManager + 112, v5);
    }
    ExReleasePushLockExclusiveEx((char *)g_pInputManager + 128, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
