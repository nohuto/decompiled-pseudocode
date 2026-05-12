/*
 * XREFs of RaidPowerPassToMiniPort @ 0x1C000F164
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000FE30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0011E30 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x1C0006C1C (RaSrbSetMiniportContext.c)
 *     RaAdapterStartPowerIo @ 0x1C000F2C8 (RaAdapterStartPowerIo.c)
 *     RaInitializePower @ 0x1C0018B0C (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x1C0030CC8 (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1C00324C4 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x1C0039864 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbp
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rcx
  _WORD *v10; // rbx
  PDEVICE_OBJECT *v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  struct _DEVICE_OBJECT *v14; // r9
  unsigned int started; // ebp
  __int64 v16; // r8
  __int64 Timer_high; // rdx
  int v19; // eax
  __int64 v20; // rcx
  char *v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h]
  __int64 v25; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+58h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 184);
  v7 = 1LL;
  v8 = a1;
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v9 = *(_QWORD *)(v3 + 4632);
  v10 = (_WORD *)(v3 + 4464);
  v11 = &WPP_GLOBAL_Control;
  if ( v9 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      58LL,
      &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
      a2,
      v3 + 4464,
      v3);
  }
  RaInitializePower(v3, v7, a3, v11);
  v9 = *(_QWORD *)(v3 + 4632);
  if ( v9 )
  {
LABEL_4:
    *(_BYTE *)(v3 + 4640) = 1;
    v12 = v9 + 1072;
    v25 = v9 + 16;
    v24 = v9 + 1072;
    v26 = v9 + 816;
    v13 = *(_BYTE *)(v3 + 4641) != 0 ? 2304 : 256;
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      *(_DWORD *)(v3 + 4488) = v13;
      *v10 = 8;
      *(_WORD *)(v3 + 4500) = 2;
      *(_QWORD *)(v3 + 4560) = 0LL;
      *(_QWORD *)(v3 + 4544) = a2;
      *(_BYTE *)(v3 + 4466) = 40;
      *(_DWORD *)(v3 + 4472) = 1397899864;
      *(_DWORD *)(v3 + 4476) = 1;
      *(_DWORD *)(v3 + 4480) = 168;
      *(_DWORD *)(v3 + 4484) = 36;
      v19 = *(_DWORD *)(v3 + 5688);
      *(_DWORD *)(v3 + 4516) = 128;
      *(_DWORD *)(v3 + 4504) = v19;
      *(_QWORD *)(v3 + 4528) = 0LL;
      *(_QWORD *)(v3 + 4520) = 1LL;
      *(_DWORD *)(v3 + 4584) = 144;
      v20 = v3 + 4464 + *(unsigned int *)(v3 + 4516);
      *(_WORD *)v20 = 1;
      *(_DWORD *)(v20 + 4) = 4;
      *(_WORD *)(v20 + 2) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v20 + 8) = 0;
      *(_BYTE *)(v20 + 10) = 0;
      v21 = (char *)v10 + *(unsigned int *)(v3 + 4584);
      *(_DWORD *)v21 = 97;
      *((_DWORD *)v21 + 1) = 12;
      *((_DWORD *)v21 + 4) = *(_DWORD *)(v5 + 32);
      *((_DWORD *)v21 + 3) = *(_DWORD *)(v5 + 24);
      v21[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4512) = 0LL;
      *v10 = 88;
      *(_BYTE *)(v3 + 4466) = 36;
      *(_QWORD *)(v3 + 4488) = 0LL;
      *(_DWORD *)(v3 + 4480) = 0;
      *(_DWORD *)(v3 + 4528) = *(_DWORD *)(v5 + 32);
      *(_DWORD *)(v3 + 4472) = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v3 + 4476) = v13;
      *(_DWORD *)(v3 + 4484) = *(_DWORD *)(v3 + 5688);
      *(_DWORD *)(v3 + 4468) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4464, v12);
    if ( WPP_GLOBAL_Control != v14
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( *(_BYTE *)(v3 + 4466) == 40 )
        v22 = *(_QWORD *)(v3 + 4568);
      else
        v22 = *(_QWORD *)(v3 + 4520);
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
        a2,
        v3 + 4464,
        v22,
        v3);
    }
    started = RaAdapterStartPowerIo(v8, a2, (int)v3 + 4464, (unsigned int)&v23, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (Timer_high & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, Timer_high, v16, a2, v3 + 4464, v3, started);
    }
    return started;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        59LL,
        &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
        a2,
        v3 + 4464,
        v3);
    }
    return 3221225495LL;
  }
}
