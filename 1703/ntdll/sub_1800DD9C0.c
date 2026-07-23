/*
 * XREFs of sub_1800DD9C0 @ 0x1800DD9C0
 * Callers:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     RtlWerpReportException_0 @ 0x180003BD8 (RtlWerpReportException_0.c)
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     sub_1800DE2C0 @ 0x1800DE2C0 (sub_1800DE2C0.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 *     sub_1800DE578 @ 0x1800DE578 (sub_1800DE578.c)
 *     sub_1800DE5B4 @ 0x1800DE5B4 (sub_1800DE5B4.c)
 *     sub_1800DE5E4 @ 0x1800DE5E4 (sub_1800DE5E4.c)
 */

__int64 __fastcall sub_1800DD9C0(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  _OWORD *v5; // rdi
  int v7; // ebx
  char *v8; // rcx
  NTSTATUS v9; // r14d
  __int64 v10; // rbx
  ULONG v11; // ebx
  int v12; // eax
  _QWORD *v13; // rcx
  char *v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int CrashVerticalProcessHandle; // [rsp+40h] [rbp-508h]
  HANDLE TargetHandle; // [rsp+48h] [rbp-500h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-4F8h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-4F0h] BYREF
  char *v22; // [rsp+60h] [rbp-4E8h]
  PVOID BaseAddress; // [rsp+68h] [rbp-4E0h] BYREF
  HANDLE CrashReportSharedMem; // [rsp+70h] [rbp-4D8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-4D0h] BYREF
  int v26; // [rsp+80h] [rbp-4C8h]
  ULONG ProcessId; // [rsp+84h] [rbp-4C4h]
  __int64 v28; // [rsp+88h] [rbp-4C0h]
  char v29; // [rsp+90h] [rbp-4B8h] BYREF
  ULONG Flags[2]; // [rsp+500h] [rbp-48h] BYREF

  v28 = a4;
  v4 = a3;
  v5 = a2;
  Handle = 0LL;
  EventHandle = 0LL;
  CrashReportSharedMem = 0LL;
  TargetHandle = 0LL;
  v20 = 0LL;
  v7 = 0;
  BaseAddress = 0LL;
  v22 = 0LL;
  if ( (a3 & 4) == 0 )
    sub_1800DE578(-1LL, a2, a3);
  if ( (int)sub_1800DE2C0(&EventHandle) < 0 )
  {
    EventHandle = 0LL;
  }
  else
  {
    *(_QWORD *)Flags = EventHandle;
    v7 = 1;
  }
  v26 = sub_1800DE4A0((HANDLE)0xFFFFFFFFFFFFFFFFLL);
  v8 = &v29;
  if ( v26 < 0 )
    v8 = 0LL;
  v22 = v8;
  v9 = sub_1800DE334(&CrashReportSharedMem, &BaseAddress);
  if ( v9 >= 0 )
  {
    *(_QWORD *)&Flags[2 * v7] = CrashReportSharedMem;
    v10 = (unsigned int)(v7 + 1);
    CrashVerticalProcessHandle = v10;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      TargetHandle = 0LL;
    }
    else
    {
      *(_QWORD *)&Flags[2 * v10] = TargetHandle;
      v10 = (unsigned int)(v10 + 1);
      CrashVerticalProcessHandle = v10;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &v20,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      v20 = 0LL;
    }
    else
    {
      *(_QWORD *)&Flags[2 * v10] = v20;
      CrashVerticalProcessHandle = v10 + 1;
    }
    v11 = sub_180070674((void *)0xFFFFFFFFFFFFFFFFLL);
    ProcessId = v11;
    v12 = sub_1800DE5B4(-2LL);
    v13 = BaseAddress;
    *(_DWORD *)BaseAddress = 248;
    v13[21] = 1LL;
    *((_DWORD *)v13 + 1) = v11;
    *((_DWORD *)v13 + 2) = v12;
    v13[23] = TargetHandle;
    v13[24] = v20;
    v13[26] = EventHandle;
    v13[28] = v22;
    *((_DWORD *)v13 + 58) = v26;
    *((_DWORD *)v13 + 59) = v4;
    v14 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v15 = v14 + 416;
    *((_QWORD *)v14 + 31) = 1LL;
    *((_QWORD *)v14 + 32) = 1LL;
    *(_OWORD *)(v14 + 264) = *(_OWORD *)a1;
    *(_OWORD *)(v14 + 280) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v14 + 296) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v14 + 312) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v14 + 328) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v14 + 344) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v14 + 360) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(v14 + 376) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v14 + 392) = *(_OWORD *)(a1 + 128);
    *((_QWORD *)v14 + 51) = *(_QWORD *)(a1 + 144);
    v16 = 9LL;
    do
    {
      *v15 = *v5;
      v15[1] = v5[1];
      v15[2] = v5[2];
      v15[3] = v5[3];
      v15[4] = v5[4];
      v15[5] = v5[5];
      v15[6] = v5[6];
      v15 += 8;
      *(v15 - 1) = v5[7];
      v5 += 8;
      --v16;
    }
    while ( v16 );
    *v15 = *v5;
    v15[1] = v5[1];
    v15[2] = v5[2];
    v15[3] = v5[3];
    v15[4] = v5[4];
    v9 = RtlWerpReportException_0(ProcessId, CrashReportSharedMem, (ULONG)Flags, (PHANDLE)CrashVerticalProcessHandle);
    if ( v9 >= 0 )
    {
      if ( !Handle || (v9 = sub_1800DE5E4(0LL, EventHandle, Handle, v28, v4, &Handle), v9 >= 0) )
        v9 = 0;
    }
  }
  if ( v22 )
    PssNtFreeSnapshot((__int64)v22);
  if ( BaseAddress )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( CrashReportSharedMem )
      ZwClose(CrashReportSharedMem);
    if ( Handle )
      ZwClose(Handle);
  }
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v20 )
  {
    ZwClose(v20);
    v20 = 0LL;
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)v9;
}
