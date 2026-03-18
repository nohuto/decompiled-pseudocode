/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0111ED0
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0111FF0 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C01120A4 (-FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C011AE00 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(struct _KTHREAD **this, __int64 a2)
{
  _QWORD *v4; // rbx
  __int16 v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *(_DWORD *)(a2 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v4 = *(_QWORD **)a2;
  v5 = *(_WORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = *(_QWORD **)(a2 + 8), *v7 != a2) )
    __fastfail(3u);
  *v7 = v4;
  v4[1] = v7;
  Win32FreePool(a2);
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 16);
    if ( v10 == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v6 + 32));
      CTouchProcessor::ReleasePointerCaptureInt((CTouchProcessor *)this, (struct CPointerCaptureInfo *)(v6 + 232));
      v10 = *(_DWORD *)(v6 + 16);
    }
    v11 = v10 - 1;
    *(_DWORD *)(v6 + 16) = v11;
    if ( !v11 )
      CTouchProcessor::FreePointerCaptureData((CTouchProcessor *)this, (struct CPointerCaptureData *)v6);
  }
  v12 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 == v4 )
  {
    v13 = v4 - 36;
    if ( *((_WORD *)v4 - 128) != v5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      v12 = (_QWORD *)*v4;
    }
    if ( v12 != v4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    if ( (_QWORD *)v13[34] != v13 + 34 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    if ( *((_DWORD *)v13 + 9) == 3 )
      CTouchProcessor::FreeNode((CTouchProcessor *)this, (struct CInputPointerNode *)(v4 - 36));
  }
}
