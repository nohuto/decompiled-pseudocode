/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18009EE30
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::Push(__int64 a1, CMILCOMBase *a2, int a3)
{
  unsigned int v4; // edx
  unsigned int v5; // r8d
  unsigned int v6; // eax
  signed int v7; // ebx
  __int64 (__fastcall *v8)(CMILCOMBase *); // rax
  signed int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h]

  *(_QWORD *)&v11 = a2;
  v4 = v12;
  DWORD2(v11) = a3;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = v5 + 1;
  if ( v5 + 1 >= v5 )
    v4 = v5 + 1;
  v7 = v6 < v5 ? 0x80070216 : 0;
  if ( v6 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, 1, &v11);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16LL * v5) = v11;
    *(_DWORD *)(a1 + 24) = v4;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x20u);
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)a2 + 8LL);
    if ( v8 == CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef(a2);
    else
      v8(a2);
  }
  return (unsigned int)v7;
}
