/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x18018E890
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18018CEA0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18018CED8 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18018DC74 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18018EB3C (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
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
  int v11; // r9d
  int v12; // ebp
  _DWORD **v13; // r15
  struct CResource *ResourceWithoutType; // rsi
  __int64 v15; // rbx
  _DWORD *v16; // rax
  unsigned int *v17; // r14
  unsigned int v18; // edx
  char *v19; // rax
  __int128 v20; // xmm0
  __int64 v21; // rcx
  unsigned int v22; // edi
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  char *v28; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x2BFu);
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
          v17 = &a4[7 * v12];
          if ( (v17[6] & 2) == 0 )
            break;
          if ( v6 )
          {
            CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
              (char *)this + 136,
              *v17,
              v7);
            InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
LABEL_36:
            v7 = a2;
          }
          v6 = 0LL;
          if ( (unsigned int)++v12 >= *((_DWORD *)a3 + 3) )
            goto LABEL_44;
        }
        v18 = v17[1];
        if ( v18 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v18);
          if ( !ResourceWithoutType )
          {
            v25 = 736;
            goto LABEL_4;
          }
        }
        if ( v6 )
        {
          CResource::UnRegisterNotifierInternal(this, *((struct CResource **)v6 + 3));
          v21 = *((_QWORD *)v6 + 3);
          v22 = v17[6];
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          *((_QWORD *)v6 + 3) = ResourceWithoutType;
          if ( ResourceWithoutType )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          *(_DWORD *)v6 = v22;
          *(_OWORD *)(v6 + 4) = *(_OWORD *)(v17 + 2);
        }
        else
        {
          v19 = (char *)operator new(0x20uLL);
          v6 = v19;
          if ( v19 )
          {
            *(_DWORD *)v19 = v17[6];
            v20 = *(_OWORD *)(v17 + 2);
            *((_QWORD *)v19 + 3) = ResourceWithoutType;
            *(_OWORD *)(v19 + 4) = v20;
            if ( ResourceWithoutType )
              (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          }
          else
          {
            v6 = 0LL;
          }
          v28 = v6;
          if ( !v6 )
          {
            v11 = -2147024882;
            v25 = 743;
            goto LABEL_5;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (__int64)this + 136,
                                &a4[7 * v12],
                                &v28) )
          {
            v10 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2EAu);
            v6 = v28;
            goto LABEL_45;
          }
          v6 = v28;
        }
        v23 = CResource::RegisterNotifier(this, *((struct CResource **)v6 + 3));
        v10 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x2FCu);
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
  v25 = 707;
LABEL_4:
  v11 = -2003303421;
LABEL_5:
  v10 = v11;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v25);
LABEL_45:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_46:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
  return (unsigned int)v10;
}
