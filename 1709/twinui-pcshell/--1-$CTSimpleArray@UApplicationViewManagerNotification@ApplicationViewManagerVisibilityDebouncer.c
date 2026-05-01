/*
 * XREFs of ??1?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAA@XZ @ 0x18007C7EC
 * Callers:
 *     ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x18007B400 (--_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::~CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>(
        LPVOID *a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  char *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *a1 )
  {
    v2 = 0LL;
    if ( a1[1] )
    {
      v3 = 0LL;
      do
      {
        v4 = (char *)*a1;
        v5 = *(_QWORD *)((char *)*a1 + v3 + 16);
        if ( v5 )
        {
          *(_QWORD *)&v4[v3 + 16] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v6 = *(_QWORD *)&v4[v3];
        if ( v6 )
        {
          *(_QWORD *)&v4[v3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        ++v2;
        v3 += 32LL;
      }
      while ( v2 < (unsigned __int64)a1[1] );
    }
    CoTaskMemFree(*a1);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  a1[3] = 0LL;
}
