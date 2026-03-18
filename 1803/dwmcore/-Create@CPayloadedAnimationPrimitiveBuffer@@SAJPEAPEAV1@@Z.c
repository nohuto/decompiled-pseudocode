/*
 * XREFs of ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x18001A8BC
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001A6F8 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Create(struct CPayloadedAnimationPrimitiveBuffer **a1)
{
  unsigned int v2; // edi
  struct CPayloadedAnimationPrimitiveBuffer *v3; // rax
  struct CPayloadedAnimationPrimitiveBuffer *v4; // rbx

  v2 = 0;
  v3 = (struct CPayloadedAnimationPrimitiveBuffer *)operator new(0x30uLL);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v3 = &CPayloadedAnimationPrimitiveBuffer::`vftable';
    *((_DWORD *)v3 + 2) = 0;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 10) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(struct CPayloadedAnimationPrimitiveBuffer *))v4)(v4);
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xDu);
  }
  return v2;
}
