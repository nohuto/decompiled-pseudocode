/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C0121AB0
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

void __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(CBaseInput *this, unsigned int a2)
{
  struct DEVICEINFO *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  int v7; // ebx
  int v8; // esi
  int v9; // r14d
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  int v13; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v15; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  int v17; // [rsp+94h] [rbp+44h]
  int v18; // [rsp+A0h] [rbp+50h] BYREF
  int v19; // [rsp+A8h] [rbp+58h] BYREF

  v17 = HIDWORD(this);
  v16 = 0;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v19 = 0;
  v18 = 0;
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  v3 = CBaseInput::_spDevList;
  if ( CBaseInput::_spDevList )
  {
    v4 = v16;
    do
    {
      v5 = *((unsigned __int8 *)v3 + 48);
      if ( v5 == a2 )
      {
        if ( (int)IsGatherDeviceInfoSummaryInformationSupported(v4) < 0 )
        {
          v4 = 0LL;
          v14 = 0;
          v13 = 0;
          v15 = 0;
          v19 = 0;
          v18 = 0;
          goto LABEL_15;
        }
        GatherDeviceInfoSummaryInformation(v3, &v16, &v14, &v13, &v15, &v19, &v18);
        v4 = v16;
      }
      else
      {
        if ( a2 != 2 )
        {
          if ( a2 )
            goto LABEL_16;
          if ( (_BYTE)v5 != 2 )
            goto LABEL_16;
          v6 = *((_QWORD *)v3 + 60);
          if ( !v6 || (unsigned int)(*(_DWORD *)(v6 + 24) - 1) > 6 )
            goto LABEL_16;
LABEL_14:
          v4 = (unsigned int)(v4 + 1);
LABEL_15:
          v16 = v4;
          goto LABEL_16;
        }
        if ( !(_BYTE)v5 )
          goto LABEL_14;
      }
LABEL_16:
      v3 = (struct DEVICEINFO *)*((_QWORD *)v3 + 7);
    }
    while ( v3 );
  }
  qword_1C01A1658 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v18;
  v8 = v19;
  v9 = v13;
  v10 = v14;
  v11 = v15;
  v12 = v16;
  if ( (int)IsApplyGatheredDeviceInfoSummaryInformationSupported() >= 0 )
    ApplyGatheredDeviceInfoSummaryInformation(a2, v12, v11, v10, v9, v8, v7);
}
