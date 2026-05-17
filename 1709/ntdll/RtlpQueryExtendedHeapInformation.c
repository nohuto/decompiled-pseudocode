/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1800136B8
 * Callers:
 *     RtlQueryHeapInformation @ 0x1800137A0 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlpQueryExtendedInformationHeap @ 0x180012E80 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180013308 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int ExtendedInformationHeap; // r14d
  int v9; // ecx
  unsigned int v10; // r14d
  __int16 v12; // si
  unsigned __int64 v13; // rdx
  int v14; // esi
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r12
  _QWORD *v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rdi
  unsigned __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+70h] [rbp-90h]
  _QWORD *v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+88h] [rbp-78h]
  _QWORD *v30; // [rsp+90h] [rbp-70h]
  _QWORD v31[12]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v32[18]; // [rsp+100h] [rbp+0h] BYREF
  int v33; // [rsp+1A0h] [rbp+A0h]
  HANDLE Handle; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( (a1 & 7) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v28 = *(_DWORD *)(a1 + 16);
    memset(v31, 0, sizeof(v31));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v29 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v31[0] = a1;
      v31[10] = a1 + 40;
      v31[11] = a1 + a2;
      v6 = v31;
      v31[9] = a1;
      v29 = RtlpExtendedHeapInformationGenerator;
    }
    v30 = v6;
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 16) == -571548178 )
        v12 = *(_WORD *)(v7 + 60);
      else
        v12 = *(_WORD *)(v7 + 208);
      if ( v12 != -1 )
        RtlLockHeap();
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8), (__int64)&v28);
      if ( v12 != -1 )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps((__int64)&v28);
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
    v9 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v9 = ExtendedInformationHeap;
    v10 = v9;
    if ( v29 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v9 >= 0 )
      {
        v13 = v31[10];
        if ( a3 )
          *a3 = v31[10] - v31[9];
        if ( v13 > v31[11] )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v10;
  }
  else
  {
    Handle = 0LL;
    v23 = 0LL;
    v22 = 0x10000LL;
    v14 = NtCreateSection(&Handle, 983071LL, 0LL, &v22, 4, 0x8000000, 0LL);
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        memset(v32, 0, 0x58uLL);
        v16 = *(_QWORD *)a1;
        v32[2] = *(_QWORD *)(a1 + 8);
        LODWORD(v32[3]) = *(_DWORD *)(a1 + 16);
        v32[1] = v22;
        v32[0] = Handle;
        v17 = RtlpHeapPerformCrossProcessQuery(v16, v32);
        v14 = v17;
        if ( v17 != -1073741789 )
          break;
        NtClose(Handle);
        Handle = 0LL;
        v22 = (v32[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
        v14 = NtCreateSection(&Handle, 983071LL, 0LL, &v22, 4, 0x8000000, 0LL);
        if ( v14 < 0 )
          goto LABEL_56;
      }
      if ( v17 >= 0 )
      {
        v24 = 0LL;
        v25 = 0x10000LL;
        v14 = ZwMapViewOfSection(Handle, -1LL, &v23, 0LL, 0x10000LL, &v24, &v25, 2, 0, 4);
        if ( v14 >= 0 )
        {
          v18 = 0LL;
          memset(v31, 0, sizeof(v31));
          v26 = *(__int64 (__fastcall **)())(a1 + 24);
          if ( v26 )
          {
            v19 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v31[0] = a1;
            v31[10] = a1 + 40;
            v31[9] = a1;
            v31[11] = a1 + a2;
            v19 = v31;
            v26 = RtlpExtendedHeapInformationGenerator;
          }
          v33 = 0;
          v27 = v19;
          if ( LODWORD(v32[5]) )
          {
            while ( 1 )
            {
              v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v20 >= v22 )
                break;
              v15 = v25;
              if ( v20 >= 2 * v25 || (__int64)(v25 + v24) > (__int64)v22 )
                break;
              v21 = v20 + v23;
              if ( v20 + 16 >= v25 || !*(_DWORD *)v21 )
              {
                NtUnmapViewOfSection(-1LL, v23, v25);
                v23 = 0LL;
                v24 += v25;
                v14 = ZwMapViewOfSection(Handle, -1LL, &v23, 0LL, v25, &v24, &v25, 2, 0, 4);
                if ( v14 < 0 )
                  goto LABEL_48;
                v21 = v23;
                v20 = 0LL;
              }
              v14 = ((__int64 (__fastcall *)(__int64, _QWORD *))v26)(v21, v27);
              if ( v14 >= 0 )
              {
                v18 = *(_QWORD *)(v21 + 8) + v20;
                if ( (unsigned int)++v33 < LODWORD(v32[5]) )
                  continue;
              }
              goto LABEL_48;
            }
            v14 = -1073741762;
          }
LABEL_48:
          if ( v26 == RtlpExtendedHeapInformationGenerator )
          {
            if ( v14 >= 0 )
            {
              if ( a3 )
                *a3 = v31[10] - v31[9];
              if ( v31[10] > v31[11] )
                v14 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_56:
    if ( v23 )
      NtUnmapViewOfSection(-1LL, v23, v15);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v14;
  }
}
