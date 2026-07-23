/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x140017110
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheck @ 0x14007D5C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14007F470 (SepFilterCheck.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x140142AD0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140142BF0 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14025E908 (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14072D59C (SepExamineSaclEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x1400155EC (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140016F80 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepResetOperands @ 0x140017780 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140018500 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepIsValidExpression @ 0x14001876C (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x140018C78 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateExpression @ 0x140116338 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x140122C78 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepPushResult @ 0x1401266D8 (AuthzBasepPushResult.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025F760 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x14028E4FC (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x14028E584 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14028E6B4 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x14028E7CC (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        _DWORD *a1,
        void *a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  int SecurityAttributeAndValues; // r15d
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // edi
  int v19; // edi
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // ecx
  unsigned int v24; // ebx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  void *v27; // rdx
  PVOID *v28; // rdi
  PVOID *v29; // rcx
  PVOID *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // r14
  _BYTE *v34; // rbx
  PVOID *v35; // rdi
  bool v37; // zf
  __int64 v38; // rax
  int v39; // r8d
  int v40; // eax
  __int64 v41; // r10
  int v42; // eax
  int v43; // r10d
  int v44; // r8d
  bool v45; // al
  bool v46; // al
  __int64 v47; // r10
  int v48; // eax
  PVOID v49; // rbx
  int v50; // [rsp+20h] [rbp-E0h]
  _BYTE v51[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v52[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v54[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD *v55; // [rsp+40h] [rbp-C0h]
  unsigned int v56; // [rsp+48h] [rbp-B8h] BYREF
  char v57; // [rsp+4Ch] [rbp-B4h]
  unsigned int v58; // [rsp+50h] [rbp-B0h]
  char v59; // [rsp+54h] [rbp-ACh]
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+6Ch] [rbp-94h] BYREF
  _OWORD v64[5]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v65; // [rsp+C0h] [rbp-40h]
  unsigned int v66; // [rsp+C8h] [rbp-38h]
  void *v67; // [rsp+D0h] [rbp-30h]
  PVOID v68; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  void *v70; // [rsp+E8h] [rbp-18h]
  void *v71; // [rsp+F0h] [rbp-10h]
  PCUNICODE_STRING String2; // [rsp+F8h] [rbp-8h]
  __int64 CurrentIrql; // [rsp+100h] [rbp+0h]
  _QWORD v74[5]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v75; // [rsp+130h] [rbp+30h] BYREF
  PVOID P[16]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v77[256]; // [rsp+1C0h] [rbp+C0h] BYREF

  v71 = a3;
  SecurityAttributeAndValues = 0;
  v67 = a2;
  v65 = a1;
  v55 = a12;
  v56 = 0;
  LODWORD(v75) = 0;
  *((_QWORD *)&v75 + 1) = 0LL;
  v70 = a4;
  memset(P, 0, sizeof(P));
  LOWORD(v64[0]) = 0;
  BYTE4(v64[0]) = 0;
  memset((char *)v64 + 5, 0, 0x4BuLL);
  LOWORD(v74[0]) = 0;
  memset((char *)v74 + 4, 0, 0x24uLL);
  v53 = -1;
  v69 = -1LL;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v16 = 2LL;
  v52[0] = 0;
  v54[0] = 0;
  v51[0] = 0;
  v59 = 0;
  v57 = 0;
  v68 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  HIDWORD(v74[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    v33 = a12;
    goto LABEL_42;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v33 = a12;
    goto LABEL_42;
  }
  if ( *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v33 = a12;
    goto LABEL_42;
  }
  AuthzBasepResetOperands(v64, v52);
  LODWORD(v17) = 4;
  v58 = 0;
  v15 = 0LL;
  if ( a9 <= 4 )
    goto LABEL_71;
  v14 = 0x140000000uLL;
  do
  {
    v18 = *((unsigned __int8 *)a8 + (unsigned int)v17);
    if ( v18 == 248 )
    {
LABEL_17:
      v22 = (unsigned int)(v17 + 1);
      if ( (_DWORD)v15 == 2 )
      {
        if ( HIDWORD(v64[0]) == 1 )
          goto LABEL_172;
        v53 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v64[1]);
        SecurityAttributeAndValues = AuthzBasepPushResult(v77, &v56);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_71;
        if ( LOBYTE(v52[0]) )
          ExFreePoolWithTag(*(PVOID *)(v47 + 24), 0);
        v75 = *(_OWORD *)&P[7];
        *(_OWORD *)P = *(_OWORD *)&P[9];
        *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
        P[6] = P[15];
        *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
        v64[0] = *(_OWORD *)((char *)&v64[2] + 8);
        *(_OWORD *)((char *)&v64[1] + 8) = v64[4];
        *(_QWORD *)&v64[1] = &v75;
        v52[0] = HIBYTE(v52[0]);
        memset((char *)&v64[2] + 8, 0, 0x28uLL);
        memset(&P[7], 0, 0x48uLL);
        v15 = 1LL;
        v58 = 1;
      }
      if ( a9 - (unsigned int)v22 < 4 || (v23 = *(_DWORD *)((char *)a8 + v22), v24 = v22 + 4, v66 = v23, a9 - v24 < v23) )
      {
LABEL_172:
        SecurityAttributeAndValues = -1073741406;
        goto LABEL_71;
      }
      if ( v23 > 0xFFFE )
      {
        SecurityAttributeAndValues = -1073741562;
        goto LABEL_71;
      }
      v25 = (unsigned int)v15;
      LODWORD(v74[3]) = v23;
      v74[4] = (char *)a8 + v24;
      v61 = 72LL * (unsigned int)v15;
      String2 = (PCUNICODE_STRING)&P[v61 / 8];
      SecurityAttributeAndValues = AuthzBasepUnicodeStringFromOperandValue(
                                     (__int64)v74,
                                     0,
                                     (unsigned __int16 *)&P[v61 / 8],
                                     (_BYTE *)v52 + (unsigned int)v15);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_71;
      v26 = v61;
      if ( (_BYTE)v18 == 0xF9 )
      {
        v28 = &P[v61 / 8 - 2];
        v29 = v28;
        *(_DWORD *)v28 = 3;
        if ( a11 )
          v27 = a5;
        else
          v27 = v70;
      }
      else if ( (_BYTE)v18 == 0xFB )
      {
        v28 = &P[v61 / 8 - 2];
        v29 = v28;
        *(_DWORD *)v28 = 5;
        if ( a11 )
          v27 = a7;
        else
          v27 = a6;
      }
      else
      {
        if ( (_BYTE)v18 == 0xFA )
        {
          v27 = v71;
          v28 = &P[v61 / 8 - 2];
          LODWORD(P[v61 / 8 - 2]) = 4;
        }
        else if ( (_BYTE)v18 == 0xFC )
        {
          v27 = v65;
          v28 = &P[v61 / 8 - 2];
          LODWORD(P[v61 / 8 - 2]) = 6;
        }
        else
        {
          v27 = v67;
          v28 = &P[v61 / 8 - 2];
          LODWORD(P[v61 / 8 - 2]) = 2;
        }
        v29 = v28;
      }
      *(PVOID *)((char *)&P[-1] + v26) = v27;
      *(PVOID *)((char *)&P[5] + v26) = 0LL;
      *(PVOID *)((char *)&P[6] + v26) = 0LL;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v29);
      if ( SecurityAttributeAndValues != -1073741275 )
        goto LABEL_34;
      if ( *(_DWORD *)v28 == 2
        && (SepSingletonGlobal[4] & 1) != 0
        && (v65[50] & 0x20000) == 0
        && SepPotentialGlobalTableAttribute(String2)
        && !v59 )
      {
        if ( !v57 )
        {
          v48 = SepValidateAndCopyGlobalEntry(v67, &v68);
          SecurityAttributeAndValues = v48;
          if ( v48 < 0 )
          {
            v59 = 1;
            if ( v48 != -1073741275 )
              goto LABEL_34;
            goto LABEL_31;
          }
          v57 = 1;
        }
        P[v61 / 8 - 1] = v68;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v28);
        if ( SecurityAttributeAndValues != -1073741275 )
          goto LABEL_34;
        P[v61 / 8 - 1] = v67;
      }
LABEL_31:
      if ( (unsigned __int8)CurrentIrql >= 2u || LODWORD(P[9 * v25 - 2]) != 2 )
        goto LABEL_65;
      v30 = &P[9 * v25 - 2];
      *(_DWORD *)v30 = 7;
      P[9 * v25 - 1] = 0LL;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v30);
LABEL_34:
      if ( SecurityAttributeAndValues >= 0 )
      {
        v31 = 40 * v25;
        *(_WORD *)((char *)v64 + v31) = P[9 * v25 + 2];
        *(_DWORD *)((char *)v64 + v31 + 4) = P[9 * v25 + 3];
        *(_QWORD *)((char *)&v64[1] + v31) = &P[9 * v25 - 2];
        goto LABEL_36;
      }
      if ( SecurityAttributeAndValues != -1073741275 )
        goto LABEL_71;
LABEL_65:
      v38 = 5 * v25;
      SecurityAttributeAndValues = 0;
      *((_WORD *)v64 + 4 * v38) = 0;
      *((_DWORD *)v64 + 2 * v38 + 1) = 0;
      *((_QWORD *)&v64[1] + v38) = 0LL;
      if ( *((_BYTE *)v52 + v25) )
      {
        ExFreePoolWithTag(P[v61 / 8 + 1], 0);
        if ( v25 >= 2 )
          _report_rangecheckfailure();
        *((_BYTE *)v52 + v25) = 0;
      }
LABEL_36:
      v32 = 40 * v25;
      v15 = v58 + 1;
      LODWORD(v17) = v66 + v24;
      *(_DWORD *)((char *)&v64[1] + v32 + 8) = 0;
      *(_QWORD *)((char *)&v64[2] + v32) = 0LL;
      *(_DWORD *)((char *)v64 + v32 + 8) = 0;
      *(_DWORD *)((char *)v64 + v32 + 12) = P[9 * v25 - 2];
LABEL_37:
      v58 = v15;
      goto LABEL_38;
    }
    if ( v18 == 162 )
    {
      LODWORD(v17) = v17 + 1;
      if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, v64, v15, v51) )
        goto LABEL_172;
      if ( (_DWORD)v15 == 1 )
      {
        v53 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v64[1]);
        v19 = v53;
        AuthzBasepResetOperands(v64, v52);
      }
      else
      {
        SecurityAttributeAndValues = AuthzBasepPopResult(v77, &v56, &v53);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_71;
        v19 = v53;
      }
      if ( v19 == -1 )
        v20 = -1;
      else
        v20 = v19 == 0;
      v21 = v56;
      if ( v56 >= 0x100 )
      {
        SecurityAttributeAndValues = -1073740791;
        goto LABEL_71;
      }
      ++v56;
      SecurityAttributeAndValues = 0;
      v77[v21] = v20;
    }
    else
    {
      switch ( *((_BYTE *)a8 + (unsigned int)v17) )
      {
        case 0:
          while ( 1 )
          {
            v17 = (unsigned int)(v17 + 1);
            v37 = (_DWORD)v17 == a9;
            if ( (unsigned int)v17 >= a9 )
              break;
            if ( *((_BYTE *)a8 + v17) )
            {
              v37 = (_DWORD)v17 == a9;
              break;
            }
          }
          if ( !v37 )
            goto LABEL_172;
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
            goto LABEL_57;
          if ( HIDWORD(v64[0]) == 1 )
            goto LABEL_172;
          v53 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v64[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult(v77, &v56);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_71;
          if ( LOBYTE(v52[0]) )
            ExFreePoolWithTag(*(PVOID *)(v41 + 24), 0);
          v75 = *(_OWORD *)&P[7];
          *(_OWORD *)P = *(_OWORD *)&P[9];
          *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
          P[6] = P[15];
          *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
          v64[0] = *(_OWORD *)((char *)&v64[2] + 8);
          *(_OWORD *)((char *)&v64[1] + 8) = v64[4];
          *(_QWORD *)&v64[1] = &v75;
          v52[0] = HIBYTE(v52[0]);
          memset((char *)&v64[2] + 8, 0, 0x28uLL);
          memset(&P[7], 0, 0x48uLL);
          LODWORD(v15) = 1;
          v58 = 1;
LABEL_57:
          SecurityAttributeAndValues = AuthzBasepGetConstantOperand(
                                         (char *)a8 + (unsigned int)v17,
                                         a9 - (unsigned int)v17,
                                         (char *)v64 + 40 * (unsigned int)v15,
                                         &v63);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_71;
          v15 = v58 + 1;
          LODWORD(v17) = v63 + v17;
          goto LABEL_37;
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
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v64, v15, v51) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v51[0] )
              goto LABEL_71;
LABEL_107:
            v53 = -1;
            goto LABEL_62;
          }
          if ( v51[0] )
            goto LABEL_107;
          AuthzBasepEvaluateExpression((unsigned __int8)v18, v64, &v53);
          if ( ((_BYTE)v18 == 0x8E || (_BYTE)v18 == 0x8F) && v53 != -1 )
            v53 = v53 == 0;
LABEL_62:
          SecurityAttributeAndValues = AuthzBasepPushResult(v77, &v56);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_71;
          break;
        case 0x87:
        case 0x8D:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v64, v15, v51) )
            goto LABEL_172;
          v39 = *(_QWORD *)&v64[1] != 0LL;
          v53 = v39;
          if ( (_BYTE)v18 != 0x8D )
            goto LABEL_70;
          goto LABEL_123;
        case 0x89:
        case 0x8B:
        case 0x90:
        case 0x92:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v64, v15, v51) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v51[0] )
              goto LABEL_71;
LABEL_120:
            v39 = -1;
            goto LABEL_121;
          }
          if ( !v51[0] )
          {
            v45 = (_BYTE)v18 == 0x89 || (_BYTE)v18 == 0x90;
            LOBYTE(v50) = v45;
            SecurityAttributeAndValues = AuthzBasepMemberOf(v64, v65, a10, a11, v50, v54);
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_120;
          v39 = v54[0] != 0;
LABEL_121:
          v53 = v39;
          if ( (((_BYTE)v18 + 112) & 0xFD) == 0 && v39 != -1 )
            goto LABEL_123;
          goto LABEL_70;
        case 0x8A:
        case 0x8C:
        case 0x91:
        case 0x93:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v64, v15, v51) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v51[0] )
              goto LABEL_71;
