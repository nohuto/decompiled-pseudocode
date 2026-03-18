/*
 * XREFs of ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x1800B0788
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800B0364 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800D0400 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 */

char __fastcall CLegacySurfaceManager::ProcessVistaBltToken(
        CLegacySurfaceManager *this,
        union _ULARGE_INTEGER a2,
        bool *a3)
{
  char v3; // di
  CWindowNode **v6; // rax
  DWORD Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  bool v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0LL;
  v10 = 0;
  *a3 = 0;
  Buffer = a2.HighPart;
  v6 = (CWindowNode **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), &Buffer);
  if ( v6 )
  {
    CWindowNode::ProcessVistaBltToken(v6[1], a2, a3, &v10);
    return v10;
  }
  return v3;
}
