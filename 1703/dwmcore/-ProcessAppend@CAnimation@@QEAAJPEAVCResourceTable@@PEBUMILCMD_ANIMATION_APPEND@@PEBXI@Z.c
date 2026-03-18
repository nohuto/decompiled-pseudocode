/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x1800217DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180021A20 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBB38 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), 0x20uLL) )
  {
    v8 = -2147024362;
    v14 = 289;
    goto LABEL_22;
  }
  v8 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v8 = -2003303421;
    v14 = 293;
LABEL_22:
    v13 = v8;
    goto LABEL_23;
  }
  if ( a4 && *((_DWORD *)a3 + 2) )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v9 = CPayloadedAnimationPrimitiveBuffer::Create(&v15);
      v8 = v9;
      if ( v9 < 0 )
      {
        v14 = 302;
LABEL_19:
        v13 = v9;
LABEL_23:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
        goto LABEL_12;
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
      v14 = 306;
    }
    else
    {
      v10 = *((_QWORD *)this + 18);
      if ( v10 && !*(_QWORD *)(v10 + 88) )
        goto LABEL_12;
      v9 = CBaseAnimation::RegisterAnimateResource(this);
      v8 = v9;
      if ( v9 >= 0 )
        goto LABEL_12;
      v14 = 312;
    }
    goto LABEL_19;
  }
LABEL_12:
  v11 = *((_QWORD *)this + 15);
  if ( v11 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11) )
    ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 120);
  return v8;
}
