/*
 * XREFs of PfSnCheckActionsNeeded @ 0x140564F88
 * Callers:
 *     PfSnBeginScenario @ 0x1405643EC (PfSnBeginScenario.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PfpGetPageListCount @ 0x14053D344 (PfpGetPageListCount.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140565270 (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(__int64 a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  int v5; // edi
  int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  int v9; // r8d
  unsigned __int8 *v10; // r9
  unsigned int DefaultPagePriority; // r14d
  unsigned __int8 *v12; // r8
  __int64 v13; // rbp
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned int v18; // r8d
  unsigned __int64 v19; // r12
  unsigned int v20; // r8d
  __int64 PageListCount; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v23; // r14
  _DWORD *v24; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // edx
  int v28; // eax
  int v29; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v30[3]; // [rsp+34h] [rbp-114h] BYREF
  int *v31; // [rsp+40h] [rbp-108h]
  int *v32; // [rsp+48h] [rbp-100h]
  __int128 v33[6]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v34[72]; // [rsp+B8h] [rbp-90h] BYREF

  v5 = 3;
  v32 = a5;
  v31 = a4;
  *(_QWORD *)&v30[1] = a1;
  v6 = 23;
  v7 = 3;
  if ( (dword_14036DE30 & 8) != 0 )
  {
    v6 = 22;
    v5 = 22;
  }
  else
  {
    PsGetPagePriorityThread(a3);
    DefaultPagePriority = MmGetDefaultPagePriority();
    if ( v8 > DefaultPagePriority - 1 )
      v8 = DefaultPagePriority;
    if ( v8 <= DefaultPagePriority - 1 )
    {
      v5 = 2;
      v6 = 2;
    }
    else
    {
      if ( (dword_14036E0D0 & 0x10) != 0 && !v9 )
      {
        v7 = 1;
        v6 = 14;
      }
      v12 = v10;
      v13 = 314159LL;
      v14 = 8LL;
      do
      {
        v15 = *v12;
        v12 += 8;
        v13 = *(v12 - 1)
            + 37
            * (*(v12 - 2)
             + 37
             * (*(v12 - 3)
              + 37 * (*(v12 - 4) + 37 * (*(v12 - 5) + 37 * (*(v12 - 6) + 37 * (*(v12 - 7) + 37 * (v15 + 37 * v13)))))));
        --v14;
      }
      while ( v14 );
      v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v33, 0xB0u, 0LL, v30);
      v17 = (unsigned __int64)(PfpGetPageListCount((__int64)v34, 0, 7u) << 12) >> 18;
      v19 = (unsigned __int64)(PfpGetPageListCount((__int64)v34, DefaultPagePriority, v18) << 12) >> 18;
      PageListCount = PfpGetPageListCount((__int64)v34, DefaultPagePriority - 1, v20);
      CurrentThread = KeGetCurrentThread();
      v23 = (unsigned __int64)(PageListCount << 12) >> 18;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&stru_14036E060, 1u);
      v24 = (_DWORD *)PfSnPrefetchCacheEntryGet(&unk_14036E038, *(_QWORD *)&v30[1], v13, &v29);
      v25 = v24;
      if ( v24 )
      {
        if ( v29 )
        {
          v5 = 13;
          if ( v7 >= 2 )
            v6 = 13;
        }
        else
        {
          v26 = v16 - v24[27];
          v5 = 4;
          if ( v26 < v24[28] )
          {
            v7 &= ~1u;
            v5 = 5;
          }
          if ( v7 >= 2 )
          {
            v6 = 4;
            if ( v26 >= v24[29] )
            {
              if ( (dword_14036DE30 & 2) == 0 )
              {
                if ( v26 >= 0x1B7740 )
                {
                  if ( v26 >= 0x36EE80 )
                    v28 = v17 - v24[26];
                  else
                    v28 = v23 - v24[25];
                }
                else
                {
                  v28 = v19 - v24[24];
                }
                if ( !v28 )
                {
                  v7 &= ~2u;
                  v6 = 7;
                }
              }
            }
            else
            {
              v7 &= ~2u;
              v6 = 6;
            }
          }
        }
        v25[27] = v16;
        v25[24] = v19;
        v25[25] = v23;
        v25[26] = v17;
      }
      else
      {
        v6 = 3;
      }
      ExReleaseResourceLite(&stru_14036E060);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  *v31 = v5;
  *v32 = v6;
  return v7;
}
