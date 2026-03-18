/*
 * XREFs of ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C001C030
 * Callers:
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001C0B4 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        unsigned __int8 a3)
{
  char *v5; // rdx
  int v6; // eax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 20;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 1) = 28;
  if ( a3 )
    v6 = *((_DWORD *)this + 172);
  else
    v6 = *((_DWORD *)this + 171);
  *((_DWORD *)v5 + 2) = v6;
  *((_DWORD *)v5 + 3) = a3;
  *((_DWORD *)v5 + 4) = *((_DWORD *)this + 178);
  return 1;
}
