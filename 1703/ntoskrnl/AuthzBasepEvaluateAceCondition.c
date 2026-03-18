/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x1400897C0
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14008E7E0 (SepFilterCheck.c)
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140090C10 (SepMaximumAccessCheck.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1401331B0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401332E0 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402471D0 (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1406F5B50 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepGetConstantOperand @ 0x14002D930 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepPushResult @ 0x1400312E8 (AuthzBasepPushResult.c)
 *     SepPotentialGlobalTableAttribute @ 0x140035648 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepResetOperands @ 0x140089F50 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepIsValidExpression @ 0x14008A7D8 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x14008A944 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14008C120 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepEvaluateExpression @ 0x140115C64 (AuthzBasepEvaluateExpression.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x1402641C8 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x140264250 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x140264368 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x140264480 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  int SecurityAttributeAndValues; // r14d
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // edi
  int v18; // r8d
  int v19; // edi
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // ecx
  unsigned int v24; // ebx
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  void *v27; // rcx
  PVOID *v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // r15
  _BYTE *v33; // rbx
  PVOID *v34; // rdi
  bool v36; // zf
  __int64 v37; // rax
  int v38; // r8d
  int v39; // r8d
  int v40; // eax
  __int64 v41; // r10
  int v42; // r8d
  int v43; // eax
  int v44; // r10d
  int v45; // r8d
  int v46; // r8d
  BOOL v47; // eax
  char v48; // al
  char v49; // al
  __int64 v50; // r10
  int v51; // eax
  PVOID v52; // rbx
  _BYTE v53[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v54[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v55; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v56[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD *v57; // [rsp+40h] [rbp-C0h]
  unsigned int v58; // [rsp+48h] [rbp-B8h] BYREF
  char v59; // [rsp+4Ch] [rbp-B4h]
  unsigned int v60; // [rsp+50h] [rbp-B0h]
  char v61; // [rsp+54h] [rbp-ACh]
  bool v62; // [rsp+55h] [rbp-ABh]
  unsigned __int64 v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch] BYREF
  int v66; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v67[5]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v68; // [rsp+C0h] [rbp-40h]
  unsigned int v69; // [rsp+C8h] [rbp-38h]
  void *v70; // [rsp+D0h] [rbp-30h]
  PVOID v71; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-20h] BYREF
  void *v73; // [rsp+E8h] [rbp-18h]
  void *v74; // [rsp+F0h] [rbp-10h]
  PCUNICODE_STRING String2; // [rsp+F8h] [rbp-8h]
  _QWORD v76[6]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v77; // [rsp+130h] [rbp+30h] BYREF
  PVOID P[16]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v79[256]; // [rsp+1C0h] [rbp+C0h] BYREF

  v74 = a3;
  SecurityAttributeAndValues = 0;
  v70 = a2;
  v68 = a1;
  v57 = a12;
  v58 = 0;
  LODWORD(v77) = 0;
  *((_QWORD *)&v77 + 1) = 0LL;
  v73 = a4;
  memset(P, 0, sizeof(P));
  LOWORD(v67[0]) = 0;
  BYTE4(v67[0]) = 0;
  memset((char *)v67 + 5, 0, 0x4BuLL);
  LOWORD(v76[0]) = 0;
  memset((char *)v76 + 4, 0, 0x24uLL);
  v55 = -1;
  v72 = -1LL;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v14 = 2LL;
  v54[0] = 0;
  v56[0] = 0;
  v53[0] = 0;
  v61 = 0;
  v59 = 0;
  v71 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  HIDWORD(v76[1]) = 1;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    v32 = a12;
    goto LABEL_40;
  }
  v62 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v32 = a12;
    goto LABEL_40;
  }
  if ( *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v32 = a12;
    goto LABEL_40;
  }
  AuthzBasepResetOperands(v67, v54);
  LODWORD(v15) = 4;
  v60 = 0;
  v16 = 0LL;
  if ( a9 <= 4 )
    goto LABEL_69;
  do
  {
    v17 = *((unsigned __int8 *)a8 + (unsigned int)v15);
    if ( v17 == 248 )
    {
LABEL_16:
      v22 = (unsigned int)(v15 + 1);
      if ( (_DWORD)v16 == 2 )
      {
        if ( HIDWORD(v67[0]) == 1 )
          goto LABEL_170;
        v55 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v67[1]);
        SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v79, &v58, v55);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_69;
        if ( LOBYTE(v54[0]) )
          ExFreePoolWithTag(*(PVOID *)(v50 + 24), 0);
        v77 = *(_OWORD *)&P[7];
        *(_OWORD *)P = *(_OWORD *)&P[9];
        *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
        P[6] = P[15];
        *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
        v67[0] = *(_OWORD *)((char *)&v67[2] + 8);
        *(_OWORD *)((char *)&v67[1] + 8) = v67[4];
        *(_QWORD *)&v67[1] = &v77;
        v54[0] = HIBYTE(v54[0]);
        memset((char *)&v67[2] + 8, 0, 0x28uLL);
        memset(&P[7], 0, 0x48uLL);
        LODWORD(v16) = 1;
        v60 = 1;
      }
      if ( a9 - (unsigned int)v22 < 4 || (v23 = *(_DWORD *)((char *)a8 + v22), v24 = v22 + 4, v69 = v23, a9 - v24 < v23) )
      {
LABEL_170:
        SecurityAttributeAndValues = -1073741406;
        goto LABEL_69;
      }
      if ( v23 > 0xFFFE )
      {
        SecurityAttributeAndValues = -1073741562;
        goto LABEL_69;
      }
      v25 = (unsigned int)v16;
      LODWORD(v76[3]) = v23;
      v76[4] = (char *)a8 + v24;
      v63 = 72LL * (unsigned int)v16;
      String2 = (PCUNICODE_STRING)&P[v63 / 8];
      SecurityAttributeAndValues = AuthzBasepUnicodeStringFromOperandValue(
                                     v76,
                                     0LL,
                                     &P[v63 / 8],
                                     (char *)v54 + (unsigned int)v16);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_69;
      v26 = v63;
      switch ( (_BYTE)v17 )
      {
        case 0xF9:
          v28 = &P[v63 / 8 - 2];
          LODWORD(P[v63 / 8 - 2]) = 3;
          if ( a11 )
            v27 = a5;
          else
            v27 = v73;
          break;
        case 0xFB:
          v28 = &P[v63 / 8 - 2];
          LODWORD(P[v63 / 8 - 2]) = 5;
          if ( a11 )
            v27 = a7;
          else
            v27 = a6;
          break;
        case 0xFA:
          v27 = v74;
          v28 = &P[v63 / 8 - 2];
          LODWORD(P[v63 / 8 - 2]) = 4;
          break;
        case 0xFC:
          v27 = v68;
          v28 = &P[v63 / 8 - 2];
          LODWORD(P[v63 / 8 - 2]) = 6;
          break;
        default:
          v27 = v70;
          v28 = &P[v63 / 8 - 2];
          LODWORD(P[v63 / 8 - 2]) = 2;
          break;
      }
      *(PVOID *)((char *)&P[-1] + v26) = v27;
      *(PVOID *)((char *)&P[5] + v26) = 0LL;
      *(PVOID *)((char *)&P[6] + v26) = 0LL;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v28);
      if ( SecurityAttributeAndValues != -1073741275 )
        goto LABEL_33;
      if ( *(_DWORD *)v28 == 2
        && (SepSingletonGlobal[4] & 1) != 0
        && (v68[50] & 0x20000) == 0
        && SepPotentialGlobalTableAttribute(String2)
        && !v61 )
      {
        if ( v59 )
        {
LABEL_166:
          P[v63 / 8 - 1] = v71;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v28);
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_33;
          v29 = v63;
          P[v63 / 8 - 1] = v70;
LABEL_30:
          if ( v62 || *(_DWORD *)v28 != 2 )
            goto LABEL_55;
          *(_DWORD *)v28 = 7;
          *(PVOID *)((char *)&P[-1] + v29) = 0LL;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v28);
LABEL_33:
          if ( SecurityAttributeAndValues >= 0 )
          {
            v30 = 40 * v25;
            *(_WORD *)((char *)v67 + v30) = P[9 * v25 + 2];
            *(_DWORD *)((char *)v67 + v30 + 4) = P[9 * v25 + 3];
            *(_QWORD *)((char *)&v67[1] + v30) = &P[9 * v25 - 2];
            goto LABEL_35;
          }
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_69;
LABEL_55:
          v37 = 5 * v25;
          SecurityAttributeAndValues = 0;
          *((_WORD *)v67 + 4 * v37) = 0;
          *((_DWORD *)v67 + 2 * v37 + 1) = 0;
          *((_QWORD *)&v67[1] + v37) = 0LL;
          if ( *((_BYTE *)v54 + v25) )
          {
            ExFreePoolWithTag(P[v63 / 8 + 1], 0);
            if ( v25 >= 2 )
              _report_rangecheckfailure();
            *((_BYTE *)v54 + v25) = 0;
          }
LABEL_35:
          v31 = 40 * v25;
          v16 = v60 + 1;
          LODWORD(v15) = v69 + v24;
          *(_DWORD *)((char *)v67 + v31 + 12) = P[9 * v25 - 2];
          *(_DWORD *)((char *)&v67[1] + v31 + 8) = 0;
          *(_QWORD *)((char *)&v67[2] + v31) = 0LL;
          *(_DWORD *)((char *)v67 + v31 + 8) = 0;
LABEL_36:
          v60 = v16;
          continue;
        }
        v51 = SepValidateAndCopyGlobalEntry(v70, &v71);
        SecurityAttributeAndValues = v51;
        if ( v51 >= 0 )
        {
          v59 = 1;
          goto LABEL_166;
        }
        v61 = 1;
        if ( v51 != -1073741275 )
          goto LABEL_33;
      }
      v29 = v63;
      goto LABEL_30;
    }
    if ( v17 == 162 )
    {
      LODWORD(v15) = v15 + 1;
      if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, v67, v16, v53) )
        goto LABEL_170;
      if ( v18 == 1 )
      {
        v55 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v67[1]);
        v19 = v55;
        AuthzBasepResetOperands(v67, v54);
      }
      else
      {
        SecurityAttributeAndValues = AuthzBasepPopResult(v79, &v58, &v55);
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_69;
        v19 = v55;
      }
      if ( v19 == -1 )
        v20 = -1;
      else
        v20 = v19 == 0;
      v21 = v58;
      if ( v58 >= 0x100 )
      {
        SecurityAttributeAndValues = -1073740791;
        goto LABEL_69;
      }
      ++v58;
      SecurityAttributeAndValues = 0;
      v79[v21] = v20;
    }
    else
    {
      switch ( *((_BYTE *)a8 + (unsigned int)v15) )
      {
        case 0:
          while ( 1 )
          {
            v15 = (unsigned int)(v15 + 1);
            v36 = (_DWORD)v15 == a9;
            if ( (unsigned int)v15 >= a9 )
              break;
            if ( *((_BYTE *)a8 + v15) )
            {
              v36 = (_DWORD)v15 == a9;
              break;
            }
          }
          if ( !v36 )
            goto LABEL_170;
          continue;
        case 1:
        case 2:
        case 3:
        case 4:
        case 0x10:
        case 0x18:
        case 0x50:
        case 0x51:
          if ( (_DWORD)v16 != 2 )
            goto LABEL_59;
          if ( HIDWORD(v67[0]) == 1 )
            goto LABEL_170;
          v55 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v67[1]);
          SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v79, &v58, v55);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_69;
          if ( LOBYTE(v54[0]) )
            ExFreePoolWithTag(*(PVOID *)(v41 + 24), 0);
          v77 = *(_OWORD *)&P[7];
          *(_OWORD *)P = *(_OWORD *)&P[9];
          *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
          P[6] = P[15];
          *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
          v67[0] = *(_OWORD *)((char *)&v67[2] + 8);
          *(_OWORD *)((char *)&v67[1] + 8) = v67[4];
          *(_QWORD *)&v67[1] = &v77;
          v54[0] = HIBYTE(v54[0]);
          memset((char *)&v67[2] + 8, 0, 0x28uLL);
          memset(&P[7], 0, 0x48uLL);
          LODWORD(v16) = 1;
          v60 = 1;
