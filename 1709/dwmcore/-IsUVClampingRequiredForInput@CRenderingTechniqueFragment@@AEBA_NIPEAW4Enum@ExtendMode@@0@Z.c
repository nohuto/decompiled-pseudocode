/*
 * XREFs of ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x18006B9F0
 * Callers:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006B834 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ?ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ @ 0x1801D5408 (-ClearConsumerUVClampingRequirement@CRenderingTechniqueFragment@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
        CRenderingTechniqueFragment *this,
        unsigned int a2,
        enum ExtendMode::Enum *a3,
        enum ExtendMode::Enum *a4)
{
  char v4; // bp
  char v5; // al
  char v7; // r8
  __int64 v9; // rcx
  __int64 v13; // rax
  char v14; // al
  char v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_BYTE *)this + 120);
  v5 = 0;
  v16 = 0;
  v7 = 0;
  v9 = *(_QWORD *)this;
  v15 = 0;
  if ( v9 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, char *))(*(_QWORD *)v13 + 56LL))(
            v13,
            *((unsigned int *)this + 4),
            a2,
            &v15,
            &v16);
    v7 = v15;
    v4 |= v14;
    v5 = v16;
  }
  if ( a3 )
    *(_BYTE *)a3 = v7;
  if ( a4 )
    *(_BYTE *)a4 = v5;
  return v4;
}
