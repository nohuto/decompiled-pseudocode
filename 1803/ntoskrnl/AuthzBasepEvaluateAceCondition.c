/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x140044F30
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x14005EAA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x140149980 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140149AA0 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402A039C (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x140790F20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140791850 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140008CC0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepEvaluateExpression @ 0x140044E7C (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepResetOperands @ 0x140045564 (AuthzBasepResetOperands.c)
 *     AuthzBasepPushResult @ 0x1400455E4 (AuthzBasepPushResult.c)
 *     AuthzBasepIsValidExpression @ 0x14004560C (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x140045758 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepGetConstantOperand @ 0x1400457A4 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14005FC10 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepPotentialGlobalTableAttribute @ 0x1400A0A98 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402A1210 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x1402C4174 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x1402C41FC (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x1402C4330 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x1402C4434 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  int SecurityAttributeAndValues; // r14d
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rbx
  unsigned int v20; // ecx
  unsigned int v21; // ebx
  __int64 v22; // r15
  PVOID *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned int v29; // r8d
  _DWORD *v30; // r15
  _BYTE *v31; // rbx
  PVOID *v32; // rdi
  bool v34; // zf
  _BYTE *v35; // rax
  int v36; // eax
  __int64 v37; // r10
  int v38; // eax
  int v39; // r10d
  int v40; // r8d
  int v41; // eax
  char v42; // al
  char v43; // al
  __int64 v44; // r10
  int v45; // eax
  PVOID v46; // rbx
  _BYTE v47[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v48[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v50[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD *v51; // [rsp+40h] [rbp-C0h]
  char v52; // [rsp+48h] [rbp-B8h]
  unsigned int v53; // [rsp+4Ch] [rbp-B4h]
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  char v55; // [rsp+54h] [rbp-ACh]
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h] BYREF
  int v59; // [rsp+6Ch] [rbp-94h] BYREF
  _OWORD v60[5]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h]
  unsigned int v62; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v64; // [rsp+D8h] [rbp-28h]
  PVOID v65; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  PCUNICODE_STRING String2; // [rsp+108h] [rbp+8h]
  __int64 CurrentIrql; // [rsp+110h] [rbp+10h]
  _QWORD v72[5]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v73; // [rsp+140h] [rbp+40h] BYREF
  PVOID P[16]; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v75[256]; // [rsp+1D0h] [rbp+D0h] BYREF

  v69 = a3;
  SecurityAttributeAndValues = 0;
  v63 = a2;
  v61 = a1;
  v51 = a12;
  v54 = 0;
  LODWORD(v73) = 0;
  *((_QWORD *)&v73 + 1) = 0LL;
  v68 = a4;
  memset(P, 0, sizeof(P));
  LOWORD(v60[0]) = 0;
  BYTE4(v60[0]) = 0;
  memset((char *)v60 + 5, 0, 0x4BuLL);
  memset(v72, 0, sizeof(v72));
  v49 = -1;
  v66 = -1LL;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v16 = 2LL;
  v48[0] = 0;
  v50[0] = 0;
  v47[0] = 0;
  v55 = 0;
  v52 = 0;
  v65 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  HIDWORD(v72[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    v30 = a12;
    goto LABEL_39;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v30 = a12;
    goto LABEL_39;
  }
  if ( *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v30 = a12;
    goto LABEL_39;
  }
  AuthzBasepResetOperands(v60, v48);
  LODWORD(v17) = 4;
  v53 = 0;
  v15 = 0LL;
  if ( a9 <= 4 )
    goto LABEL_74;
  v14 = 0x140000000uLL;
  do
  {
    v18 = *((unsigned __int8 *)a8 + (unsigned int)v17);
    if ( v18 == 248 )
    {
LABEL_14:
      v19 = (unsigned int)(v17 + 1);
      if ( (_DWORD)v15 == 2 )
      {
        if ( HIDWORD(v60[0]) == 1 )
          goto LABEL_173;
        v49 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v60[1]);
        SecurityAttributeAndValues = AuthzBasepPushResult(v75, &v54);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_74;
        if ( LOBYTE(v48[0]) )
          ExFreePoolWithTag(*(PVOID *)(v44 + 24), 0);
        v73 = *(_OWORD *)&P[7];
        *(_OWORD *)P = *(_OWORD *)&P[9];
        *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
        P[6] = P[15];
        *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
        v60[0] = *(_OWORD *)((char *)&v60[2] + 8);
        *(_OWORD *)((char *)&v60[1] + 8) = v60[4];
        *(_QWORD *)&v60[1] = &v73;
        v48[0] = HIBYTE(v48[0]);
        memset((char *)&v60[2] + 8, 0, 0x28uLL);
        memset(&P[7], 0, 0x48uLL);
        v15 = 1LL;
        v53 = 1;
      }
      if ( a9 - (unsigned int)v19 < 4 || (v20 = *(_DWORD *)((char *)a8 + v19), v21 = v19 + 4, v62 = v20, a9 - v21 < v20) )
      {
LABEL_173:
        SecurityAttributeAndValues = -1073741406;
        goto LABEL_74;
      }
      if ( v20 > 0xFFFE )
      {
        SecurityAttributeAndValues = -1073741562;
        goto LABEL_74;
      }
      LODWORD(v72[3]) = v20;
      v72[4] = (char *)a8 + v21;
      v64 = (unsigned int)v15;
      v67 = (char *)v48 + (unsigned int)v15;
      v22 = 9LL * (unsigned int)v15;
      v57 = v22 * 8;
      String2 = (PCUNICODE_STRING)&P[v22];
      SecurityAttributeAndValues = AuthzBasepUnicodeStringFromOperandValue(
                                     (__int64)v72,
                                     0,
                                     (unsigned __int16 *)&P[v22],
                                     v67);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_74;
      if ( (_BYTE)v18 == 0xF9 )
      {
        v25 = v57;
        v26 = (PVOID *)((char *)&P[-1] + v57);
        LODWORD(P[v22 - 2]) = 3;
        v23 = &P[v22 - 2];
        if ( a11 )
          v24 = a5;
        else
          v24 = v68;
      }
      else if ( (_BYTE)v18 == 0xFB )
      {
        v25 = v57;
        v26 = (PVOID *)((char *)&P[-1] + v57);
        LODWORD(P[v22 - 2]) = 5;
        v23 = &P[v22 - 2];
        if ( a11 )
          v24 = a7;
        else
          v24 = a6;
      }
      else
      {
        v23 = &P[v22 - 2];
        if ( (_BYTE)v18 == 0xFA )
        {
          v24 = v69;
          *(_DWORD *)v23 = 4;
        }
        else if ( (_BYTE)v18 == 0xFC )
        {
          v24 = v61;
          *(_DWORD *)v23 = 6;
        }
        else
        {
          v24 = v63;
          *(_DWORD *)v23 = 2;
        }
        v25 = v57;
        v26 = (PVOID *)((char *)&P[-1] + v57);
      }
      *v26 = v24;
      *(PVOID *)((char *)&P[5] + v25) = 0LL;
      *(PVOID *)((char *)&P[6] + v25) = 0LL;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v23);
      if ( SecurityAttributeAndValues != -1073741275 )
        goto LABEL_31;
      if ( *(_DWORD *)v23 == 2
        && (SepSingletonGlobal[4] & 1) != 0
        && (*(_DWORD *)(v61 + 200) & 0x20000) == 0
        && (unsigned __int8)SepPotentialGlobalTableAttribute(String2)
        && !v55 )
      {
        if ( !v52 )
        {
          v45 = SepValidateAndCopyGlobalEntry(v63, &v65);
          SecurityAttributeAndValues = v45;
          if ( v45 < 0 )
          {
            v55 = 1;
            if ( v45 != -1073741275 )
              goto LABEL_31;
            goto LABEL_28;
          }
          v52 = 1;
        }
        *v26 = v65;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v23);
        if ( SecurityAttributeAndValues != -1073741275 )
          goto LABEL_31;
        *v26 = v63;
      }
LABEL_28:
      if ( (unsigned __int8)CurrentIrql >= 2u || *(_DWORD *)v23 != 2 )
        goto LABEL_61;
      *(_DWORD *)v23 = 7;
      *v26 = 0LL;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v23);
LABEL_31:
      if ( SecurityAttributeAndValues >= 0 )
      {
        v27 = v57;
        v28 = 40 * v64;
        *(_WORD *)((char *)v60 + v28) = *(_WORD *)((char *)&P[2] + v57);
        *(_DWORD *)((char *)v60 + v28 + 4) = *(_DWORD *)((char *)&P[3] + v27);
        *(_QWORD *)((char *)&v60[1] + v28) = v23;
        goto LABEL_33;
      }
      if ( SecurityAttributeAndValues != -1073741275 )
        goto LABEL_74;
LABEL_61:
      SecurityAttributeAndValues = 0;
      v28 = 40 * v64;
      v35 = v67;
      *(_WORD *)((char *)v60 + v28) = 0;
      *(_DWORD *)((char *)v60 + v28 + 4) = 0;
      *(_QWORD *)((char *)&v60[1] + v28) = 0LL;
      if ( *v35 )
      {
        ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v57), 0);
        if ( v64 >= 2 )
          _report_rangecheckfailure();
        *v67 = 0;
      }
LABEL_33:
      v29 = v53;
      *(_DWORD *)((char *)&v60[1] + v28 + 8) = 0;
      v15 = v29 + 1;
      LODWORD(v17) = v62 + v21;
      *(_QWORD *)((char *)&v60[2] + v28) = 0LL;
      *(_DWORD *)((char *)v60 + v28 + 8) = 0;
      *(_DWORD *)((char *)v60 + v28 + 12) = *(_DWORD *)v23;
LABEL_34:
      v53 = v15;
      goto LABEL_35;
    }
    if ( v18 == 162 )
    {
      LODWORD(v17) = v17 + 1;
      if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, v60, v15, v47) )
        goto LABEL_173;
      if ( (_DWORD)v15 == 1 )
      {
        v49 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v60[1]);
        AuthzBasepResetOperands(v60, v48);
      }
      else
      {
        SecurityAttributeAndValues = AuthzBasepPopResult(v75, &v54, &v49);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_74;
      }