LABEL_59:
          SecurityAttributeAndValues = AuthzBasepGetConstantOperand(
                                         (char *)a8 + (unsigned int)v15,
                                         a9 - (unsigned int)v15,
                                         (__int64)v67 + 40 * (unsigned int)v16,
                                         &v66);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_69;
          v16 = v60 + 1;
          LODWORD(v15) = v66 + v15;
          goto LABEL_36;
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
          LODWORD(v15) = v15 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v17, v67, v16, v53) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v53[0] )
              goto LABEL_69;
LABEL_105:
            v38 = -1;
            v55 = -1;
            goto LABEL_64;
          }
          if ( v53[0] )
            goto LABEL_105;
          AuthzBasepEvaluateExpression((unsigned __int8)v17, v67, &v55);
          v38 = v55;
          if ( ((_BYTE)v17 == 0x8E || (_BYTE)v17 == 0x8F) && v55 != -1 )
          {
            v38 = v55 == 0;
            v55 = v38;
          }
LABEL_64:
          SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v79, &v58, v38);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_69;
          break;
        case 0x87:
        case 0x8D:
          LODWORD(v15) = v15 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v17, v67, v16, v53) )
            goto LABEL_170;
          v39 = *(_QWORD *)&v67[1] != 0LL;
          v55 = v39;
          if ( (_BYTE)v17 != 0x8D )
            goto LABEL_68;
          goto LABEL_121;
        case 0x89:
        case 0x8B:
        case 0x90:
        case 0x92:
          LODWORD(v15) = v15 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v17, v67, v16, v53) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v53[0] )
              goto LABEL_69;
