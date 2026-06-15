/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x180016BC0
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180014BB8 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  size_t v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
    return 0LL;
  v5 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v2 != (_DWORD)v6 - 1 )
  {
    v7 = (unsigned int)(v6 - v2);
    v8 = 8LL * ((int)v7 - 1);
    v9 = *(_QWORD *)a1 + 8 * v2;
    if ( !v8 )
      goto LABEL_12;
    if ( !v9 || v9 == -8 )
    {
      *(_DWORD *)_o__errno(v7, v6) = 22;
    }
    else
    {
      if ( 8LL * (int)v7 >= v8 )
      {
        memmove((void *)(*(_QWORD *)a1 + 8 * v2), (const void *)(v9 + 8), v8);
        v6 = *(unsigned int *)(a1 + 16);
LABEL_12:
        v10 = (unsigned int)(v6 - v2);
        v11 = 8LL * ((int)v10 - 1);
        v12 = *(_QWORD *)(a1 + 8) + 8 * v2;
        if ( !v11 )
          goto LABEL_18;
        if ( !v12 || v12 == -8 )
        {
          *(_DWORD *)_o__errno(v10, v6) = 22;
        }
        else
        {
          if ( 8LL * (int)v10 >= v11 )
          {
            memmove((void *)(*(_QWORD *)(a1 + 8) + 8 * v2), (const void *)(v12 + 8), v11);
            LODWORD(v6) = *(_DWORD *)(a1 + 16);
            goto LABEL_18;
          }
          *(_DWORD *)_o__errno(v10, v6) = 34;
        }
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      *(_DWORD *)_o__errno(v7, v6) = 34;
    }
    invalid_parameter_noinfo();
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_18:
  v13 = _o__recalloc(*(_QWORD *)a1, (int)v6 - 1, 8LL);
  if ( v13 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)a1 = v13;
  v14 = _o__recalloc(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16) - 1, 8LL);
  if ( v14 || *(_DWORD *)(a1 + 16) == 1 )
    *(_QWORD *)(a1 + 8) = v14;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
