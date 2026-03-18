/*
 * XREFs of XilCoreCommand_Initialize @ 0x1C0006C98
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_Initialize @ 0x1C000D1D8 (Command_Initialize.c)
 * Callees:
 *     memset @ 0x1C0008A40 (memset.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilCoreCommand_Initialize(__int64 a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+20h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 1;
  memset(*(void **)(*(_QWORD *)(a1 + 16) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL));
  *((_QWORD *)&v10 + 1) = 0x180200000000LL;
  v2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_OWORD *)(v2 + 16LL * *(unsigned int *)(a1 + 32)) = v10;
  v3 = *(_DWORD **)(a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 88LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) ^ ((unsigned __int8)*(_DWORD *)(a1 + 44) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL)) & 1;
  v6 = *(_QWORD *)(v4 + 8);
  v12 = v5;
  if ( *(_BYTE *)(v6 + 441) )
    return Register_WriteSecureMmio(v4, v3, 3LL, &v12);
  v7 = *(_OWORD *)(v6 + 272);
  result = *(_QWORD *)(v6 + 272);
  v11 = v7;
  if ( (result & 1) != 0 )
  {
    *v3 = v5;
    _InterlockedOr(v9, 0);
    result = HIDWORD(v12);
    v3[1] = HIDWORD(v12);
  }
  else
  {
    *(_QWORD *)v3 = v5;
  }
  _InterlockedOr(v9, 0);
  return result;
}
