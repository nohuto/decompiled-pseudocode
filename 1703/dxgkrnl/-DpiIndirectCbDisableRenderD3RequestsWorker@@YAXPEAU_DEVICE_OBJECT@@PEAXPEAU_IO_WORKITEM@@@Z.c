/*
 * XREFs of ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01CACA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000128C (DpiDisableD3Requests.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0042250 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00422A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     Template_xtq @ 0x1C00422D4 (Template_xtq.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01CB080 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 */

void __fastcall DpiIndirectCbDisableRenderD3RequestsWorker(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  int Miniport; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-40h]
  int v11; // [rsp+28h] [rbp-38h]
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int16 v14; // [rsp+48h] [rbp-18h]
  char v15; // [rsp+4Ah] [rbp-16h]
  PVOID v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  struct _FDO_CONTEXT *v18; // [rsp+78h] [rbp+18h] BYREF

  v16 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v12[0] = 0LL;
  v12[1] = *(_QWORD *)(Context + 4);
  LODWORD(v12[0]) = 1;
  BYTE4(v12[0]) = 1;
  v17 = 0;
  v15 = 0;
  Miniport = DpiIndirectGetMiniport(
               (const struct DXGK_MINIPORT_FILTER *)v12,
               (struct AUTO_REMOVE_LOCK *)&v16,
               (struct AUTO_PNPPOWER_LOCK *)&v13,
               &v18);
  v8 = Miniport;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
  {
    v11 = Miniport;
    v10 = *(_DWORD *)Context;
    Template_xtq(*(unsigned int *)Context, v6, v7, *(_QWORD *)(Context + 4), v10, v11);
  }
  if ( v8 >= 0 )
  {
    v9 = *((_QWORD *)v18 + 3);
    if ( *(_DWORD *)Context )
      DpiDisableD3Requests(v9);
    else
      DpiEnableD3Requests(v9);
  }
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItem);
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v13);
  AUTO_REMOVE_LOCK::Release(&v16);
}
