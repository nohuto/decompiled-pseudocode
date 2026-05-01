/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180020B30
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x18001EA90 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800229A8 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID Ptr; // rbx
  PVOID v5; // rsi
  RTL_SRWLOCK *v6; // r15
  PVOID v7; // rdi
  PVOID v8; // rcx
  PVOID v9; // rcx
  bool v10; // r9
  unsigned int v11; // edi
  PVOID v13; // [rsp+70h] [rbp+38h] BYREF
  PVOID v14; // [rsp+78h] [rbp+40h] BYREF
  PVOID v15; // [rsp+80h] [rbp+48h] BYREF
  PVOID v16; // [rsp+88h] [rbp+50h]

  Ptr = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v15 = Ptr;
  }
  v7 = a1[2].Ptr;
  if ( v7 )
  {
    v13 = 0LL;
    v14 = v7;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(PVOID, GUID *, PVOID *))(*(_QWORD *)v7 + 24LL))(
      v7,
      &GUID_735924d3_811f_4494_b69c_c641a0c61543,
      &v13);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v13;
    if ( v13 )
    {
      v14 = 0LL;
      if ( (int)RoGetAgileReference(0LL, &GUID_735924d3_811f_4494_b69c_c641a0c61543, v13, &v14) < 0 )
      {
        v9 = v14;
      }
      else
      {
        v5 = v14;
        v16 = v14;
        v9 = 0LL;
      }
      if ( v9 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = v13;
    }
    if ( v8 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockShared(v6);
  *a2 = 0LL;
  if ( v5 )
  {
    v13 = v5;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
    v11 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_735924d3_811f_4494_b69c_c641a0c61543,
            a2);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else if ( Ptr )
  {
    v11 = CMarshaledInterface::_Unmarshal(
            (CMarshaledInterface *)&v15,
            &GUID_735924d3_811f_4494_b69c_c641a0c61543,
            a2,
            v10);
    Ptr = v15;
  }
  else
  {
    v11 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v11;
}