LABEL_134:
            v39 = -1;
            goto LABEL_135;
          }
          if ( !v51[0] )
          {
            v46 = (_BYTE)v18 == 0x8A || (_BYTE)v18 == 0x91;
            LOBYTE(v50) = v46;
            SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(v64, v65, a10, a11, v50, v54);
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_134;
          v39 = v54[0] != 0;
LABEL_135:
          v53 = v39;
          if ( (((_BYTE)v18 + 111) & 0xFD) == 0 && v39 != -1 )
LABEL_123:
            v53 = v39 == 0;
LABEL_70:
          SecurityAttributeAndValues = AuthzBasepPushResult(v77, &v56);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_71;
          break;
        case 0xA0:
        case 0xA1:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v64, v15, v51) )
            goto LABEL_172;
          if ( (_DWORD)v15 == 2 )
          {
            v60 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v64[1]);
            v42 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v64[3] + 1));
            v62 = v42;
          }
          else
          {
            if ( (_DWORD)v15 == 1 )
            {
              v60 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v64[1]);
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v77, &v56, &v60);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_71;
            }
            SecurityAttributeAndValues = AuthzBasepPopResult(v77, &v56, &v62);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_71;
            v42 = v62;
          }
          if ( (_BYTE)v18 == 0xA0 )
          {
            if ( !v43 || !v42 )
              goto LABEL_102;
            if ( v43 == -1 || v42 == -1 )
              goto LABEL_97;
          }
          else if ( v43 != 1 && v42 != 1 )
          {
            if ( v43 == -1 || v42 == -1 )
            {
LABEL_97:
              v53 = -1;
              goto LABEL_104;
            }
LABEL_102:
            v53 = 0;
            goto LABEL_104;
          }
          v53 = 1;
