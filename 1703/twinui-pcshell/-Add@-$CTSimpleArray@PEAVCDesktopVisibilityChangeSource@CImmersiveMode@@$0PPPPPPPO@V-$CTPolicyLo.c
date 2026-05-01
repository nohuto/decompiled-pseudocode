/*
 * XREFs of ?Add@?$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@@@QEAAJAEBQEAVCDesktopVisibilityChangeSource@CImmersiveMode@@PEA_K@Z @ 0x18003259C
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180030A70 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180031770 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTSimpleArray<CImmersiveMode::CDesktopVisibilityChangeSource *,4294967294,CTPolicyLocalMem<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>>::Add(
        void **a1,
        _QWORD *a2)
{
  void *v2; // r8
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  void *v11; // rcx
  SIZE_T v12; // rax
  HLOCAL v13; // rax
  HLOCAL v14; // rcx
  _QWORD *v15; // r8

  v2 = a1[1];
  v4 = (unsigned __int64)a1[3];
  result = 0LL;
  if ( v2 != (void *)v4 )
  {
LABEL_22:
    a1[1] = (char *)a1[1] + 1;
    v15 = (char *)*a1 + 8 * ((__int64)a1[1] - 1);
    if ( v15 )
      *v15 = *a2;
    return result;
  }
  v7 = (unsigned __int64)v2 + 1;
  result = 2147942522LL;
  if ( v7 > 0xFFFFFFFE || (result = 0LL, v7 <= v4) )
  {
LABEL_21:
    if ( (int)result < 0 )
      return result;
    goto LABEL_22;
  }
  v8 = 2 * v4;
  if ( is_mul_ok(v4, 2uLL) )
  {
    result = 0LL;
  }
  else
  {
    v8 = -1LL;
    result = 2147942934LL;
  }
  if ( (int)result >= 0 )
  {
    v9 = v4 + 4096;
    v10 = v8 - v4;
    v11 = *a1;
    if ( v10 <= 0x1000 )
      v9 = v8;
    if ( v7 > v9 )
      v9 = v7;
    if ( v9 > 0xFFFFFFFE )
      v9 = 4294967294LL;
    if ( !is_mul_ok(v9, 8uLL) )
    {
      result = 2147942934LL;
      goto LABEL_21;
    }
    v12 = 8 * v9;
    v13 = v11 ? LocalReAlloc(v11, v12, 0x42u) : LocalAlloc(0x40u, v12);
    v14 = v13;
    result = v13 == 0LL ? 0x8007000E : 0;
    if ( (int)result >= 0 )
    {
      a1[3] = (void *)v9;
      *a1 = v14;
      goto LABEL_21;
    }
  }
  return result;
}
