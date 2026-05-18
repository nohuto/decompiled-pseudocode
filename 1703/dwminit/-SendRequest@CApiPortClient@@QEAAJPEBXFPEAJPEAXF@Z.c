/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004790
 * Callers:
 *     DwmpRequestProcessShutdown @ 0x18000439C (DwmpRequestProcessShutdown.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x1800043E8 (DwmpRequestUnloadUserRegKeys.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003D74 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004610 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800048F4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000491C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180004D3C (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004D7C (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800072F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(CApiPortClient *this, unsigned int *a2, __int16 a3, int *a4)
{
  unsigned int v6; // ebx
  CApiPortClient *v7; // rcx
  CApiPortClient *v8; // rcx
  int IsConnected; // edi
  int v10; // eax
  volatile signed __int32 *v11; // rbx
  __int16 v12; // r9
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  void *v17; // [rsp+20h] [rbp-38h]
  __int16 v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v19) = a3;
  v6 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  IsConnected = CApiPortClient::IsConnected(v7);
  if ( !byte_18000C768 )
  {
    do
    {
      v10 = CApiPortClient::EnsureConnected(v8);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xA7u);
        goto LABEL_17;
      }
      v11 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v13 = CPortClient::SendComplexSyncRequest((CPortClient *)v11, *a2, a2, v12, v17, v18, &v19);
      if ( v11 && _InterlockedExchangeAdd(v11 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v11)(v11, 1LL);
      EnterCriticalSection(&CriticalSection);
      v8 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v8);
      if ( v13 != -805306313 )
        break;
      v14 = IsConnected--;
    }
    while ( v14 > 0 );
    v15 = CApiPortClient::Translate(v13);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0xC6u);
    else
      *a4 = CApiPortClient::Translate(v19);
  }
LABEL_17:
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
