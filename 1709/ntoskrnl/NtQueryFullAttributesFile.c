/*
 * XREFs of NtQueryFullAttributesFile @ 0x14053C2D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14053D570 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // esi
  NTSTATUS result; // eax
  __int64 v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _QWORD v16[28]; // [rsp+50h] [rbp-258h] BYREF
  _OWORD v17[4]; // [rsp+130h] [rbp-178h] BYREF
  char v18; // [rsp+170h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset(v16, 0, 0xD8uLL);
  memset(v17, 0, 0x38uLL);
  LODWORD(v16[0]) = 14155784;
  HIWORD(v16[8]) = 7;
  LODWORD(v16[11]) = 1;
  LODWORD(v16[8]) = 2113536;
  BYTE1(v16[17]) = 1;
  BYTE3(v16[17]) = 1;
  v16[18] = &v18;
  v16[6] = ObjectAttributes;
  LODWORD(v16[19]) = 32;
  if ( PreviousMode )
    v16[13] = v17;
  else
    v16[13] = FileInformation;
  memset(&v16[20], 0, 0x28uLL);
  LOWORD(v16[20]) = 40;
  v16[24] = 1LL;
  v16[24] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v16,
         v16[24],
         Handle);
  if ( v16[21] )
  {
    if ( (*(_DWORD *)(v16[21] + 4LL) & 1) != 0 )
    {
      v9 = v16[21] + 8LL;
      v10 = *(_QWORD **)(v16[21] + 8LL);
      if ( v10 != (_QWORD *)(v16[21] + 8LL) )
      {
        do
        {
          v11 = v10 - 1;
          v10 = (_QWORD *)*v10;
          if ( (v11[6] & 1) == 0 )
          {
            v12 = v11 + 1;
            v13 = v11[1];
            v14 = (_QWORD *)v11[2];
            if ( *(_QWORD **)(v13 + 8) != v11 + 1 || (_QWORD *)*v14 != v12 )
              __fastfail(3u);
            *v14 = v13;
            *(_QWORD *)(v13 + 8) = v14;
            v11[2] = 0LL;
            *v12 = 0LL;
            FsRtlFreeExtraCreateParameter(v11 + 9);
          }
        }
        while ( v10 != (_QWORD *)v9 );
      }
    }
    else
    {
      FsRtlFreeExtraCreateParameterList((PECP_LIST)v16[21]);
      v16[21] = 0LL;
    }
  }
  if ( LODWORD(v16[4]) == -1096154543 )
  {
    result = v16[2];
    if ( SLODWORD(v16[2]) >= 0 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)&FileInformation->CreationTime.LowPart = v17[0];
        *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v17[1];
        *(_OWORD *)&FileInformation->AllocationSize.LowPart = v17[2];
        *(_QWORD *)&FileInformation->FileAttributes = *(_QWORD *)&v17[3];
      }
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
