/*
 * XREFs of ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180041830
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180030570 (RmtSrv_RM_CreateTerminalResourceSet.c)
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180030928 (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(
        ExecutionModel *this,
        const struct RmResourceSetInfo *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  memset_0(a2, 0, 0x180uLL);
  *((_QWORD *)a2 + 46) = *((_QWORD *)this + 186);
  *((_QWORD *)a2 + 8) = *((_QWORD *)this + 158);
  *((_QWORD *)a2 + 9) = *((_QWORD *)this + 159);
  *((_DWORD *)a2 + 2) = *(_DWORD *)this;
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 305);
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 304);
  *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)((char *)this + 1224);
  *((_WORD *)a2 + 20) = *((_WORD *)this + 620);
  *((_BYTE *)a2 + 42) = *((_BYTE *)this + 1242);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 311);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 312);
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 157);
  *((_DWORD *)a2 + 20) = *((_DWORD *)this + 320);
  *((_DWORD *)a2 + 94) = *((_DWORD *)this + 374);
  *(_DWORD *)a2 = *((_DWORD *)this + 302);
  *((_DWORD *)a2 + 90) = *((_DWORD *)this + 371);
  *((_DWORD *)a2 + 95) = *((_DWORD *)this + 375);
  memcpy_s((char *)a2 + 160, 0xC8uLL, (char *)this + 1284, 0xC8uLL);
  memcpy_s((char *)a2 + 88, 0x48uLL, (char *)this + 8, 0x48uLL);
}
