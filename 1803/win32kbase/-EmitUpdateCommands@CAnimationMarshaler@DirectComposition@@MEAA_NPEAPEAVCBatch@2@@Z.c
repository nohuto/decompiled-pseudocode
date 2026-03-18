/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006E60
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007610 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007664 (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000768C (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00076F8 (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007778 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00077E8 (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0007880 (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v2; // rbx
  char v4; // bp
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rdx
  char *v9; // rax
  char *v10; // rsi
  __int64 v11; // rax
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 16;
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return 0;
    v6 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 4;
    *((_DWORD *)v6 + 2) = *((_DWORD *)v2 + 10);
    *((_DWORD *)v6 + 3) = *((_DWORD *)v2 + 56);
    *((_DWORD *)v2 + 8) &= ~0x20000u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitBeginTime((DirectComposition::CAnimationMarshaler *)v2, a2) )
    return 0;
  if ( *((_QWORD *)v2 + 18) )
  {
    if ( (*((_DWORD *)v2 + 8) & 0x200) == 0 && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v12) )
    {
      v7 = (char *)v12;
      *(_DWORD *)v12 = 28;
      *(_QWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 12) = 0LL;
      *(_QWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 11;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v2 + 10);
      *(_OWORD *)(v7 + 12) = *(_OWORD *)*((_QWORD *)v2 + 18);
      *((_DWORD *)v2 + 8) |= 0x200u;
    }
    if ( *((_QWORD *)v2 + 18) && (*((_DWORD *)v2 + 8) & 0x200) == 0 )
      return 0;
  }
  if ( *((_QWORD *)v2 + 17) && (*((_DWORD *)v2 + 8) & 0x400) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return 0;
    v8 = (char *)v12;
    *(_DWORD *)v12 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 10;
    *((_DWORD *)v8 + 2) = *((_DWORD *)v2 + 10);
    *((_DWORD *)v8 + 3) = *(_DWORD *)(*((_QWORD *)v2 + 17) + 24LL);
    *((_DWORD *)v2 + 8) |= 0x400u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPrimitives((DirectComposition::CAnimationMarshaler *)v2, a2) )
    return 0;
  v4 = 1;
  if ( !*((_DWORD *)v2 + 39) || (*((_DWORD *)v2 + 8) & 0x800) != 0 )
    goto LABEL_7;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v12) )
    return 0;
  v9 = (char *)v12;
  *(_DWORD *)v12 = 52;
  v10 = v9 + 4;
  memset(v9 + 4, 0, 0x30uLL);
  *(_DWORD *)v10 = 5;
  *((_DWORD *)v10 + 1) = *((_DWORD *)v2 + 10);
  *((_DWORD *)v10 + 2) = *((_DWORD *)v2 + 39);
  *(_QWORD *)(v10 + 12) = *((_QWORD *)v2 + 20);
  v11 = *((_QWORD *)v2 + 21);
  if ( v11 )
    LODWORD(v11) = *(_DWORD *)(v11 + 40);
  *((_DWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 6) = *((_DWORD *)v2 + 44);
  *((_DWORD *)v10 + 7) = v2[200] & 1;
  *((_QWORD *)v10 + 4) = *((_QWORD *)v2 + 23);
  *((_QWORD *)v10 + 5) = *((_QWORD *)v2 + 24);
  *((_DWORD *)v2 + 8) |= 0x800u;
LABEL_7:
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPaused((DirectComposition::CAnimationMarshaler *)v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetSeek((DirectComposition::CAnimationMarshaler *)v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetInstance((DirectComposition::CAnimationMarshaler *)v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitClearTimeEvents((DirectComposition::CAnimationMarshaler *)v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitAddTimeEvents((DirectComposition::CAnimationMarshaler *)v2, a2) )
  {
    return 0;
  }
  return v4;
}
