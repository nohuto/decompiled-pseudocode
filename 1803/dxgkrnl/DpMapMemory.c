/*
 * XREFs of DpMapMemory @ 0x1C01ED9E0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C01FE690 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        __int64 a3,
        char a4,
        PLARGE_INTEGER Timeout,
        int a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // r13
  __int64 v8; // r15
  char v9; // r12
  SIZE_T v10; // rbx
  union _LARGE_INTEGER *v11; // rdi
  int v12; // esi
  __int64 v13; // rax
  char v14; // r9
  __int64 v15; // rsi
  union _LARGE_INTEGER v16; // rbx
  unsigned int v17; // r12d
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  SIZE_T v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rcx
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  union _LARGE_INTEGER **v31; // rax
  LONGLONG v32; // rcx
  char v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *QuadPart; // rdx
  void **v39; // rax
  SIZE_T v40; // r8
  PVOID v41; // rcx
  int v43; // [rsp+5Ch] [rbp-5Dh]
  void *SectionHandle; // [rsp+60h] [rbp-59h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-49h] BYREF
  SIZE_T CommitSize; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  union _LARGE_INTEGER v50; // [rsp+110h] [rbp+57h] BYREF
  SIZE_T NumberOfBytes; // [rsp+118h] [rbp+5Fh]
  char v52; // [rsp+120h] [rbp+67h]

  v52 = a4;
  LODWORD(NumberOfBytes) = a3;
  v50 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0;
  v10 = (unsigned int)a3;
  v11 = 0LL;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v15) = -1073741811;
    v37 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_44;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v15) = -1073741811;
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    goto LABEL_35;
  }
  if ( KeGetCurrentIrql() )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
  }
  v14 = v52;
  *v7 = 0LL;
  LODWORD(v15) = DpiVerifyResources(v12, (unsigned int)&v50, v10, v14, (char)Timeout, (__int64)&a6, (__int64)v7);
  if ( (int)v15 >= 0 )
  {
    if ( !*v7 )
    {
      v43 = a6;
      if ( v52 == 1 )
      {
        v16 = v50;
        v9 = 0;
        *v7 = (PVOID)v50.QuadPart;
LABEL_37:
        PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v15) = -1073741801;
          v30 = WdLogNewEntry5_WdLowResource(v29);
          *(_QWORD *)(v30 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v30);
LABEL_52:
          if ( v9 == 1 )
          {
            v40 = (unsigned int)NumberOfBytes;
            *(_DWORD *)(v8 + 2440) -= ((*(_DWORD *)v7 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12;
            v41 = *v7;
            if ( (_BYTE)Timeout == 1 )
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v41);
            else
              MmUnmapIoSpace(v41, v40);
          }
          return (unsigned int)v15;
        }
        PoolWithTag[2].LowPart = 1953656900;
        PoolWithTag[2].HighPart = 8;
        PoolWithTag[3].LowPart = 1;
        PoolWithTag[4] = v16;
        PoolWithTag[5].LowPart = NumberOfBytes;
        BYTE4(PoolWithTag[5].QuadPart) = v52;
        BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)Timeout;
        PoolWithTag[6].QuadPart = PsGetCurrentProcess(v29, v28);
        v11[7].LowPart = v43;
        v11[8].QuadPart = (LONGLONG)*v7;
        LOBYTE(v11[9].LowPart) = v9;
        KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
        v31 = (union _LARGE_INTEGER **)(v8 + 2368);
        v32 = *(_QWORD *)(v8 + 2368);
        if ( *(_QWORD *)(v32 + 8) != v8 + 2368 )
          __fastfail(3u);
        v11->QuadPart = v32;
        v11[1].QuadPart = (LONGLONG)v31;
        *(_QWORD *)(v32 + 8) = v11;
        *v31 = v11;
        KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
        v33 = 1;
        v36 = WdLogNewEntry5_WdEvent(v35, v34);
        *(_QWORD *)(v36 + 24) = v11;
        WdLogEvent5_WdEvent(v36);
LABEL_45:
        if ( (int)v15 >= 0 )
          return (unsigned int)v15;
        if ( v33 == 1 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
          QuadPart = (_QWORD *)v11->QuadPart;
          if ( *(union _LARGE_INTEGER **)(v11->QuadPart + 8) != v11 || (v39 = (void **)v11[1].QuadPart, *v39 != v11) )
            __fastfail(3u);
          *v39 = QuadPart;
          QuadPart[1] = v39;
          KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
        }
        if ( v11 )
          ExFreePoolWithTag(v11, 0x74727044u);
        goto LABEL_52;
      }
      v17 = 0;
      if ( (_BYTE)Timeout != 1 )
      {
        v17 = 4;
        if ( !a6 || byte_1C007A750 )
        {
          v17 = 516;
        }
        else if ( a6 != 1 )
        {
          if ( a6 == 2 )
          {
            v17 = 1028;
          }
          else
          {
            v23 = WdLogNewEntry5_WdError((unsigned int)(a6 - 1));
            *(_QWORD *)(v23 + 24) = v43;
            *(_QWORD *)(v23 + 32) = v8;
            WdLogEvent5_WdError(v23);
          }
        }
        v24 = v10;
        v16 = v50;
        v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                (union _LARGE_INTEGER)v50.QuadPart,
                v24,
                v17);
LABEL_33:
        *v7 = (PVOID)v22;
        v25 = (unsigned int)NumberOfBytes;
        if ( v22 )
        {
          v9 = 1;
          *(_DWORD *)(v8 + 2440) += ((unsigned int)NumberOfBytes + (unsigned __int64)(v22 & 0xFFF) + 4095) >> 12;
          goto LABEL_37;
        }
        LODWORD(v15) = -1073741811;
        v26 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v26 + 24) = v25;
        *(_QWORD *)(v26 + 32) = v17;
LABEL_35:
        WdLogEvent5_WdError(v26);
        return (unsigned int)v15;
      }
      CommitSize = v10;
      ViewSize = v10;
      RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
      v15 = v18;
      if ( v18 >= 0 )
      {
        v16 = v50;
        SectionOffset = v50;
        if ( byte_1C007A750 == 1 || !v43 )
        {
          v17 = 512;
        }
        else if ( v43 == 2 )
        {
          v17 = 1024;
        }
        v15 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v7,
                0LL,
                CommitSize,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v17 | 4);
        ZwClose(SectionHandle);
        if ( (int)v15 >= 0 )
        {
          if ( v16.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v15) = -1073741823;
            v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19);
            v21[3] = 275LL;
            v21[4] = 21LL;
            v21[5] = -1073741823LL;
            WdLogEvent5_WdCriticalError(v21);
            return (unsigned int)v15;
          }
          LODWORD(NumberOfBytes) = SectionOffset.LowPart + ViewSize - v16.LowPart;
          v22 = (__int64)*v7 + v16.QuadPart - SectionOffset.QuadPart;
          goto LABEL_33;
        }
      }
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = v15;
      WdLogEvent5_WdError(v20);
      v9 = 0;
    }
LABEL_44:
    v33 = 0;
    goto LABEL_45;
  }
  return (unsigned int)v15;
}
