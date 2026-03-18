/*
 * XREFs of ?AddRemotingRenderTarget@CComposition@@QEAAJPEAVCRemotingRenderTarget@@@Z @ 0x18013F250
 * Callers:
 *     ?ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_CREATE@@@Z @ 0x18012D310 (-ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_C.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::AddRemotingRenderTarget(CComposition *this, struct CRemotingRenderTarget *a2)
{
  unsigned int v2; // edx
  char *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h]
  struct CRemotingRenderTarget *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = v9;
  v3 = (char *)this + 600;
  v4 = *((unsigned int *)this + 156);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v2 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v2 > *((_DWORD *)v3 + 5) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8u, 1, &v10);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v10;
    *((_DWORD *)v3 + 6) = v2;
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1238u);
  return (unsigned int)v6;
}
