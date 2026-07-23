/*
 * XREFs of LdrpMapDllNtFileName @ 0x180020A44
 * Callers:
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x180080334 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpCheckForRetryLoading @ 0x1800208D8 (LdrpCheckForRetryLoading.c)
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x180088068 (LdrpValidateIntegrityContinuity.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A0720 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1800A2C50 (NtRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEA00 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D18F0 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  int v5; // r15d
  unsigned __int64 v6; // r12
  ULONG v7; // eax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  NTSTATUS v11; // eax
  int v12; // ebx
  HANDLE *v13; // r15
  ULONG v14; // ecx
  NTSTATUS Section; // eax
  int v16; // eax
  int v18; // r8d
  int v19; // r9d
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  unsigned __int64 Parameters[2]; // [rsp+40h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  ULONG Response; // [rsp+D0h] [rbp+67h] BYREF
  _UNICODE_STRING *v27; // [rsp+D8h] [rbp+6Fh]
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF

  v27 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  if ( !LdrpCheckForRetryLoading(a1, 0) )
  {
    FileHandle = (HANDLE)-1LL;
    v6 = v2 + 72;
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5285LL);
    v7 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v7 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v7;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    v10 = 2147353477LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v20 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v20 & 0x20) != 0 )
      {
        LOBYTE(v19) = -1;
        LOBYTE(v18) = -1;
        LdrpLogEtwEvent(5253, -1, v18, v19, 0LL, 0LL);
      }
    }
    while ( 1 )
    {
      v11 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      v12 = v11;
      if ( v11 >= 0 )
        break;
      if ( v11 == -1073741772 || v11 == -1073741766 )
      {
        v12 = -1073741515;
        break;
      }
      if ( v11 != -1073741790 || v5 || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
        break;
      v5 = 1;
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( !LdrpAuditIntegrityContinuity
      || (v12 = LdrpValidateIntegrityContinuity(a1, FileHandle), v12 >= 0)
      || !LdrpEnforceIntegrityContinuity )
    {
      v13 = (HANDLE *)(a1 + 24);
      v14 = 0x1000000;
      if ( UseWOW64 )
        v14 = 17825792;
      Section = NtCreateSection((PHANDLE)(a1 + 24), 0xFu, 0LL, 0LL, 0x10u, v14, FileHandle);
      v12 = Section;
      if ( Section < 0 )
      {
        if ( Section == -1073740702 || (unsigned int)(Section + 1073740674) <= 1 )
        {
          v12 = LdrAppxHandleIntegrityFailure((unsigned int)Section);
        }
        else if ( Section != -1073741801 && Section != -1073741670 && Section != -1073741523 )
        {
          Parameters[0] = v6;
          Parameters[1] = Section;
          if ( NtRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
        LdrpLogError((unsigned int)v12, 5253LL, 0LL, v6);
      }
      else
      {
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 554;
        if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v10 = (__int64)NtCurrentPeb()->SharedData + 555;
          if ( (*(_BYTE *)v10 & 0x20) != 0 )
          {
            LOBYTE(v22) = -1;
            LOBYTE(v21) = -1;
            LdrpLogEtwEvent(5254, -1, v21, v22, 0LL, 0LL);
          }
        }
        if ( !UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
        {
          if ( LdrpAdvapi32DllHandle )
          {
            v12 = ((__int64 (__fastcall *)(HANDLE, _UNICODE_STRING *))(__ROR8__(
                                                                         LdrpSaferIsDllAllowedRoutine,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                    FileHandle,
                    v27);
            if ( v12 == -1073741275 )
              v12 = 0;
          }
          else
          {
            v12 = 0;
          }
        }
        if ( v12 >= 0 )
        {
          v16 = LdrpMapDllWithSectionHandle(a1);
          v12 = v16;
          if ( *(_QWORD *)(a1 + 168) )
          {
            if ( v16 >= 0 )
            {
              *(_QWORD *)(a1 + 176) = FileHandle;
              return (unsigned int)v12;
            }
          }
        }
        NtClose(*v13);
        *v13 = 0LL;
      }
    }
    if ( FileHandle != (HANDLE)-1LL )
      NtClose(FileHandle);
    return (unsigned int)v12;
  }
  return 3221226029LL;
}
