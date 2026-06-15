/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800B2D64
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800B7638 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800B1080 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800B1228 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800BBCF4 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
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
  CConnectorProcessingModeCharacteristics *v17; // rsi
  CConnectorProcessingModeCharacteristics *v18; // rcx
  __int64 v19; // rdx
  CConnectorProcessingModeCharacteristics *v21; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-50h]
  _DWORD *v24; // [rsp+B8h] [rbp+20h]

  v3 = -2147023728;
  if ( a1 >= 8 )
  {
    v6 = *a2 == 10;
    v22 = a2;
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
            v24 = v13;
            if ( v12 < 0x14 )
            {
              v3 = -2147023728;
              goto LABEL_22;
            }
            v15 = *(_OWORD *)v13;
            v16 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                               0x30uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
            v17 = v16;
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
              v17 = 0LL;
            }
            v21 = v17;
            if ( !v17 )
              goto LABEL_7;
            v12 -= 20;
            v13 += 5;
            if ( v24[4] )
              break;
LABEL_19:
            v9 = 0;
            if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                                  v10,
                                  &v21) )
            {
              v3 = -2147024882;
              CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v17);
              goto LABEL_22;
            }
            if ( (unsigned int)++v14 >= v22[1] )
              goto LABEL_21;
          }
          while ( v12 >= 0x26 )
          {
            v18 = v17;
            if ( v12 < (unsigned __int64)*((unsigned __int16 *)v13 + 18) + 38 )
            {
              v3 = -2147023728;
              goto LABEL_30;
            }
            v3 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                   v17,
                   (const struct tWAVEFORMATEX *)(v13 + 5),
                   v13[1],
                   *v13,
                   v13[2],
                   v13[3],
                   v13[4]);
            if ( v3 < 0 )
              goto LABEL_29;
            v19 = *((unsigned __int16 *)v13 + 18);
            v12 += -38 - v19;
            v13 = (_DWORD *)((char *)v13 + v19 + 38);
            if ( (unsigned int)++v9 >= v24[4] )
              goto LABEL_19;
          }
          v3 = -2147023728;
LABEL_29:
          v18 = v17;
LABEL_30:
          CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v18);
        }
        else
        {
LABEL_21:
          v11 = 0LL;
          *a3 = v10;
        }
      }
      else
      {
LABEL_7:
        v3 = -2147024882;
      }
LABEL_22:
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
