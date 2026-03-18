/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CD3BC
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        struct tagWND *a1,
        struct tagWND *a2,
        __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 DPITransformationMonitor; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) + 104LL) )
    return 3LL;
  v6 = *(_QWORD *)(gptiCurrent + 740LL);
  v7 = *(_QWORD *)(gptiCurrent + 732LL);
  *(_QWORD *)(gptiCurrent + 740LL) = *((_QWORD *)a4 + 5);
  *(_QWORD *)(gptiCurrent + 732LL) = *((_QWORD *)a4 + 5);
  if ( (*((_DWORD *)a1 + 92) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)(gptiCurrent + 732LL), (__int64)a1);
    PhysicalToLogicalDPIPoint(gptiCurrent + 732LL, gptiCurrent + 732LL, 0LL, &DPITransformationMonitor);
  }
  v8 = xxxSendMessage((ULONG_PTR)a1);
  *(_QWORD *)(gptiCurrent + 740LL) = v6;
  *(_QWORD *)(gptiCurrent + 732LL) = v7;
  v9 = v8 - 3;
  result = 3LL;
  if ( v9 > 1 )
    return 1LL;
  return result;
}
