/*
 * XREFs of ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01B8E4C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01AAB4C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008B85C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01ABA2C (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 *     ?CollectRunningTime@DXGPROCESS@@AEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C01B9278 (-CollectRunningTime@DXGPROCESS@@AEAAJPEAVADAPTER_RENDER@@PEA_K@Z.c)
 */

void __fastcall DXGPROCESS::ApplyCsFunction(__int64 a1, int a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r13
  DXGGLOBAL *Global; // rax
  ULONG MaximumAdapterCount; // ebx
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 Current; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  struct _DEVICE_OBJECT *v25; // rbx
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-38h]
  _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-30h] BYREF
  char v32[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+58h] [rbp-18h]
  char v34; // [rsp+60h] [rbp-10h]
  unsigned __int64 v35; // [rsp+B0h] [rbp+40h] BYREF
  PVOID P; // [rsp+C0h] [rbp+50h]
  __int64 v37; // [rsp+C8h] [rbp+58h]

  v2 = 0LL;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 32) )
  {
    Global = DXGGLOBAL::GetGlobal(a1);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
    v7 = 4 * ((unsigned __int64)(MaximumAdapterCount + 31) >> 5);
    if ( !is_mul_ok((unsigned __int64)(MaximumAdapterCount + 31) >> 5, 4uLL) )
      v7 = -1LL;
    v8 = operator new(v7, 0x4B677844u, 1, PagedPool);
    P = v8;
    if ( v8 )
    {
      RtlInitializeBitMap(&BitMapHeader, (PULONG)v8, MaximumAdapterCount);
      v37 = a1 + 160;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
      *(_QWORD *)(a1 + 168) = KeGetCurrentThread();
      v29 = a1 + 256;
      for ( i = *(_QWORD **)(a1 + 256); ; i = (_QWORD *)*i )
      {
        Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v29);
        v12 = Current;
        if ( !Current )
          break;
        v13 = *(_QWORD *)(Current + 16);
        v34 = v2;
        v33 = *(_QWORD *)(v13 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 176LL) == 1 )
        {
          v14 = *(_QWORD *)(v12 + 16);
          v15 = *(unsigned int *)(*(_QWORD *)(v14 + 16) + 200LL);
          if ( !RtlTestBit(&BitMapHeader, *(_DWORD *)(*(_QWORD *)(v14 + 16) + 200LL)) && (unsigned int)v15 < 6 )
          {
            v16 = DXGPROCESS::CollectRunningTime((DXGPROCESS *)a1, *(struct ADAPTER_RENDER **)(v12 + 16), &v35);
            v20 = v16;
            if ( v16 >= 0 )
            {
              if ( (_DWORD)v3 == 1 )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v15) = v35;
                *(_DWORD *)(a1 + 88) = 1;
              }
              else if ( (unsigned int)(v3 - 2) > 1 )
              {
                v27 = WdLogNewEntry5_WdError(v18);
                *(_QWORD *)(v27 + 24) = v3;
                WdLogEvent5_WdError(v27);
              }
              else
              {
                v22 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v15);
                if ( v35 >= v22 && *(_DWORD *)(a1 + 88) != (_DWORD)v2 )
                  *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v15) += v35 - v22;
                *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v15) = v2;
                *(_DWORD *)(a1 + 88) = v2;
                if ( (_DWORD)v3 == 3 )
                {
                  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v15);
                  if ( v2 )
                  {
                    v23 = *(_QWORD *)(a1 + 48);
                    v24 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
                    v25 = *(struct _DEVICE_OBJECT **)(v24 + 192);
                    v26 = DXGGLOBAL::GetGlobal(v24);
                    DXGGLOBAL::ReportDripsBlocker((__int64)v26, 1LL, v25, v23, v2);
                    v2 = 0LL;
                    *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v15) = 0LL;
                  }
                }
              }
              RtlSetBit(&BitMapHeader, v15);
            }
            else
            {
              v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
              v21[3] = v3;
              v21[4] = a1;
              v21[5] = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
              v21[6] = v20;
              WdLogEvent5_WdWarning(v21);
              v35 = v2;
            }
          }
        }
        if ( v34 != (_BYTE)v2 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      }
      ExFreePoolWithTag(P, 0);
      v28 = v37;
      *(_QWORD *)(v37 + 8) = v2;
      ExReleasePushLockExclusiveEx(v28, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v10 + 24) = 4404LL;
      WdLogEvent5_WdLowResource(v10);
    }
  }
}
