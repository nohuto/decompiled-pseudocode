/*
 * XREFs of ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x1800A578C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetScalarProperty(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(CPropertyBagBase *, __int64, _QWORD, __int64, struct CResourceTable **); // rax
  signed int updated; // eax
  unsigned int v8; // ebx
  struct CResourceTable *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_QWORD *)this;
  v4 = *((_DWORD *)a3 + 2);
  v5 = *((unsigned int *)a3 + 3);
  LODWORD(v10) = *((_DWORD *)a3 + 4);
  v6 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, _QWORD, __int64, struct CResourceTable **))(v3 + 160);
  if ( (char *)v6 == (char *)CPropertyBag::UpdatePropertyValue )
    updated = CPropertyBag::UpdatePropertyValue(this, v5, v4, 18LL, &v10);
  else
    updated = v6(this, v5, v4, 18LL, &v10);
  v8 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x6Cu);
  return v8;
}
