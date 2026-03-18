/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C0164570
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0161D74 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01603F4 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0160620 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01609A8 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0160E98 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0161FD4 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0162950 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

__int64 CitpStart(void)
{
  int v0; // ebx
  struct _CIT_IMPACT_CONTEXT *v1; // rax
  const char *v2; // rdx
  __int64 v3; // rdi
  const char *v4; // rdx
  __int16 v5; // ax

  if ( byte_1C01A1681 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v1 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool(832LL, 0x49637355u);
    v3 = (__int64)v1;
    if ( v1 )
    {
      CitpContextInitialize(v1);
      v0 = CitpContextTrackingDataStart((struct _CIT_IMPACT_CONTEXT *)v3, v4);
      if ( v0 >= 0 )
      {
        v5 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v5 = -1;
        v0 = 0;
        *(_WORD *)(v3 + 116) = v5;
      }
      if ( v0 >= 0 )
      {
        qword_1C01A16B0 = (struct _CIT_IMPACT_CONTEXT *)v3;
        v3 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          CitpPostUpdateUseInfoLoad(qword_1C01A16B0);
          CitpDPDataLoad(qword_1C01A16B0);
          CitpUpdateBootStats(qword_1C01A16B0);
        }
        v0 = 0;
      }
      if ( v3 )
      {
        CitpContextCleanup((struct _CIT_IMPACT_CONTEXT *)v3);
        Win32FreePool(v3);
      }
    }
    else
    {
      v0 = -1073741670;
      CitpLogFailureWorker(3221225626LL, v2, 0xC4u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v0;
}
