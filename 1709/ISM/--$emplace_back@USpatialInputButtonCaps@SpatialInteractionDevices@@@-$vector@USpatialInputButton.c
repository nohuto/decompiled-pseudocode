/*
 * XREFs of ??$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAX$$QEAUSpatialInputButtonCaps@SpatialInteractionDevices@@@Z @ 0x18007AABC
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::emplace_back<SpatialInteractionDevices::SpatialInputButtonCaps>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  char *v11; // r14
  char *v12; // rcx
  __int64 v13; // rcx
  void *v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = (v5 - *(_QWORD *)a1) / 12;
    if ( v6 == 0x1555555555555555LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *(_QWORD *)a1) / 12;
    v9 = v8 >> 1;
    if ( v8 <= 0x1555555555555555LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (char *)std::_Allocate(v10, 0xCuLL);
    try
    {
      v12 = &v11[12 * v6];
      if ( v12 )
      {
        *(_QWORD *)v12 = *(_QWORD *)a2;
        *((_DWORD *)v12 + 2) = *(_DWORD *)(a2 + 8);
      }
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>>::deallocate(v13, v11, v10);
      throw;
    }
    v14 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_24;
    v15 = *(_QWORD *)(a1 + 16) - (_QWORD)v14;
    if ( (unsigned __int64)(v15 / 12) <= 0x1555555555555555LL )
    {
      if ( (unsigned __int64)(12 * (v15 / 12)) < 0x1000 )
      {
LABEL_22:
        operator delete(v14);
LABEL_24:
        *(_QWORD *)a1 = v11;
        *(_QWORD *)(a1 + 8) = &v11[12 * v7];
        *(_QWORD *)(a1 + 16) = &v11[12 * v10];
        return;
      }
      if ( ((unsigned __int8)v14 & 0x1F) == 0 )
      {
        v16 = *((_QWORD *)v14 - 1);
        if ( v16 < (unsigned __int64)v14 && (unsigned __int64)v14 - v16 - 8 <= 0x1F )
        {
          v14 = (void *)*((_QWORD *)v14 - 1);
          goto LABEL_22;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15);
    __debugbreak();
  }
  if ( v5 )
  {
    *(_QWORD *)v5 = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
  }
  *(_QWORD *)(a1 + 8) += 12LL;
}
