/*
 * XREFs of HvApplyLogFile @ 0x1406A2770
 * Callers:
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x140176E1C (SymCryptMarvin32.c)
 *     HvpIsMetadataArrayCoherent @ 0x1401E5D6C (HvpIsMetadataArrayCoherent.c)
 *     CmpTraceHiveMountLogEntryApplied @ 0x14068A3C8 (CmpTraceHiveMountLogEntryApplied.c)
 *     HvpLogEntryCheckHeaderChecksum @ 0x140693A24 (HvpLogEntryCheckHeaderChecksum.c)
 *     HvpRecoverDataReadRoutine @ 0x1406A1C84 (HvpRecoverDataReadRoutine.c)
 *     HvpApplyLogEntry @ 0x1406A2C58 (HvpApplyLogEntry.c)
 *     HvpUpdateRecoveryVector @ 0x1406A3044 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvApplyLogFile(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int64 a3,
        __int64 a4,
        char **a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v8; // r15d
  char **v9; // rsi
  unsigned int v12; // edi
  char v13; // r14
  int Routine; // ecx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  int v19; // [rsp+28h] [rbp-71h]
  __int64 v20; // [rsp+38h] [rbp-61h] BYREF
  int v21[2]; // [rsp+40h] [rbp-59h] BYREF
  char *v22; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23; // [rsp+50h] [rbp-49h]
  _DWORD *v24; // [rsp+58h] [rbp-41h]
  _DWORD *v25; // [rsp+60h] [rbp-39h]
  __int128 v26; // [rsp+68h] [rbp-31h] BYREF
  __int128 v27; // [rsp+78h] [rbp-21h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  __int64 v29; // [rsp+90h] [rbp-9h] BYREF

  v8 = 0;
  v9 = a5;
  v24 = a7;
  v12 = 512;
  v13 = 0;
  v25 = a8;
  v23 = (__int64)a5;
  while ( 1 )
  {
    Routine = HvpRecoverDataReadRoutine(BugCheckParameter2, v9, v12, 40, &v22);
    if ( Routine < 0 )
      break;
    v26 = *(_OWORD *)v22;
    v27 = *((_OWORD *)v22 + 1);
    v28 = *((_QWORD *)v22 + 4);
    if ( (_DWORD)v26 != 1162638920 )
      goto LABEL_25;
    if ( DWORD1(v26) <= 0x28 )
      goto LABEL_25;
    if ( DWORD1(v26) + v12 > 0xFFFFFFFF )
      goto LABEL_25;
    if ( !(_DWORD)v27 )
      goto LABEL_25;
    if ( (unsigned int)v27 > 0x7FFFE000 )
      goto LABEL_25;
    if ( (v27 & 0xFFF) != 0 )
      goto LABEL_25;
    if ( !DWORD1(v27) )
      goto LABEL_25;
    v15 = 8 * DWORD1(v27) + 40;
    if ( v15 > 0xFFFFFFFF || DWORD1(v26) < v15 || !HvpLogEntryCheckHeaderChecksum((__int64)&v26) || HIDWORD(v26) != a2 )
      goto LABEL_25;
    Routine = HvpRecoverDataReadRoutine(BugCheckParameter2, v9, v12, SDWORD1(v26), (char **)v21);
    if ( Routine < 0 )
      break;
    v16 = *(_QWORD *)v21;
    if ( !HvpIsMetadataArrayCoherent((unsigned int *)&v26, *(_QWORD *)v21 + 40LL, DWORD1(v27)) )
      goto LABEL_25;
    SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)(v16 + 40), (unsigned int)(DWORD1(v26) - 40), &v29);
    if ( *((_QWORD *)&v27 + 1) != v29 )
      goto LABEL_25;
    v17 = *(_QWORD *)v21 + 40LL;
    Routine = HvpApplyLogEntry(BugCheckParameter2, v19, (__int64)&v20);
    if ( Routine < 0 )
      break;
    v13 = 1;
    ++v8;
    CmpTraceHiveMountLogEntryApplied(SDWORD1(v26), v20);
    if ( a6 )
      HvpUpdateRecoveryVector(v17, DWORD1(v27), a6);
    v9 = (char **)v23;
    ++a2;
    v12 += DWORD1(v26);
    if ( !v12 )
    {
      Routine = -2147483622;
      break;
    }
  }
  if ( Routine != -1073741801 && Routine != -1073741670 && Routine != -1073741492 )
  {
LABEL_25:
    Routine = v13 != 0 ? 0x40000009 : 0;
    *v24 = a2;
    *v25 = v8;
  }
  return (unsigned int)Routine;
}
