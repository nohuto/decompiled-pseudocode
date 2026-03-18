/*
 * XREFs of ViInitSystemPhase0 @ 0x1408C58B4
 * Callers:
 *     VerifierInitSystem @ 0x1408C5854 (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x1408143C8 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x140815478 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x140824760 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x1408C5A74 (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x1408C5ABC (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x1408E15B8 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  const char *v6; // rcx
  LARGE_INTEGER v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  __int64 *v10; // rdi
  __int64 v11; // r15
  unsigned __int16 v12; // dx
  __int64 *QuadPart; // rbx
  __int64 *v14; // rax
  __int16 v15; // dx
  __int64 *v16; // r8
  unsigned __int16 v17; // dx
  int v18; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v1 + 176);
  v4 = *(_DWORD *)(v1 + 116) & 2;
  v5 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v5;
  if ( (v5 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v5 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0LL, 1);
  qword_1403A56A8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_1403A5168 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_1403A5188 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (MmVerifierData & 0x400000) != 0 ? 2 : 4;
    dword_1403AD1DC = VfVerifyMode;
  }
  if ( !v4 && v3 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v3 + 56);
    BugCheckParameter1 = *(_QWORD *)(v3 + 64);
    qword_140842028 = *(_QWORD *)(v3 + 72);
    qword_140842030 = *(_QWORD *)(v3 + 80);
    qword_140842038 = *(_QWORD *)(v3 + 88);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || ((MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v8 = 1, v4) )
  {
    v8 = 0;
  }
  v6 = *(const char **)(a1 + 216);
  VfClearanceFlag = v8;
  if ( strstr(v6, "SAFEBOOT:") || VfClearanceFlag )
  {
    VerifyLevelRecord = MmVerifyDriverLevel;
    MmVerifyDriverLevel = 0;
    MmVerifyDriverBufferLength = -1;
    VfRandomVerifiedDrivers = 0;
    ViVerifyAllDrivers = 0;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  if ( MmVerifyDriverLevel == -1 )
    goto LABEL_13;
  if ( !VfRandomVerifiedDrivers && MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*");
  if ( MmVerifyDriverLevel == -1 || (MmVerifyDriverLevel & 0x400000) == 0 )
LABEL_13:
    VfRandomVerifiedDrivers = 0;
  if ( VfRandomVerifiedDrivers )
  {
    v9 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v9;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v9 >= 3 )
    {
      if ( v9 > 0x200 )
        ViExpectedDriversCount = 512;
    }
    else
    {
      ViExpectedDriversCount = 256;
    }
  }
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_38;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_38:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_39;
  }
  if ( MmVerifyDriverBufferLength != -1 )
  {
LABEL_39:
    VfRandomVerifiedDrivers = 0;
    goto LABEL_40;
  }
  if ( !(unsigned int)ViInitPickRandomTargets() )
    return;
  MmVerifyDriverBufferLength = 0;
  if ( VfVerifyMode > 2 )
    VfSetVerifierRunningMode(2);
LABEL_40:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_72:
    ViVerifyAllDrivers = 1;
  }
  else if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v7.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v10 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v10 )
    {
      v11 = 0x100002601LL;
      do
      {
        v12 = *(_WORD *)v7.QuadPart;
        if ( *(_WORD *)v7.QuadPart <= 0x20u && _bittest64(&v11, v12) || v12 == 12288 )
        {
          QuadPart = (__int64 *)v7.QuadPart;
        }
        else
        {
          if ( v12 == 42 )
            goto LABEL_72;
          QuadPart = (__int64 *)(v7.QuadPart + 2);
          if ( v12 == 34 )
          {
            v14 = (__int64 *)(v7.QuadPart + 4);
            v7.QuadPart += 2LL;
            if ( (__int64 *)((char *)QuadPart + 2) >= v10 )
              break;
            do
            {
              v15 = *(_WORD *)v14;
              v16 = v14;
              if ( *(_WORD *)v14 == 34 )
                break;
              v14 = (__int64 *)((char *)v14 + 2);
            }
            while ( v14 < v10 );
            QuadPart = (__int64 *)((char *)v16 + 2);
            if ( v15 == 34 )
              QuadPart = v16;
            if ( QuadPart >= v10 )
              break;
          }
          else
          {
            while ( QuadPart < v10 )
            {
              v17 = *(_WORD *)QuadPart;
              if ( *(_WORD *)QuadPart <= 0x20u )
              {
                if ( _bittest64(&v11, v17) )
                  break;
              }
              if ( v17 == 12288 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
          }
          v18 = 2 * (((__int64)QuadPart - v7.QuadPart) >> 1);
          if ( v18 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v7.QuadPart) >> 1);
            String2.MaximumLength = v18 + 2;
            if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
              break;
            String2.Buffer = (wchar_t *)v7.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v7.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v10 );
    }
  }
  VfInitSystemNoRebootNeeded(v7.QuadPart, 1);
}
