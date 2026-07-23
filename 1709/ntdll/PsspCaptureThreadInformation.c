/*
 * XREFs of PsspCaptureThreadInformation @ 0x18005C79C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspDumpThread @ 0x18005CAA4 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18005CCA8 (PsspFreeLinkedHandleList.c)
 *     RtlGetExtendedContextLength @ 0x1800724A0 (RtlGetExtendedContextLength.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A1EB0 (ZwGetNextThread.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  PVOID *v6; // r15
  unsigned __int16 *v7; // rsi
  ACCESS_MASK v8; // r12d
  unsigned int v9; // r14d
  NTSTATUS NextThread; // edi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // esi
  unsigned __int64 v14; // rcx
  PVOID v15; // rdx
  int v16; // r12d
  PVOID *v17; // r14
  unsigned int i; // r12d
  int v19; // eax
  __int64 v20; // rdx
  ULONG_PTR v22; // rax
  NTSTATUS ExtendedContextLength; // eax
  int Flags; // [rsp+28h] [rbp-69h]
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+60h] [rbp-31h] BYREF
  PVOID v27; // [rsp+68h] [rbp-29h] BYREF
  HANDLE NewThreadHandle; // [rsp+70h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-11h] BYREF
  int v31; // [rsp+88h] [rbp-9h]
  int v32[2]; // [rsp+90h] [rbp-1h] BYREF
  int v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+9Ch] [rbp+Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v31 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v31 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0, 0, &NewThreadHandle);
  if ( NextThread != -2147483622 )
  {
    v11 = 1LL;
    do
    {
      v12 = (int)NewThreadHandle;
      ThreadHandle = NewThreadHandle;
      if ( NextThread < 0 )
        goto LABEL_34;
      if ( !v7 || v7[5] >= v7[4] )
      {
        ViewSize = 1LL;
        v27 = 0LL;
        NextThread = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v27, 0LL, &ViewSize, 0x1000u, 4u);
        if ( NextThread < 0 )
          goto LABEL_34;
        if ( v6 )
        {
          *(_QWORD *)v7 = v27;
          v7 = (unsigned __int16 *)v27;
        }
        else
        {
          v7 = (unsigned __int16 *)v27;
          v6 = (PVOID *)v27;
        }
        LODWORD(v11) = 1;
        v22 = ViewSize - 16;
        v7[5] = 0;
        v7[4] = v22 >> 2;
        v12 = (int)NewThreadHandle;
      }
      v9 += v11;
      *(_DWORD *)&v7[2 * v7[5] + 6] = v12;
      v7[5] += v11;
      NextThread = ZwGetNextThread(a2, ThreadHandle, v8, 0, 0, &NewThreadHandle);
      v11 = 1LL;
    }
    while ( NextThread != -2147483622 );
    if ( !v9 )
      return 0LL;
    v13 = 0;
    LODWORD(ThreadHandle) = 0;
    if ( v31 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
            v13 = (int)ThreadHandle,
            ExtendedContextLength < 0) )
      {
        v13 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v13;
    v11 = 0xFFFFFFFFLL;
    v14 = v9 * (unsigned __int64)(((v13 + 15) & 0xFFFFFFF0) + 128);
    if ( v14 > 0xFFFFFFFF )
    {
      NextThread = -1073741675;
    }
    else
    {
      MaximumSize.QuadPart = (unsigned int)v14;
      NextThread = NtCreateSection(
                     &SectionHandle,
                     0xF0007u,
                     (POBJECT_ATTRIBUTES)&stru_1801185E8,
                     &MaximumSize,
                     4u,
                     0x8000000u,
                     0LL);
      if ( NextThread >= 0 )
      {
        BaseAddress = 0LL;
        ViewSize = 0LL;
        NextThread = ZwMapViewOfSection(
                       SectionHandle,
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       &BaseAddress,
                       0LL,
                       0LL,
                       0LL,
                       &ViewSize,
                       ViewShare,
                       0,
                       4u);
        if ( NextThread >= 0 )
        {
          v15 = BaseAddress;
          v16 = 0;
          v17 = v6;
          *(_QWORD *)v32 = BaseAddress;
          v33 = ViewSize;
          v34 = 0LL;
          if ( v6 )
          {
            do
            {
              for ( i = 0; i < *((unsigned __int16 *)v17 + 5); ++i )
              {
                NewThreadHandle = (HANDLE)*((unsigned int *)v17 + i + 3);
                v19 = PsspDumpThread((int)v32, a3, a4, v13, Flags, NewThreadHandle);
                NextThread = v19;
                if ( v19 == -1073741789 )
                  break;
                if ( v19 < 0 )
                {
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                  goto LABEL_33;
                }
              }
              if ( NextThread < 0 )
                break;
              v17 = (PVOID *)*v17;
            }
            while ( v17 );
            v15 = BaseAddress;
            v16 = HIDWORD(v34);
            v4 = v34;
          }
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v15);
          PsspFreeLinkedHandleList(v6, v20);
          *(_QWORD *)(a1 + 1000) = v4;
          *(_QWORD *)(a1 + 1008) = SectionHandle;
          *(_DWORD *)(a1 + 992) = v16;
          *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
          return 0LL;
        }
LABEL_33:
        NtClose(SectionHandle);
      }
    }
LABEL_34:
    PsspFreeLinkedHandleList(v6, v11);
    return (unsigned int)NextThread;
  }
  return 0LL;
}
