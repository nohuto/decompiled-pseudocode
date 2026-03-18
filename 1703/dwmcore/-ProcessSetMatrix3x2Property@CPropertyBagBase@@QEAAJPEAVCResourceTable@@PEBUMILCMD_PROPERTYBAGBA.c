/*
 * XREFs of ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x180031204
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetMatrix3x2Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY *a3)
{
  int v3; // xmm1_4
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(CPropertyBagBase *, __int64, _QWORD, __int64, __int128 *); // rax
  int updated; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]

  v3 = *((_DWORD *)a3 + 9);
  v4 = *((_DWORD *)a3 + 2);
  v5 = *((unsigned int *)a3 + 3);
  v6 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, _QWORD, __int64, __int128 *))(*(_QWORD *)this + 144LL);
  v10 = *((_OWORD *)a3 + 1);
  v11 = *((_DWORD *)a3 + 8);
  v12 = v3;
  if ( (char *)v6 == (char *)CPropertyBag::UpdatePropertyValue )
    updated = CPropertyBag::UpdatePropertyValue(this, v5, v4, 104LL, &v10);
  else
    updated = v6(this, v5, v4, 104LL, &v10);
  v8 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xFFu);
  return v8;
}
