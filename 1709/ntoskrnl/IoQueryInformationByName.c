/*
 * XREFs of IoQueryInformationByName @ 0x1406B7700
 * Callers:
 *     NtQueryInformationByName @ 0x1406B855C (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401FA4E0 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopValidateQueryInformationParameters @ 0x14049AA00 (IopValidateQueryInformationParameters.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     FsRtlpValidateExtraCreateParameters @ 0x14053D324 (FsRtlpValidateExtraCreateParameters.c)
 *     IopCleanupExtraCreateParameters @ 0x1405E630C (IopCleanupExtraCreateParameters.c)
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
  char PreviousMode; // r13
  unsigned int v11; // edi
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  ULONG_PTR v15; // rcx
  size_t v16; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v18; // ebx
  void *v19; // rsi
  _QWORD v21[28]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v22; // [rsp+130h] [rbp-168h] BYREF
  char v23; // [rsp+140h] [rbp-158h] BYREF

  v7 = a4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
    PreviousMode = 0;
  result = IopValidateQueryInformationParameters(
             PreviousMode,
             (__int64)KeGetCurrentThread(),
             a2,
             (unsigned __int64)a3,
             a4,
             a5);
  if ( (int)result >= 0 )
  {
    if ( a5 == 68 )
    {
      memset(v21, 0, 0xD8uLL);
      LODWORD(v21[0]) = 14155784;
      HIWORD(v21[8]) = 7;
      LODWORD(v21[11]) = 1;
      LODWORD(v21[8]) = 2113536;
      BYTE1(v21[17]) = 1;
      LOBYTE(v21[26]) = 1;
      v21[18] = &v23;
      v21[6] = a1;
      LODWORD(v21[19]) = 32;
      LODWORD(v21[25]) = 68;
      HIDWORD(v21[25]) = v7;
      memset(&v21[20], 0, 0x28uLL);
      LOWORD(v21[20]) = 40;
      v14 = 1LL;
      v21[24] = 1LL;
      if ( Src )
      {
        v15 = Src[1];
        if ( v15 )
          FsRtlpValidateExtraCreateParameters(v15);
        v16 = *(__int16 *)Src;
        if ( v16 > 0x28 )
          v16 = 40LL;
        memmove(&v21[20], Src, v16);
        v14 = v21[24];
      }
      if ( v14 == 1 )
        v21[24] = PsGetCurrentSilo();
      if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
        v21[14] = IopVerifierExAllocatePoolWithQuota_3(v13, v7);
      else
        v21[14] = a3;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v18 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, PreviousMode, 0LL, 0x80u, (__int64)v21, v21[24], &v22);
      IopCleanupExtraCreateParameters((__int64)v21);
      if ( LODWORD(v21[4]) == -1096154543 )
        v18 = v21[2];
      v19 = (void *)v21[14];
      if ( a3 != (void *)v21[14] )
      {
        if ( v18 >= 0 )
          memmove(a3, (const void *)v21[14], HIDWORD(v21[25]));
        ExFreePoolWithTag(v19, 0);
      }
      *(_DWORD *)a2 = v18;
      if ( v18 >= 0 )
        v11 = HIDWORD(v21[25]);
      *(_QWORD *)(a2 + 8) = v11;
      return (unsigned int)v18;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
