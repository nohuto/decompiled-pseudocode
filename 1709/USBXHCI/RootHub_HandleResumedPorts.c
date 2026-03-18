/*
 * XREFs of RootHub_HandleResumedPorts @ 0x1C00030F0
 * Callers:
 *     RootHub_D0Exit @ 0x1C00045D0 (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     RootHub_ForceU3 @ 0x1C001FF3C (RootHub_ForceU3.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // edi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  int v6; // edx
  unsigned __int64 v7; // r15
  int *v8; // rsi
  __int64 v9; // r13
  int v10; // r14d
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // r12d
  int v14; // eax
  unsigned int v15; // ebx
  char v16; // [rsp+30h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  int v18; // [rsp+80h] [rbp+8h]
  int v19; // [rsp+88h] [rbp+10h] BYREF

  result = (__int64)&retaddr;
  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v4 = (unsigned __int64)(i - 1) << 6;
    v5 = v4 + *(_QWORD *)(a1 + 48);
    result = *(unsigned __int8 *)(v5 + 1);
    if ( (_BYTE)result == 2 )
    {
      if ( !(unsigned __int8)ExCancelTimer(*(_QWORD *)(v5 + 32), 0LL) )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v6,
          11,
          229,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          i);
LABEL_5:
        v7 = v4 + *(_QWORD *)(a1 + 48);
        v8 = (int *)(*(_QWORD *)(a1 + 40) + 16LL * (i - 1));
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
        if ( *(_BYTE *)(*(_QWORD *)(v9 + 8) + 441LL) )
        {
          Register_ReadSecureMmio(v9, (int)v8, 2, 1, &v19);
          v10 = v19;
        }
        else
        {
          v10 = *v8;
        }
        v11 = v10;
        result = WPP_RECORDER_SF_DD(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                   4,
                   11,
                   220,
                   (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
                   i,
                   v10);
        v12 = 0;
        v13 = 1200;
        v18 = 0;
        while ( v11 != -1 )
        {
          if ( !*(_BYTE *)(v7 + 6) )
            goto LABEL_10;
          if ( (v11 & 0x20203) != 0x203 )
            goto LABEL_10;
          v14 = (v11 >> 5) & 0xF;
          if ( v14 == 4 || v14 != 15 && v14 != 8 )
            goto LABEL_10;
          if ( !v13 )
          {
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v12,
              11,
              221,
              (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
              i);
LABEL_10:
            result = v11 & 0x203;
            if ( (_DWORD)result == 515 && (v11 & 0x20000) == 0 )
            {
              v15 = (v11 >> 5) & 0xF;
              if ( v15 != 4 && (v15 <= 2 || v15 == 8) )
                result = RootHub_ForceU3(a1, i);
            }
            goto LABEL_11;
          }
          v16 = v12;
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v12,
            11,
            222,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            i,
            v16);
          ++v18;
          --v13;
          KeStallExecutionProcessor(0xAu);
          result = XilRegister_ReadUlong(v9, v8);
          v12 = v18;
          v11 = result;
          if ( (_DWORD)result != v10 )
          {
            result = WPP_RECORDER_SF_DD(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                       4,
                       11,
                       223,
                       (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
                       i,
                       result);
            v12 = v18;
          }
        }
        continue;
      }
      *(_BYTE *)(v5 + 6) = 0;
      LOBYTE(v6) = 4;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 v6,
                 11,
                 228,
                 (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
                 i);
    }
    else if ( (_BYTE)result == 3 )
    {
      goto LABEL_5;
    }
LABEL_11:
    ;
  }
  return result;
}
