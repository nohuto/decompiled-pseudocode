/*
 * XREFs of ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x180124F24
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ??_GViewManagerBridge@@UEAAPEAXI@Z @ 0x18012AE10 (--_GViewManagerBridge@@UEAAPEAXI@Z.c)
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$2 @ 0x1801EEC1F (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>(
        __int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v3 = 0LL;
      do
      {
        v4 = *(_QWORD *)(v3 + *(_QWORD *)a1);
        if ( v4 )
        {
          *(_QWORD *)(v3 + *(_QWORD *)a1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
        v3 += 16LL;
      }
      while ( v2 < *(_QWORD *)(a1 + 8) );
    }
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
