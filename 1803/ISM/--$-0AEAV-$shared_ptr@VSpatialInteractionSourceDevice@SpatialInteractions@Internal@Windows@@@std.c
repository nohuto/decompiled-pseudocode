/*
 * XREFs of ??$?0AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@1@AEA_N@?$_Ref_count_obj@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@1@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@1@AEA_N@Z @ 0x1800AB90C
 * Callers:
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char *a4)
{
  __int64 v7; // rbx
  _BYTE *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // r9
  char v10; // r14
  __int64 v11; // rax
  _BYTE *v12; // rdx
  _BYTE v14[56]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-10h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>::`vftable';
  v7 = a1 + 16;
  v8 = 0LL;
  v15 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a3 + 56);
  if ( v9 )
  {
    v8 = (_BYTE *)(**v9)(*(_QWORD *)(a3 + 56), v14);
    v15 = v8;
  }
  v10 = *a4;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  v11 = a2[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v8 = v15;
  }
  *(_QWORD *)v7 = *a2;
  *(_QWORD *)(v7 + 8) = a2[1];
  *(_QWORD *)(v7 + 72) = 0LL;
  if ( v8 )
  {
    *(_QWORD *)(v7 + 72) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v8)(v8, v7 + 16);
    v8 = v15;
  }
  *(_BYTE *)(v7 + 80) = v10;
  if ( v8 )
  {
    v12 = v14;
    LOBYTE(v12) = v8 != v14;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v12);
  }
  return a1;
}
