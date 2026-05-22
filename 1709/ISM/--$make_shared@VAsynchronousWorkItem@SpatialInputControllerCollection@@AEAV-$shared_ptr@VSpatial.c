/*
 * XREFs of ??$make_shared@VAsynchronousWorkItem@SpatialInputControllerCollection@@AEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@4@AEA_N@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@0@AEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@0@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@0@AEA_N@Z @ 0x18009841C
 * Callers:
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 * Callees:
 *     ??0?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z @ 0x180079E40 (--0-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall std::make_shared<SpatialInputControllerCollection::AsynchronousWorkItem,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> &,std::function<void (std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController> const &)> &,bool &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        char *a4)
{
  _DWORD *v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  char v10; // r15
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _BYTE v14[56]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-10h]

  v8 = operator new(0x68uLL);
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj<SpatialInputControllerCollection::AsynchronousWorkItem>::`vftable';
  if ( v8 != (_DWORD *)-16LL )
  {
    v15 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a3 + 56);
    if ( v9 )
      v15 = (_BYTE *)(**v9)(v9, v14);
    v10 = *a4;
    std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>(
      (_QWORD *)v8 + 2,
      a2);
    *((_QWORD *)v8 + 11) = 0LL;
    v11 = v15;
    if ( v15 )
    {
      *((_QWORD *)v8 + 11) = (**(__int64 (__fastcall ***)(_BYTE *, char *))v15)(v15, (char *)v8 + 32);
      v11 = v15;
    }
    *((_BYTE *)v8 + 96) = v10;
    if ( v11 )
    {
      v12 = v14;
      LOBYTE(v12) = v11 != v14;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, v12);
    }
  }
  a1[1] = v8;
  *a1 = v8 + 4;
  return a1;
}