LABEL_12:
      SecurityAttributeAndValues = AuthzBasepPushResult(v75, &v54);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_74;
    }
    else
    {
      switch ( *((_BYTE *)a8 + (unsigned int)v17) )
      {
        case 0:
          while ( 1 )
          {
            v17 = (unsigned int)(v17 + 1);
            v34 = (_DWORD)v17 == a9;
            if ( (unsigned int)v17 >= a9 )
              break;
            if ( *((_BYTE *)a8 + v17) )
            {
              v34 = (_DWORD)v17 == a9;
              break;
            }
          }
          if ( !v34 )
            goto LABEL_173;
          continue;
        case 1:
        case 2:
        case 3:
        case 4:
        case 0x10:
        case 0x18:
        case 0x50:
        case 0x51:
          if ( (_DWORD)v15 != 2 )
            goto LABEL_54;
          if ( HIDWORD(v60[0]) == 1 )
            goto LABEL_173;
          v49 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v60[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult(v75, &v54);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_74;
          if ( LOBYTE(v48[0]) )
            ExFreePoolWithTag(*(PVOID *)(v37 + 24), 0);
          v73 = *(_OWORD *)&P[7];
          *(_OWORD *)P = *(_OWORD *)&P[9];
          *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
          P[6] = P[15];
          *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
          v60[0] = *(_OWORD *)((char *)&v60[2] + 8);
          *(_OWORD *)((char *)&v60[1] + 8) = v60[4];
          *(_QWORD *)&v60[1] = &v73;
          v48[0] = HIBYTE(v48[0]);
          memset((char *)&v60[2] + 8, 0, 0x28uLL);
          memset(&P[7], 0, 0x48uLL);
          LODWORD(v15) = 1;
          v53 = 1;
LABEL_54:
          SecurityAttributeAndValues = AuthzBasepGetConstantOperand(
                                         (char *)a8 + (unsigned int)v17,
                                         a9 - (unsigned int)v17,
                                         (char *)v60 + 40 * (unsigned int)v15,
                                         &v59);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_74;
          v15 = v53 + 1;
          LODWORD(v17) = v59 + v17;
          goto LABEL_34;
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x88:
        case 0x8E:
        case 0x8F:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v60, v15, v47) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v47[0] )
              goto LABEL_74;
LABEL_105:
            v49 = -1;
            goto LABEL_12;
          }
          if ( v47[0] )
            goto LABEL_105;
          AuthzBasepEvaluateExpression(v18, (__int64)v60, &v49);
          if ( ((_BYTE)v18 == 0x8E || (_BYTE)v18 == 0x8F) && v49 != -1 )
            v49 = v49 == 0;
          goto LABEL_12;
        case 0x87:
        case 0x8D:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v60, v15, v47) )
            goto LABEL_173;
          v49 = *(_QWORD *)&v60[1] != 0LL;
          if ( (_BYTE)v18 == 0x8D )
            v49 = *(_QWORD *)&v60[1] == 0LL;
          goto LABEL_67;
        case 0x89:
        case 0x8B:
        case 0x90:
        case 0x92:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v60, v15, v47) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v47[0] )
              goto LABEL_74;
