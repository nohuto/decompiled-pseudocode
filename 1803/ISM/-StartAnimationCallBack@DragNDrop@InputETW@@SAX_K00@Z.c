/*
 * XREFs of ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x1800637F0
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180065138 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall InputETW::DragNDrop::StartAnimationCallBack(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+58h] [rbp+17h]
  int v7; // [rsp+60h] [rbp+1Fh]
  int v8; // [rsp+64h] [rbp+23h]
  __int64 *v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+70h] [rbp+2Fh]
  int v11; // [rsp+74h] [rbp+33h]
  __int64 *v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  __int64 v15; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+B8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v3 = (_DWORD *)*((_QWORD *)InputETW::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 > 1u )
    {
      v4 = *((_QWORD *)InputETW::Instance() + 1);
      if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v8 = 0;
        v11 = 0;
        v14 = 0;
        v6 = &v15;
        v9 = &v16;
        v12 = &v17;
        v7 = 8;
        v10 = 8;
        v13 = 8;
        TlgWrite((TraceLoggingHProvider)v4, &unk_18010EA1E, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
