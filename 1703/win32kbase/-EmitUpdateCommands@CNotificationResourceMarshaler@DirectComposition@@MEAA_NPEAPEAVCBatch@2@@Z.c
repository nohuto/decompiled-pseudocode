/*
 * XREFs of ?EmitUpdateCommands@CNotificationResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00D5260
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CNotificationResourceMarshaler::EmitUpdateCommands(
        DirectComposition::CNotificationResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 16;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 3) = 0;
      *((_DWORD *)v4 + 1) = 247;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 10);
      *((_DWORD *)this + 4) &= ~0x20u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
