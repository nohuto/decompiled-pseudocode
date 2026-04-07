/*
 * XREFs of ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18000F760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::WriteInstruction(
        CDrawTileImageInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 i; // rax
  float v5[4]; // [rsp+38h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v5[i] = (float)*((int *)this + i + 4);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, float *))(*(_QWORD *)a2 + 72LL))(
           a2,
           *(unsigned int *)(*((_QWORD *)this + 6) + 24LL),
           v5);
}
