/*
 * XREFs of ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18015EC48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v5; // r15d
  unsigned int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // edi
  struct CResource *ResourceWithoutType; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct CResource *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // eax
  signed int v21; // ebx
  signed int v22; // eax
  __int64 v23; // rbx
  unsigned int v24; // edi
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  DWORD v30; // r9d
  __int64 v31; // rcx
  unsigned int v32; // [rsp+20h] [rbp-20h]
  __int128 v33; // [rsp+30h] [rbp-10h] BYREF
  __int64 v35; // [rsp+90h] [rbp+50h] BYREF

  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v9 = a5;
    while ( 1 )
    {
      v10 = *a4;
      v11 = v9;
      v33 = 0LL;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v10);
      v13 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              48LL) )
      {
        break;
      }
      if ( (_QWORD)v33 != v13 )
      {
        v35 = v13;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v35);
        v14 = v33;
        *(_QWORD *)&v33 = v13;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = CResourceTable::GetResourceWithoutType(a2, a4[1]);
      v16 = (__int64)v15;
      if ( !v15
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v15 + 48LL))(v15, 48LL)
        && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 48LL))(v16, 92LL) )
      {
        v32 = 87;
        goto LABEL_39;
      }
      if ( *((_QWORD *)&v33 + 1) != v16 )
      {
        v35 = v16;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v35);
        v35 = *((_QWORD *)&v33 + 1);
        *((_QWORD *)&v33 + 1) = v16;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      }
      a4 += 2;
      v18 = (_QWORD *)((char *)this + 280);
      v19 = *((_DWORD *)this + 76);
      v20 = v19 + 1;
      v9 = v19 + 1;
      if ( v19 + 1 < v19 )
        v9 = v11;
      v21 = v20 < v19 ? 0x80070216 : 0;
      if ( v20 < v19 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)this + 75) )
      {
        v22 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v18, 0x10u, v17, &v33);
        v21 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*v18 + 16LL * v19) = v33;
        *((_DWORD *)this + 76) = v9;
      }
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x60u);
        goto LABEL_41;
      }
      v23 = v33;
      v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 168LL))(*((_QWORD *)&v33 + 1));
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 168LL))(v23);
      if ( v25 > v24 )
        v24 = v25;
      if ( *((_DWORD *)this + 82) > v24 )
        v24 = *((_DWORD *)this + 82);
      v26 = v33;
      *((_DWORD *)this + 82) = v24;
      (*(void (__fastcall **)(__int64, CConditionalExpression *))(*(_QWORD *)v26 + 192LL))(v26, this);
      (*(void (__fastcall **)(_QWORD, CConditionalExpression *))(**((_QWORD **)&v33 + 1) + 192LL))(
        *((_QWORD *)&v33 + 1),
        this);
      v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 200LL))(v33);
      v21 = v27;
      if ( v27 < 0 )
      {
        v32 = 107;
        goto LABEL_35;
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 200LL))(*((_QWORD *)&v33 + 1));
      v21 = v27;
      if ( v27 < 0 )
      {
        v32 = 108;
LABEL_35:
        v30 = v27;
        goto LABEL_40;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33 + 1);
      v28 = v33;
      if ( (_QWORD)v33 )
      {
        *(_QWORD *)&v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        return 0;
    }
    v32 = 75;
LABEL_39:
    v30 = -2003303421;
    v21 = -2003303421;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, v32);
LABEL_41:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33 + 1);
    v31 = v33;
    if ( (_QWORD)v33 )
    {
      *(_QWORD *)&v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v21;
}
