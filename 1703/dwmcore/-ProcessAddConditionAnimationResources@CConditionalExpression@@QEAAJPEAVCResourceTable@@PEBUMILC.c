/*
 * XREFs of ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18012BE78
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800C59BC (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSourcesForOwner@CExpression@@QEAAJXZ @ 0x18016ACC0 (-RegisterSourcesForOwner@CExpression@@QEAAJXZ.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAddConditionAnimationResources(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  int v5; // r15d
  CConditionalExpression *v9; // rdi
  unsigned int v11; // edx
  struct CResource *ResourceWithoutType; // rax
  __int64 v13; // rbx
  struct CResource *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  CExpression *v22; // rbx
  unsigned int v23; // edi
  unsigned int v24; // eax
  CExpression *v25; // rax
  int v26; // eax
  int v27; // eax
  CExpression *v28; // rcx
  CExpression *v29; // rcx
  CExpression *v30; // rcx
  CExpression *v31; // rcx
  CExpression *v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-20h]
  CExpression *v35[2]; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  v9 = this;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      v11 = *a4;
      *(_OWORD *)v35 = 0LL;
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v11);
      v13 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              111LL) )
      {
        break;
      }
      Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)v35, v13);
      v14 = CResourceTable::GetResourceWithoutType(a2, a4[1]);
      v15 = (__int64)v14;
      if ( !v14 || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v14 + 48LL))(v14, 111LL) )
      {
        v34 = 85;
        goto LABEL_36;
      }
      Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)&v35[1], v15);
      a4 += 2;
      v17 = (_QWORD *)((char *)v9 + 232);
      v18 = *((_DWORD *)v9 + 64);
      v19 = v18 + 1;
      if ( v18 + 1 >= v18 )
        a5 = v18 + 1;
      v20 = v19 < v18 ? 0x80070216 : 0;
      if ( v19 < v18 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB5u);
      }
      else if ( a5 > *((_DWORD *)v9 + 63) )
      {
        v21 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v17, 0x10u, v16, v35);
        v20 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*v17 + 16LL * v18) = *(_OWORD *)v35;
        *((_DWORD *)v9 + 64) = a5;
      }
      if ( (v20 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x5Eu);
        goto LABEL_37;
      }
      v22 = v35[0];
      v23 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v35[1] + 152LL))(v35[1]);
      v24 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)v22 + 152LL))(v22);
      if ( v24 > v23 )
        v23 = v24;
      v25 = v35[0];
      if ( *((_DWORD *)this + 70) > v23 )
        v23 = *((_DWORD *)this + 70);
      *((_DWORD *)this + 70) = v23;
      *((_QWORD *)v25 + 63) = this;
      *((_QWORD *)v35[1] + 63) = this;
      v26 = CExpression::RegisterSourcesForOwner(v35[0]);
      v20 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x69u);
LABEL_29:
        v30 = v35[1];
        if ( v35[1] )
        {
          v35[1] = 0LL;
          (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v31 = v35[0];
        if ( v35[0] )
        {
          v35[0] = 0LL;
LABEL_41:
          (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v31 + 16LL))(v31);
          return v20;
        }
        return v20;
      }
      v27 = CExpression::RegisterSourcesForOwner(v35[1]);
      v20 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x6Au);
        goto LABEL_29;
      }
      v28 = v35[1];
      if ( v35[1] )
      {
        v35[1] = 0LL;
        (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = v35[0];
      if ( v35[0] )
      {
        v35[0] = 0LL;
        (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v29 + 16LL))(v29);
      }
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        return 0;
      v9 = this;
    }
    v34 = 75;
LABEL_36:
    v20 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v34);
LABEL_37:
    v32 = v35[1];
    if ( v35[1] )
    {
      v35[1] = 0LL;
      (*(void (__fastcall **)(CExpression *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v31 = v35[0];
    if ( v35[0] )
    {
      v35[0] = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    return 0;
  }
  return v20;
}
