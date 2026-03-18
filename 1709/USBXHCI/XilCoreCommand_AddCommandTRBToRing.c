/*
 * XREFs of XilCoreCommand_AddCommandTRBToRing @ 0x1C003FE34
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     XilCoreCommand_DirectWriteDoorbell @ 0x1C003FFB0 (XilCoreCommand_DirectWriteDoorbell.c)
 */

__int64 __fastcall XilCoreCommand_AddCommandTRBToRing(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  BOOL v4; // edx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 12) & 0xFFFFFFFE | (*((_DWORD *)a1 + 11) != 1);
  *(_OWORD *)(a1[6] + 16LL * *((unsigned int *)a1 + 9)) = *(_OWORD *)a2;
  *(_BYTE *)(a1[6] + 16LL * *((unsigned int *)a1 + 9) + 12) ^= 1u;
  _InterlockedOr(v9, 0);
  ++*((_DWORD *)a1 + 9);
  v3 = *((unsigned int *)a1 + 8);
  if ( *((_DWORD *)a1 + 9) == (_DWORD)v3 )
  {
    *(_BYTE *)(a1[6] + 16 * v3 + 12) ^= 1u;
    _InterlockedOr(v9, 0);
    v4 = *((_DWORD *)a1 + 11) != 1;
    *((_DWORD *)a1 + 11) = v4;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = *((_DWORD *)a1 + 8);
      v6 = *a1;
      LODWORD(v12) = v4;
      LODWORD(v11) = v5;
      v7 = *(_QWORD *)(v6 + 16);
      LODWORD(v10) = *((_DWORD *)a1 + 9);
      WPP_RECORDER_SF_ddd(v7, 5u, 7u, 0xBu, (__int64)&WPP_003a8e912c223c24bd26069b3a550c89_Traceguids, v10, v11, v12);
    }
    *((_DWORD *)a1 + 9) = 0;
  }
  return XilCoreCommand_DirectWriteDoorbell(a1);
}
