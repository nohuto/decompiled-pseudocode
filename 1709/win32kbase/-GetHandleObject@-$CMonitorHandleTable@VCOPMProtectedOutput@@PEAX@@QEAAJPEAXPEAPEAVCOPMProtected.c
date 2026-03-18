/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00A16BC
 * Callers:
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C00A0DBC (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00A0E48 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00A0EC4 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00A0F50 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00A0FDC (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00A1070 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00F0CE4 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00F0D78 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 * Callees:
 *     ?DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@@QEBAEXZ @ 0x1C00A1730 (-DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@@QEBAEXZ.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00A1AE4 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(
        __int64 a1,
        unsigned __int64 a2,
        CMonitorPDO **a3)
{
  CMonitorPDO *v5; // rdi
  CMonitorPDO *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 >= 0x100000000LL )
    return *(unsigned int *)(a1 + 16);
  if ( (int)CList<COPMProtectedOutput>::GetElement(a1, a2, &v7) < 0 )
    return *(unsigned int *)(a1 + 16);
  v5 = v7;
  if ( !CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(v7) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v5;
  return 0LL;
}
