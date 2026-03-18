/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180129F70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1800033B0 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18016EEB4 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18016EEE4 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18016F394 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
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
  unsigned __int128 v10; // rax
  int v11; // edi
  int v12; // r9d
  int v13; // ebp
  _QWORD *v14; // r15
  struct CResource *ResourceWithoutType; // rsi
  __int64 v16; // rbx
  unsigned int *v17; // r14
  unsigned int v18; // edx
  unsigned int v19; // edx
  char *v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rcx
  unsigned int v23; // edi
  unsigned int v25; // [rsp+20h] [rbp-48h]
  char *v28; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  v10 = v5 * (unsigned __int128)0x1CuLL;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x2D4u);
    goto LABEL_44;
  }
  v11 = 0;
  if ( 28 * v5 == a5 )
  {
    if ( a4 )
    {
      v13 = 0;
      if ( (_DWORD)v5 )
      {
        v14 = (_QWORD *)((char *)this + 152);
        while ( 1 )
        {
          ResourceWithoutType = 0LL;
          v16 = 0LL;
          if ( *((int *)this + 42) <= 0 )
          {
LABEL_13:
            v16 = -1LL;
          }
          else
          {
            *(_QWORD *)&v10 = *v14;
            DWORD2(v10) = a4[7 * v13];
            while ( *(_DWORD *)v10 != DWORD2(v10) )
            {
              ++v16;
              *(_QWORD *)&v10 = v10 + 4;
              if ( v16 >= *((int *)this + 42) )
                goto LABEL_13;
            }
          }
          v6 = v16 == -1 ? 0LL : *(char **)(*((_QWORD *)this + 20) + 8 * v16);
          v17 = &a4[7 * v13];
          if ( (v17[6] & 2) == 0 )
            break;
          if ( v6 )
          {
            CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
              (char *)this + 152,
              *v17,
              v7);
            InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6, v18);
LABEL_36:
            v7 = a2;
          }
          v6 = 0LL;
          if ( (unsigned int)++v13 >= *((_DWORD *)a3 + 3) )
            goto LABEL_44;
        }
        v19 = v17[1];
        if ( v19 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v19);
          if ( !ResourceWithoutType )
          {
            v25 = 757;
            goto LABEL_4;
          }
        }
        if ( v6 )
        {
          CResource::UnRegisterNotifierInternal(this, *((struct CResource **)v6 + 3));
          v22 = *((_QWORD *)v6 + 3);
          v23 = v17[6];
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          *((_QWORD *)v6 + 3) = ResourceWithoutType;
          if ( ResourceWithoutType )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          *(_DWORD *)v6 = v23;
          *(_OWORD *)(v6 + 4) = *(_OWORD *)(v17 + 2);
        }
        else
        {
          v20 = (char *)operator new(0x20uLL);
          v6 = v20;
          if ( v20 )
          {
            *(_DWORD *)v20 = v17[6];
            v21 = *(_OWORD *)(v17 + 2);
            *((_QWORD *)v20 + 3) = ResourceWithoutType;
            *(_OWORD *)(v20 + 4) = v21;
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
            v12 = -2147024882;
            v25 = 764;
            goto LABEL_5;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (char *)this + 152,
                                &a4[7 * v13],
                                &v28) )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2FFu);
            v6 = v28;
            goto LABEL_45;
          }
          v6 = v28;
        }
        LODWORD(v10) = CResource::RegisterNotifier(this, *((struct CResource **)v6 + 3));
        v11 = v10;
        if ( (v10 & 0x80000000) != 0LL )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x311u);
          goto LABEL_44;
        }
        goto LABEL_36;
      }
    }
LABEL_44:
    if ( v11 >= 0 )
      goto LABEL_46;
    goto LABEL_45;
  }
  v25 = 728;
LABEL_4:
  v12 = -2003303421;
LABEL_5:
  v11 = v12;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v25);
LABEL_45:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_46:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6, DWORD2(v10));
  return (unsigned int)v11;
}
