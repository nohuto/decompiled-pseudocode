/*
 * XREFs of ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C01505D4
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C0140818 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputManager::OwnsPointerId(int a1, int a2)
{
  bool v3; // bl
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  __int64 v7; // rdx

  v3 = 0;
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 128, 0LL);
    v5 = 0;
    v6 = *((_DWORD *)g_pInputManager + 30);
    if ( v6 )
    {
      v7 = *((_QWORD *)g_pInputManager + 14);
      while ( **(_DWORD **)(v7 + 8LL * v5) != a2 )
      {
        if ( ++v5 >= v6 )
          goto LABEL_8;
      }
      v3 = a1 == *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v5) + 4LL);
    }
LABEL_8:
    ExReleasePushLockSharedEx((char *)g_pInputManager + 128, 0LL);
  }
  return v3;
}