LABEL_118:
            v39 = -1;
            goto LABEL_119;
          }
          if ( !v53[0] )
          {
            v48 = (_BYTE)v17 == 0x89 || (_BYTE)v17 == 0x90;
            SecurityAttributeAndValues = AuthzBasepMemberOf((unsigned int)v67, (_DWORD)v68, a10, a11, v48, (__int64)v56);
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_118;
          v39 = v56[0] != 0;
LABEL_119:
          v55 = v39;
          if ( (((_BYTE)v17 + 112) & 0xFD) == 0 && v39 != -1 )
            goto LABEL_121;
          goto LABEL_68;
        case 0x8A:
        case 0x8C:
        case 0x91:
        case 0x93:
          LODWORD(v15) = v15 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v17, v67, v16, v53) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v53[0] )
              goto LABEL_69;
LABEL_132:
            v39 = -1;
            goto LABEL_133;
          }
          if ( !v53[0] )
          {
            v49 = (_BYTE)v17 == 0x8A || (_BYTE)v17 == 0x91;
            SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(
                                           (unsigned int)v67,
                                           (_DWORD)v68,
                                           a10,
                                           a11,
                                           v49,
                                           (__int64)v56);
          }
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_132;
          v39 = v56[0] != 0;
LABEL_133:
          v55 = v39;
          if ( (((_BYTE)v17 + 111) & 0xFD) == 0 && v39 != -1 )
          {
LABEL_121:
            v47 = v39 == 0;
            v39 = v47;
            v55 = v47;
          }
