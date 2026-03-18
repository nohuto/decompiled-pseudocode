/*
 * XREFs of IoQueryInformationByName @ 0x14071C390
 * Callers:
 *     NtQueryInformationByName @ 0x14071D27C (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140237444 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlpValidateExtraCreateParameters @ 0x1404F3A94 (FsRtlpValidateExtraCreateParameters.c)
 *     IopCleanupExtraCreateParameters @ 0x140554BB8 (IopCleanupExtraCreateParameters.c)
 *     IopValidateQueryInformationParameters @ 0x140597740 (IopValidateQueryInformationParameters.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned int a4,
        signed int a5,
        __int16 a6,
        _QWORD *Src)
{
  SIZE_T v7; // r12
  unsigned int v10; // edi
  char v11; // r13
  char PreviousMode; // al
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG_PTR v16; // rcx
  size_t v17; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v19; // ebx
  void *v20; // rsi
  _QWORD v22[28]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v23; // [rsp+130h] [rbp-168h] BYREF
  char v24; // [rsp+140h] [rbp-158h] BYREF

  v7 = a4;
  v10 = 0;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a6 & 0x100) == 0 )
    v11 = PreviousMode;
  result = IopValidateQueryInformationParameters(v11, (__int64)KeGetCurrentThread(), a2, (unsigned __int64)a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( ((a5 - 68) & 0xFFFFFFFC) != 0 || a5 == 69 )
    {
      return 3221225485LL;
    }
    else
    {
      memset(v22, 0, 0xD8uLL);
      LODWORD(v22[0]) = 14155784;
      HIWORD(v22[8]) = 7;
      LODWORD(v22[11]) = 1;
      LODWORD(v22[8]) = 2113536;
      BYTE1(v22[17]) = 1;
      LOBYTE(v22[26]) = 1;
      v22[18] = &v24;
      v22[6] = a1;
      LODWORD(v22[19]) = 32;
      v22[25] = __PAIR64__(v7, a5);
      memset(&v22[20], 0, 0x28uLL);
      LOWORD(v22[20]) = 40;
      v15 = 1LL;
      v22[24] = 1LL;
      if ( Src )
      {
        v16 = Src[1];
        if ( v16 )
          FsRtlpValidateExtraCreateParameters(v16);
        v17 = *(__int16 *)Src;
        if ( v17 > 0x28 )
          v17 = 40LL;
        memmove(&v22[20], Src, v17);
        v15 = v22[24];
      }
      if ( v15 == 1 )
        v22[24] = PsGetCurrentSilo();
      if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
        v22[14] = IopVerifierExAllocatePoolWithQuota_3(v14, v7);
      else
        v22[14] = a3;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v19 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, v11, 0LL, 0x80u, (__int64)v22, v22[24], &v23);
      IopCleanupExtraCreateParameters((__int64)v22);
      if ( LODWORD(v22[4]) == -1096154543 )
        v19 = v22[2];
      v20 = (void *)v22[14];
      if ( a3 != (void *)v22[14] )
      {
        if ( v19 >= 0 )
          memmove(a3, (const void *)v22[14], HIDWORD(v22[25]));
        ExFreePoolWithTag(v20, 0);
      }
      *(_DWORD *)a2 = v19;
      if ( v19 >= 0 )
        v10 = HIDWORD(v22[25]);
      *(_QWORD *)(a2 + 8) = v10;
      return (unsigned int)v19;
    }
  }
  return result;
}
