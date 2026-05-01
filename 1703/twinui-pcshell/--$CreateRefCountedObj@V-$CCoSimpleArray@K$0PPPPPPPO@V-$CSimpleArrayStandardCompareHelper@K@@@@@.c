/*
 * XREFs of ??$CreateRefCountedObj@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@@WRL@Microsoft@@XZ @ 0x180032928
 * Callers:
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x180031F98 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall CreateRefCountedObj<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>(
        char **a1)
{
  char *v2; // rax
  char *v3; // rdi

  v2 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset(v2 + 8, 0, 0x20uLL);
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    *(_QWORD *)v3 = &CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
