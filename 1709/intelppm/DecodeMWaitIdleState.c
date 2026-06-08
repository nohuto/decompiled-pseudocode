/*
 * XREFs of DecodeMWaitIdleState @ 0x1C0023720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x1C001F694 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned __int8 v12; // dl
  __int64 v13; // r9
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-10h]

  HIDWORD(v17) = 0;
  if ( *(_BYTE *)a2 != 127 || *(_BYTE *)(a2 + 1) != 1 || *(_BYTE *)(a2 + 2) != 2 )
    return (unsigned int)-1073741823;
  if ( a3 == -1 )
  {
    if ( (*(_QWORD *)(a1 + 264) & 0x20000000000LL) != 0 )
      goto LABEL_6;
LABEL_21:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_2cda3f03280335d8b5d4c96b9ac4fcb8_Traceguids);
    return (unsigned int)-1073741637;
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x7F000) == 0 )
    goto LABEL_21;
LABEL_6:
  v10 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0xBu,
      (__int64)&WPP_2cda3f03280335d8b5d4c96b9ac4fcb8_Traceguids);
  v11 = *(_QWORD *)(a2 + 4);
  v12 = *(_BYTE *)(a2 + 3);
  *(_QWORD *)&v16 = v11;
  LODWORD(v17) = v12;
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(a1 + 200);
  if ( (*(_DWORD *)(a1 + 272) & 0x80000) != 0 )
    DWORD1(v16) = HIDWORD(v11) | 1;
  if ( a5 )
  {
    v15 = (unsigned int)v11 | 0x30000000000000LL;
    if ( (v12 & 2) != 0 )
      v15 = (unsigned int)v11 | 0x130000000000000LL;
    *a5 = v15;
  }
  v13 = a8;
  if ( a8 )
  {
    *(_BYTE *)(a8 + 80) = 1;
    if ( (v12 & 2) != 0 && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0019D84) )
      *(_QWORD *)(v13 + 16) = MWaitIdleCheck;
    else
      *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = MWaitIdle;
    *(_OWORD *)(v13 + 32) = v16;
    *(_QWORD *)(v13 + 64) = DecodeMWaitContext;
    *(_QWORD *)(v13 + 48) = v17;
  }
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 1;
  return v10;
}
