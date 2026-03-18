/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x1C0059F40
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0057260 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C0006D00 (XilCommonBuffer_ReleaseBuffer.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  _QWORD **v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  struct _IO_WORKITEM *v12; // rcx
  __int64 v13; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+20h] [rbp-28h]
  __int128 v16; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL);
  if ( *(_DWORD *)(a1 + 100) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
    _InterlockedOr(v14, 0);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 24);
    v5 = *(_OWORD *)(v3 + 272);
    v6 = *(_QWORD *)(v3 + 272);
    v15 = v5;
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 16) = 0;
      _InterlockedOr(v14, 0);
      *(_DWORD *)(v4 + 20) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    _InterlockedOr(v14, 0);
    v7 = *(_QWORD *)(a1 + 24);
    v16 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
    if ( (v16 & 1) != 0 )
    {
      *(_DWORD *)(v7 + 24) = 0;
      _InterlockedOr(v14, 0);
      *(_DWORD *)(v7 + 28) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 24) = 0LL;
    }
    _InterlockedOr(v14, 0);
    v8 = *(_DWORD **)(a1 + 152);
    if ( v8 )
    {
      XilCommonBuffer_ReleaseBuffer(v2, v8);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v9 = (_QWORD **)(a1 + 160);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
        break;
      if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
        __fastfail(3u);
      *v9 = v11;
      v11[1] = v9;
      XilCommonBuffer_ReleaseBuffer(v2, v10);
    }
    v12 = *(struct _IO_WORKITEM **)(a1 + 200);
    if ( v12 )
    {
      IoFreeWorkItem(v12);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v13 = *(_QWORD *)(a1 + 16);
    if ( v13 && v13 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v13);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 100) = 2;
}
