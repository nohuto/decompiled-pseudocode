/*
 * XREFs of ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK@Z @ 0x1800533A8
 * Callers:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK@Z @ 0x180052654 (-SendHomeGesture@MPCManager@@QEAAXKK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGesture_(ISMTracing *this, int a2, int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+10h] BYREF
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*((_QWORD *)v3 + 2) & 0x400000000001LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000001LL) == *((_QWORD *)v3 + 3) )
  {
    v7 = 0;
    v10 = 0;
    v5 = &v11;
    v8 = &v12;
    v6 = 4;
    v9 = 4;
    TlgWrite(v3, &unk_18010E316, 0LL, 0LL, 4u, &pData);
  }
}