LABEL_68:
          SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v79, &v58, v39);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_69;
          break;
        case 0xA0:
        case 0xA1:
          LODWORD(v15) = v15 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v17, v67, v16, v53) )
            goto LABEL_170;
          if ( v42 == 2 )
          {
            v64 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v67[1]);
            v43 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v67[3] + 1));
            v65 = v43;
          }
          else
          {
            if ( v42 == 1 )
            {
              v64 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v67[1]);
            }
            else
            {
              SecurityAttributeAndValues = AuthzBasepPopResult(v79, &v58, &v64);
              if ( SecurityAttributeAndValues < 0 )
                goto LABEL_69;
            }
            SecurityAttributeAndValues = AuthzBasepPopResult(v79, &v58, &v65);
            if ( SecurityAttributeAndValues < 0 )
              goto LABEL_69;
            v43 = v65;
          }
          if ( (_BYTE)v17 == 0xA0 )
          {
            if ( !v44 || !v43 )
              goto LABEL_100;
            if ( v44 == -1 || v43 == -1 )
              goto LABEL_95;
          }
          else if ( v44 != 1 && v43 != 1 )
          {
            if ( v44 == -1 || v43 == -1 )
            {
LABEL_95:
              v45 = -1;
              v55 = -1;
              goto LABEL_102;
            }
LABEL_100:
            v45 = 0;
            v55 = 0;
            goto LABEL_102;
          }
          v55 = 1;
          v45 = 1;
LABEL_102:
          SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v79, &v58, v45);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_69;
          break;
        case 0xA3:
          LODWORD(v15) = v15 + 1;
          if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v17, v67, v16, v53) )
          {
            SecurityAttributeAndValues = -1073741406;
            if ( !v53[0] )
              goto LABEL_69;
LABEL_110:
            v46 = -1;
            goto LABEL_111;
          }
          if ( v53[0] )
            goto LABEL_110;
          AuthzBasepComputeExpression((unsigned __int8)v17, v67, &v72);
          if ( v72 == -1 )
            goto LABEL_110;
          v46 = v72 != 0;
LABEL_111:
          v55 = v46;
          SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v79, &v58, v46);
          if ( SecurityAttributeAndValues < 0 )
            goto LABEL_69;
          AuthzBasepResetOperands(v67, v54);
          v16 = v60;
          continue;
        case 0xF9:
        case 0xFA:
        case 0xFB:
        case 0xFC:
          goto LABEL_16;
        default:
          goto LABEL_170;
      }
    }
    AuthzBasepResetOperands(v67, v54);
    v16 = 0LL;
    v60 = 0;
  }
  while ( (unsigned int)v15 < a9 );
  if ( v58 == 1 )
  {
    v32 = v57;
    *v57 = v79[0];
    goto LABEL_40;
  }
  if ( !v58 && (_DWORD)v16 == 1 )
  {
    v40 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v67[1]);
    v32 = v57;
    *v57 = v40;
    goto LABEL_40;
  }
LABEL_69:
  v32 = v57;
LABEL_40:
  v33 = v54;
  v34 = &P[1];
  do
  {
    if ( *v33 )
      ExFreePoolWithTag(*v34, 0);
    ++v33;
    v34 += 9;
    --v14;
  }
  while ( v14 );
  if ( v59 )
  {
    v52 = v71;
    if ( v71 )
    {
      AuthzBasepFreeSecurityAttributesList(v71);
      ExFreePoolWithTag(v52, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v32 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
