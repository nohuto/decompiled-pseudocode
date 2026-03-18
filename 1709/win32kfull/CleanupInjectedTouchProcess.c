/*
 * XREFs of CleanupInjectedTouchProcess @ 0x1C01BD350
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01BD608 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx

  v3 = *(_QWORD **)(a1 + 848);
  v5 = (void *)v3[11];
  if ( v5 )
  {
    v6 = v3[12];
    if ( v6 )
    {
      HMAssignmentUnlock(v3 + 2);
      RIMRemoveInjectionDevice(v5, v6);
      ZwClose(v5);
    }
  }
  Win32FreePool(v3[10], a2, a3);
  Win32FreePool(v3, v7, v8);
  *(_QWORD *)(a1 + 848) = 0LL;
  v10 = (_QWORD *)gpTouchInjectorProcesses;
  v11 = 0LL;
  while ( v10 )
  {
    if ( v10[1] == a1 )
    {
      if ( v11 )
        *v11 = *v10;
      else
        gpTouchInjectorProcesses = *v10;
      Win32FreePool(v10, v11, v9);
      return 1LL;
    }
    v11 = v10;
    v10 = (_QWORD *)*v10;
  }
  return 1LL;
}
