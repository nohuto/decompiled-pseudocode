/*
 * XREFs of ExRaiseHardError @ 0x1407C5960
 * Callers:
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     CmpQuotaWarningWorker @ 0x1406EFF70 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x1406FBBF0 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x140719E60 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x14071A3D0 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x14071A650 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x1407BCF30 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x1407C5F34 (NtRaiseHardError.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     ExpRaiseHardError @ 0x1407C5BB8 (ExpRaiseHardError.c)
 */

NTSTATUS __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, _QWORD *a4, int a5, _DWORD *a6)
{
  int v9; // ebx
  NTSTATUS result; // eax
  PVOID v11; // r9
  ULONG_PTR v12; // r8
  __int64 i; // rdx
  char *v14; // r13
  char *v15; // rdx
  char *v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  char *v19; // rcx
  __int64 v20; // rbx
  int v21; // ebx
  int v22; // [rsp+40h] [rbp-E8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-D8h] BYREF
  int v25; // [rsp+58h] [rbp-D0h]
  int v26; // [rsp+5Ch] [rbp-CCh]
  int v27; // [rsp+60h] [rbp-C8h]
  unsigned int v28; // [rsp+68h] [rbp-C0h]
  char *v29; // [rsp+70h] [rbp-B8h]
  _QWORD *v30; // [rsp+78h] [rbp-B0h]
  _DWORD *v31; // [rsp+80h] [rbp-A8h]
  char *v32; // [rsp+88h] [rbp-A0h]
  _OWORD v33[5]; // [rsp+90h] [rbp-98h] BYREF

  v9 = a1;
  v26 = a1;
  v27 = a1;
  v28 = a2;
  v22 = a3;
  v30 = a4;
  v31 = a6;
  if ( ExpTooLateForErrors )
  {
    *a6 = 1;
    return 0;
  }
  *a6 = 0;
  if ( a2 > 5 )
    return -1073741584;
  v11 = 0LL;
  BaseAddress = 0LL;
  if ( a4 )
  {
    if ( a3 )
    {
      v12 = 136LL;
      RegionSize = 136LL;
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
      {
        if ( _bittest(&a3, i) )
        {
          v33[(unsigned int)i] = *(_OWORD *)a4[i];
          v12 += WORD1(v33[(unsigned int)i]);
          RegionSize = v12;
        }
      }
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( result < 0 )
        return result;
      v11 = BaseAddress;
      v14 = (char *)BaseAddress;
      v15 = (char *)BaseAddress + 40;
      v16 = (char *)BaseAddress + 120;
      v29 = (char *)BaseAddress + 120;
      v17 = 0LL;
      v25 = 0;
      while ( (unsigned int)v17 < a2 )
      {
        if ( _bittest(&a3, v17) )
        {
          *(_QWORD *)&v14[8 * v17] = &v15[16 * (unsigned int)v17];
          v18 = (unsigned int)v17;
          v19 = &v15[v18 * 16];
          *((_QWORD *)v19 + 1) = v16;
          v20 = WORD1(v33[v18]);
          *((_WORD *)v19 + 1) = v20;
          RtlCopyUnicodeString((PUNICODE_STRING)&v15[v18 * 16], (PCUNICODE_STRING)&v33[v18]);
          v16 = &v29[v20];
          v29 = v16;
          v32 = v16;
          v15 = v14 + 40;
        }
        else
        {
          *(_QWORD *)&v14[8 * v17] = a4[v17];
        }
        v17 = (unsigned int)(v17 + 1);
        v25 = v17;
        v11 = BaseAddress;
      }
      v9 = v26;
    }
    else
    {
      v11 = a4;
      BaseAddress = a4;
    }
  }
  v21 = ExpRaiseHardError(v9, a2, a3, (_DWORD)v11, (__int64)v11, a5, (__int64)&v22);
  if ( BaseAddress && BaseAddress != a4 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  *a6 = v22;
  return v21;
}
