/*
 * XREFs of ViInitSystemPhase0 @ 0x140848008
 * Callers:
 *     VerifierInitSystem @ 0x14084819C (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     VfRandomGetNumber @ 0x1407A6C00 (VfRandomGetNumber.c)
 *     VfInitSystemNoRebootNeeded @ 0x1407A7248 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1407A8448 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x1407B6A74 (VfSetVerifierRunningMode.c)
 *     VfTriageSystem @ 0x14084702C (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x14086C870 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  LARGE_INTEGER v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // r15
  unsigned __int16 v9; // dx
  __int64 *QuadPart; // rbx
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int Number; // eax
  unsigned __int16 v15; // dx
  int v16; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v1 + 176);
  v4 = *(_DWORD *)(v1 + 116) & 2;
  v5 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v5;
  if ( (v5 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v5 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0, 1);
  qword_140362068 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140361B58 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140361B48 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = 4;
    dword_14036A13C = 4;
  }
  if ( !v4 && v3 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v3 + 56);
    BugCheckParameter1 = *(_QWORD *)(v3 + 64);
    qword_1407D5028 = *(_QWORD *)(v3 + 72);
    qword_1407D5030 = *(_QWORD *)(v3 + 80);
    qword_1407D5038 = *(_QWORD *)(v3 + 88);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || (unsigned int)(MmVerifyDriverBufferLength - 1) > 0xFFFFFFFD
    || (VfClearanceFlag = 1, v4) )
  {
    VfClearanceFlag = 0;
  }
  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") || VfClearanceFlag )
  {
    VerifyLevelRecord = MmVerifyDriverLevel;
    MmVerifyDriverLevel = 0;
    MmVerifyDriverBufferLength = -1;
    ViVerifyAllDrivers = 0;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( MmVerifyDriverLevel != -1 && MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*");
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_27;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_27:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_28;
  }
  if ( MmVerifyDriverBufferLength != -1 )
  {
LABEL_28:
    VfRandomVerifiedDrivers = 0;
    goto LABEL_29;
  }
  if ( !VfRandomVerifiedDrivers )
    return;
  if ( (unsigned int)VfRandomGetNumber(0, 0xFu) < 8 )
  {
    VfRandomVerifiedDrivers = 0;
    return;
  }
  VfRandomTargetsBitMapHeader = 256;
  qword_1407D5250 = (__int64)&VfRandomTargetsBitMap;
  memset(&VfRandomTargetsBitMap, 0, 0x20uLL);
  v11 = VfRandomVerifiedDrivers;
  if ( (unsigned int)VfRandomVerifiedDrivers > 0x100 )
  {
    v11 = 256;
    VfRandomVerifiedDrivers = 256;
  }
  v12 = 0;
  v13 = 0;
  if ( v11 )
  {
    do
    {
      Number = VfRandomGetNumber(1u, 0xFFu);
      v6.QuadPart = qword_1407D5250;
      LOBYTE(v6.LowPart) = _bittest((const signed __int32 *)qword_1407D5250, Number);
      if ( LOBYTE(v6.LowPart) )
        ++v12;
      else
        _bittestandset((signed __int32 *)qword_1407D5250, Number);
      v11 = VfRandomVerifiedDrivers;
      ++v13;
    }
    while ( v13 < VfRandomVerifiedDrivers );
  }
  MmVerifyDriverLevel = 1;
  VfRandomVerifiedDrivers = v11 - v12;
  MmVerifyDriverBufferLength = 0;
  if ( VfVerifyMode > 2 )
    VfSetVerifierRunningMode(2);
LABEL_29:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_69:
    ViVerifyAllDrivers = 1;
  }
  else if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v6.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v7 = (__int64 *)((char *)MmVerifyDriverBuffer
                   + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v7 )
    {
      v8 = 0x100002601LL;
      do
      {
        v9 = *(_WORD *)v6.QuadPart;
        if ( *(_WORD *)v6.QuadPart <= 0x20u && _bittest64(&v8, v9) || v9 == 12288 )
        {
          QuadPart = (__int64 *)v6.QuadPart;
        }
        else
        {
          if ( v9 == 42 )
            goto LABEL_69;
          if ( v9 == 34 )
          {
            v6.QuadPart += 2LL;
            QuadPart = (__int64 *)(v6.QuadPart + 2);
            if ( v6.QuadPart + 2 >= (unsigned __int64)v7 )
              break;
            do
            {
              if ( *(_WORD *)QuadPart == 34 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
            while ( QuadPart < v7 );
            if ( QuadPart >= v7 )
              break;
          }
          else
          {
            for ( QuadPart = (__int64 *)(v6.QuadPart + 2); QuadPart < v7; QuadPart = (__int64 *)((char *)QuadPart + 2) )
            {
              v15 = *(_WORD *)QuadPart;
              if ( *(_WORD *)QuadPart <= 0x20u )
              {
                if ( _bittest64(&v8, v15) )
                  break;
              }
              if ( v15 == 12288 )
                break;
            }
          }
          v16 = 2 * (((__int64)QuadPart - v6.QuadPart) >> 1);
          if ( v16 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v6.QuadPart) >> 1);
            String2.MaximumLength = v16 + 2;
            if ( (unsigned __int16)(v16 + 2) < (unsigned __int16)v16 )
              break;
            String2.Buffer = (wchar_t *)v6.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v6.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v7 );
    }
  }
  VfInitSystemNoRebootNeeded(v6.QuadPart, 1);
}