LABEL_118:
            v41 = -1;
            v49 = -1;
            goto LABEL_129;
          }
          if ( !v47[0] )
          {
            v42 = (_BYTE)v18 == 0x89 || (_BYTE)v18 == 0x90;
            SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v60, v61, a10, a11, v42, (__int64)v50);
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_118;
          if ( v50[0] )
          {
            v41 = 1;
            v49 = 1;
          }
          else
          {
            v49 = 0;
            v41 = 0;
          }
LABEL_129:
          if ( (((_BYTE)v18 + 112) & 0xFD) == 0 && v41 != -1 )
            goto LABEL_131;
          goto LABEL_67;
        case 0x8A:
        case 0x8C:
        case 0x91:
        case 0x93:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v60, v15, v47) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v47[0] )
              goto LABEL_74;
LABEL_134:
            v41 = -1;
            v49 = -1;
            goto LABEL_145;
          }
          if ( !v47[0] )
          {
            v43 = (_BYTE)v18 == 0x8A || (_BYTE)v18 == 0x91;
            SecurityAttributeAndValues = AuthzBasepDeviceMemberOf((unsigned int)v60, v61, a10, a11, v43, (__int64)v50);
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_134;
          if ( v50[0] )
          {
            v41 = 1;
            v49 = 1;
          }
          else
          {
            v49 = 0;
            v41 = 0;
          }
LABEL_145:
          if ( (((_BYTE)v18 + 111) & 0xFD) == 0 && v41 != -1 )
LABEL_131:
            v49 = v41 == 0;
LABEL_67:
          SecurityAttributeAndValues = AuthzBasepPushResult(v75, &v54);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_74;
          break;
        case 0xA0:
        case 0xA1:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v60, v15, v47) )
            goto LABEL_173;
          if ( (_DWORD)v15 == 2 )
          {
            v56 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v60[1]);
            v38 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v60[3] + 1));
            v58 = v38;
          }
          else
          {
            if ( (_DWORD)v15 == 1 )
            {
              v56 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v60[1]);
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v75, &v54, &v56);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_74;
            }
            SecurityAttributeAndValues = AuthzBasepPopResult(v75, &v54, &v58);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_74;
            v38 = v58;
          }
          if ( (_BYTE)v18 == 0xA0 )
          {
            if ( !v39 || !v38 )
              goto LABEL_100;
            if ( v39 == -1 || v38 == -1 )
              goto LABEL_95;
          }
          else if ( v39 != 1 && v38 != 1 )
          {
            if ( v39 == -1 || v38 == -1 )
            {
LABEL_95:
              v49 = -1;
              goto LABEL_102;
            }
LABEL_100:
            v49 = 0;
            goto LABEL_102;
          }
          v49 = 1;
