/*
 * XREFs of ValidateArgTypes @ 0x1C000C6D0
 * Callers:
 *     IfElse @ 0x1C000C3D0 (IfElse.c)
 *     Load @ 0x1C0012BC0 (Load.c)
 *     OSInterface @ 0x1C0012CB0 (OSInterface.c)
 *     Release @ 0x1C0015300 (Release.c)
 *     Acquire @ 0x1C0016280 (Acquire.c)
 *     DerefOf @ 0x1C00191C0 (DerefOf.c)
 *     CreateXField @ 0x1C001BC5C (CreateXField.c)
 *     Package @ 0x1C001E020 (Package.c)
 *     LNot @ 0x1C001E870 (LNot.c)
 *     Buffer @ 0x1C001E900 (Buffer.c)
 *     While @ 0x1C001EA00 (While.c)
 *     Index @ 0x1C001F6B0 (Index.c)
 *     LogOp2 @ 0x1C001FF10 (LogOp2.c)
 *     ExprOp2_64 @ 0x1C0020100 (ExprOp2_64.c)
 *     LogOp2_32 @ 0x1C0020FDC (LogOp2_32.c)
 *     ToInteger @ 0x1C0021120 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C002A66C (ExprOp1_64.c)
 *     Fatal @ 0x1C0060800 (Fatal.c)
 *     Notify @ 0x1C0060870 (Notify.c)
 *     ResetSignal @ 0x1C00609B0 (ResetSignal.c)
 *     SleepStall @ 0x1C0060B20 (SleepStall.c)
 *     Unload @ 0x1C0060C10 (Unload.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0060F60 (ConcatenateResTemplate.c)
 *     Divide @ 0x1C0061280 (Divide.c)
 *     ExprOp1_32 @ 0x1C0061314 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0061450 (ExprOp2_32.c)
 *     LoadTable @ 0x1C00615E0 (LoadTable.c)
 *     Match_32 @ 0x1C0061AF4 (Match_32.c)
 *     Match_64 @ 0x1C0061C14 (Match_64.c)
 *     MidString @ 0x1C0061D50 (MidString.c)
 *     ProcessLoadTable @ 0x1C0062100 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C00626B0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0062730 (ToDecStr.c)
 *     ToHexStr @ 0x1C0062AC0 (ToHexStr.c)
 *     ToString @ 0x1C0062DD0 (ToString.c)
 *     Wait @ 0x1C0062FA0 (Wait.c)
 * Callees:
 *     ConvertToInteger @ 0x1C002119C (ConvertToInteger.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C0063104 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006323C (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C00632D0 (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  int v5; // esi
  unsigned int v6; // r9d
  __int64 v8; // rax
  __int64 v11; // r12
  _WORD *v12; // rdi
  _BYTE *v13; // r13
  int ObjectTypeName; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v5 = 0;
  v6 = 0;
  v8 = -1LL;
  do
    ++v8;
  while ( a4[v8] );
  v11 = (int)v8;
  if ( (int)v8 <= 0 )
    return 0LL;
  v12 = (_WORD *)(a2 + 2);
  v13 = a4;
  do
  {
    if ( v6 )
      break;
    if ( *v13 == 73 )
    {
      if ( *v12 != 1 && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
      {
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
        v16 = 198;
LABEL_63:
        PrintDebugMessage(v16, v5, ObjectTypeName, 0, 0LL);
        v6 = -1072431096;
      }
    }
    else
    {
      switch ( *v13 )
      {
        case 'A':
          if ( *v12 != 129 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v18 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(195, v5, v18, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'B':
          if ( *v12 != 3 && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 193;
            goto LABEL_63;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v12 - 3) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v22 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(194, v5, v22, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v19 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(199, v5, v19, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && *v12 != 15
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v20 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(200, v5, v20, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'F':
          if ( *v12 != 5 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 197;
            goto LABEL_63;
          }
          break;
        case 'H':
          if ( *v12 == 1 )
          {
            if ( !a3 || (v6 = ConvertToDDBHandle(a2 + 40LL * v5, a2 + 40LL * v5)) != 0 )
            {
              LogError(3222536201LL);
              AcpiDiagTraceAmlError(a1, 3222536201LL);
              v23 = GetObjectTypeName((unsigned __int16)*v12);
              PrintDebugMessage(196, v5, v23, 0, 0LL);
              v6 = -1072431095;
            }
          }
          else if ( *v12 != 15 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 196;
            goto LABEL_63;
          }
          break;
        case 'O':
          if ( *v12 != 128 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v17 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(201, v5, v17, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'P':
          if ( *v12 != 4 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 202;
            goto LABEL_63;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v12 - 128) > 1u && *v12 != 14 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 203;
            goto LABEL_63;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v12 - 2) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(204, v5, v21, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v12 != 2 && (!a3 || (v6 = ConvertToString(a2 + 40LL * v5, 0LL, a2 + 40LL * v5)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 205;
            goto LABEL_63;
          }
          break;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(206, (char)*v13, 0, 0, 0LL);
          v6 = -1072431101;
          break;
      }
    }
    ++v13;
    ++v5;
    v12 += 20;
  }
  while ( v13 - a4 < v11 );
  return v6;
}
