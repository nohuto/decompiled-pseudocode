/*
 * XREFs of ExRaiseHardError @ 0x14071ED80
 * Callers:
 *     NtRaiseHardError @ 0x140427B08 (NtRaiseHardError.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmpQuotaWarningWorker @ 0x1406626D0 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x1406696E0 (CmpDiskFullWarningWorker.c)
 *     IopHardErrorThread @ 0x1406891D0 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140689CE0 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x140716D30 (ExpExpirationThread.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExpRaiseHardError @ 0x140427D10 (ExpRaiseHardError.c)
 */

NTSTATUS __fastcall ExRaiseHardError(unsigned int a1, unsigned int a2, unsigned int a3, _QWORD *a4, int a5, _DWORD *a6)
{
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  PVOID v11; // r9
  ULONG_PTR v12; // r8
  __int64 i; // rdx
  _QWORD *v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  __int64 v17; // rsi
  char *v18; // rbx
  char *v19; // rcx
  int v20; // ebx
  unsigned int v21; // [rsp+40h] [rbp-F8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-E8h] BYREF
  int v24; // [rsp+58h] [rbp-E0h]
  unsigned int v25; // [rsp+5Ch] [rbp-DCh]
  unsigned int v26; // [rsp+60h] [rbp-D8h]
  unsigned int v27; // [rsp+68h] [rbp-D0h]
  char *v28; // [rsp+70h] [rbp-C8h]
  char *v29; // [rsp+78h] [rbp-C0h]
  _QWORD *v30; // [rsp+80h] [rbp-B8h]
  _QWORD *v31; // [rsp+88h] [rbp-B0h]
  _DWORD *v32; // [rsp+90h] [rbp-A8h]
  char *v33; // [rsp+98h] [rbp-A0h]
  void *Src[2]; // [rsp+A0h] [rbp-98h]

  v9 = a1;
  v25 = a1;
  v26 = a1;
  v27 = a2;
  v21 = a3;
  v31 = a4;
  v32 = a6;
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
        if ( _bittest((const int *)&a3, i) )
        {
          *(_OWORD *)&Src[2 * (unsigned int)i] = *(_OWORD *)a4[i];
          v12 += WORD1(Src[2 * (unsigned int)i]);
          RegionSize = v12;
        }
      }
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( result < 0 )
        return result;
      v11 = BaseAddress;
      v14 = BaseAddress;
      v30 = BaseAddress;
      v15 = (char *)BaseAddress + 40;
      v29 = (char *)BaseAddress + 40;
      v16 = (char *)BaseAddress + 120;
      v28 = (char *)BaseAddress + 120;
      v17 = 0LL;
      v24 = 0;
      while ( (unsigned int)v17 < a2 )
      {
        if ( _bittest((const int *)&a3, v17) )
        {
          v18 = &v15[16 * (unsigned int)v17];
          v14[v17] = v18;
          memmove(v16, Src[2 * (unsigned int)v17 + 1], WORD1(Src[2 * (unsigned int)v17]));
          v19 = v28;
          Src[2 * (unsigned int)v17 + 1] = v28;
          *(_OWORD *)v18 = *(_OWORD *)&Src[2 * (unsigned int)v17];
          v16 = &v19[WORD1(Src[2 * (unsigned int)v17])];
          v28 = v16;
          v33 = v16;
          v15 = v29;
          v14 = v30;
        }
        else
        {
          v14[v17] = a4[v17];
          v16 = v28;
        }
        v17 = (unsigned int)(v17 + 1);
        v24 = v17;
        v11 = BaseAddress;
      }
      v9 = v25;
    }
    else
    {
      v11 = a4;
      BaseAddress = a4;
    }
  }
  v20 = ExpRaiseHardError(v9, a2, a3, v11, (__int64)v11, a5, &v21);
  if ( BaseAddress && BaseAddress != a4 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  *a6 = v21;
  return v20;
}
