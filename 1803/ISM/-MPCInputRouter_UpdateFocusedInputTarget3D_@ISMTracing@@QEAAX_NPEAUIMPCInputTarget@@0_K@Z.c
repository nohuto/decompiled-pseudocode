/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCInputTarget@@0_K@Z @ 0x180083FD8
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800857B8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCInputTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  _DWORD *v6; // rcx
  __int64 v7; // rbx
  int PIDOfTarget; // eax
  int v9; // [rsp+30h] [rbp-51h] BYREF
  struct IMPCInputTarget *v10; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  char *v12; // [rsp+60h] [rbp-21h]
  int v13; // [rsp+68h] [rbp-19h]
  int v14; // [rsp+6Ch] [rbp-15h]
  struct IMPCInputTarget **v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+7Ch] [rbp-5h]
  char *v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+8Ch] [rbp+Bh]
  int *v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+9Ch] [rbp+1Bh]
  unsigned __int64 *v24; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+ACh] [rbp+2Bh]
  char v27; // [rsp+E8h] [rbp+67h] BYREF
  char v28; // [rsp+F8h] [rbp+77h] BYREF

  v28 = a4;
  v27 = a2;
  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 )
  {
    if ( *v6 )
    {
      v7 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = &v27;
        v15 = &v10;
        v18 = &v28;
        v13 = 1;
        v10 = a3;
        v16 = 8;
        v19 = 1;
        PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
        v23 = 0;
        v26 = 0;
        v9 = PIDOfTarget;
        v21 = &v9;
        v24 = &a5;
        v22 = 4;
        v25 = 8;
        TlgWrite((TraceLoggingHProvider)v7, &unk_18010F6BD, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
