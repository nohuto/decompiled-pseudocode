/*
 * XREFs of VrpPreQueryKeyName @ 0x14067D0F8
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  void *v9; // r12
  __int64 v11; // [rsp+30h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-88h] BYREF
  int *v14; // [rsp+70h] [rbp-68h]
  __int64 v15; // [rsp+78h] [rbp-60h]
  __int64 v16; // [rsp+80h] [rbp-58h]
  int v17; // [rsp+88h] [rbp-50h] BYREF
  int v18; // [rsp+8Ch] [rbp-4Ch]
  __int64 *v19; // [rsp+90h] [rbp-48h]
  __int64 v20; // [rsp+98h] [rbp-40h]

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v11 = v2;
  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( stru_14033C400.LevelPlus1 > 2 )
  {
    v4 = (unsigned __int16 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v4 = (unsigned __int16 *)&EmptyUnicodeString;
    v5 = *v4;
    v6 = *((_QWORD *)v4 + 1);
    v14 = &v17;
    v15 = 2LL;
    v16 = v6;
    v17 = v5;
    v18 = 0;
    TlgWrite(&stru_14033C400, &unk_1402AB9D8, &ActivityId, 0LL, 4u, &pData);
  }
  v7 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v7;
  if ( *(_DWORD *)(a1 + 16) >= v7 )
  {
    v9 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v9, *(const void **)(v2 + 24), *(unsigned __int16 *)(v2 + 16));
    *((_WORD *)v9 + ((unsigned __int64)*(unsigned __int16 *)(v2 + 16) >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *(_WORD *)(v2 + 16);
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *(_WORD *)(v2 + 16);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v9;
    v8 = -1073740541;
  }
  else
  {
    v8 = -1073741820;
  }
  if ( stru_14033C400.LevelPlus1 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = (unsigned __int16 *)(v2 + 16);
    LODWORD(v11) = v8;
    v14 = &v17;
    v15 = 2LL;
    v16 = *((_QWORD *)v3 + 1);
    v17 = *v3;
    v18 = 0;
    v19 = &v11;
    v20 = 4LL;
    TlgWrite(&stru_14033C400, &unk_1402AB965, &ActivityId, 0LL, 5u, &pData);
  }
  return v8;
}
