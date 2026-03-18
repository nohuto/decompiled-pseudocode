/*
 * XREFs of EtwpCovSampContextPruneModules @ 0x1407B55E4
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1407B47B0 (EtwpCovSampContextGetModule.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadId @ 0x1400B5CA0 (PsGetCurrentThreadId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleCleanup @ 0x1407B65C4 (EtwpCovSampModuleCleanup.c)
 */

unsigned __int64 __fastcall EtwpCovSampContextPruneModules(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r14
  __int64 *i; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _OWORD *v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r15
  struct _KTHREAD *v17; // rax
  _QWORD *j; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned int v26; // edx
  _QWORD *v27; // r15
  unsigned __int64 v28; // r9
  unsigned int v29; // edx
  unsigned __int64 **v30; // r11
  unsigned __int64 *v31; // rcx
  unsigned __int64 ***v32; // rax
  unsigned __int64 *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  unsigned __int64 v36; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int64 *v37; // [rsp+30h] [rbp-81h]
  _QWORD *v38; // [rsp+38h] [rbp-79h] BYREF
  _QWORD *v39; // [rsp+40h] [rbp-71h]
  __int64 v40; // [rsp+48h] [rbp-69h]
  _OWORD v41[8]; // [rsp+58h] [rbp-59h] BYREF

  result = *(_DWORD *)(a1 + 16) >> 1;
  if ( *(_DWORD *)(a1 + 732) > (unsigned int)result || *(_DWORD *)(a1 + 1108) > (int)result )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 1112),
                             (signed __int32)PsGetCurrentThreadId(),
                             0);
    if ( !(_DWORD)result )
    {
      v3 = 8LL;
      v4 = v41;
      v5 = 8LL;
      do
      {
        v4[1] = v4;
        *v4 = v4;
        v4 += 2;
        --v5;
      }
      while ( v5 );
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v7 = (volatile signed __int64 *)(a1 + 664);
      ExAcquirePushLockSharedEx(a1 + 664, 0LL);
      for ( i = *(__int64 **)(a1 + 712); i != (__int64 *)(a1 + 712); i = (__int64 *)*i )
      {
        if ( *(i - 1) == 1 && !*((_DWORD *)i + 15) )
        {
          v9 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 16);
          if ( v9 >= 0x100 )
            v10 = ((v9 - 256) >> 8) + 4;
          else
            v10 = v9 >> 6;
          if ( (unsigned int)v10 >= 8 )
            v10 = 7LL;
          v11 = i + 2;
          v12 = &v41[v10];
          v13 = (_QWORD *)*((_QWORD *)v12 + 1);
          if ( (_OWORD *)*v13 != v12 )
            __fastfail(3u);
          *v11 = v12;
          i[3] = (__int64)v13;
          *v13 = v11;
          *((_QWORD *)v12 + 1) = v11;
        }
      }
      if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
      KeAbPostRelease(a1 + 664);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = &v38;
      v39 = &v38;
      v38 = &v38;
      v15 = v41;
      do
      {
        if ( (_QWORD *)*v15 != v15 )
        {
          *v14 = *v15;
          *(_QWORD *)(*v15 + 8LL) = v39;
          v39 = (_QWORD *)v15[1];
          *v39 = &v38;
          v14 = v39;
        }
        v15 += 2;
        --v3;
      }
      while ( v3 );
      v16 = 0LL;
      v37 = &v36;
      v36 = (unsigned __int64)&v36;
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
      v21 = v38;
      *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
      while ( v21 != &v38 )
      {
        v22 = v21;
        v23 = v21 - 11;
        v21 = (_QWORD *)*v21;
        v22[1] = v22;
        *v22 = v22;
        if ( v23[8] == 1LL && !*((_DWORD *)v23 + 33) )
        {
          v24 = *(unsigned int *)(a1 + 16);
          v40 = ++v16;
          if ( v16 > v24 )
          {
            if ( (v23[15] & 0x40000) == 0 )
            {
              v19 = 0x8000000000000002uLL;
              v25 = v23[1] & (-1LL << (*(_DWORD *)(a1 + 684) & 0x1F));
              v26 = 37
                  * (BYTE5(v25)
                   + 37
                   * (BYTE4(v25)
                    + 37
                    * ((((_DWORD)v23[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 684) & 0x1F))) >> 24)
                     + 37
                     * ((unsigned __int8)(((_DWORD)v23[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 684) & 0x1F))) >> 16)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(v23[1] & (-1 << (*(_DWORD *)(a1 + 684) & 0x1F))) >> 8)
                       + 37 * ((unsigned __int8)v25 + 11623883))))));
              v20 = HIBYTE(v25);
              for ( j = (_QWORD *)(*(_QWORD *)(a1 + 688)
                                 + 8LL
                                 * (((unsigned int)v20
                                   + 37
                                   * ((unsigned __int8)((v23[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(a1 + 684) & 0x1F))) >> 48)
                                    + v26)) & ((*(_DWORD *)(a1 + 684) >> 5) - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
              {
                if ( (_QWORD *)*j == v23 )
                {
                  *j = *v23;
                  --*(_DWORD *)(a1 + 680);
                  *v23 |= 0x8000000000000002uLL;
                  break;
                }
              }
              *v23 = 0LL;
            }
            v27 = v23 + 2;
            if ( v23[2] )
            {
              v19 = 0x8000000000000002uLL;
              v28 = v23[3] & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
              v29 = 37
                  * ((unsigned __int8)((unsigned __int16)((v27[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(a1 + 700) & 0x1F))) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)((v27[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(a1 + 700) & 0x1F))) >> 32)
                    + 37
                    * ((((_DWORD)v27[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 700) & 0x1F))) >> 24)
                     + 37
                     * ((unsigned __int8)(((_DWORD)v27[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 700) & 0x1F))) >> 16)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(v27[1] & (-1 << (*(_DWORD *)(a1 + 700) & 0x1F))) >> 8)
                       + 37 * ((unsigned __int8)v28 + 11623883))))));
              v20 = HIBYTE(v28);
              for ( j = (_QWORD *)(*(_QWORD *)(a1 + 704)
                                 + 8LL
                                 * (((unsigned int)v20
                                   + 37
                                   * ((unsigned __int8)((v23[3] & (unsigned __int64)(-1LL << (*(_DWORD *)(a1 + 700) & 0x1F))) >> 48)
                                    + v29)) & ((*(_DWORD *)(a1 + 700) >> 5) - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
              {
                if ( (_QWORD *)*j == v27 )
                {
                  *j = *v27;
                  --*(_DWORD *)(a1 + 696);
                  *v27 |= 0x8000000000000002uLL;
                  break;
                }
              }
              *v27 = 0LL;
            }
            v30 = (unsigned __int64 **)(v23 + 9);
            v31 = *v30;
            if ( (unsigned __int64 **)(*v30)[1] != v30 || (v32 = (unsigned __int64 ***)v30[1], *v32 != v30) )
              __fastfail(3u);
            *v32 = (unsigned __int64 **)v31;
            v31[1] = (unsigned __int64)v32;
            v33 = v37;
            --*(_DWORD *)(a1 + 728);
            if ( (unsigned __int64 *)*v33 != &v36 )
              __fastfail(3u);
            v16 = v40;
            *v30 = &v36;
            v30[1] = v33;
            *v33 = (unsigned __int64)v30;
            v37 = (unsigned __int64 *)v30;
          }
        }
      }
      *(_DWORD *)(a1 + 732) = 0;
      *(_DWORD *)(a1 + 1108) = 0;
      *(_QWORD *)(a1 + 672) = 0LL;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664), (__int64)j, v19, v20);
      KeAbPostRelease(a1 + 664);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      while ( 1 )
      {
        result = v36;
        if ( (unsigned __int64 *)v36 == &v36 )
          break;
        if ( *(unsigned __int64 **)(v36 + 8) != &v36 || (v34 = *(_QWORD *)v36, *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36) )
          __fastfail(3u);
        v36 = *(_QWORD *)v36;
        v35 = (_QWORD *)(result - 72);
        *(_QWORD *)(v34 + 8) = &v36;
        *(_QWORD *)(result - 72 + 64) = 0LL;
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        EtwpCovSampModuleCleanup(result - 72);
        ExFreePoolWithTag(v35, 0x56777445u);
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1112), 0);
    }
  }
  return result;
}
