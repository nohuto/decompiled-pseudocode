/*
 * XREFs of ??$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAX$$QEAUSpatialInputButtonCaps@SpatialInteractionDevices@@@Z @ 0x18009F3BC
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x18009E954 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::emplace_back<SpatialInteractionDevices::SpatialInputButtonCaps>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 != v5 )
  {
    *(_QWORD *)v5 = *(_QWORD *)a2;
    result = *(unsigned int *)(a2 + 8);
    *(_DWORD *)(v5 + 8) = result;
    *(_QWORD *)(a1 + 8) += 12LL;
    return result;
  }
  v7 = (v5 - *(_QWORD *)a1) / 12;
  if ( v7 == 0x1555555555555555LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (v4 - *(_QWORD *)a1) / 12;
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  if ( v11 )
  {
    if ( v11 > 0x1555555555555555LL )
      std::_Default_allocate_traits<1>::_Fail();
    v13 = 12 * v11;
    if ( 12 * v11 < 0x1000 )
    {
      v12 = operator new(v13);
    }
    else
    {
      if ( v13 + 39 < v13 )
        std::_Default_allocate_traits<1>::_Fail();
      v14 = operator new(v13 + 39);
      v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v12 - 1) = v14;
    }
  }
  else
  {
    v12 = 0LL;
  }
  try
  {
    v15 = 3 * v7;
    *(_QWORD *)((char *)v12 + 4 * v15) = *(_QWORD *)a2;
    *((_DWORD *)v12 + v15 + 2) = *(_DWORD *)(a2 + 8);
    memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  }
  catch ( ... )
  {
    std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>::deallocate(v16, v12, v11);
    throw;
  }
  v17 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v18 = *(_QWORD *)(a1 + 16) - (_QWORD)v17;
    v19 = v18 / 12;
    if ( (unsigned __int64)(v18 / 12) <= 0x1555555555555555LL )
    {
      if ( (unsigned __int64)(12 * v19) < 0x1000 )
      {
LABEL_22:
        operator delete(v17);
        goto LABEL_23;
      }
      if ( ((unsigned __int8)v17 & 0x1F) == 0 )
      {
        v20 = *((_QWORD *)v17 - 1);
        if ( v20 < (unsigned __int64)v17 && (unsigned __int64)v17 - v20 - 8 <= 0x1F )
        {
          v17 = (void *)*((_QWORD *)v17 - 1);
          goto LABEL_22;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v18, v19);
    __debugbreak();
  }
LABEL_23:
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = (char *)v12 + 12 * v8;
  result = 3 * v11;
  *(_QWORD *)(a1 + 16) = (char *)v12 + 12 * v11;
  return result;
}
