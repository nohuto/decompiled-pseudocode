/*
 * XREFs of LdrpRedirectDelayloadFailure @ 0x180083A48
 * Callers:
 *     LdrpHandleUnprotectedDelayLoad @ 0x180002930 (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180078CE0 (RtlNtStatusToDosErrorNoTeb.c)
 *     LdrpGetDelayloadAPIInfo @ 0x180083B14 (LdrpGetDelayloadAPIInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpRedirectDelayloadFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD *),
        __int64 (__fastcall *a5)(__int64, const char *),
        __int64 a6,
        NTSTATUS Status)
{
  __int64 v7; // r12
  __int64 v10; // rdi
  __int64 v11; // r11
  char v12; // dl
  const char *v13; // r14
  const char *v14; // rbx
  __int64 v15; // r15
  char v16; // al
  const char *v18; // rcx
  _QWORD v19[16]; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v20; // [rsp+E0h] [rbp+4Fh] BYREF
  const char *v21; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+5Fh]

  v22 = a3;
  v7 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a3 + 4);
  v10 = 0LL;
  LdrpGetDelayloadAPIInfo(a1, a3, a6, (unsigned int)&v21, (__int64)&v20);
  v12 = LdrpDebugFlags;
  v13 = (const char *)v20;
  v14 = v21;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    v18 = "Unknown";
    if ( v21 )
      v18 = v21;
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrdload.c",
      330,
      (unsigned int)"LdrpRedirectDelayloadFailure",
      0,
      "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
      v7,
      v18,
      v20,
      v11 + 88,
      Status);
    v12 = LdrpDebugFlags;
  }
  if ( (v12 & 0x10) != 0 )
    __debugbreak();
  if ( a2 )
  {
    v15 = *(_QWORD *)(a2 + 48);
    if ( (LdrpPolicyBits & 0x10) == 0 && (*(_BYTE *)(a2 + 104) & 1) == 0 )
    {
      v16 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = 1;
LABEL_7:
  if ( !a4 || !v16 )
    goto LABEL_8;
  memset(v19, 0, 0x48uLL);
  v19[1] = v22;
  v19[2] = a6;
  LODWORD(v19[0]) = 72;
  v19[3] = v7;
  v19[6] = v15;
  LODWORD(v19[8]) = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v14 )
  {
    LODWORD(v19[4]) = 1;
    v19[5] = v14;
  }
  else
  {
    LODWORD(v19[4]) = 0;
    LODWORD(v19[5]) = (_DWORD)v13;
  }
  v10 = a4(4LL, v19);
  if ( !v10 )
  {
LABEL_8:
    if ( a5 )
    {
      if ( !v14 )
        v14 = v13;
      return a5(v7, v14);
    }
  }
  return v10;
}
