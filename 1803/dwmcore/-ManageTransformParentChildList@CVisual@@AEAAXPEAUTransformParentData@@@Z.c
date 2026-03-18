/*
 * XREFs of ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18004D0A0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180050B88 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C0678 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ManageTransformParentChildList(CVisual *this, struct TransformParentData *a2)
{
  __int64 v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  CVisual *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 && (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 152LL))(*(_QWORD *)a2) )
  {
    if ( (*((_BYTE *)this + 94) & 0x40) == 0 )
    {
      v3 = *((_QWORD *)this + 2);
      v8 = this;
      v4 = *(_DWORD *)(v3 + 1040);
      v5 = v4 + 1;
      if ( v4 + 1 < v4 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4 + 1 < v4 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v5 > *(_DWORD *)(v3 + 1036) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 1016, 8LL, 1LL, &v8);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v3 + 1016) + 8LL * v4) = v8;
        *(_DWORD *)(v3 + 1040) = v5;
      }
      *((_BYTE *)this + 94) |= 0x40u;
    }
  }
  else if ( (*((_BYTE *)this + 94) & 0x40) != 0 )
  {
    v7 = *((_QWORD *)this + 2) + 1016LL;
    v8 = this;
    DynArray<CVisual *,0>::Remove(v7, &v8);
    *((_BYTE *)this + 94) &= ~0x40u;
  }
}
