/*
 * XREFs of ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x1800A5658
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetMatrix4x4Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(CPropertyBagBase *, __int64, _QWORD, __int64, _OWORD *); // rax
  signed int updated; // eax
  unsigned int v8; // ebx
  _OWORD v10[4]; // [rsp+30h] [rbp-50h] BYREF

  v3 = *(_QWORD *)this;
  v4 = *((_DWORD *)a3 + 2);
  v5 = *((unsigned int *)a3 + 3);
  v10[0] = *((_OWORD *)a3 + 1);
  v6 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, _QWORD, __int64, _OWORD *))(v3 + 160);
  v10[1] = *((_OWORD *)a3 + 2);
  v10[2] = *((_OWORD *)a3 + 3);
  v10[3] = *((_OWORD *)a3 + 4);
  if ( (char *)v6 == (char *)CPropertyBag::UpdatePropertyValue )
    updated = CPropertyBag::UpdatePropertyValue(this, v5, v4, 265LL, v10);
  else
    updated = v6(this, v5, v4, 265LL, v10);
  v8 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x11Bu);
  return v8;
}
