/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C01D4B14
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01550C8 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0027D68 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C01D4234 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C01D7144 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, char a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  DXGDODPRESENT *v8; // rax
  unsigned int v9; // edi
  DXGDODPRESENT *v10; // rbx

  v4 = (char *)operator new[](2704LL * *((unsigned int *)a1 + 20) + 136, 0x4B677844u, (POOL_TYPE)512);
  if ( !v4 )
  {
    v6 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdLowResource(v6);
    return 0LL;
  }
  v8 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, (BLTQUEUE *)(v4 + 136), a2);
  v9 = 0;
  v10 = v8;
  if ( *(_DWORD *)v8 )
  {
    while ( (int)BLTQUEUE::Startup((PVOID)(*((_QWORD *)v10 + 1) + 2704LL * v9)) >= 0 )
    {
      if ( ++v9 >= *(_DWORD *)v10 )
        return v10;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v10);
    return 0LL;
  }
  return v10;
}
