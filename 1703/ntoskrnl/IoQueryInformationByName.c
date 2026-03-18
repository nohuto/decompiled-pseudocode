/*
 * XREFs of IoQueryInformationByName @ 0x14068B8F0
 * Callers:
 *     NtQueryInformationByName @ 0x14068C5B8 (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401F47F4 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopValidateQueryInformationParameters @ 0x14052C8E0 (IopValidateQueryInformationParameters.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x14054284C (IopCleanupExtraCreateParameters.c)
 */

__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned int a4,
        signed int a5,
        unsigned __int16 *Src)
{
  SIZE_T v6; // r12
  unsigned int v10; // edi
  __int64 result; // rax
  size_t v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v16; // ebx
  void *v17; // r14
  _QWORD v18[28]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v19; // [rsp+130h] [rbp-168h] BYREF
  char v20; // [rsp+140h] [rbp-158h] BYREF

  v6 = a4;
  v10 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225659LL;
  result = IopValidateQueryInformationParameters(0, (__int64)KeGetCurrentThread(), a2, (unsigned __int64)a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 == 68 )
    {
      memset(v18, 0, 0xD8uLL);
      LODWORD(v18[0]) = 14155784;
      HIWORD(v18[8]) = 7;
      LODWORD(v18[11]) = 1;
      LODWORD(v18[8]) = 2113536;
      BYTE1(v18[17]) = 1;
      LOBYTE(v18[26]) = 1;
      v18[18] = &v20;
      v18[6] = a1;
      LODWORD(v18[19]) = 32;
      LODWORD(v18[25]) = 68;
      HIDWORD(v18[25]) = v6;
      v12 = 40LL;
      memset(&v18[20], 0, 0x28uLL);
      LOWORD(v18[20]) = 40;
      v14 = 1LL;
      v18[24] = 1LL;
      if ( Src )
      {
        if ( *Src <= 0x28u )
          v12 = (__int16)*Src;
        memmove(&v18[20], Src, v12);
        v14 = v18[24];
      }
      if ( v14 == 1 )
        v18[24] = PsGetCurrentSilo();
      if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
        v18[14] = IopVerifierExAllocatePoolWithQuota_3(v13, v6);
      else
        v18[14] = a3;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v16 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, 0, 0LL, 0x80u, (__int64)v18, v18[24], &v19);
      IopCleanupExtraCreateParameters((__int64)v18);
      if ( LODWORD(v18[4]) == -1096154543 )
        v16 = v18[2];
      v17 = (void *)v18[14];
      if ( a3 != (void *)v18[14] )
      {
        if ( v16 >= 0 )
          memmove(a3, (const void *)v18[14], HIDWORD(v18[25]));
        ExFreePoolWithTag(v17, 0);
      }
      *(_DWORD *)a2 = v16;
      if ( v16 >= 0 )
        v10 = HIDWORD(v18[25]);
      *(_QWORD *)(a2 + 8) = v10;
      return (unsigned int)v16;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
