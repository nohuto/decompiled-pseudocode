/*
 * XREFs of DpMapMemory @ 0x1C01C1CB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiVerifyResources @ 0x1C01C6BC8 (DpiVerifyResources.c)
 */

__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        __int64 a3,
        __int64 a4,
        PLARGE_INTEGER a5,
        DWORD a6,
        PVOID *BaseAddress)
{
  PVOID *v7; // r14
  __int64 v8; // r13
  union _LARGE_INTEGER *v9; // rdi
  ULONG_PTR v10; // r12
  char v11; // si
  int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  char v16; // bl
  __int64 v17; // rsi
  union _LARGE_INTEGER v18; // rbx
  char v19; // r15
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *QuadPart; // rdx
  void **v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  DWORD LowPart; // eax
  _QWORD *v32; // rax
  int v33; // r12d
  unsigned int v34; // edi
  LONGLONG v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  union _LARGE_INTEGER *PoolWithTag; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  union _LARGE_INTEGER **v42; // rax
  LONGLONG v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v47; // [rsp+5Ch] [rbp-4Dh]
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  union _LARGE_INTEGER v53; // [rsp+100h] [rbp+57h] BYREF
  char v54; // [rsp+110h] [rbp+67h]

  v54 = a4;
  v53 = a2;
  v7 = BaseAddress;
  v8 = 0LL;
  v9 = 0LL;
  v10 = (unsigned int)a3;
  v11 = a4;
  v12 = a1;
  if ( !a1 || !BaseAddress || !(_DWORD)a3 )
  {
    LODWORD(v17) = -1073741811;
    v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, (union _LARGE_INTEGER)a2.QuadPart);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_DWORD *)(v8 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v8 + 20) - 2) > 1 )
  {
    LODWORD(v17) = -1073741811;
    v38 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, (union _LARGE_INTEGER)a2.QuadPart);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    goto LABEL_50;
  }
  if ( KeGetCurrentIrql() )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            (union _LARGE_INTEGER)a2.QuadPart,
            a3,
            a4);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
  }
  *v7 = 0LL;
  LOBYTE(a4) = v11;
  v14 = DpiVerifyResources(v12, (unsigned int)&v53, v10, a4, (char)a5, (__int64)&a6, (__int64)v7);
  v16 = 0;
  LODWORD(v17) = v14;
  if ( v14 >= 0 )
  {
    if ( *v7 )
    {
LABEL_16:
      v19 = 0;
      goto LABEL_17;
    }
    if ( v54 == 1 )
    {
      v18 = v53;
      v19 = 0;
      *v7 = (PVOID)v53.QuadPart;
LABEL_52:
      PoolWithTag = (union _LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(v17) = -1073741801;
        v41 = WdLogNewEntry5_WdLowResource(v40);
        *(_QWORD *)(v41 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v41);
LABEL_24:
        if ( v19 == 1 )
        {
          *(_DWORD *)(v8 + 2440) -= ((unsigned int)v10 + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
          if ( (_BYTE)a5 == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
          else
            MmUnmapIoSpace(*v7, (unsigned int)v10);
        }
        return (unsigned int)v17;
      }
      PoolWithTag[2].LowPart = 1953656900;
      PoolWithTag[2].HighPart = 8;
      PoolWithTag[3].LowPart = 1;
      PoolWithTag[4] = v18;
      PoolWithTag[5].LowPart = v10;
      BYTE4(PoolWithTag[5].QuadPart) = v54;
      BYTE5(PoolWithTag[5].QuadPart) = (_BYTE)a5;
      PoolWithTag[6].QuadPart = PsGetCurrentProcess(v40);
      v9[7].LowPart = a6;
      v9[8].QuadPart = (LONGLONG)*v7;
      LOBYTE(v9[9].LowPart) = v19;
      KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
      v42 = (union _LARGE_INTEGER **)(v8 + 2368);
      v43 = *(_QWORD *)(v8 + 2368);
      if ( *(_QWORD *)(v43 + 8) != v8 + 2368 )
        __fastfail(3u);
      v9->QuadPart = v43;
      v9[1].QuadPart = (LONGLONG)v42;
      *(_QWORD *)(v43 + 8) = v9;
      *v42 = v9;
      KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
      v16 = 1;
      v45 = WdLogNewEntry5_WdEvent(v44);
      *(_QWORD *)(v45 + 24) = v9;
      WdLogEvent5_WdEvent(v45);
LABEL_17:
      if ( (int)v17 >= 0 )
        return (unsigned int)v17;
      if ( v16 == 1 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 2384), Executive, 0, 0, 0LL);
        QuadPart = (_QWORD *)v9->QuadPart;
        v25 = (void **)v9[1].QuadPart;
        if ( *(union _LARGE_INTEGER **)(v9->QuadPart + 8) != v9 || *v25 != v9 )
          __fastfail(3u);
        *v25 = QuadPart;
        QuadPart[1] = v25;
        KeReleaseMutex((PRKMUTEX)(v8 + 2384), 0);
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0x74727044u);
      goto LABEL_24;
    }
    v47 = 0;
    if ( (_BYTE)a5 != 1 )
    {
      v36 = (int)a6;
      v34 = 4;
      if ( !a6 || byte_1C006F9D0 )
      {
        v34 = 516;
      }
      else if ( a6 != 1 )
      {
        if ( a6 == 2 )
        {
          v34 = 1028;
        }
        else
        {
          v37 = WdLogNewEntry5_WdError(a6 - 1, v15);
          *(_QWORD *)(v37 + 24) = v36;
          *(_QWORD *)(v37 + 32) = v8;
          WdLogEvent5_WdError(v37);
        }
      }
      v18 = v53;
      *v7 = (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                     (union _LARGE_INTEGER)v53.QuadPart,
                     v10,
                     v34);
LABEL_48:
      if ( *v7 )
      {
        v19 = 1;
        *(_DWORD *)(v8 + 2440) += ((unsigned int)v10 + (unsigned __int64)(*(_DWORD *)v7 & 0xFFF) + 4095) >> 12;
        goto LABEL_52;
      }
      LODWORD(v17) = -1073741811;
      v38 = WdLogNewEntry5_WdError(v35, v27);
      *(_QWORD *)(v38 + 24) = (unsigned int)v10;
      *(_QWORD *)(v38 + 32) = v34;
LABEL_50:
      WdLogEvent5_WdError(v38);
      return (unsigned int)v17;
    }
    ViewSize = v10;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
    v17 = v20;
    if ( v20 < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v23 + 24) = v17;
      WdLogEvent5_WdError(v23);
      goto LABEL_16;
    }
    v18 = v53;
    SectionOffset = v53;
    if ( byte_1C006F9D0 == 1 || !a6 )
    {
      v26 = 512;
    }
    else
    {
      if ( a6 != 2 )
      {
        v26 = 0;
        goto LABEL_34;
      }
      v26 = 1024;
    }
    v47 = v26;
LABEL_34:
    v17 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            v7,
            0LL,
            v10,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            v26 | 4);
    ZwClose(SectionHandle);
    if ( (int)v17 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v30 + 24) = v17;
LABEL_36:
      WdLogEvent5_WdError(v30);
      v19 = 0;
      v16 = 0;
      goto LABEL_17;
    }
    LowPart = SectionOffset.LowPart;
    if ( v18.LowPart < SectionOffset.LowPart )
    {
      LODWORD(v17) = -1073741823;
      v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
      v32[3] = 275LL;
      v32[4] = 21LL;
      v32[5] = -1073741823LL;
      WdLogEvent5_WdCriticalError(v32);
      return (unsigned int)v17;
    }
    v33 = ViewSize;
    v34 = v47;
    v35 = v18.QuadPart - SectionOffset.QuadPart;
    *v7 = (char *)*v7 + v18.QuadPart - SectionOffset.QuadPart;
    LODWORD(v10) = LowPart + v33 - v18.LowPart;
    goto LABEL_48;
  }
  return (unsigned int)v17;
}
