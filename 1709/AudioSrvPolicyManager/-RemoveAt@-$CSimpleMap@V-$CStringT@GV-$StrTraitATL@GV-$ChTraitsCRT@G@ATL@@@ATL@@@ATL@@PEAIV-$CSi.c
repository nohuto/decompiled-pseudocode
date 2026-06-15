/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x180010CE0
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18000F208 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // r9
  const void *v10; // rdx
  __int64 v11; // rcx
  size_t v12; // r8
  __int64 v13; // r9
  const void *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  v5 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 != v6 - 1 )
  {
    v7 = (unsigned int)(v6 - v2);
    v8 = 8LL * ((int)v7 - 1);
    v9 = *(_QWORD *)a1 + 8 * v2;
    v10 = (const void *)(v9 + 8);
    if ( !v8 )
      goto LABEL_12;
    if ( !v9 || v9 == -8 )
    {
      *(_DWORD *)_o__errno(v7, v10, v8, v9) = 22;
    }
    else
    {
      if ( 8LL * (int)v7 >= v8 )
      {
        memmove((void *)(*(_QWORD *)a1 + 8 * v2), v10, v8);
LABEL_12:
        v11 = (unsigned int)(*(_DWORD *)(a1 + 16) - v2);
        v12 = 8LL * ((int)v11 - 1);
        v13 = *(_QWORD *)(a1 + 8) + 8 * v2;
        v14 = (const void *)(v13 + 8);
        if ( !v12 )
          goto LABEL_18;
        if ( !v13 || v13 == -8 )
        {
          *(_DWORD *)_o__errno(v11, v14, v12, v13) = 22;
        }
        else
        {
          if ( 8LL * (int)v11 >= v12 )
          {
            memmove((void *)(*(_QWORD *)(a1 + 8) + 8 * v2), v14, v12);
            goto LABEL_18;
          }
          *(_DWORD *)_o__errno(v11, v14, v12, v13) = 34;
        }
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      *(_DWORD *)_o__errno(v7, v10, v8, v9) = 34;
    }
    invalid_parameter_noinfo();
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_18:
  v15 = _o__recalloc(*(_QWORD *)a1, *(_DWORD *)(a1 + 16) - 1, 8LL);
  if ( v15 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v15;
  v16 = _o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8LL);
  if ( v16 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v16;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
