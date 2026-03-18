/*
 * XREFs of ?EmitInjections@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142E3C
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01430F0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitInjections(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rdx
  _OWORD **v5; // rax
  _OWORD *v6; // rcx
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 24) )
    return 1;
  while ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x8CuLL, &v11) )
  {
    v4 = (char *)v11;
    *(_DWORD *)v11 = 140;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 1) = 229;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    v5 = (_OWORD **)*((_QWORD *)this + 11);
    v6 = *v5;
    *(_OWORD *)(v4 + 12) = **v5;
    *(_OWORD *)(v4 + 28) = v6[1];
    *(_OWORD *)(v4 + 44) = v6[2];
    *(_OWORD *)(v4 + 60) = v6[3];
    *(_OWORD *)(v4 + 76) = v6[4];
    *(_OWORD *)(v4 + 92) = v6[5];
    *(_OWORD *)(v4 + 108) = v6[6];
    *(_OWORD *)(v4 + 124) = v6[7];
    Win32FreePool(**((_QWORD **)this + 11));
    v7 = (*((_DWORD *)this + 24))-- == 1;
    v8 = 0LL;
    if ( !v7 )
    {
      do
      {
        v9 = (unsigned int)(v8 + 1);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v8) = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v9);
        v8 = v9;
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 24) );
    }
    if ( !*((_DWORD *)this + 24) )
      return 1;
  }
  return 0;
}
