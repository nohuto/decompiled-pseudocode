/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C54AC
 * Callers:
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C5FA4 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00C5060 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00C5248 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  PVOID v6; // r15
  int *v10; // r14
  unsigned __int64 v11; // rbp
  int v12; // edi
  COPMProtectedOutput *PoolWithTag; // rax
  COPMProtectedOutput *v14; // rax
  COPMProtectedOutput *v15; // rsi
  struct _KMUTANT *v16; // rcx
  COPM *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = this;
  v6 = P;
  CMutex::Lock((void **)P + 3);
  v10 = a6;
  v11 = 0LL;
  v12 = 0;
  LODWORD(v18) = 0;
  *a6 = 0;
  PoolWithTag = (COPMProtectedOutput *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v14 = COPMProtectedOutput::COPMProtectedOutput(PoolWithTag, a2, a3, a4, (int *)&v18);
    v12 = (int)v18;
    v15 = v14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v12 = -1073741801;
    goto LABEL_14;
  }
  if ( v12 < 0 )
    goto LABEL_11;
  v12 = CList<COPMProtectedOutput>::AddElement((__int64)v6, (__int64)v15, &v18);
  if ( v12 >= 0 )
  {
    v11 = (unsigned int)v18;
    v12 = 0;
  }
  if ( v12 < 0 )
  {
LABEL_11:
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v15)(v15, 1LL);
    if ( v12 != -1073741198 )
      goto LABEL_14;
    *v10 = 1;
  }
  else
  {
    *a5 = (void *)v11;
  }
  v12 = 0;
LABEL_14:
  v16 = (struct _KMUTANT *)*((_QWORD *)v6 + 3);
  if ( v16 )
    KeReleaseMutex(v16, 0);
  return (unsigned int)v12;
}
