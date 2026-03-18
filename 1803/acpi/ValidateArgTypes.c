/*
 * XREFs of ValidateArgTypes @ 0x1C0047D6C
 * Callers:
 *     CreateXField @ 0x1C004ADAC (CreateXField.c)
 *     Fatal @ 0x1C004F380 (Fatal.c)
 *     IfElse @ 0x1C004F3F0 (IfElse.c)
 *     Load @ 0x1C004F530 (Load.c)
 *     Notify @ 0x1C004F6B0 (Notify.c)
 *     Release @ 0x1C004F7F0 (Release.c)
 *     ResetSignal @ 0x1C004F950 (ResetSignal.c)
 *     SleepStall @ 0x1C004FAF0 (SleepStall.c)
 *     Unload @ 0x1C004FBE0 (Unload.c)
 *     While @ 0x1C004FC40 (While.c)
 *     Acquire @ 0x1C004FCE0 (Acquire.c)
 *     Buffer @ 0x1C004FE30 (Buffer.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00502A0 (ConcatenateResTemplate.c)
 *     DerefOf @ 0x1C0050670 (DerefOf.c)
 *     Divide @ 0x1C0050700 (Divide.c)
 *     ExprOp1_32 @ 0x1C00507DC (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x1C0050918 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x1C0050ABC (ExprOp2_32.c)
 *     ExprOp2_64 @ 0x1C0050C44 (ExprOp2_64.c)
 *     Index @ 0x1C0050E60 (Index.c)
 *     LNot @ 0x1C0051040 (LNot.c)
 *     LoadTable @ 0x1C00510D0 (LoadTable.c)
 *     LogOp2_32 @ 0x1C0051564 (LogOp2_32.c)
 *     LogOp2_64 @ 0x1C005190C (LogOp2_64.c)
 *     Match_32 @ 0x1C0051B04 (Match_32.c)
 *     Match_64 @ 0x1C0051C24 (Match_64.c)
 *     MidString @ 0x1C0051D60 (MidString.c)
 *     OSInterface @ 0x1C0051FC0 (OSInterface.c)
 *     Package @ 0x1C00522C0 (Package.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C0052EE0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     ToInteger @ 0x1C0053650 (ToInteger.c)
 *     ToString @ 0x1C00536D0 (ToString.c)
 *     Wait @ 0x1C00538B0 (Wait.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0053B54 (ConvertToDDBHandle.c)
 *     ConvertToInteger @ 0x1C0053BE8 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, char *a4)
{
  unsigned int v4; // r10d
  int v5; // edi
  __int64 v6; // rax
  __int64 v11; // r13
  _WORD *v12; // rbx
  char *v13; // r15
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int ObjectTypeName; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx

  v4 = 0;
  v5 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a4[v6] );
  v11 = (int)v6;
  if ( (int)v6 > 0 )
  {
    v12 = (_WORD *)(a2 + 2);
    v13 = a4;
    do
    {
      if ( v4 )
        return v4;
      v14 = *v13;
      if ( v14 > 73 )
      {
        v25 = v14 - 79;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
          {
            if ( *v12 == 4 )
              goto LABEL_70;
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v24 = 202;
            goto LABEL_21;
          }
          v27 = v26 - 2;
          if ( !v27 )
          {
            if ( *v12 == 14 || (unsigned __int16)(*v12 - 128) <= 1u )
              goto LABEL_70;
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v24 = 203;
            goto LABEL_21;
          }
          v28 = v27 - 2;
          if ( !v28 )
          {
            if ( (unsigned __int16)(*v12 - 2) <= 1u )
              goto LABEL_70;
            if ( a3 )
            {
              v4 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            v22 = 204;
            goto LABEL_69;
          }
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 5 )
            {
LABEL_53:
              LogError(3222536195LL);
              AcpiDiagTraceAmlError(a1, -1072431101);
              PrintDebugMessage(206, *v13, 0, 0, 0LL);
              v4 = -1072431101;
              goto LABEL_70;
            }
            if ( *v12 == 2 )
              goto LABEL_70;
            if ( a3 )
            {
              v4 = ConvertToString(a2 + 40LL * v5, 0LL, a2 + 40LL * v5, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v24 = 205;
            goto LABEL_21;
          }
        }
        else if ( *v12 != 128 )
        {
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          v21 = GetObjectTypeName((unsigned __int16)*v12);
          v22 = 201;
          goto LABEL_69;
        }
      }
      else
      {
        if ( v14 == 73 )
        {
          if ( *v12 == 1 )
            goto LABEL_70;
          if ( a3 )
          {
            v4 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
            if ( !v4 )
              goto LABEL_70;
          }
          LogError(3222536200LL);
          AcpiDiagTraceAmlError(a1, -1072431096);
          ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
          v24 = 198;
          goto LABEL_21;
        }
        v15 = v14 - 65;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            if ( *v12 == 3 )
              goto LABEL_70;
            if ( a3 )
            {
              v4 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v24 = 193;
            goto LABEL_21;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            if ( (unsigned __int16)(*v12 - 3) <= 1u )
              goto LABEL_70;
            if ( a3 )
            {
              v4 = ConvertToBuffer(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            v22 = 194;
            goto LABEL_69;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            if ( (unsigned __int16)(*v12 - 1) <= 2u )
              goto LABEL_70;
            if ( a3 )
            {
              v4 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            v22 = 199;
            goto LABEL_69;
          }
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( (unsigned __int16)(*v12 - 1) <= 2u )
              goto LABEL_70;
            if ( *v12 == 15 )
              goto LABEL_70;
            if ( a3 )
            {
              v4 = ConvertToInteger(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            v22 = 200;
            goto LABEL_69;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            if ( *v12 == 5 )
              goto LABEL_70;
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v24 = 197;
            goto LABEL_21;
          }
          if ( v20 != 2 )
            goto LABEL_53;
          if ( *v12 == 1 )
          {
            if ( a3 )
            {
              v4 = ConvertToDDBHandle(a2 + 40LL * v5, a2 + 40LL * v5, 2LL, 5LL);
              if ( !v4 )
                goto LABEL_70;
            }
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            v22 = 196;
            goto LABEL_69;
          }
          if ( *v12 != 15 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v24 = 196;
LABEL_21:
            PrintDebugMessage(v24, v5, ObjectTypeName, 0, 0LL);
            v4 = -1072431096;
          }
        }
        else if ( *v12 != 129 )
        {
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, -1072431095);
          v21 = GetObjectTypeName((unsigned __int16)*v12);
          v22 = 195;
LABEL_69:
          PrintDebugMessage(v22, v5, v21, 0, 0LL);
          v4 = -1072431095;
        }
      }
LABEL_70:
      ++v13;
      ++v5;
      v12 += 20;
    }
    while ( v13 - a4 < v11 );
  }
  return v4;
}
