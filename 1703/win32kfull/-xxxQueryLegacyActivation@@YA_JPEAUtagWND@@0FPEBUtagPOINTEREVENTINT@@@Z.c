/*
 * XREFs of ?xxxQueryLegacyActivation@@YA_JPEAUtagWND@@0FPEBUtagPOINTEREVENTINT@@@Z @ 0x1C01C90F8
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     GetDPITransformationMonitor @ 0x1C01C01F0 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall xxxQueryLegacyActivation(
        struct tagWND *a1,
        struct tagWND *a2,
        unsigned __int16 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  __int64 v4; // rsi
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  v7 = (int)a1;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) + 72LL) )
    return 3LL;
  v9 = *(_QWORD *)(gptiCurrent + 684LL);
  v10 = *(_QWORD *)(gptiCurrent + 676LL);
  *(_QWORD *)(gptiCurrent + 684LL) = *((_QWORD *)a4 + 5);
  *(_QWORD *)(gptiCurrent + 676LL) = *((_QWORD *)a4 + 5);
  if ( (*((_DWORD *)a1 + 92) & 0xF) != 2 )
  {
    v13 = 0LL;
    GetDPITransformationMonitor(*(_QWORD *)(gptiCurrent + 676LL), (__int64)a1, &v13);
    PhysicalToLogicalDPIPoint(gptiCurrent + 676LL, gptiCurrent + 676LL, 0LL, &v13);
  }
  if ( a2 )
    v4 = *(_QWORD *)a2;
  v11 = xxxSendMessage(v7, 33, v4, a3 | 0x2460000u);
  *(_QWORD *)(gptiCurrent + 684LL) = v9;
  *(_QWORD *)(gptiCurrent + 676LL) = v10;
  v12 = v11 - 3;
  result = 3LL;
  if ( v12 > 1 )
    return 1LL;
  return result;
}
