/*
 * XREFs of ??$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@PEAI@Z @ 0x18016F308
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18006B35C (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetExpressionArray<MILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS,DynArrayIANoCtor<CBaseExpression *,2,0>>(
        __int64 a1,
        CResourceTable *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  int v7; // esi
  unsigned int *v12; // r12
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v14; // rdi
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // eax
  DWORD v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-38h]
  struct CResource *v22; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v12 = a7;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v14 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              48LL) )
      {
        break;
      }
      v22 = v14;
      v16 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a6, &v22, v15);
      v17 = v16;
      if ( v16 < 0 )
      {
        v21 = 296;
        goto LABEL_14;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 8LL))(v14);
      v18 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 168LL))(v14);
      if ( *v12 > v18 )
        v18 = *v12;
      *v12 = v18;
      (*(void (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 192LL))(v14, a1);
      v16 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 200LL))(v14);
      v17 = v16;
      if ( v16 < 0 )
      {
        v21 = 307;
LABEL_14:
        v20 = v16;
        goto LABEL_16;
      }
      ++a4;
      if ( (unsigned int)++v7 >= *(_DWORD *)(a3 + 8) )
        return 0;
    }
    v17 = -2003303421;
    v21 = 291;
    v20 = -2003303421;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, v21);
  }
  else
  {
    return 0;
  }
  return v17;
}
