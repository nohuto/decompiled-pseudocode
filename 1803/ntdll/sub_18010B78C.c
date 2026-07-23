/*
 * XREFs of sub_18010B78C @ 0x18010B78C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x18006D010 (RtlGetExtendedContextLength.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwGetNextThread @ 0x18009C8D0 (ZwGetNextThread.c)
 *     sub_18010BAC8 @ 0x18010BAC8 (sub_18010BAC8.c)
 *     sub_18010BCFC @ 0x18010BCFC (sub_18010BCFC.c)
 */

__int64 __fastcall sub_18010B78C(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  PVOID *v6; // r15
  _WORD *v7; // rsi
  ACCESS_MASK v8; // r12d
  unsigned int v9; // r14d
  NTSTATUS NextThread; // edi
  int v11; // ecx
  unsigned __int16 v12; // ax
  ULONG_PTR v13; // rax
  int v14; // esi
  NTSTATUS ExtendedContextLength; // eax
  unsigned __int64 v16; // rcx
  PVOID v18; // rdx
  int v19; // r12d
  PVOID *v20; // r14
  unsigned int i; // r12d
  int v22; // eax
  int Flags; // [rsp+28h] [rbp-69h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+60h] [rbp-31h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-29h] BYREF
  HANDLE NewThreadHandle; // [rsp+70h] [rbp-21h] BYREF
  PVOID v28; // [rsp+78h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-11h] BYREF
  int v30; // [rsp+88h] [rbp-9h]
  int v31[2]; // [rsp+90h] [rbp-1h] BYREF
  int v32; // [rsp+98h] [rbp+7h]
  __int64 v33; // [rsp+9Ch] [rbp+Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v30 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v30 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0, 0, &NewThreadHandle);
  if ( NextThread != -2147483622 )
  {
    do
    {
      v11 = (int)NewThreadHandle;
      ThreadHandle = NewThreadHandle;
      if ( NextThread < 0 )
        goto LABEL_18;
      if ( !v7 || (v12 = v7[5], v12 >= v7[4]) )
      {
        RegionSize = 1LL;
        BaseAddress = 0LL;
        NextThread = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        if ( NextThread < 0 )
          goto LABEL_18;
        if ( v6 )
        {
          *(_QWORD *)v7 = BaseAddress;
          v7 = BaseAddress;
        }
        else
        {
          v7 = BaseAddress;
          v6 = (PVOID *)BaseAddress;
        }
        v13 = RegionSize - 16;
        v7[5] = 0;
        v7[4] = v13 >> 2;
        v12 = 0;
        v11 = (int)NewThreadHandle;
      }
      ++v9;
      *(_DWORD *)&v7[2 * v12 + 6] = v11;
      ++v7[5];
      NextThread = ZwGetNextThread(a2, ThreadHandle, v8, 0, 0, &NewThreadHandle);
    }
    while ( NextThread != -2147483622 );
    if ( !v9 )
      return 0LL;
    v14 = 0;
    LODWORD(ThreadHandle) = 0;
    if ( v30 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
            v14 = (int)ThreadHandle,
            ExtendedContextLength < 0) )
      {
        v14 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v14;
    v16 = v9 * (unsigned __int64)(((v14 + 15) & 0xFFFFFFF0) + 128);
    if ( v16 > 0xFFFFFFFF )
    {
      NextThread = -1073741675;
LABEL_18:
      sub_18010BCFC(v6);
      return (unsigned int)NextThread;
    }
    MaximumSize.QuadPart = (unsigned int)v16;
    NextThread = ZwCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&stru_180131960,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0LL);
    if ( NextThread < 0 )
      goto LABEL_18;
    v28 = 0LL;
    RegionSize = 0LL;
    NextThread = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &v28,
                   0LL,
                   0LL,
                   0LL,
                   &RegionSize,
                   ViewShare,
                   0,
                   4u);
    if ( NextThread < 0 )
    {
LABEL_21:
      ZwClose(SectionHandle);
      goto LABEL_18;
    }
    v18 = v28;
    v19 = 0;
    v20 = v6;
    *(_QWORD *)v31 = v28;
    v32 = RegionSize;
    v33 = 0LL;
    if ( v6 )
    {
      do
      {
        for ( i = 0; i < *((unsigned __int16 *)v20 + 5); ++i )
        {
          NewThreadHandle = (HANDLE)*((unsigned int *)v20 + i + 3);
          v22 = sub_18010BAC8((int)v31, a3, a4, v14, Flags, NewThreadHandle);
          NextThread = v22;
          if ( v22 == -1073741789 )
            break;
          if ( v22 < 0 )
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28);
            goto LABEL_21;
          }
        }
        if ( NextThread < 0 )
          break;
        v20 = (PVOID *)*v20;
      }
      while ( v20 );
      v18 = v28;
      v19 = HIDWORD(v33);
      v4 = v33;
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18);
    sub_18010BCFC(v6);
    *(_QWORD *)(a1 + 1000) = v4;
    *(_QWORD *)(a1 + 1008) = SectionHandle;
    *(_DWORD *)(a1 + 992) = v19;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
