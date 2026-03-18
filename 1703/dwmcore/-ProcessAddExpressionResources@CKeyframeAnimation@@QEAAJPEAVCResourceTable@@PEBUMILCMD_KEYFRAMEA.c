/*
 * XREFs of ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x18012BB74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800C08CC (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSourcesForOwner@CExpression@@QEAAJXZ @ 0x18016ACC0 (-RegisterSourcesForOwner@CExpression@@QEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessAddExpressionResources(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // esi
  struct CResource *ResourceWithoutType; // rax
  CExpression *v10; // rdi
  unsigned int v11; // r8d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-38h]
  CExpression *v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v10 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              110LL) )
      {
        break;
      }
      v18 = v10;
      v12 = DynArray<CBaseExpression *,0>::AddMultipleAndSet((__int64)this + 272, &v18, v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        v17 = 679;
        goto LABEL_13;
      }
      (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v10 + 8LL))(v10);
      v14 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v10 + 152LL))(v10);
      if ( *((_DWORD *)this + 94) > v14 )
        v14 = *((_DWORD *)this + 94);
      *((_DWORD *)this + 94) = v14;
      *((_QWORD *)v10 + 63) = this;
      v12 = CExpression::RegisterSourcesForOwner(v10);
      v13 = v12;
      if ( v12 < 0 )
      {
        v17 = 690;
LABEL_13:
        v16 = v12;
        goto LABEL_15;
      }
      ++a4;
      if ( (unsigned int)++v4 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v13 = -2003303421;
    v17 = 673;
    v16 = -2003303421;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
  }
  else
  {
    return 0;
  }
  return v13;
}
