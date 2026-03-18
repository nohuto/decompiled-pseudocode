/*
 * XREFs of AMLIRegEventHandler @ 0x1C0026FB4
 * Callers:
 *     RegisterOperationRegionHandler @ 0x1C0092DAC (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A0E14 (UnRegisterOperationRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00ACC5C (OSInitializeCallbacks.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     RegEventHandler @ 0x1C00271A0 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C00271C8 (RegRSAccess.c)
 *     Simulator_Post_Generic @ 0x1C005B5D4 (Simulator_Post_Generic.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C005B804 (Simulator_Pre_RegEventHandler.c)
 *     RegOpcodeHandler @ 0x1C005DD34 (RegOpcodeHandler.c)
 */

__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v6; // rdi
  __int64 *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // r9
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v2 = v15;
  v12[0] = 0LL;
  v3 = v15;
  dword_1C00776F8 = 0;
  v4 = v13;
  v6 = a1;
  pszDest = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v12);
    if ( (_DWORD)result )
      return result;
    v3 = v15;
    v4 = v13;
  }
  if ( (unsigned int)v6 <= 0xB )
  {
    if ( (_DWORD)v6 == 11 )
    {
      v7 = &ghDestroyObj;
      goto LABEL_10;
    }
    if ( (unsigned int)v6 > 6 )
    {
      if ( (_DWORD)v6 != 7 )
      {
        if ( (_DWORD)v6 == 8 )
        {
          v7 = &qword_1C00776D8;
        }
        else if ( (_DWORD)v6 == 9 )
        {
          v7 = &qword_1C00776E8;
        }
        else
        {
          v7 = (__int64 *)&ghCreate;
        }
        goto LABEL_10;
      }
      LOBYTE(v2) = 1;
    }
    else
    {
      if ( (_DWORD)v6 != 6 )
      {
        if ( (_DWORD)v6 != 1 )
        {
          switch ( (_DWORD)v6 )
          {
            case 2:
              v7 = &ghNotify;
              goto LABEL_10;
            case 3:
              v7 = &ghFatal;
LABEL_10:
              v8 = RegEventHandler(v7, v4, v3);
              goto LABEL_11;
            case 4:
              v7 = &ghValidateTable;
              goto LABEL_10;
            case 5:
              v7 = (__int64 *)&ghGlobalLock;
              goto LABEL_10;
          }
          goto LABEL_52;
        }
        v11 = 0LL;
        goto LABEL_54;
      }
      v2 = 0LL;
    }
    v8 = RegRSAccess(a2, v4, v3, v2);
    goto LABEL_11;
  }
  switch ( (_DWORD)v6 )
  {
    case 0xC:
      v11 = 0x80000000LL;
LABEL_54:
      v8 = RegOpcodeHandler(a2, v4, v3, v11);
LABEL_11:
      v9 = v8;
      if ( v8 == 32772 )
        v9 = 259;
      goto LABEL_13;
    case 0xD:
      v7 = &ghMapTable;
      goto LABEL_10;
    case 0xE:
      v7 = (__int64 *)&ghGetAcpiTableVersion;
      goto LABEL_10;
    case 0xF:
      v7 = (__int64 *)&ghCheckOsiString;
      goto LABEL_10;
    case 0x10:
      v7 = &ghMutexObject;
      goto LABEL_10;
    case 0x11:
      v7 = &ghQueryDLMSupportHandler;
      goto LABEL_10;
    case 0x12:
      v7 = &ghLoadTable;
      goto LABEL_10;
    case 0x13:
      v7 = &ghUnloadTable;
      goto LABEL_10;
    case 0x14:
      v7 = &ghNativeMethodEvalObject;
      goto LABEL_10;
  }
LABEL_52:
  v9 = -1072431091;
  LogError(-1072431091);
  AcpiDiagTraceAmlError(0LL, -1072431091);
  PrintDebugMessage(164, (const void *)v6, 0LL, 0LL, 0LL);
LABEL_13:
  if ( g_SimulatorCallbackObject )
    return (unsigned int)Simulator_Post_Generic(v12, v9);
  return v9;
}
