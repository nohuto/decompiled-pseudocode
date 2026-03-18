/*
 * XREFs of ??$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@PEAI@Z @ 0x1801973F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x180078ED0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-38h]
  struct CResource *v21; // [rsp+70h] [rbp+18h] BYREF

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
              54LL) )
      {
        break;
      }
      v21 = v14;
      v15 = DynArray<CBaseExpression *,0>::AddMultipleAndSet(a6, &v21);
      v16 = v15;
      if ( v15 < 0 )
      {
        v20 = 313;
        goto LABEL_14;
      }
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 8LL))(v14);
      v17 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 168LL))(v14);
      if ( *v12 > v17 )
        v17 = *v12;
      *v12 = v17;
      (*(void (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 192LL))(v14, a1);
      v15 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 200LL))(v14);
      v16 = v15;
      if ( v15 < 0 )
      {
        v20 = 324;
LABEL_14:
        v19 = v15;
        goto LABEL_16;
      }
      ++a4;
      if ( (unsigned int)++v7 >= *(_DWORD *)(a3 + 8) )
        return 0;
    }
    v16 = -2003303421;
    v20 = 308;
    v19 = -2003303421;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v20);
  }
  else
  {
    return 0;
  }
  return v16;
}
