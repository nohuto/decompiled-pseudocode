/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800C2040
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x18003FB70 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180051070 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // r9
  CResource *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // eax
  __int64 (__fastcall *v12)(CResource *); // rax
  __int64 (__fastcall *v13)(CAnimation *, struct CBaseAnimation::AnimationBinding *); // rax
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    *(_QWORD *)&v16 = ResourceWithoutType;
    v7 = (_QWORD *)((char *)this + 64);
    DWORD2(v16) = *(_DWORD *)(v5 + 12);
    v8 = *((unsigned int *)this + 22);
    v9 = v8 + 1;
    v10 = (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
    }
    else if ( v9 <= *((_DWORD *)this + 21) )
    {
      *(_OWORD *)(*v7 + 16 * v8) = v16;
      *((_DWORD *)this + 22) = v9;
    }
    else
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 0x10u, 1, &v16);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x25u);
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v6 + 8LL);
      if ( v12 == CResource::AddRef )
        CResource::AddRef(v6);
      else
        v12(v6);
      v13 = *(__int64 (__fastcall **)(CAnimation *, struct CBaseAnimation::AnimationBinding *))(*(_QWORD *)this + 152LL);
      if ( v13 == CAnimation::OnAddBinding )
        v14 = CAnimation::OnAddBinding(this, (struct CBaseAnimation::AnimationBinding *)&v16);
      else
        v14 = v13(this, (struct CBaseAnimation::AnimationBinding *)&v16);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2Bu);
    }
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1Eu);
  }
  return (unsigned int)v10;
}
