/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x1C0017A94
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C0016ADC (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C0016B40 (Interrupter_D0Entry.c)
 * Callees:
 *     Interrupter_UpdateERDP @ 0x1C0017C54 (Interrupter_UpdateERDP.c)
 *     WPP_RECORDER_SF_qqdddx @ 0x1C0018404 (WPP_RECORDER_SF_qqdddx.c)
 */

__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+60h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( v4 )
    {
      WPP_RECORDER_SF_qqdddx(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        *(_DWORD *)(v4 + 124),
        *(_QWORD *)(v4 + 144),
        31,
        v10[8],
        v4,
        *(_QWORD *)(v4 + 144),
        *(_DWORD *)(v4 + 120),
        *(_DWORD *)(v4 + 128),
        *(_DWORD *)(v4 + 124),
        *(_BYTE *)(*(_QWORD *)(v4 + 144) + 24LL) + 16 * *(_DWORD *)(v4 + 124));
      *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) = (unsigned __int16)*(_DWORD *)(v4 + 108);
      _InterlockedOr(v10, 0);
      LOBYTE(v5) = 1;
      Interrupter_UpdateERDP(v4, v5, v6);
      v7 = *(_QWORD *)(v4 + 24);
      v8 = *(_QWORD *)(v4 + 152);
      v11 = *(_OWORD *)(*(_QWORD *)(v4 + 8) + 272LL);
      v9 = *(_QWORD *)(v8 + 24);
      result = v11;
      if ( (v11 & 1) != 0 )
      {
        *(_DWORD *)(v7 + 16) = v9;
        _InterlockedOr(v10, 0);
        *(_DWORD *)(v7 + 20) = HIDWORD(v9);
      }
      else
      {
        *(_QWORD *)(v7 + 16) = v9;
      }
      _InterlockedOr(v10, 0);
    }
  }
  return result;
}
