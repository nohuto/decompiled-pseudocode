/*
 * XREFs of CommonBuffer_AcquireSecureBuffer @ 0x1C000225C
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0006CB8 (XilCommonBuffer_AcquireBufferEx.c)
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005D1A8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

char *__fastcall CommonBuffer_AcquireSecureBuffer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  size_t v5; // rbp
  char *v7; // rsi
  char *PoolWithTag; // rax
  char *v10; // rbx
  int CommonBufferPage; // edi
  void ***v12; // r14
  void **v13; // rcx

  v5 = a2;
  v7 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                          0x60uLL,
                          0x49434858u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    v12 = (void ***)(v10 + 88);
    CommonBufferPage = SecureDmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(*(_QWORD *)a1 + 104LL), v5, v10 + 88, 0LL);
    if ( CommonBufferPage >= 0 )
    {
      memset(**v12, 0, v5);
      v13 = *v12;
      v7 = v10;
      *((_QWORD *)v10 + 2) = **v12;
      *((_QWORD *)v10 + 3) = v13[1];
      *((_DWORD *)v10 + 10) = v5;
      *((_DWORD *)v10 + 11) = v5;
      *((_DWORD *)v10 + 16) = a4;
      *((_QWORD *)v10 + 9) = a3;
      *((_DWORD *)v10 + 20) = 3;
    }
  }
  else
  {
    CommonBufferPage = -1073741670;
  }
  if ( CommonBufferPage < 0 && v10 )
  {
    ExFreePoolWithTag(v10, 0x49434858u);
    return 0LL;
  }
  return v7;
}
