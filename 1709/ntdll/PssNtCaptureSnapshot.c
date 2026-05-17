/*
 * XREFs of PssNtCaptureSnapshot @ 0x18005C280
 * Callers:
 *     <none>
 * Callees:
 *     PsspCaptureVaSpaceInformation @ 0x180059BCC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18005BD74 (PsspCaptureHandleInformation.c)
 *     PsspSampleCounters @ 0x18005C73C (PsspSampleCounters.c)
 *     PsspCaptureThreadInformation @ 0x18005C79C (PsspCaptureThreadInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureProcessInformation @ 0x18005CF50 (PsspCaptureProcessInformation.c)
 *     PsspCaptureIptTrace @ 0x18005D188 (PsspCaptureIptTrace.c)
 *     PssNtFreeSnapshot @ 0x18005D700 (PssNtFreeSnapshot.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A0A60 (ZwCreateProcessEx.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall PssNtCaptureSnapshot(void **a1, void *a2, unsigned int a3, unsigned int a4)
{
  void *v5; // r13
  int v7; // r14d
  __int64 v8; // rbx
  int v9; // esi
  void *v10; // rcx
  int v11; // r12d
  __int64 result; // rax
  int v13; // r12d
  int v14; // r12d
  int v15; // eax
  int Process; // ebx
  NTSTATUS v17; // r14d
  void *v18; // [rsp+58h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-31h] BYREF
  __int64 v20; // [rsp+68h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h] BYREF
  __int64 v25; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+98h] [rbp+7h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+Fh] BYREF
  _QWORD v28[8]; // [rsp+A8h] [rbp+17h] BYREF

  v5 = a2;
  if ( (a3 & 0x3FFC000) != 0 )
    return 3221225485LL;
  v7 = a3 & 0x1C000000;
  if ( (a3 & 0x1C000000) == 0x4000000 )
    return 3221225520LL;
  v8 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = a3 & 0x40000000;
  if ( (a3 & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    v23 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v10 = *a1;
  v11 = 0;
  v18 = v10;
  if ( !v10 )
  {
    v26 = 1144LL;
    result = ZwAllocateVirtualMemory(-1LL, &v18, 0LL, &v26, 4096, 4);
    if ( (int)result < 0 )
      return result;
    v10 = v18;
    v11 = 1;
    *a1 = v18;
  }
  memset(v10, 0, 0x478uLL);
  *(_DWORD *)v18 = 1146311504;
  *((_DWORD *)v18 + 1) = v11;
  *((_DWORD *)v18 + 2) = a3;
  v13 = PsspCaptureProcessInformation(v18, v5, a3);
  if ( v13 < 0 )
    goto LABEL_59;
  if ( (a3 & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v27 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages(v18, v5, a3, &v27);
    if ( v13 < 0 )
      goto LABEL_59;
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 135) = v19 - v21;
      *((_QWORD *)v18 + 136) = 1000000 * (v20 - v22) / v8;
    }
  }
  if ( (a3 & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureVaSpaceInformation((__int64)v18, (__int64)v5, a3);
    if ( v13 >= 0 )
    {
      if ( v9 )
      {
        PsspSampleCounters(&v20, &v19);
        *((_QWORD *)v18 + 133) = v19 - v21;
        *((_QWORD *)v18 + 134) = 1000000 * (v20 - v22) / v8;
      }
      goto LABEL_21;
    }
LABEL_59:
    PssNtFreeSnapshot(v18);
    *a1 = 0LL;
    return (unsigned int)v13;
  }
LABEL_21:
  if ( (a3 & 1) == 0 )
    goto LABEL_37;
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  do
  {
    while ( 1 )
    {
      v14 = ((int)a3 >> 31) & 0x1000;
      v15 = v14;
      if ( (v7 & 0x10000000) != 0 )
      {
        v15 = v14 | 0x400;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v15 = v14 | 1;
      }
      Process = ZwCreateProcessEx(v28, 0x2000000LL, 0LL, a2, v15, 0LL, 0LL, 0LL, 0);
      if ( Process >= 0 )
        goto LABEL_33;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_57;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_57:
      PssNtFreeSnapshot(v18);
      *a1 = 0LL;
      return (unsigned int)Process;
    }
    v7 &= ~0x8000000u;
    Process = -1073741267;
LABEL_33:
    ;
  }
  while ( Process == -1073741267 );
  *((_QWORD *)v18 + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)v18 + 109) = v28[0];
  if ( v9 )
  {
    PsspSampleCounters(&v20, &v19);
    v8 = v23;
    *((_QWORD *)v18 + 131) = v19 - v21;
    *((_QWORD *)v18 + 132) = 1000000 * (v20 - v22) / v8;
  }
  else
  {
    v8 = v23;
  }
  v5 = a2;
LABEL_37:
  if ( (a3 & 4) == 0 )
  {
LABEL_43:
    if ( (a3 & 0x80u) != 0 )
    {
      if ( v9 )
        PsspSampleCounters(&v22, &v21);
      v17 = PsspCaptureThreadInformation(v18, v5, a3, a4);
      if ( v17 < 0 )
        goto LABEL_61;
      if ( !v9 )
        goto LABEL_51;
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 139) = v19 - v21;
      *((_QWORD *)v18 + 140) = 1000000 * (v20 - v22) / v8;
    }
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 129) = v19 - v24;
      *((_QWORD *)v18 + 130) = 1000000 * (v20 - v25) / v8;
    }
LABEL_51:
    if ( (a3 & 0x2000) != 0 )
      PsspCaptureIptTrace(v18, v5);
    return 0LL;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v17 = PsspCaptureHandleInformation((__int64)v18, v5, a3);
  if ( v17 >= 0 )
  {
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)v18 + 137) = v19 - v21;
      *((_QWORD *)v18 + 138) = 1000000 * (v20 - v22) / v8;
    }
    goto LABEL_43;
  }
LABEL_61:
  PssNtFreeSnapshot(v18);
  *a1 = 0LL;
  return (unsigned int)v17;
}
