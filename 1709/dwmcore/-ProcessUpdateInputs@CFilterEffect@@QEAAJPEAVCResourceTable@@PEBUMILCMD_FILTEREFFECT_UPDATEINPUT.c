/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801644C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180162D30 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x180162D60 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180163970 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x180164770 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  char *v6; // rbx
  CResourceTable *v7; // r8
  int v10; // edi
  DWORD v11; // r9d
  unsigned int v12; // ebp
  _DWORD **v13; // r15
  struct CResource *ResourceWithoutType; // rsi
  __int64 v15; // rbx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int *v18; // r14
  unsigned int v19; // edx
  char *v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rcx
  unsigned int v23; // edi
  signed int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-48h]
  char *v29; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x2D4u);
    goto LABEL_44;
  }
  v10 = 0;
  if ( 28 * v5 == a5 )
  {
    if ( a4 )
    {
      v12 = 0;
      if ( (_DWORD)v5 )
      {
        v13 = (_DWORD **)((char *)this + 136);
        while ( 1 )
        {
          ResourceWithoutType = 0LL;
          v15 = 0LL;
          if ( *((int *)this + 38) <= 0 )
          {
LABEL_13:
            v15 = -1LL;
          }
          else
          {
            v16 = *v13;
            while ( *v16 != a4[7 * v12] )
            {
              ++v15;
              ++v16;
              if ( v15 >= *((int *)this + 38) )
                goto LABEL_13;
            }
          }
          v6 = v15 == -1 ? 0LL : *(char **)(*((_QWORD *)this + 18) + 8 * v15);
          v17 = 7LL * v12;
          v18 = &a4[v17];
          if ( (a4[v17 + 6] & 2) == 0 )
            break;
          if ( v6 )
          {
            CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
              (char *)this + 136,
              *v18,
              v7);
            InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
LABEL_36:
            v7 = a2;
          }
          v6 = 0LL;
          if ( ++v12 >= *((_DWORD *)a3 + 3) )
            goto LABEL_44;
        }
        v19 = a4[v17 + 1];
        if ( v19 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v19);
          if ( !ResourceWithoutType )
          {
            v26 = 757;
            goto LABEL_4;
          }
        }
        if ( v6 )
        {
          CResource::UnRegisterNotifierInternal(this, *((struct CResource **)v6 + 3));
          v22 = *((_QWORD *)v6 + 3);
          v23 = v18[6];
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          *((_QWORD *)v6 + 3) = ResourceWithoutType;
          if ( ResourceWithoutType )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          *(_DWORD *)v6 = v23;
          *(_OWORD *)(v6 + 4) = *(_OWORD *)(v18 + 2);
        }
        else
        {
          v20 = (char *)operator new(0x20uLL);
          v6 = v20;
          if ( v20 )
          {
            *(_DWORD *)v20 = v18[6];
            v21 = *(_OWORD *)(v18 + 2);
            *((_QWORD *)v20 + 3) = ResourceWithoutType;
            *(_OWORD *)(v20 + 4) = v21;
            if ( ResourceWithoutType )
              (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          }
          else
          {
            v6 = 0LL;
          }
          v29 = v6;
          if ( !v6 )
          {
            v11 = -2147024882;
            v26 = 764;
            goto LABEL_5;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (__int64)this + 136,
                                v18,
                                &v29) )
          {
            v10 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2FFu);
            v6 = v29;
            goto LABEL_45;
          }
          v6 = v29;
        }
        v24 = CResource::RegisterNotifier(this, *((struct CResource **)v6 + 3));
        v10 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x311u);
          goto LABEL_44;
        }
        goto LABEL_36;
      }
    }
LABEL_44:
    if ( v10 >= 0 )
      goto LABEL_46;
    goto LABEL_45;
  }
  v26 = 728;
LABEL_4:
  v11 = -2003303421;
LABEL_5:
  v10 = v11;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v26);
LABEL_45:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_46:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
  return (unsigned int)v10;
}
