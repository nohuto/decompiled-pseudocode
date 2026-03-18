/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C0019FDC
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0019C1C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(CBaseInput *this, unsigned int a2)
{
  struct DEVICEINFO *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  __int64 v12; // rax
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
          goto LABEL_13;
        }
        GatherDeviceInfoSummaryInformation(v3, &v16, &v14, &v13, &v15, &v19, &v18);
        v4 = v16;
      }
      else
      {
        if ( a2 != 2 )
        {
          if ( a2 )
            goto LABEL_6;
          if ( (_BYTE)v5 != 2 )
            goto LABEL_6;
          v12 = *((_QWORD *)v3 + 59);
          if ( !v12 || (unsigned int)(*(_DWORD *)(v12 + 24) - 1) > 6 )
            goto LABEL_6;
LABEL_12:
          v4 = (unsigned int)(v4 + 1);
LABEL_13:
          v16 = v4;
          goto LABEL_6;
        }
        if ( !(_BYTE)v5 )
          goto LABEL_12;
      }
LABEL_6:
      v3 = (struct DEVICEINFO *)*((_QWORD *)v3 + 7);
    }
    while ( v3 );
  }
  qword_1C0193AF8 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  v6 = v18;
  v7 = v19;
  v8 = v13;
  v9 = v14;
  v10 = v15;
  v11 = v16;
  if ( (int)IsApplyGatheredDeviceInfoSummaryInformationSupported() >= 0 )
    ApplyGatheredDeviceInfoSummaryInformation(a2, v11, v10, v9, v8, v7, v6);
}
