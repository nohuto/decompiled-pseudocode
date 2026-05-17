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

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  int v5; // r15d
  __int64 v6; // r12
  __int64 v7; // rdx
  ULONG v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  NTSTATUS v13; // eax
  int v14; // ebx
  HANDLE *v15; // r15
  int v16; // ecx
  int Section; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v24; // r8d
  int v25; // r9d
  char *v26; // rcx
  int v27; // r8d
  int v28; // r9d
  _QWORD v29[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  char v32; // [rsp+D0h] [rbp+67h] BYREF
  UNICODE_STRING *v33; // [rsp+D8h] [rbp+6Fh]
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF

  v33 = a2;
  v2 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  if ( !LdrpCheckForRetryLoading(a1, 0) )
  {
    FileHandle = (HANDLE)-1LL;
    v6 = v2 + 72;
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5285LL);
    v8 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v8 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v8;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(2112LL, v7) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    v12 = 2147353477LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v26 = (unsigned int)RtlGetCurrentServiceSessionId(v11, v9)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v26 & 0x20) != 0 )
      {
        LOBYTE(v25) = -1;
        LOBYTE(v24) = -1;
        LdrpLogEtwEvent(5253, -1, v24, v25, 0LL, 0LL);
      }
    }
    while ( 1 )
    {
      v13 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      v14 = v13;
      if ( v13 >= 0 )
        break;
      if ( v13 == -1073741772 || v13 == -1073741766 )
      {
        v14 = -1073741515;
        break;
      }
      if ( v13 != -1073741790 || v5 || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
        break;
      v5 = 1;
    }
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( !LdrpAuditIntegrityContinuity
      || (v14 = LdrpValidateIntegrityContinuity(a1, FileHandle), v14 >= 0)
      || !LdrpEnforceIntegrityContinuity )
    {
      v15 = (HANDLE *)(a1 + 24);
      v16 = 0x1000000;
      if ( UseWOW64 )
        v16 = 17825792;
      Section = NtCreateSection(a1 + 24, 15LL, 0LL, 0LL, 16, v16, FileHandle);
      v14 = Section;
      if ( Section < 0 )
      {
        if ( Section == -1073740702 || (unsigned int)(Section + 1073740674) <= 1 )
        {
          v14 = LdrAppxHandleIntegrityFailure((unsigned int)Section);
        }
        else if ( Section != -1073741801 && Section != -1073741670 && Section != -1073741523 )
        {
          v29[0] = v6;
          v29[1] = Section;
          if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v29, 1, &v32) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
        LdrpLogError((unsigned int)v14, 5253LL, 0LL, v6);
      }
      else
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v19, v18) )
          v10 = (__int64)NtCurrentPeb()->SharedData + 554;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20) )
            v12 = (__int64)NtCurrentPeb()->SharedData + 555;
          if ( (*(_BYTE *)v12 & 0x20) != 0 )
          {
            LOBYTE(v28) = -1;
            LOBYTE(v27) = -1;
            LdrpLogEtwEvent(5254, -1, v27, v28, 0LL, 0LL);
          }
        }
        if ( !UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x100) == 0 )
        {
          if ( LdrpAdvapi32DllHandle )
          {
            v14 = ((__int64 (__fastcall *)(HANDLE, UNICODE_STRING *))(__ROR8__(
                                                                        LdrpSaferIsDllAllowedRoutine,
                                                                        64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                    FileHandle,
                    v33);
            if ( v14 == -1073741275 )
              v14 = 0;
          }
          else
          {
            v14 = 0;
          }
        }
        if ( v14 >= 0 )
        {
          v22 = LdrpMapDllWithSectionHandle(a1);
          v14 = v22;
          if ( *(_QWORD *)(a1 + 168) )
          {
            if ( v22 >= 0 )
            {
              *(_QWORD *)(a1 + 176) = FileHandle;
              return (unsigned int)v14;
            }
          }
        }
        NtClose(*v15);
        *v15 = 0LL;
      }
    }
    if ( FileHandle != (HANDLE)-1LL )
      NtClose(FileHandle);
    return (unsigned int)v14;
  }
  return 3221226029LL;
}
