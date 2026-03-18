/*
 * XREFs of ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x18002CF40
 * Callers:
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B9AD4 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 * Callees:
 *     ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18002D880 (-GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18011BFD0 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     McTemplateU0xxqf @ 0x1801563C4 (McTemplateU0xxqf.c)
 */

__int64 __fastcall CAnimation::OnAddBinding(CAnimation *this, struct CBaseAnimation::AnimationBinding *a2)
{
  CSharedSectionAnimationPrimitiveBuffer *v4; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v5)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax
  const struct DwmAnimationPrimitive *v6; // rax
  int v7; // edx
  int v8; // ecx
  bool v9; // zf
  int v10; // xmm0_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    v5 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v4 + 24LL);
    v6 = v5 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive
       ? CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v4, 0)
       : v5(v4, 0);
    if ( v6 )
    {
      v9 = *(_DWORD *)v6 == 1;
      LOBYTE(v10) = 0;
      v12 = 0.0;
      if ( v9 )
      {
        v10 = *((_DWORD *)v6 + 7);
      }
      else if ( *(_DWORD *)v6 == 4 )
      {
        v10 = *((_DWORD *)v6 + 4);
      }
      else if ( *(_DWORD *)v6 == 2 )
      {
        CAnimationInterpolator::GetInterpolatedValue((CAnimation *)((char *)this + 264), *((_QWORD *)v6 + 1), &v12, 0LL);
        LOBYTE(v10) = LOBYTE(v12);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xxqf(v8, v7, (_DWORD)this, *(_QWORD *)a2, *((_DWORD *)a2 + 2), v10);
    }
  }
  return 0LL;
}
