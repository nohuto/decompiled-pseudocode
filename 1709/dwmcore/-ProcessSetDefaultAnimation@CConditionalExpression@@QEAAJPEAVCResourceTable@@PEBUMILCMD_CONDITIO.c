/*
 * XREFs of ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z @ 0x18015EF50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::ProcessSetDefaultAnimation(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *a3)
{
  struct CResource *ResourceWithoutType; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = 0;
  v6 = (__int64)ResourceWithoutType;
  if ( !ResourceWithoutType
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
         ResourceWithoutType,
         48LL) )
  {
    v8 = v6;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v8);
    v8 = *((_QWORD *)this + 39);
    *((_QWORD *)this + 39) = v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x8Au);
  }
  return v5;
}
