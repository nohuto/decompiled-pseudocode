/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800F0230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180099F70 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Add@?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAHAEBQEAUtWAVEFORMATEX@@@Z @ 0x1800E98FC (-Add@-$CSimpleArray@PEAUtWAVEFORMATEX@@V-$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@.c)
 *     ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x1800F019C (-Add@-$CSimpleArray@IV-$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v4; // edi
  void *v5; // rbx
  int v9; // esi
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  SIZE_T v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _GUID *v16; // r13
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // r14
  struct _GUID *v20; // rcx
  unsigned __int64 v21; // rsi
  int v23; // [rsp+30h] [rbp-30h]
  unsigned int v24; // [rsp+34h] [rbp-2Ch]
  void *Src; // [rsp+38h] [rbp-28h] BYREF
  void *v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+4Ch] [rbp-14h]
  void *Block; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+58h] [rbp-8h]
  int v31; // [rsp+5Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v33; // [rsp+A8h] [rbp+48h] BYREF
  void *v34; // [rsp+B8h] [rbp+58h]

  v34 = a4;
  v26 = 0LL;
  v4 = 0;
  v27 = 0;
  v5 = a4;
  v28 = 0;
  Block = 0LL;
  v30 = 0;
  v31 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    v9 = 0;
    *a3 = 0;
    if ( *((int *)this + 20) > 0 )
    {
      do
      {
        v10 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)this + 72,
                          v9);
        v11 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned int *, void *))(*(_QWORD *)*v10 + 24LL))(
                *v10,
                &Src,
                &v33,
                v5);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x452,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v11);
          goto LABEL_31;
        }
        ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::Add((__int64)&v26, &Src);
        ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add((__int64)&Block, &v33);
        v4 += v33;
        ++v9;
        v5 = v34;
      }
      while ( v9 < *((_DWORD *)this + 20) );
      if ( v4 )
      {
        v13 = 16LL * v4;
        v16 = (struct _GUID *)CoTaskMemAlloc(v13);
        if ( !v16 )
        {
          v12 = -2147024882;
          goto LABEL_31;
        }
        v17 = 0LL;
        v18 = 0;
        v33 = 0;
        v23 = 0;
        if ( v27 > 0 )
        {
          v19 = 0LL;
          while ( 1 )
          {
            if ( v19 < 0 )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              __debugbreak();
            }
            Src = (void *)*((_QWORD *)v26 + v19);
            if ( v18 >= v30 )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              __debugbreak();
            }
            v20 = &v16[(unsigned int)v17];
            v24 = *((_DWORD *)Block + v19);
            v21 = 16LL * v24;
            if ( v21 )
            {
              if ( !v20 )
                goto LABEL_15;
              if ( Src && v13 >= v21 )
              {
                memcpy_0(v20, Src, 16LL * v24);
                goto LABEL_23;
              }
              memset_0(v20, 0, v13);
              if ( Src )
              {
                if ( v13 >= v21 )
                  goto LABEL_23;
                *(_DWORD *)_o__errno(v20, v17, v14, v15) = 34;
              }
              else
              {
LABEL_15:
                *(_DWORD *)_o__errno(v20, v17, v14, v15) = 22;
              }
              invalid_parameter_noinfo();
            }
LABEL_23:
            v13 -= v21;
            v33 += v24;
            CoTaskMemFree(Src);
            ++v19;
            v18 = v23 + 1;
            v23 = v18;
            if ( v18 >= v27 )
              break;
            v17 = v33;
          }
        }
        *a2 = v16;
        *a3 = v4;
      }
    }
    v12 = 0;
  }
  else
  {
    v12 = -2147467261;
  }
LABEL_31:
  if ( Block )
    free(Block);
  if ( v26 )
    free(v26);
  return v12;
}
