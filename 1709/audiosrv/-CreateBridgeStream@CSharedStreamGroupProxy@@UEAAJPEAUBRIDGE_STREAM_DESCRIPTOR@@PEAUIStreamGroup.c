/*
 * XREFs of ?CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180092C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateBridgeStream(
        unsigned __int64 this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 v4; // rax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)a3;
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v4 + 264))(a3, &v14);
  if ( v8 < 0 )
  {
LABEL_10:
    v9 = v14;
    goto LABEL_11;
  }
  v9 = v14;
  if ( v14 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct BRIDGE_STREAM_DESCRIPTOR *, __int64, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 88LL))(
            *(_QWORD *)(this + 80),
            a2,
            v14,
            a4);
    v9 = v14;
    v8 = v10;
  }
  if ( v8 >= 0 )
  {
    *((_QWORD *)a4 + 8) = this & -(__int64)(this != 8);
    v11 = *(_QWORD *)(this + 264);
    while ( v11 >= 0 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_10;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
    goto LABEL_10;
  }
LABEL_11:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v8;
}
