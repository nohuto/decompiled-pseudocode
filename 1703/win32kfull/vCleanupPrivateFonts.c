/*
 * XREFs of vCleanupPrivateFonts @ 0x1C00A2210
 * Callers:
 *     <none>
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002A52C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 vCleanupPrivateFonts()
{
  __int64 result; // rax
  __int64 v1; // rdi
  struct PFT **v2; // rbx
  struct PFF *i; // rcx
  __int64 v4; // rdx
  _QWORD v5[29]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v6[16]; // [rsp+110h] [rbp+10h] BYREF
  struct PFT **v7; // [rsp+160h] [rbp+60h] BYREF

  result = ghsemPublicPFT;
  if ( ghsemPublicPFT )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v7 = gpPFTPrivate;
    if ( gpPFTPrivate )
    {
      memset(v6, 0, 0x38uLL);
      memset(v5, 0, sizeof(v5));
      v1 = 20LL;
      v6[3] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v5[20] = v6;
      v2 = gpPFTPrivate + 5;
      do
      {
        for ( i = *v2; i; i = (struct PFF *)v5[1] )
        {
          v5[2] = i;
          v5[1] = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v5;
          if ( v5[1] )
            *(_QWORD *)(v5[1] + 16LL) = v5;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v7, i, v2, 0x80u) )
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
          if ( *v2 == (struct PFT *)v5 )
            *v2 = (struct PFT *)v5[1];
          v4 = v5[2];
          if ( v5[2] )
          {
            *(_QWORD *)(v5[2] + 8LL) = v5[1];
            v4 = v5[2];
          }
          if ( !v5[1] )
            break;
          *(_QWORD *)(v5[1] + 16LL) = v4;
        }
        ++v2;
        --v1;
      }
      while ( v1 );
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    return GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return result;
}
