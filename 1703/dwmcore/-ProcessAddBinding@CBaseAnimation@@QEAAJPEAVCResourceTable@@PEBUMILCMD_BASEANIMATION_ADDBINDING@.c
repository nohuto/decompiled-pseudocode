/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800BBBA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180034810 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1800BC730 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r9
  CResource *v6; // rsi
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // eax
  __int64 (__fastcall *v13)(CResource *); // rax
  __int64 (__fastcall *v14)(CAnimation *__hidden, struct CBaseAnimation::AnimationBinding *); // rax
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    v7 = v18;
    v8 = (_QWORD *)((char *)this + 64);
    v9 = *((unsigned int *)this + 22);
    *(_QWORD *)&v17 = ResourceWithoutType;
    DWORD2(v17) = *(_DWORD *)(v5 + 12);
    v10 = v9 + 1;
    if ( (int)v9 + 1 >= (unsigned int)v9 )
      v7 = v9 + 1;
    v11 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
    if ( v10 < (unsigned int)v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB5u);
    }
    else if ( v7 <= *((_DWORD *)this + 21) )
    {
      *(_OWORD *)(*v8 + 16 * v9) = v17;
      *((_DWORD *)this + 22) = v7;
    }
    else
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 0x10u, 1, &v17);
      v11 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x25u);
    }
    else
    {
      v13 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v6 + 8LL);
      if ( v13 == CResource::AddRef )
        CResource::AddRef(v6);
      else
        v13(v6);
      v14 = *(__int64 (__fastcall **)(CAnimation *__hidden, struct CBaseAnimation::AnimationBinding *))(*(_QWORD *)this + 136LL);
      if ( v14 == CAnimation::OnAddBinding )
        v15 = CAnimation::OnAddBinding(this, (struct CBaseAnimation::AnimationBinding *)&v17);
      else
        v15 = v14(this, (struct CBaseAnimation::AnimationBinding *)&v17);
      v11 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2Bu);
    }
  }
  else
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1Eu);
  }
  return (unsigned int)v11;
}
