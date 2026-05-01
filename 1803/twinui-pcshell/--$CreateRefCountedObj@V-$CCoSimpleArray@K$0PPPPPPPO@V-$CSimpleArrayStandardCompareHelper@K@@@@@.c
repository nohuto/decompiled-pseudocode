/*
 * XREFs of ??$CreateRefCountedObj@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@@WRL@Microsoft@@XZ @ 0x180116928
 * Callers:
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x180118740 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 *__fastcall CreateRefCountedObj<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>(
        __int64 *a1)
{
  char *v2; // rax
  _QWORD *v3; // rdi

  v2 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2 + 8, 0, 0x20uLL);
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    *v3 = &CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (__int64)v3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
