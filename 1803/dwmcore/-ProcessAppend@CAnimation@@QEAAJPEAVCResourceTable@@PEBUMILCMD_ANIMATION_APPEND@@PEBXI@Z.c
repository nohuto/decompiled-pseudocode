/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18001A6F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x18001A8BC (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C2004 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x1800C66A8 (--$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int v9; // ebx
  struct CPayloadedAnimationPrimitiveBuffer *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 2);
  if ( !is_mul_ok(v5, 0x20uLL) )
  {
    v9 = -2147024362;
    v16 = 291;
    goto LABEL_22;
  }
  v9 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v9 = -2003303421;
    v16 = 295;
LABEL_22:
    v15 = v9;
    goto LABEL_23;
  }
  if ( a4 && v5 )
  {
    v10 = (struct CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)this + 15);
    if ( !v10 )
    {
      v11 = CPayloadedAnimationPrimitiveBuffer::Create(&v17);
      v9 = v11;
      if ( v11 < 0 )
      {
        v16 = 304;
LABEL_19:
        v15 = v11;
LABEL_23:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16);
        goto LABEL_12;
      }
      v10 = v17;
      *((_QWORD *)this + 15) = v17;
      v5 = *((_DWORD *)a3 + 2);
    }
    v11 = (*(__int64 (__fastcall **)(struct CPayloadedAnimationPrimitiveBuffer *, _QWORD, const void *))(*(_QWORD *)v10 + 40LL))(
            v10,
            v5,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v16 = 308;
    }
    else
    {
      v12 = *((_QWORD *)this + 18);
      if ( v12 && !*(_QWORD *)(v12 + 88) )
        goto LABEL_12;
      v11 = CBaseAnimation::RegisterAnimateResource(this);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_12;
      v16 = 314;
    }
    goto LABEL_19;
  }
LABEL_12:
  v13 = *((_QWORD *)this + 15);
  if ( v13 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
    ReleaseInterface<CAnimationPrimitiveBuffer>((char *)this + 120);
  return v9;
}
