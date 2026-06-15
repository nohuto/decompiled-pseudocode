/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180050198
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18005108C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180050368 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800504F0 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800E978C (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, void ***a3)
{
  int v3; // edi
  bool v6; // zf
  void **v8; // rax
  int v9; // r13d
  void **v10; // r15
  void **v11; // rbx
  unsigned int v12; // ebp
  _DWORD *v13; // r14
  int v14; // r12d
  __int128 v15; // xmm6
  CConnectorProcessingModeCharacteristics *v16; // rax
  __int64 v17; // rdx
  CConnectorProcessingModeCharacteristics *v18; // rsi
  CConnectorProcessingModeCharacteristics *v19; // rcx
  unsigned int v20; // edx
  CConnectorProcessingModeCharacteristics *v22; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v23; // [rsp+48h] [rbp-50h]
  _DWORD *v25; // [rsp+B8h] [rbp+20h]

  v3 = -2147023728;
  if ( a1 >= 8 )
  {
    v6 = *a2 == 10;
    v23 = a2;
    if ( v6 )
    {
      v8 = (void **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = 0;
      v10 = v8;
      if ( v8 )
      {
        *v8 = 0LL;
        v8[1] = 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      v11 = v10;
      if ( v10 )
      {
        v12 = a1 - 8;
        v13 = a2 + 2;
        v14 = 0;
        if ( a2[1] )
        {
          while ( 1 )
          {
            v25 = v13;
            if ( v12 < 0x14 )
            {
              v3 = -2147023728;
              goto LABEL_19;
            }
            v15 = *(_OWORD *)v13;
            v16 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                               0x30uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
            v18 = v16;
            if ( v16 )
            {
              *(_OWORD *)v16 = v15;
              *((_QWORD *)v16 + 3) = 0LL;
              *((_QWORD *)v16 + 2) = 0LL;
              *((_QWORD *)v16 + 5) = 0LL;
              *((_QWORD *)v16 + 4) = 0LL;
            }
            else
            {
              v18 = 0LL;
            }
            v22 = v18;
            if ( !v18 )
              goto LABEL_22;
            v12 -= 20;
            v13 += 5;
            if ( v25[4] )
              break;
LABEL_16:
            v9 = 0;
            if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                                  v10,
                                  &v22) )
            {
              v3 = -2147024882;
              CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v18, v20);
              goto LABEL_19;
            }
            if ( (unsigned int)++v14 >= v23[1] )
              goto LABEL_18;
          }
          while ( v12 >= 0x26 )
          {
            v19 = v18;
            if ( v12 < (unsigned __int64)*((unsigned __int16 *)v13 + 18) + 38 )
            {
              v3 = -2147023728;
              goto LABEL_27;
            }
            v3 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                   v18,
                   (const struct tWAVEFORMATEX *)(v13 + 5),
                   v13[1],
                   *v13,
                   v13[2],
                   v13[3],
                   v13[4]);
            if ( v3 < 0 )
              goto LABEL_26;
            v17 = *((unsigned __int16 *)v13 + 18);
            v12 += -38 - v17;
            v13 = (_DWORD *)((char *)v13 + v17 + 38);
            if ( (unsigned int)++v9 >= v25[4] )
              goto LABEL_16;
          }
          v3 = -2147023728;
LABEL_26:
          v19 = v18;
LABEL_27:
          CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v19, v17);
        }
        else
        {
LABEL_18:
          v11 = 0LL;
          *a3 = v10;
        }
      }
      else
      {
LABEL_22:
        v3 = -2147024882;
      }
LABEL_19:
      if ( v11 )
      {
        if ( *v11 )
        {
          free(*v11);
          *v11 = 0LL;
        }
        v11[1] = 0LL;
        operator delete(v11, (const struct std::nothrow_t *)0x10);
      }
    }
  }
  return (unsigned int)v3;
}