LABEL_104:
          SecurityAttributeAndValues = AuthzBasepPushResult(v77, &v56);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_71;
          break;
        case 0xA3:
          LODWORD(v17) = v17 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v18, v64, v15, v51) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v51[0] )
              goto LABEL_71;
LABEL_112:
            v44 = -1;
            goto LABEL_113;
          }
          if ( v51[0] )
            goto LABEL_112;
          AuthzBasepComputeExpression((unsigned __int8)v18, v64, &v69);
          if ( v69 == -1 )
            goto LABEL_112;
          v44 = v69 != 0;
LABEL_113:
          v53 = v44;
          SecurityAttributeAndValues = AuthzBasepPushResult(v77, &v56);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_71;
          AuthzBasepResetOperands(v64, v52);
          v15 = v58;
          goto LABEL_38;
        case 0xF9:
        case 0xFA:
        case 0xFB:
        case 0xFC:
          goto LABEL_17;
        default:
          goto LABEL_172;
      }
    }
    AuthzBasepResetOperands(v64, v52);
    v15 = 0LL;
    v58 = 0;
LABEL_38:
    v14 = 0x140000000uLL;
  }
  while ( (unsigned int)v17 < a9 );
  if ( v56 == 1 )
  {
    v33 = v55;
    *v55 = v77[0];
    goto LABEL_42;
  }
  if ( !v56 && (_DWORD)v15 == 1 )
  {
    v40 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v64[1]);
    v33 = v55;
    *v55 = v40;
    goto LABEL_42;
  }
LABEL_71:
  v33 = v55;
LABEL_42:
  v34 = v52;
  v35 = &P[1];
  do
  {
    if ( *v34 )
      ExFreePoolWithTag(*v35, 0);
    ++v34;
    v35 += 9;
    --v16;
  }
  while ( v16 );
  if ( v57 )
  {
    v49 = v68;
    if ( v68 )
    {
      AuthzBasepFreeSecurityAttributesList(v68, v14, v15);
      ExFreePoolWithTag(v49, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v33 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
