/*
 * XREFs of CleanupInjectedTouchProcess @ 0x1C01B80F0
 * Callers:
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01B8424 (_InitializeTouchInjectionWithQDCData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  v1 = *(_QWORD **)(a1 + 840);
  v3 = (void *)v1[10];
  v4 = v1[11];
  if ( v3 && v4 )
  {
    HMAssignmentUnlock(v1 + 1);
    RIMRemoveInjectionDevice(v3, v4);
    ZwClose(v3);
  }
  Win32FreePool(v1[9]);
  Win32FreePool(v1);
  *(_QWORD *)(a1 + 840) = 0LL;
  v5 = (_QWORD *)gpTouchInjectorProcesses;
  v6 = 0LL;
  while ( v5 )
  {
    if ( v5[1] == a1 )
    {
      if ( v6 )
        *v6 = *v5;
      else
        gpTouchInjectorProcesses = *v5;
      Win32FreePool(v5);
      return 1LL;
    }
    v6 = v5;
    v5 = (_QWORD *)*v5;
  }
  return 1LL;
}
