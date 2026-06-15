/*
 * XREFs of ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180044CC0
 * Callers:
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180042260 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCB8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCE4 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DeserializeProcessingModeCharacteristics(unsigned int a1, _DWORD *a2, __int64 **a3)
{
  int v5; // r12d
  __int64 *v7; // rax
  __int64 *v8; // r14
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  unsigned int v11; // r13d
  _DWORD *v12; // rbx
  CConnectorProcessingModeCharacteristics *v13; // rax
  CConnectorFormatCharacteristics **v14; // rdx
  CConnectorProcessingModeCharacteristics *v15; // rsi
  int v16; // r13d
  CConnectorFormatCharacteristics *v17; // rbx
  __int64 v18; // rbp
  void *v19; // rax
  void *v20; // r14
  int v21; // ebp
  int v22; // eax
  bool v23; // sf
  int v24; // ebp
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rax
  CConnectorProcessingModeCharacteristics **v31; // rdx
  int v33; // [rsp+20h] [rbp-78h]
  int v34; // [rsp+24h] [rbp-74h]
  int v35; // [rsp+28h] [rbp-70h]
  int v36; // [rsp+2Ch] [rbp-6Ch]
  __int64 *v37; // [rsp+30h] [rbp-68h]
  _DWORD *v38; // [rsp+38h] [rbp-60h]
  __int128 v40; // [rsp+48h] [rbp-50h]
  int v41; // [rsp+A0h] [rbp+8h]
  unsigned int v43; // [rsp+B8h] [rbp+20h]

  v5 = -2147023728;
  if ( a1 >= 8 && *a2 == 10 )
  {
    v7 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v37 = v7;
    v8 = v7;
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
    }
    else
    {
      v8 = 0LL;
      v37 = 0LL;
    }
    if ( v8 )
    {
      v9 = a1 - 8;
      v43 = 0;
      v10 = a2 + 2;
      v11 = 0;
      if ( a2[1] )
      {
        while ( 1 )
        {
          v12 = v10;
          v38 = v10;
          if ( v9 < 0x14 )
          {
            v5 = -2147023728;
            goto LABEL_54;
          }
          v40 = *(_OWORD *)v10;
          v13 = (CConnectorProcessingModeCharacteristics *)operator new(
                                                             0x30uLL,
                                                             (const struct std::nothrow_t *)&std::nothrow);
          v15 = v13;
          if ( !v13 )
            goto LABEL_44;
          v9 -= 20;
          v41 = 0;
          v10 += 5;
          *(_OWORD *)v13 = v40;
          *((_QWORD *)v13 + 2) = 0LL;
          *((_QWORD *)v13 + 3) = 0LL;
          *((_QWORD *)v13 + 4) = 0LL;
          *((_QWORD *)v13 + 5) = 0LL;
          if ( v12[4] )
            break;
LABEL_30:
          v27 = *((_DWORD *)v8 + 2);
          v28 = *((_DWORD *)v8 + 3);
          if ( v27 == v28 )
          {
            if ( v28 )
            {
              v23 = (v27 & 0x40000000) != 0;
              v29 = 2 * v27;
              if ( v23 || (unsigned int)v29 > 0xFFFFFFF )
              {
LABEL_52:
                v5 = -2147024882;
                CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v15, (unsigned int)v14);
                goto LABEL_54;
              }
            }
            else
            {
              v29 = 1;
            }
            v30 = _o__recalloc(*v8, v29, 8LL);
            if ( !v30 )
              goto LABEL_52;
            *((_DWORD *)v8 + 3) = v29;
            *v8 = v30;
          }
          v31 = (CConnectorProcessingModeCharacteristics **)(*v8 + 8LL * *((int *)v8 + 2));
          if ( v31 )
            *v31 = v15;
          ++v11;
          ++*((_DWORD *)v8 + 2);
          v43 = v11;
          if ( v11 >= a2[1] )
            goto LABEL_39;
        }
        while ( 1 )
        {
          if ( v9 < 0x26 || v9 < (unsigned __int64)*((unsigned __int16 *)v10 + 18) + 38 )
          {
            v5 = -2147023728;
            CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v15, (unsigned int)v14);
            v8 = v37;
            goto LABEL_54;
          }
          v16 = v10[4];
          v36 = v10[3];
          v35 = v10[2];
          v34 = *v10;
          v33 = v10[1];
          v17 = (CConnectorFormatCharacteristics *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v17 )
          {
            *((_QWORD *)v17 + 1) = 0LL;
            *((_QWORD *)v17 + 2) = 0LL;
            *((_QWORD *)v17 + 3) = 0LL;
            *(_QWORD *)v17 = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
          if ( !v17 )
            goto LABEL_46;
          v18 = *((unsigned __int16 *)v10 + 18);
          v19 = CoTaskMemAlloc(v18 + 18);
          v20 = v19;
          if ( v19 )
          {
            memcpy_0(v19, v10 + 5, v18 + 18);
            v5 = 0;
          }
          else
          {
            v5 = -2147024882;
          }
          *(_QWORD *)v17 = v20;
          if ( v5 >= 0 )
            break;
LABEL_47:
          if ( v17 )
            CConnectorFormatCharacteristics::`scalar deleting destructor'(v17, (unsigned int)v14);
LABEL_27:
          if ( v5 < 0 )
          {
            CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v15, (unsigned int)v14);
            v8 = v37;
            goto LABEL_54;
          }
          v26 = *((unsigned __int16 *)v10 + 18);
          v9 += -38 - v26;
          v10 = (_DWORD *)((char *)v10 + v26 + 38);
          if ( (unsigned int)++v41 >= v38[4] )
          {
            v8 = v37;
            v11 = v43;
            goto LABEL_30;
          }
        }
        *((_DWORD *)v17 + 3) = v33;
        *((_DWORD *)v17 + 2) = v34;
        *((_DWORD *)v17 + 4) = v35;
        *((_DWORD *)v17 + 5) = v36;
        *((_DWORD *)v17 + 6) = v16;
        v21 = *((_DWORD *)v15 + 6);
        v22 = *((_DWORD *)v15 + 7);
        if ( v21 != v22 )
          goto LABEL_24;
        if ( v22 )
        {
          v23 = (v21 & 0x40000000) != 0;
          v24 = 2 * v21;
          if ( v23 || (unsigned int)v24 > 0xFFFFFFF )
          {
LABEL_46:
            v5 = -2147024882;
            goto LABEL_47;
          }
        }
        else
        {
          v24 = 1;
        }
        v25 = _o__recalloc(*((_QWORD *)v15 + 2), v24, 8LL);
        if ( v25 )
        {
          *((_DWORD *)v15 + 7) = v24;
          *((_QWORD *)v15 + 2) = v25;
LABEL_24:
          v14 = (CConnectorFormatCharacteristics **)(*((_QWORD *)v15 + 2) + 8LL * *((int *)v15 + 6));
          if ( v14 )
            *v14 = v17;
          ++*((_DWORD *)v15 + 6);
          goto LABEL_27;
        }
        goto LABEL_46;
      }
LABEL_39:
      *a3 = v8;
    }
    else
    {
LABEL_44:
      v5 = -2147024882;
LABEL_54:
      if ( v8 )
      {
        if ( *v8 )
        {
          free((void *)*v8);
          *v8 = 0LL;
        }
        v8[1] = 0LL;
        operator delete(v8, (const struct std::nothrow_t *)0x10);
      }
    }
  }
  return (unsigned int)v5;
}
