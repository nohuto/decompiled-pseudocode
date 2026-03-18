/*
 * XREFs of DpMapMemory @ 0x1C01DB4D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C01E0CE8 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        __int64 a3,
        char a4,
        PLARGE_INTEGER a5,
        DWORD a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // r14
  __int64 v8; // r13
  union _LARGE_INTEGER *v9; // rdi
  ULONG_PTR v10; // r12
  int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  char v15; // bl
  __int64 v16; // rsi
  union _LARGE_INTEGER v17; // rbx
  char v18; // r15
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *QuadPart; // rdx
  void **v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  DWORD LowPart; // eax
  _QWORD *v30; // rax
  int v31; // r12d
  unsigned int v32; // edi
  LONGLONG v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  union _LARGE_INTEGER **v41; // rax
  LONGLONG v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned int v49; // [rsp+5Ch] [rbp-4Dh]
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  union _LARGE_INTEGER v55; // [rsp+100h] [rbp+57h] BYREF
  char v56; // [rsp+110h] [rbp+67h]

  v56 = a4;
  v55 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)a3;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v16) = -1073741811;
    v28 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v16) = -1073741811;
    v36 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    goto LABEL_50;
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
  *v7 = 0LL;
  v14 = DpiVerifyResources(v12, (unsigned int)&v55, v10, a4, (char)a5, (__int64)&a6, (__int64)v7);
  v15 = 0;
  LODWORD(v16) = v14;
  if ( v14 >= 0 )
  {
    if ( *v7 )
    {
LABEL_16:
      v18 = 0;
      goto LABEL_17;
    }
    if ( v56 == 1 )
    {
      v17 = v55;
      v18 = 0;
      *v7 = (PVOID)v55.QuadPart;
LABEL_52:
      PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v16) = -1073741801;
        v40 = WdLogNewEntry5_WdLowResource(v39);
        *(_QWORD *)(v40 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v40);
LABEL_24:
        if ( v18 == 1 )
        {
          *(_DWORD *)(v8 + 2440) -= ((unsigned int)v10 + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
          if ( (_BYTE)a5 == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
          else
            MmUnmapIoSpace(*v7, (unsigned int)v10);
        }
        return (unsigned int)v16;
      }
      PoolWithTag[2].LowPart = 1953656900;
      PoolWithTag[2].HighPart = 8;
      PoolWithTag[3].LowPart = 1;
      PoolWithTag[4] = v17;
      PoolWithTag[5].LowPart = v10;
      BYTE4(PoolWithTag[5].QuadPart) = v56;
      BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)a5;
      PoolWithTag[6].QuadPart = PsGetCurrentProcess(v39, v38);
      v9[7].LowPart = a6;
      v9[8].QuadPart = (LONGLONG)*v7;
      LOBYTE(v9[9].LowPart) = v18;
      KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
      v41 = (union _LARGE_INTEGER **)(v8 + 2368);
      v42 = *(_QWORD *)(v8 + 2368);
      if ( *(_QWORD *)(v42 + 8) != v8 + 2368 )
        __fastfail(3u);
      v9->QuadPart = v42;
      v9[1].QuadPart = (LONGLONG)v41;
      *(_QWORD *)(v42 + 8) = v9;
      *v41 = v9;
      KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
      v15 = 1;
      v47 = WdLogNewEntry5_WdEvent(v44, v43, v45, v46);
      *(_QWORD *)(v47 + 24) = v9;
      WdLogEvent5_WdEvent(v47);
LABEL_17:
      if ( (int)v16 >= 0 )
        return (unsigned int)v16;
      if ( v15 == 1 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
        QuadPart = (_QWORD *)v9->QuadPart;
        if ( *(union _LARGE_INTEGER **)(v9->QuadPart + 8) != v9 || (v23 = (void **)v9[1].QuadPart, *v23 != v9) )
          __fastfail(3u);
        *v23 = QuadPart;
        QuadPart[1] = v23;
        KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0x74727044u);
      goto LABEL_24;
    }
    v49 = 0;
    if ( (_BYTE)a5 != 1 )
    {
      v34 = (int)a6;
      v32 = 4;
      if ( !a6 || byte_1C0060850 )
      {
        v32 = 516;
      }
      else if ( a6 != 1 )
      {
        if ( a6 == 2 )
        {
          v32 = 1028;
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(a6 - 1);
          *(_QWORD *)(v35 + 24) = v34;
          *(_QWORD *)(v35 + 32) = v8;
          WdLogEvent5_WdError(v35);
        }
      }
      v17 = v55;
      *v7 = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                     (union _LARGE_INTEGER)v55.QuadPart,
                     v10,
                     v32);
LABEL_48:
      if ( *v7 )
      {
        v18 = 1;
        *(_DWORD *)(v8 + 2440) += ((unsigned int)v10 + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
        goto LABEL_52;
      }
      LODWORD(v16) = -1073741811;
      v36 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v36 + 24) = (unsigned int)v10;
      *(_QWORD *)(v36 + 32) = v32;
LABEL_50:
      WdLogEvent5_WdError(v36);
      return (unsigned int)v16;
    }
    ViewSize = v10;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
    v16 = v19;
    if ( v19 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = v16;
      WdLogEvent5_WdError(v21);
      goto LABEL_16;
    }
    v17 = v55;
    SectionOffset = v55;
    if ( byte_1C0060850 == 1 || !a6 )
    {
      v24 = 512;
    }
    else
    {
      if ( a6 != 2 )
      {
        v24 = 0;
        goto LABEL_34;
      }
      v24 = 1024;
    }
    v49 = v24;
LABEL_34:
    v16 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            v7,
            0LL,
            v10,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            v24 | 4);
    ZwClose(SectionHandle);
    if ( (int)v16 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v28 + 24) = v16;
LABEL_36:
      WdLogEvent5_WdError(v28);
      v18 = 0;
      v15 = 0;
      goto LABEL_17;
    }
    LowPart = SectionOffset.LowPart;
    if ( v17.LowPart < SectionOffset.LowPart )
    {
      LODWORD(v16) = -1073741823;
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
      v30[3] = 275LL;
      v30[4] = 21LL;
      v30[5] = -1073741823LL;
      WdLogEvent5_WdCriticalError(v30);
      return (unsigned int)v16;
    }
    v31 = ViewSize;
    v32 = v49;
    v33 = v17.QuadPart - SectionOffset.QuadPart;
    *v7 = (char *)*v7 + v17.QuadPart - SectionOffset.QuadPart;
    LODWORD(v10) = LowPart + v31 - v17.LowPart;
    goto LABEL_48;
  }
  return (unsigned int)v16;
}