LABEL_102:
          SecurityAttributeAndValues = AuthzBasepPushResult(v75, &v54);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_74;
          break;
        case 0xA3:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v60, v15, v47) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v47[0] )
              goto LABEL_74;
LABEL_110:
            v40 = -1;
            goto LABEL_111;
          }
          if ( v47[0] )
            goto LABEL_110;
          AuthzBasepComputeExpression((unsigned __int8)v18, v60, &v66);
          if ( v66 == -1 )
            goto LABEL_110;
          v40 = v66 != 0;
LABEL_111:
          v49 = v40;
          SecurityAttributeAndValues = AuthzBasepPushResult(v75, &v54);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_74;
          AuthzBasepResetOperands(v60, v48);
          v15 = v53;
          goto LABEL_35;
        case 0xF9:
        case 0xFA:
        case 0xFB:
        case 0xFC:
          goto LABEL_14;
        default:
          goto LABEL_173;
      }
    }
    AuthzBasepResetOperands(v60, v48);
    v15 = 0LL;
    v53 = 0;
LABEL_35:
    v14 = 0x140000000uLL;
  }
  while ( (unsigned int)v17 < a9 );
  if ( v54 == 1 )
  {
    v30 = v51;
    *v51 = v75[0];
    goto LABEL_39;
  }
  if ( !v54 && (_DWORD)v15 == 1 )
  {
    v36 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v60[1]);
    v30 = v51;
    *v51 = v36;
    goto LABEL_39;
  }
LABEL_74:
  v30 = v51;
LABEL_39:
  v31 = v48;
  v32 = &P[1];
  do
  {
    if ( *v31 )
      ExFreePoolWithTag(*v32, 0);
    ++v31;
    v32 += 9;
    --v16;
  }
  while ( v16 );
  if ( v52 )
  {
    v46 = v65;
    if ( v65 )
    {
      AuthzBasepFreeSecurityAttributesList(v65, v14, v15);
      ExFreePoolWithTag(v46, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v30 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
