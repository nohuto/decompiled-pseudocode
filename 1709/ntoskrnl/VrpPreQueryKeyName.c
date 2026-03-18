/*
 * XREFs of VrpPreQueryKeyName @ 0x1406A7F54
 * Callers:
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  _WORD *v7; // r15
  unsigned int v8; // ecx
  unsigned int v9; // edi
  void *v10; // r13
  _QWORD v12[3]; // [rsp+30h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-78h] BYREF
  int *v15; // [rsp+80h] [rbp-58h]
  __int64 v16; // [rsp+88h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp-48h]
  int v18; // [rsp+98h] [rbp-40h] BYREF
  int v19; // [rsp+9Ch] [rbp-3Ch]
  _QWORD *v20; // [rsp+A0h] [rbp-38h]
  __int64 v21; // [rsp+A8h] [rbp-30h]

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v12[0] = v2;
  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( stru_140354A30.LevelPlus1 > 2 )
  {
    v4 = (unsigned __int16 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v4 = (unsigned __int16 *)&EmptyUnicodeString;
    v5 = *v4;
    v6 = *((_QWORD *)v4 + 1);
    v15 = &v18;
    v16 = 2LL;
    v17 = v6;
    v18 = v5;
    v19 = 0;
    TlgWrite(&stru_140354A30, &unk_1402CF7E1, &ActivityId, 0LL, 4u, &pData);
  }
  v7 = (_WORD *)(v2 + 16);
  v12[1] = v2 + 16;
  v12[2] = v2 + 16;
  v8 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v8;
  if ( *(_DWORD *)(a1 + 16) >= v8 )
  {
    v10 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v10, *(const void **)(v2 + 24), (unsigned __int16)*v7);
    *((_WORD *)v10 + ((unsigned __int64)(unsigned __int16)*v7 >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *v7;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *v7;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v10;
    v9 = -1073740541;
  }
  else
  {
    v9 = -1073741820;
  }
  if ( stru_140354A30.LevelPlus1 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = (unsigned __int16 *)(v2 + 16);
    LODWORD(v12[0]) = v9;
    v15 = &v18;
    v16 = 2LL;
    v17 = *((_QWORD *)v3 + 1);
    v18 = *v3;
    v19 = 0;
    v20 = v12;
    v21 = 4LL;
    TlgWrite(&stru_140354A30, &unk_1402CF768, &ActivityId, 0LL, 5u, &pData);
  }
  return v9;
}
