/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180156044
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A98 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x1801875C4 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  DWORD v11; // r9d
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), 0x20uLL) )
  {
    v8 = -2147024362;
    v14 = 291;
    goto LABEL_18;
  }
  v8 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v8 = -2003303421;
    v14 = 295;
LABEL_18:
    v11 = v8;
    goto LABEL_19;
  }
  if ( a4 && *((_DWORD *)a3 + 2) )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v9 = CPayloadedAnimationPrimitiveBuffer::Create(&v15);
      v8 = v9;
      if ( v9 < 0 )
      {
        v14 = 304;
LABEL_15:
        v11 = v9;
LABEL_19:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v14);
        goto LABEL_20;
      }
      *((_QWORD *)this + 15) = v15;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const void *))(**((_QWORD **)this + 15) + 40LL))(
           *((_QWORD *)this + 15),
           *((unsigned int *)a3 + 2),
           a4);
    v8 = v9;
    if ( v9 < 0 )
    {
      v14 = 308;
    }
    else
    {
      v10 = *((_QWORD *)this + 18);
      if ( v10 && !*(_QWORD *)(v10 + 88) )
        goto LABEL_20;
      v9 = CBaseAnimation::RegisterAnimateResource((CComposition **)this);
      v8 = v9;
      if ( v9 >= 0 )
        goto LABEL_20;
      v14 = 314;
    }
    goto LABEL_15;
  }
LABEL_20:
  v12 = *((_QWORD *)this + 15);
  if ( v12 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
    ReleaseInterface<CDisplay>((__int64 *)this + 15);
  return v8;
}
