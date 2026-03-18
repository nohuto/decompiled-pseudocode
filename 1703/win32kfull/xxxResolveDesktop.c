/*
 * XREFs of xxxResolveDesktop @ 0x1C0010FB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxConnectService @ 0x1C000FE54 (xxxConnectService.c)
 *     _OpenDesktop @ 0x1C0010E24 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C0011850 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C00118CC (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C0011B10 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     RtlStringCchPrintfW @ 0x1C00127D4 (RtlStringCchPrintfW.c)
 *     MapDesktop @ 0x1C001B370 (MapDesktop.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00C736C (CloseProtectedHandle.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r14d
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  PVOID v9; // r12
  __int64 ProcessWin32Process; // rax
  PVOID *v11; // r15
  HANDLE v12; // rax
  int v13; // r8d
  int v14; // r13d
  int v15; // eax
  struct _UNICODE_STRING *v16; // r14
  __int64 v17; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v19; // xmm1
  __int16 v20; // cx
  unsigned __int64 v21; // xmm0_8
  _WORD *i; // rdx
  PVOID v23; // rcx
  ULONG v24; // eax
  NTSTATUS v25; // eax
  PVOID v26; // r14
  PVOID *Object; // [rsp+20h] [rbp-3C8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-3A8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-3A0h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-398h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-390h]
  int v32; // [rsp+5Ch] [rbp-38Ch]
  int v33; // [rsp+60h] [rbp-388h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-380h] BYREF
  int v35; // [rsp+78h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-368h] BYREF
  HANDLE *v37; // [rsp+88h] [rbp-360h]
  _QWORD *v38; // [rsp+90h] [rbp-358h]
  PVOID v39; // [rsp+98h] [rbp-350h] BYREF
  PUNICODE_STRING v40; // [rsp+A0h] [rbp-348h]
  int v41; // [rsp+A8h] [rbp-340h]
  void *TargetHandle; // [rsp+B0h] [rbp-338h] BYREF
  HANDLE SourceProcessHandle; // [rsp+B8h] [rbp-330h]
  PVOID v44; // [rsp+C0h] [rbp-328h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-318h] BYREF
  _DWORD v46[2]; // [rsp+E0h] [rbp-308h] BYREF
  PVOID v47[3]; // [rsp+E8h] [rbp-300h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+100h] [rbp-2E8h] BYREF
  char *v49; // [rsp+110h] [rbp-2D8h]
  __int64 v50; // [rsp+118h] [rbp-2D0h]
  int v51; // [rsp+120h] [rbp-2C8h] BYREF
  PVOID v52; // [rsp+128h] [rbp-2C0h]
  PVOID v53; // [rsp+130h] [rbp-2B8h]
  int v54; // [rsp+138h] [rbp-2B0h]
  int v55; // [rsp+13Ch] [rbp-2ACh]
  wchar_t pszDest[32]; // [rsp+150h] [rbp-298h] BYREF
  char v57; // [rsp+190h] [rbp-258h] BYREF

  v32 = a4;
  v37 = a3;
  SourceProcessHandle = a1;
  v39 = a1;
  v47[1] = a3;
  v38 = a5;
  v6 = 0;
  v33 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v40 = 0LL;
  BaseAddress = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v44, 0LL);
  v8 = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v57;
    v9 = v44;
    ProcessWin32Process = PsGetProcessWin32Process(v44);
    v11 = (PVOID *)ProcessWin32Process;
    v50 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 640) && *(_QWORD *)(ProcessWin32Process + 360) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess() )
        {
          Handle = v11[80];
          SourceHandle = v11[45];
        }
        else
        {
          v8 = ObOpenObjectByPointer(v11[79], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( v8 >= 0 )
          {
            v8 = ObOpenObjectByPointer(v11[38], 0, 0LL, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 1, &SourceHandle);
            if ( v8 < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( v8 < 0 )
          {
            v24 = RtlNtStatusToDosError(v8);
            UserSetLastError(v24);
          }
        }
        ObfDereferenceObject(v9);
        *v37 = Handle;
        v12 = SourceHandle;
        if ( SourceHandle )
          v8 = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v19 = *a2;
      Source = v19;
      v20 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v19) >> 1;
      v21 = _mm_srli_si128((__m128i)v19, 8).m128i_u64[0];
      for ( i = (_WORD *)v21; v20; --v20 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v13 = 0;
      v31 = 0;
      if ( v20 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v20 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v21) >> 1);
        v14 = 0;
        v35 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        v8 = UserTestForWinStaAccess(&Destination);
        if ( v8 < 0 )
          goto LABEL_49;
        v13 = 0;
LABEL_17:
        v15 = 0;
        if ( !v13 )
          v15 = v32;
        v32 = v15;
        v41 = v15;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v14 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v33 = 0;
            GetProcessLuid(0LL, v46);
            LODWORD(Object) = v46[0];
            RtlStringCchPrintfW(pszDest, 0x1DuLL, L"Service-0x%x-%x$", v46[1], Object);
            RtlInitUnicodeString(&Source, pszDest);
          }
          else
          {
            v33 = 1;
            v6 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess() )
          {
            v25 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            v8 = v25;
            if ( v25 < 0 )
            {
              Handle = 0LL;
LABEL_25:
              if ( v8 >= 0 && !Handle )
              {
                Destination.Length = 0;
                RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
                RtlAppendUnicodeToString(&Destination, L"\\");
                RtlAppendUnicodeStringToString(&Destination, &Source);
                RegionSize = 586LL;
                v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
                v40 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v49 = (char *)BaseAddress + 48;
                if ( v8 >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v40;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v32 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbRemoteSession && v8 >= 0 && !Handle && !v6 && v14 )
              {
                v8 = xxxConnectService(&Destination, &SourceHandle, v37);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( v8 < 0 )
                  return v8;
                goto LABEL_52;
              }
              v13 = v31;
LABEL_33:
              if ( !Handle )
              {
                v8 = -1073741823;
                goto LABEL_49;
              }
              if ( SourceHandle )
              {
LABEL_49:
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                *v37 = Handle;
LABEL_52:
                v12 = SourceHandle;
LABEL_10:
                *v38 = v12;
                return v8;
              }
              if ( !v13 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
              {
LABEL_37:
                if ( v8 < 0 )
                {
LABEL_47:
                  if ( !SourceHandle )
                  {
                    ObCloseHandle(Handle, 1);
                    Handle = 0LL;
                  }
                  goto LABEL_49;
                }
                if ( !SourceHandle )
                {
                  RtlCopyUnicodeString(&Destination, &DestinationString);
                  if ( BaseAddress )
                  {
                    v16 = v40;
                  }
                  else
                  {
                    RegionSize = 586LL;
                    v8 = ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           0x1000u,
                           4u);
                    v16 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( v8 >= 0 )
                  {
                    SafeCopyUnicodeString(v16, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v17 = v31;
                    *((_DWORD *)BaseAddress + 6) = (v31 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v16;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v32 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v17 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop((__int64)BaseAddress, v17, 0LL, 0x2000000, &SourceHandle);
                    v8 = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess() )
              {
                v8 = ZwDuplicateObject(SourceProcessHandle, SourceHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v39, 0, 0, 2u);
                if ( v8 < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v39;
              }
              if ( !SourceHandle || !v11 )
                goto LABEL_37;
              v8 = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v39, 0LL);
              if ( v8 >= 0 )
              {
                v51 = 1;
                v52 = v9;
                v26 = v39;
                v53 = v39;
                v54 = 0;
                v55 = 1;
                v8 = MapDesktop(&v51);
                if ( v8 < 0 )
                {
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v26);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v47, 0LL);
          if ( v8 >= 0 )
          {
            v23 = v47[0];
            if ( (((*((_DWORD *)v47[0] + 8) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle);
                v23 = v47[0];
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v23);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v19;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v13 = 1;
      v31 = 1;
    }
    v14 = 1;
    v35 = 1;
    goto LABEL_17;
  }
  return result;
}
