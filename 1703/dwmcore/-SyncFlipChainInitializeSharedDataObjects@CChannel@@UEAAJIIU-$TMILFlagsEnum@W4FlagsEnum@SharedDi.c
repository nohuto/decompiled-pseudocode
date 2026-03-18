/*
 * XREFs of ?SyncFlipChainInitializeSharedDataObjects@CChannel@@UEAAJIIU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@AEBUtagRECT@@PEBX22@Z @ 0x18013A410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180082920 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CChannel::SyncFlipChainInitializeSharedDataObjects(
        CChannel *this,
        int a2,
        int a3,
        int a4,
        __int128 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-50h]
  _DWORD v17[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int *v22; // [rsp+68h] [rbp-8h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+90h] [rbp+20h] BYREF
  int v24; // [rsp+98h] [rbp+28h] BYREF

  v24 = 0;
  v23 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v17[0] = 188;
  memset_0(&v18, 0, 0x30uLL);
  v17[1] = a2;
  v17[2] = a3;
  v17[3] = a4;
  v12 = *a5;
  v19 = a6;
  v20 = a7;
  v21 = a8;
  v22 = &v24;
  v18 = v12;
  v13 = CChannel::SendCommand(this, v17, 0x40u);
  v14 = v13;
  if ( v13 < 0 )
  {
    v16 = 2381;
    goto LABEL_7;
  }
  v13 = CChannel::SyncFlush(this);
  v14 = v13;
  if ( v13 < 0 )
  {
    v16 = 2382;
LABEL_7:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v16);
    goto LABEL_8;
  }
  v14 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x94Fu);
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v23);
  return v14;
}
